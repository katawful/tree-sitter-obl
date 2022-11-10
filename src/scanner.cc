#include <tree_sitter/parser.h>
#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include <typeinfo>
#include <set>
#include <cwctype>

namespace {

using std::string;
using std::set;
using namespace std;

enum TokenType {
  TERMINATOR,
  NO_WHITESPACE,
  DOT,
  OPEN_SUBSCRIPT,
  FUNCTION,
};

struct Scanner {

  void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  unsigned serialize(char *buffer) {
    // if the length of our terminator is bigger than our buffer size, return 0
    if (terminator.length() >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) return 0;
    // copy the contents of the buffer character into our string
    terminator.copy(&buffer[0], terminator.length());
    return terminator.length();
  }

  void deserialize(const char *buffer, unsigned length) {
    // reset our string if empty
    if (length == 0) {
      terminator.clear();
      // else just assign it to the buffer to deserialize it
    } else {
      terminator.assign(&buffer[0], &buffer[length]);
    }
  }

  bool space_handler(TSLexer *lexer) {
    int prevCol = 0;
    while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
      int col = lexer->get_column(lexer);
      skip(lexer);
      // If at end of line, and nothing but whitespace
      // end the mark and return true we've found what we were looking for
      if (lexer->lookahead == '\n'
        || lexer->lookahead == '\r'
        || lexer->lookahead == ';'
        || lexer->lookahead == 0)
      {
        /* lexer->mark_end(lexer); */
        return true;
        // Any other character is **NOT** the terminator for the whitespace
      } else if (lexer->lookahead != ' ' && lexer->lookahead != '\t') {
        /* lexer->mark_end(lexer); */
        return false;
        // if we somehow got to the next line, we were at eol anyways
      } else if (col == 0) {
        /* lexer->mark_end(lexer); */
        return true;
      }
      prevCol = col;
    }
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    int char_code = lexer->lookahead;
    /* For FUNCTION
     * We want to make sure we have the set of functions
     * as well as the current lookahead is an alphanumeric.
     */
    if (valid_symbols[FUNCTION]
      && !valid_symbols[TERMINATOR]
      && !valid_symbols[OPEN_SUBSCRIPT]
      && !valid_symbols[DOT]
      && !valid_symbols[NO_WHITESPACE]) {
      /* Advance lexer until we have built a word
       */
      string func_word = "";
      while (lexer->lookahead) {
        // If we have a space and func_word is not filled, we gotta
        // advance until we find a word char
        if ((lexer->lookahead == ' '
          || lexer->lookahead == '\t'
          || lexer->lookahead == '\n'
          || lexer->lookahead == '\r'
          || lexer->lookahead == 0)
        && func_word.length() == 0) {
          skip(lexer);
          continue;
        } else if (isalnum(lexer->lookahead) || lexer->lookahead == '_') {
          // Is a possible word character, add char to string
          func_word += tolower(lexer->lookahead);
          advance(lexer);
          continue;
          // If found a whitespace and func_word is bigger then we have to end
          // Functions can only be one word
        } else if (
          (lexer->lookahead == ' '
          || lexer->lookahead == '\t'
          || lexer->lookahead == '\n'
          || lexer->lookahead == '\r'
          || lexer->lookahead == 0)
        && func_word.length() > 0) {
          break;
          // Anything else can't be a word character
        } else {
          break;
        }
      }
      // Done lexing
      lexer->mark_end(lexer);
      if (func_word.length() > 0) {
        if (function_set.find(func_word) != function_set.end()) {
          lexer->result_symbol = FUNCTION;
          return true;
        } else {
          return false;
        }
      } else {
          return false;
        return false;
      }

    } else if (lexer->lookahead == '.' && valid_symbols[DOT]) {
      lexer->result_symbol = DOT;
      return true;
    } else if (lexer->lookahead == '[' && valid_symbols[OPEN_SUBSCRIPT]) {
      lexer->result_symbol = OPEN_SUBSCRIPT;
      return true;
    } else if ((lexer->lookahead == '\n'
            || lexer->lookahead == '\r'
            || lexer->lookahead == ';'
            || lexer->lookahead == 0)
      && valid_symbols[TERMINATOR])
    {
      lexer->result_symbol = TERMINATOR;
      return true;
      /* Spaces need to be handled specially */
    } else if (lexer->lookahead == ' ' || lexer->lookahead == '\t'
      && valid_symbols[TERMINATOR]) {
      if (space_handler(lexer) == true) {
        lexer->result_symbol = TERMINATOR;
        return true;
      } else {
        return false;
      }
    } else if (valid_symbols[NO_WHITESPACE] && valid_symbols[NO_WHITESPACE]) {
      lexer->result_symbol = NO_WHITESPACE;
      return true;
    } else {
      return false;
    }
  }
  string terminator;

  set<string> function_set = {
    // Vanilla + OBSE
    "abs", "addeffectitemc", "addmagiceffectcounterc", "advancepclevel", "ar_badstringindex", "ar_haskey", "ar_prev", "calcleveleditem",
    "canpaycrimegold", "clearownershipt", "closeobliviongate", "comparemalebipedpath", "completequest", "con_refreshini", "con_setgamesetting",
    "con_settargetrefraction", "con_toggledetection", "copyalleffectitems", "copymalebipedpath", "createfullactorcopy", "creaturenocombatinwater",
    "deletefrominputtext", "disablemouse", "dsin", "enablelinkedpathpoints", "equipme", "fmod", "forceweather", "getactiveeffectcodes",
    "getactivemenuref", "getactiveuicomponentname", "getactorpackages", "getalchmenuingredientcount", "getapparatustype",
    "getarrowprojectilebowenchantment", "getavskillmastery", "getbaseav", "getbipedslotmask", "getboundingbox", "getcellbehavesasexterior",
    "getcellnorthrotation", "getclassmenuhighlightedclass", "getclimatehassecunda", "getclimatesunsetend", "getcombatstyle",
    "getcombatstyleattacknotunderattackmult", "getcombatstyleattackunderattackmult", "getcombatstyleblockskillmodmult",
    "getcombatstyledodgebacknotunderattackmult", "getcombatstyledodgebackunderattackmult", "getcombatstyledodgefwattackingmult",
    "getcombatstyledodgelrchance", "getcombatstyledodgeunderattackmult", "getcombatstylefleeingdisabled", "getcombatstyleholdtimermin",
    "getcombatstylekobonustoattack", "getcombatstylepowerattackfatiguemodbase", "getcombatstylerangedstandoffdist", "getcombatstylerushattackchance",
    "getcombatstylestaggerbonustopowerattack", "getcombattarget", "getcreaturecombatskill", "getcreaturesound", "getcrimegold",
    "getcurrenteditorpackage", "getcurrentregion", "getcurrentweatherpercent", "getdetected", "getdoorteleportx", "getenchantmentcost",
    "getequipmentslotmask", "getequippedtorchtimeleft", "getfalltimer", "getfollowers", "getfurnituremarkerid", "getgoldvalue",
    "getgroundsurfacematerial", "gethighactors", "getincellparam", "getinvestmentgold", "getiscurrentpackage", "getissex", "getlastcreatedpotion",
    "getlastss", "getlastusedsigilstone", "getlevcreaturetemplate", "getlightduration", "getloopsound", "getmagiceffectbarterfactor",
    "getmagiceffectboltsoundc", "getmagiceffectcode", "getmagiceffectenchantshader", "getmagiceffecthitsoundc", "getmagiceffectmodelc",
    "getmagiceffectotheractorvalue", "getmagiceffectresistvalue", "getmagiceffectusedobjectc", "getmapmenumarkername", "getmebasecost",
    "getmecountersc", "getmehitshaderc", "getmename", "getmeprojspeed", "getmessageboxtype", "getmodindex", "getnthacitveeffectmagnitude",
    "getnthactiveeffectcode", "getnthactiveeffectmagicenchantobject", "getnthactiveeffectsummonref", "getnthaedata", "getnthaetime",
    "getntheffectitemcode", "getntheffectitemscript", "getntheiav", "getntheisvisualeffect", "getnthlevitemlevel", "getnthpackage",
    "getnumericinisetting", "getnumloadedmods", "getobjectcharge", "getopenkey", "getpackageallowswimming", "getpackagedata",
    "getpackagelockdoorsatstart", "getpackageonceperday", "getpackageunlockdoorsatend", "getpackageweaponsunequipped", "getparentcellwaterheight",
    "getpathnodesinrect", "getpcfactionsteal", "getpclastdroppeditem", "getpcmovementspeedmodifier", "getplayerbirthsign", "getplayerskilladvancesc",
    "getplayerspell", "getprojectiledistancetraveled", "getquantitymenucurrentquantity", "getraceattribute", "getraceskillbonus", "getrefcount",
    "getscriptvariable", "getskillgoverningattribute", "getskillspecializationc", "getsleeping", "getspellcount", "getspellimmunetosilence",
    "getspellscripteffectalwaysapplies", "getstringinisetting", "getteleportcellname", "gettiletraits", "gettotalaeabilitymagnitudec",
    "gettotalaeallspellsmagnitudec", "gettotalaeenchantmentmagnitudec", "gettotalaemagnitudec", "gettotalaepowermagnitudec", "gettrainerlevel",
    "getuseditemactivate", "getwalkspeed", "getweaponspeed", "getweatherfogdayfar", "getweatherlightningfrequency", "getweight", "hasbeenpickedup",
    "hasspell", "incrementplayerskillusec", "isactorevil", "isanimplaying", "isbipedmodelpathvalid", "isclonedform", "iscontrolpressed", "isequipped",
    "isfurniture", "isidleplaying", "iskey", "ismagiceffectcanrecover", "ismagiceffectforenchantingc", "ismagiceffectmagnitudepercent",
    "ismagiceffectontargetallowed", "ismagicitemautocalc", "ismecanrecoverc", "ismehostile", "ismeontargetallowedc", "ismovingforward",
    "isntheffectitemscripthostile", "isowner", "isplayerinjail", "ispowerattacking", "israining", "issigilstone", "istalking", "isturningright",
    "killactor", "logicalxor", "magiceffectfxpersistsc", "magiceffecthasnohiteffect", "magiceffecthasnomagnitude", "magiceffectusesattributec",
    "magiceffectusesotheractorvaluec", "magichaseffect", "magicitemhaseffectcountcode", "matrixinvert", "mecodefromchars", "mehasnohiteffectc",
    "menureleasekey", "meusesattributec", "meusesweapon", "modav", "modenchantmentcharge", "modfemalebipedpath", "modmalegroundpath",
    "modntheffectitemduration", "modntheisname", "modpcmovementspeed", "modsigilstoneuses", "moveto", "offerslights", "offerstraining",
    "overrideactorswimbreath", "pathedgeexists", "playmagicshadervisuals", "printactivetileinfo", "rasin", "removealleffectitems", "removeflames",
    "removentheffect", "removenthmecounterc", "resetfalldamagetimer", "rsinh", "samesexaspc", "setactoralpha", "setallreachable",
    "setarrowprojectilebowenchantment", "setavc", "setbookcantbetaken", "setcanfasttravelfromworld", "setcellispublic", "setchancenone",
    "setclimatehasmasser", "setclimatesunriseend", "setcloudspeedupper", "setcombatstyleattackduringblockmult", "setcombatstyleattackskillmodmult",
    "setcombatstyleblockskillmodbase", "setcombatstyledodgebacknotunderattackmult", "setcombatstyledodgebackunderattackmult",
    "setcombatstyledodgefwattackingmult", "setcombatstyledodgelrchance", "setcombatstyledodgeunderattackmult", "setcombatstylefleeingdisabled",
    "setcombatstyleholdtimermin", "setcombatstylekobonustoattack", "setcombatstylepowerattackfatiguemodbase", "setcombatstylerangedstandoffdist",
    "setcombatstylerushattackchance", "setcombatstylestaggerbonustopowerattack", "setcontainerrespawns", "setcurrentsoullevel", "setdoorteleport",
    "setequippedcurrentcharge", "setfactionhasspecialcombat", "setfactionhidden", "setfemaleiconpath", "setgamedifficulty", "sethdrvalue",
    "setingredient", "setisminimalusedoor", "setlightradius", "setmaagiceffectuseactorvalue", "setmagiceffectbarterfactorc",
    "setmagiceffectcanrecover", "setmagiceffectcountersc", "setmagiceffectenchantshaderc", "setmagiceffectforspellmakingc", "setmagiceffecthitsound",
    "setmagiceffectisdetrimentalc", "setmagiceffectmagnitudepercent", "setmagiceffectnamec", "setmagiceffectnohiteffect", "setmagiceffectnomagnitude",
    "setmagiceffectontargetallowed", "setmagiceffectotheractorvalue", "setmagiceffectresistvalue", "setmagiceffectusedobject",
    "setmagiceffectusesarmor", "setmagiceffectusescreature", "setmagiceffectusesweaponc", "setmapmarkertype", "setmebasecostc", "setmeenchantfactor",
    "setmeforspellmaking", "setmehitsoundc", "setmelightc", "setmenoareac", "setmenomagnitude", "setmeontargetallowed", "setmeprojectilespeed",
    "setmessageicon", "setmeusesarmorc", "setmeusesweapon", "setnameex", "setntheffectitemactorvaluec", "setntheffectitemscript",
    "setntheffectitemscriptschool", "setntheiavc", "setntheisvisualeffect", "setobjecthealth", "setoffersmagicitems", "setoffersspells",
    "setownership_t", "setowningrequiredrank", "setpackagecontinueifpcnear", "setpackagelockdoorsatlocation", "setpackageoffersservices",
    "setpackagetargetdata", "setpackageweaponsunequipped", "setpcexpelled", "setpcleveloffset", "setplayerprojectile", "setpos_t", "setraceplayable",
    "setscale", "setskillgoverningattributec", "setspellareaeffectignoreslos", "setspellmagickacost", "setstagetext", "setstringgamesettingex",
    "settextinputdefaultcontrolsdisabled", "setunconscious", "setweathercloudspeedlower", "setweatherfognightfar", "setweathersunglare",
    "showdialogsubtitles", "startcombat", "stopmagicshadervisuals", "sv_find", "tapcontrol", "tolower", "uncompletequest", "updatespellpurchasemenu",
    "wakeuppc", "ismajor", "acos", "activate", "activate2", "actorvaluetocode", "actorvaluetostring", "actorvaluetostringc", "addachievement",
    "addeffectitem", "addflames", "addfulleffectitem", "addfulleffectitemc", "additem", "additemns", "addmagiceffectcounter", "addmecounter",
    "addmecounterc", "addscriptpackage", "addspell", "addspellns", "addtoleveledlist", "addtopic", "advancepcskill", "advskill", "ahammerkey",
    "animpathincludes", "appendtoname", "ar_append", "ar_badnumericindex", "ar_construct", "ar_copy", "ar_customsort", "ar_deepcopy", "ar_dump",
    "ar_dumpid", "ar_erase", "ar_find", "ar_first", "ar_insert", "ar_insertrange", "ar_keys", "ar_last", "ar_list", "ar_map", "ar_next", "ar_null",
    "ar_range", "ar_resize", "ar_size", "ar_sort", "ar_sortalpha", "asciitochar", "asin", "atan", "atan2", "autosave", "avstring", "calclevitemnr",
    "calclevitems", "cancastpower", "cancorpsecheck", "canfasttravelfromworld", "canhaveflames", "cantraveltomapmarker", "cast", "ceil",
    "chartoascii", "clearactivequest", "clearhotkey", "clearleveledlist", "clearownership", "clearplayerslastriddenhorse", "clickmenubutton",
    "cloneform", "closeallmenus", "closecurrentobliviongate", "closetextinput", "colvec", "comparefemalebipedpath", "comparefemalegroundpath",
    "comparefemaleiconpath", "compareiconpath", "comparemalegroundpath", "comparemaleiconpath", "comparemodelpath", "comparename", "comparenames",
    "comparescripts", "con_cal", "con_getinisetting", "con_hairtint", "con_loadgame", "con_modwatershader", "con_playerspellbook", "con_quitgame",
    "con_runmemorypass", "con_save", "con_saveini", "con_setcamerafov", "con_setclipdist", "con_setfog", "con_setgamma", "con_sethdrparam",
    "con_setimagespaceglow", "con_setinisetting", "con_setskyparam", "con_settargetrefractionfire", "con_sexchange", "con_tcl", "con_tfc", "con_tgm",
    "con_toggleai", "con_togglecombatai", "con_togglemapmarkers", "con_togglemenus", "con_waterdeepcolor", "con_waterreflectioncolor",
    "con_watershallowcolor", "copyeyes", "copyfemalebipedpath", "copyfemalegroundpath", "copyfemaleiconpath", "copyhair", "copyiconpath", "copyir",
    "copymalegroundpath", "copymaleiconpath", "copymodelpath", "copyname", "copyntheffectitem", "copyrace", "cos", "cosh", "createtempref",
    "creaturehasnohead", "creaturehasnoleftarm", "creaturehasnomovement", "creaturehasnorightarm", "creatureusesweaponandshield", "dacos", "dasin",
    "datan", "datan2", "dcos", "dcosh", "debugprint", "deletefullactorcopy", "deletereference", "disable", "disablecontrol", "disablekey",
    "disablelinkedpathpoints", "disableplayercontrols", "dispatchevent", "dispel", "dispelallspells", "dispelnthactiveeffect", "dispelnthae", "drop",
    "dropme", "dsinh", "dtan", "dtanh", "duplicateallitems", "duplicatenpcstats", "enable", "enablecontrol", "enablefasttravel", "enablekey",
    "enablemouse", "enableplayercontrols", "equipitem", "equipitem2", "equipitem2ns", "equipitemns", "equipitemsilent", "essentialdeathreload",
    "eval", "evaluatepackage", "eventhandlerexist", "evp", "exp", "factionhasspecialcombat", "fileexists", "floor", "forceactorvalue", "forceav",
    "forcecloseobliviongate", "forcecolumnvector", "forceflee", "forcerowvector", "forcetakecover", "generateidentitymatrix",
    "generaterotationmatrix", "generatezeromatrix", "getactionref", "getactiveeffectcasters", "getactiveeffectcount", "getactivemenucomponentid",
    "getactivemenufilter", "getactivemenumode", "getactivemenuobject", "getactivemenuselection", "getactivequest", "getactiveuicomponentfullname",
    "getactiveuicomponentid", "getactoralpha", "getactorbaselevel", "getactorlightamount", "getactormaxlevel", "getactormaxswimbreath",
    "getactorminlevel", "getactorsoullevel", "getactorvalue", "getactorvaluec", "getalarmed", "getalchmenuapparatus", "getalchmenuingredient",
    "getallies", "getallmodlocaldata", "getaltcontrol2", "getamountsoldstolen", "getangle", "getapbowench", "getapench", "getappoison", "getarmorar",
    "getarmorrating", "getarmorratingupperbody", "getarmortype", "getarrayvariable", "getarrowprojectileenchantment", "getarrowprojectilepoison",
    "getattackdamage", "getattacked", "getav", "getavc", "getavforbaseactor", "getavforbaseactorc", "getavmod", "getavmodc", "getavskillmasteryc",
    "getbartergold", "getbarteritem", "getbarteritemquantity", "getbaseactorvalue", "getbaseactorvaluec", "getbaseav2", "getbaseav2c", "getbaseav3",
    "getbaseav3c", "getbaseitems", "getbaseobject", "getbipediconpath", "getbipedmodelpath", "getbirthsignspells", "getbookcantbetaken",
    "getbookisscroll", "getbooklength", "getbookskilltaught", "getbooktext", "getboundingradius", "getbuttonpressed", "getcalcalllevels",
    "getcalceachincount", "getcallingscript", "getcellchanged", "getcellclimate", "getcelldetachtime", "getcellfactionrank", "getcelllighting",
    "getcellmusictype", "getcellresethours", "getcellwatertype", "getchancenone", "getclass", "getclassattribute", "getclassdefaultmatch",
    "getclassmenuselectedclass", "getclassskill", "getclassskills", "getclassspecialization", "getclimatehasmasser", "getclimatemoonphaselength",
    "getclimatesunrisebegin", "getclimatesunriseend", "getclimatesunsetbegin", "getclimatevolatility", "getclosesound", "getclothingvalue",
    "getcloudspeedlower", "getcloudspeedupper", "getcombatspells", "getcombatstyleacrobaticsdodgechance", "getcombatstyleattackchance",
    "getcombatstyleattackduringblockmult", "getcombatstyleattackskillmodbase", "getcombatstyleattackskillmodmult", "getcombatstyleblockchance",
    "getcombatstyleblocknotunderattackmult", "getcombatstyleblockskillmodbase", "getcombatstyleblockunderattackmult",
    "getcombatstylebuffstandoffdist", "getcombatstyledodgebacktimermax", "getcombatstyledodgebacktimermin", "getcombatstyledodgechance",
    "getcombatstyledodgefatiguemodbase", "getcombatstyledodgefatiguemodmult", "getcombatstyledodgefwnotattackingmult",
    "getcombatstyledodgefwtimermax", "getcombatstyledodgefwtimermin", "getcombatstyledodgelrtimermax", "getcombatstyledodgelrtimermin",
    "getcombatstyledodgenotunderattackmult", "getcombatstyleencumberedspeedmodbase", "getcombatstyleencumberedspeedmodmult",
    "getcombatstylegroupstandoffdist", "getcombatstyleh2hbonustoattack", "getcombatstyleholdtimermax", "getcombatstyleidletimermax",
    "getcombatstyleidletimermin", "getcombatstyleignorealliesinarea", "getcombatstylekobonustopowerattack", "getcombatstylemeleealertok",
    "getcombatstylepowerattackchance", "getcombatstylepowerattackfatiguemodmult", "getcombatstyleprefersranged", "getcombatstylerangemaxmult",
    "getcombatstylerangeoptimalmult", "getcombatstylerejectsyields", "getcombatstylerushattackdistmult", "getcombatstylestaggerbonustoattack",
    "getcombatstyleswitchdistmelee", "getcombatstyleswitchdistranged", "getcombatstylewillyield", "getcompletedquests", "getcontainer",
    "getcontainermenuview", "getcontainerrespawns", "getcontrol", "getcreaturebasescale", "getcreatureflies", "getcreaturemagicskill",
    "getcreaturemodelpaths", "getcreaturereach", "getcreaturesoullevel", "getcreaturesoundbase", "getcreaturestealthskill", "getcreatureswims",
    "getcreaturetype", "getcreaturewalks", "getcrime", "getcrimeknown", "getcrosshairref", "getcurrentaipackage", "getcurrentaiprocedure",
    "getcurrentcharge", "getcurrentclimateid", "getcurrenteventname", "getcurrenthealth", "getcurrentpackage", "getcurrentpackageprocedure",
    "getcurrentquests", "getcurrentregions", "getcurrentscript", "getcurrentsoullevel", "getcurrenttime", "getcurrentweatherid", "getcursorpos",
    "getdayofweek", "getdead", "getdeadcount", "getdebugselection", "getdescription", "getdestroyed", "getdetectionlevel", "getdisabled",
    "getdisposition", "getdistance", "getdoordefaultopen", "getdoorteleportrot", "getdoorteleporty", "getdoorteleportz", "geteditorid",
    "geteditorsize", "getenchantment", "getenchantmentcharge", "getenchantmenttype", "getenchmenubaseitem", "getenchmenuenchitem",
    "getenchmenusoulgem", "getequipmentslot", "getequipped", "getequippedcurrentcharge", "getequippedcurrenthealth", "getequippeditems",
    "getequippedobject", "getequippedweaponpoison", "geteyes", "getfactionrank", "getfactionrankdifference", "getfactionreaction", "getfactions",
    "getfatiguepercentage", "getfirstref", "getfirstrefincell", "getfogdayfar", "getfogdaynear", "getfognightfar", "getfognightnear", "getforcerun",
    "getforcesneak", "getformfrommod", "getformidstring", "getfps", "getfriendhit", "getfullgoldvalue", "getgamedifficulty", "getgameloaded",
    "getgamerestarted", "getgamesetting", "getglobalvalue", "getgodmode", "getgold", "getgridstoload", "getgs", "gethair", "gethaircolor",
    "gethdrvalue", "getheadingangle", "gethidesamulet", "gethidesrings", "gethorse", "gethotkeyitem", "geticonpath", "getidledoneonce",
    "getignorefriendlyhits", "getignoresresistance", "getincell", "getinfaction", "getingredient", "getingredientchance", "getinputtext",
    "getinsamecell", "getinventoryobject", "getinvrefsforitem", "getinworldspace", "getisalerted", "getisclass", "getisclassdefault", "getiscreature",
    "getiscurrentweather", "getisghost", "getisid", "getisplayablerace", "getisplayerbirthsign", "getisrace", "getisreference", "getisuseditem",
    "getisuseditemtype", "getitemcount", "getitems", "getkeyname", "getkeypress", "getknockedstate", "getlastcreatedspell", "getlastenchanteditem",
    "getlastsigilstonecreateditem", "getlastsigilstoneenchanteditem", "getlastsscreated", "getlastssitem", "getlasttransactionitem",
    "getlasttransactionquantity", "getlastuniquecreatedpotion", "getlevel", "getleveledspells", "getlevitembylevel", "getlevitemindexbyform",
    "getlevitemindexbylevel", "getlightningfrequency", "getlightradius", "getlightrgb", "getlinkeddoor", "getloadedtypearray", "getlocalgravity",
    "getlocked", "getlocklevel", "getlos", "getlowactors", "getluckmodifiedskill", "getmagiceffectareasound", "getmagiceffectareasoundc",
    "getmagiceffectbarterfactorc", "getmagiceffectbasecost", "getmagiceffectbasecostc", "getmagiceffectboltsound", "getmagiceffectcastingsound",
    "getmagiceffectcastingsoundc", "getmagiceffectchars", "getmagiceffectcharsc", "getmagiceffectcounters", "getmagiceffectcountersc",
    "getmagiceffectenchantfactor", "getmagiceffectenchantfactorc", "getmagiceffectenchantshaderc", "getmagiceffecthitshader",
    "getmagiceffecthitshaderc", "getmagiceffecthitsound", "getmagiceffecticon", "getmagiceffecticonc", "getmagiceffectlight", "getmagiceffectlightc",
    "getmagiceffectmodel", "getmagiceffectname", "getmagiceffectnamec", "getmagiceffectnumcounters", "getmagiceffectnumcountersc",
    "getmagiceffectotheractorvaluec", "getmagiceffectprojectilespeed", "getmagiceffectprojectilespeedc", "getmagiceffectresistvaluec",
    "getmagiceffectschool", "getmagiceffectschoolc", "getmagiceffectusedobject", "getmagicitemeffectcount", "getmagicitemtype",
    "getmagicprojectilespell", "getmapmarkers", "getmapmarkertype", "getmapmenumarkerref", "getmaxav", "getmaxavc", "getmaxlevel", "getmeareasound",
    "getmeareasoundc", "getmebarterc", "getmebasecostc", "getmeboltsound", "getmeboltsoundc", "getmecastingsound", "getmecastingsoundc",
    "getmecounters", "getmeebarter", "getmeebarterc", "getmeenchant", "getmeenchantc", "getmeenchantshader", "getmeenchantshaderc", "getmehitshader",
    "getmehitsound", "getmehitsoundc", "getmeicon", "getmeiconc", "getmelight", "getmelightc", "getmemodel", "getmemodelc", "getmenamec",
    "getmenufloatvalue", "getmenuhastrait", "getmenumcounters", "getmenumcountersc", "getmenustringvalue", "getmeotheractorvalue",
    "getmeotheractorvaluec", "getmeprojspeedc", "getmerchantcontainer", "getmeresistvalue", "getmeresistvaluec", "getmeschool", "getmeschoolc",
    "getmeusedobject", "getmeusedobjectc", "getmiddlehighactors", "getmieffectcount", "getminlevel", "getmitype", "getmodelpath", "getmodlocaldata",
    "getmousebuttonpress", "getmousebuttonsswapped", "getmpspell", "getname", "getnextref", "getnorumors", "getnthactiveeffectactorvalue",
    "getnthactiveeffectbounditem", "getnthactiveeffectcaster", "getnthactiveeffectdata", "getnthactiveeffectduration",
    "getnthactiveeffectenchantobject", "getnthactiveeffectmagicitem", "getnthactiveeffectmagicitemindex", "getnthactiveeffectmagnitude",
    "getnthactiveeffecttimeelapsed", "getnthaeav", "getnthaebounditem", "getnthaecaster", "getnthaecode", "getnthaeduration", "getnthaeindex",
    "getnthaemagicenchantobject", "getnthaemagicitem", "getnthaemagnitude", "getnthaesummonref", "getnthchildref", "getnthdetectedactor",
    "getntheffectitem", "getntheffectitemactorvalue", "getntheffectitemarea", "getntheffectitemduration", "getntheffectitemmagnitude",
    "getntheffectitemname", "getntheffectitemrange", "getntheffectitemscriptname", "getntheffectitemscriptschool",
    "getntheffectitemscriptvisualeffect", "getntheiarea", "getntheicode", "getntheiduration", "getntheimagnitude", "getntheiname", "getntheirange",
    "getntheiscript", "getntheisschool", "getnthexplicitref", "getnthfaction", "getnthfactionrankname", "getnthfollower", "getnthlevitem",
    "getnthlevitemcount", "getnthmagiceffectcounter", "getnthmagiceffectcounterc", "getnthmecounter", "getnthmecounterc", "getnthmodname",
    "getnthplayerspell", "getnthracebonusskill", "getnthracespell", "getnthspell", "getnumchildrefs", "getnumdetectedactors", "getnumexplicitrefs",
    "getnumfactions", "getnumfollowers", "getnumitems", "getnumkeyspressed", "getnumlevitems", "getnumloadedplugins", "getnummousebuttonspressed",
    "getnumpackages", "getnumranks", "getnumrefs", "getnumrefsincell", "getobjecthealth", "getobjecttype", "getobliviondirectory", "getobserevision",
    "getobseversion", "getoffersservicesnow", "getopensound", "getopenstate", "getowner", "getowningfactionrank", "getowningfactionrequiredrank",
    "getpackageallowfalls", "getpackagealwaysrun", "getpackagealwayssneak", "getpackagearmorunequipped", "getpackagecontinueifpcnear",
    "getpackagedefensivecombat", "getpackagelocationdata", "getpackagelockdoorsatend", "getpackagelockdoorsatlocation", "getpackagemustcomplete",
    "getpackagemustreachlocation", "getpackagenoidleanims", "getpackageoffersservices", "getpackagescheduledata", "getpackageskipfalloutbehavior",
    "getpackagetarget", "getpackagetargetdata", "getpackageunlockdoorsatlocation", "getpackageunlockdoorsatstart", "getpackageusehorse",
    "getparentcell", "getparentcellowner", "getparentcellowningfactionrank", "getparentcellowningfactionrequiredrank", "getparentref",
    "getparentworldspace", "getpathnodelinkedref", "getpathnodepos", "getpathnodesinradius", "getpcattributebonus", "getpcattributebonusc",
    "getpcexpelled", "getpcfactionattack", "getpcfactionmurder", "getpcfactionsubmitauthority", "getpcfame", "getpcinfaction", "getpcinfamy",
    "getpcisclass", "getpcisrace", "getpcissex", "getpclastdroppeditemref", "getpclasthorse", "getpclastloaddoor", "getpcmajorskillups",
    "getpcmiscstat", "getpcsleephours", "getpcspelleffectivenessmodifier", "getpctrainingsessionsused", "getpersuasionnumber",
    "getplayercontrolsdisabled", "getplayerhaslastriddenhorse", "getplayerinseworld", "getplayerskilladvances", "getplayerskilluse",
    "getplayerskillusec", "getplayerslastactivatedloaddoor", "getplayerslastriddenhorse", "getplayerspellcount", "getpluginversion",
    "getplyerspellcount", "getpos", "getprocesslevel", "getprojectile", "getprojectilelifetime", "getprojectilesource", "getprojectilespeed",
    "getprojectiletype", "getqmcurrent", "getqmitem", "getqmmaximum", "getqr", "getquality", "getquantitymenuitem", "getquantitymenumaximumquantity",
    "getquestrunning", "getquestvariable", "getrace", "getraceattributec", "getracedefaulthair", "getraceeyes", "getracehairs", "getracereaction",
    "getracescale", "getraceskillbonusc", "getracespellcount", "getracevoice", "getraceweight", "getrandompercent", "getrawformidstring",
    "getrefvariable", "getrequiredskillexp", "getrequiredskillexpc", "getrestrained", "getrider", "getscale", "getscript",
    "getscriptactiveeffectindex", "getsecondspassed", "getselectedspells", "getself", "getservicesmask", "getshouldattack", "getsigilstoneuses",
    "getsitting", "getskillgoverningattributec", "getskillspecialization", "getskilluseincrement", "getskilluseincrementc", "getsoulgemcapacity",
    "getsoullevel", "getsoundattenuation", "getsoundplaying", "getsourcemodindex", "getspecialanims", "getspellareaeffectignoreslos",
    "getspelldisallowabsorbreflect", "getspelleffectiveness", "getspellexplodeswithnotarget", "getspellhostile", "getspellmagickacost",
    "getspellmasterylevel", "getspellpcstart", "getspells", "getspellschool", "getspelltype", "getstage", "getstagedone", "getstageentries",
    "getstageids", "getstartingangle", "getstartingpos", "getstringgamesetting", "getsundamage", "getsunglare", "gettailmodelpath", "gettalkedtopc",
    "gettalkedtopcparam", "gettargets", "gettelekinesisref", "getteleportcell", "getterrainheight", "gettextinputcontrolpressed",
    "gettextinputcursorpos", "gettexturepath", "gettilechildren", "gettimedead", "gettimeleft", "gettotalactiveeffectmagnitude",
    "gettotalactiveeffectmagnitudec", "gettotalaeabilitymagnitude", "gettotalaealchemymagnitude", "gettotalaealchemymagnitudec",
    "gettotalaeallspellsmagnitude", "gettotalaediseasemagnitude", "gettotalaediseasemagnitudec", "gettotalaeenchantmentmagnitude",
    "gettotalaelesserpowermagnitude", "gettotalaelesserpowermagnitudec", "gettotalaemagnitude", "gettotalaenonabilitymagnitude",
    "gettotalaenonabilitymagnitudec", "gettotalaepowermagnitude", "gettotalaespellmagnitude", "gettotalaespellmagnitudec", "gettotalpcattributebonus",
    "gettotalpersuasionnumber", "gettrainerskill", "gettransactioninfo", "gettransdelta", "gettravelhorse", "gettrespasswarninglevel",
    "getunconscious", "getuseditemlevel", "getusedpowers", "getusertime", "getvampire", "getvariable", "getvelocity", "getverticalvelocity",
    "getwaterheight", "getwatershader", "getweahtercloudspeedupper", "getweaponanimtype", "getweaponreach", "getweaponskilltype", "getweapontype",
    "getweatherclassification", "getweathercloudspeedlower", "getweathercloudspeedupper", "getweathercolor", "getweatherfogdaynear",
    "getweatherfognightfar", "getweatherfognightnear", "getweatherhdrvalue", "getweatheroverride", "getweathersundamage", "getweathersunglare",
    "getweathertransdelta", "getweatherwindspeed", "getwindspeed", "getworldparentworld", "getworldspaceparentworldspace", "globalvariableexists",
    "gotojail", "hammerkey", "haseffectshader", "hasflames", "haslowlevelprocessing", "hasmagiceffect", "hasmodel", "hasname", "hasnopersuasion",
    "hastail", "hasvampirefed", "hasvariable", "haswater", "holdkey", "iconpathincludes", "identitymat", "incrementplayerskilluse",
    "ininvertfasttravel", "insertininputtext", "isactionref", "isactivatable", "isactivator", "isactor", "isactoravictim", "isactordetected",
    "isactorrespawning", "isactorsaioff", "isactorusingatorch", "isalchemyitem", "isammo", "isanimgroupplaying", "isanimplayer", "isapparatus",
    "isarmor", "isattacking", "isautomaticdoor", "isbartermenuactive", "isbipediconpathvalid", "isblocking", "isbook", "iscantwait", "iscasting",
    "iscellowner", "iscellpublic", "isclassattribute", "isclassattributec", "isclassskill", "isclassskillc", "isclothing", "iscloudy",
    "isconsoleopen", "iscontainer", "iscontinuingpackagepcnear", "iscontrol", "iscontroldisabled", "iscreature", "iscreaturebiped",
    "iscurrentfurnitureobj", "iscurrentfurnitureref", "isdigit", "isdiseased", "isdodging", "isdoor", "isessential", "isfacingup", "isfactionevil",
    "isfactionhidden", "isfemale", "isflora", "isflying", "isfood", "isformvalid", "isgamemessagebox", "isglobalcollisiondisabled", "isguard",
    "isharvested", "ishiddendoor", "ishorsestolen", "isiconpathvalid", "isinair", "isincombat", "isindangerouswater", "isingredient", "isininterior",
    "isinmyownedcell", "isinoblivion", "isjumping", "iskeydisabled", "iskeypressed", "iskeypressed2", "iskeypressed3", "isleftup", "isletter",
    "islight", "islightcarriable", "isloaddoor", "ismagiceffectcanrecoverc", "ismagiceffectdetrimental", "ismagiceffectdetrimentalc",
    "ismagiceffectforenchanting", "ismagiceffectforspellmaking", "ismagiceffectforspellmakingc", "ismagiceffecthostile", "ismagiceffecthostilec",
    "ismagiceffectmagnitudepercentc", "ismagiceffectonselfallowed", "ismagiceffectonselfallowedc", "ismagiceffectontargetallowedc",
    "ismagiceffectontouchallowed", "ismagiceffectontouchallowedc", "ismajorc", "ismajorref", "ismapmarkervisible", "ismecanrecover",
    "ismedetrimental", "ismedetrimentalc", "ismeforenchanting", "ismeforenchantingc", "ismeforspellmaking", "ismeforspellmakingc", "ismehostilec",
    "ismemagnitudepercent", "ismemagnitudepercentc", "ismeonselfallowed", "ismeonselfallowedc", "ismeontargetallowed", "ismeontouchallowed",
    "ismeontouchallowedc", "isminimalusedoor", "ismiscitem", "ismodelpathvalid", "ismodloaded", "ismovingbackward", "ismovingleft", "ismovingright",
    "isnaked", "isnthactiveeffectapplied", "isntheffectitemscripted", "isntheishostile", "isobliviongate", "isoblivioninterior", "isoblivionworld",
    "isofflimits", "isonground", "ispathnodedisabled", "ispcamurderer", "ispcleveloffset", "ispcsleeping", "ispersistent", "isplayable",
    "isplayable2", "isplayermovingintonewspace", "isplayerslastriddenhorse", "ispleasant", "isplugininstalled", "ispoison", "ispotion", "isprintable",
    "ispunctuation", "isquestcomplete", "isquestitem", "isracebonusskill", "isracebonusskillc", "israceplayable", "isrecoiling", "isrefdeleted",
    "isreference", "isrefessential", "isridinghorse", "isrunning", "isscripted", "isshieldout", "issneaking", "issnowing", "issoulgem",
    "isspellhostile", "isspelltarget", "isstaggered", "issummonable", "isswimming", "istaken", "istextinputinuse", "isthirdperson", "istimepassing",
    "istorchout", "istrespassing", "isturnarrest", "isturningleft", "isunderwater", "isunsaferespawns", "isuppercase", "iswaiting", "isweapon",
    "isweaponout", "isxbox", "isyielding", "kill", "killallactors", "leftshift", "linktodoor", "loadgameex", "lock", "log", "log10", "logicaland",
    "logicalnot", "logicalor", "look", "loopgroup", "magiceffectcodefromchars", "magiceffectfromchars", "magiceffectfromcode",
    "magiceffectfxpersists", "magiceffecthasnoarea", "magiceffecthasnoareac", "magiceffecthasnoduration", "magiceffecthasnodurationc",
    "magiceffecthasnohiteffectc", "magiceffecthasnoingredient", "magiceffecthasnoingredientc", "magiceffecthasnomagnitudec", "magiceffectusesarmor",
    "magiceffectusesarmorc", "magiceffectusesattribute", "magiceffectusescreature", "magiceffectusescreaturec", "magiceffectusesotheractorvalue",
    "magiceffectusesskill", "magiceffectusesskillc", "magiceffectusesweapon", "magiceffectusesweaponc", "magichaseffectc", "magicitemhaseffect",
    "magicitemhaseffectcode", "magicitemhaseffectcount", "magicitemhaseffectcountc", "magicitemhaseffectitemscript", "matadd", "matchpotion",
    "matinv", "matmult", "matrixadd", "matrixdeterminant", "matrixmultiply", "matrixrref", "matrixscale", "matrixsubtract", "matrixtrace",
    "matrixtranspose", "matscale", "matsubtract", "mefxpersists", "mefxpersistsc", "mehasnoarea", "mehasnoareac", "mehasnoduration",
    "mehasnodurationc", "mehasnohiteffect", "mehasnoingredient", "mehasnoingredientc", "mehasnomagnitude", "mehasnomagnitudec", "menuholdkey",
    "menumode", "menutapkey", "message", "messagebox", "messageboxex", "messageex", "meusesarmor", "meusesarmorc", "meusesattribute",
    "meusescreature", "meusescreaturec", "meusesotheractorvalue", "meusesotheractorvaluec", "meusesskill", "meusesskillc", "meusesweaponc",
    "modactorvalue", "modactorvalue2", "modactorvaluec", "modamountsoldstolen", "modarmorar", "modattackdamage", "modav2", "modavc", "modavmod",
    "modavmodc", "modbartergold", "modcrimegold", "modcurrentcharge", "moddisposition", "modelpathincludes", "modenchantmentcost",
    "modequippedcurrentcharge", "modequippedcurrenthealth", "modfactionrank", "modfactionreaction", "modfemalegroundpath", "modfemaleiconpath",
    "modgoldvalue", "modiconpath", "modlocaldataexists", "modmalebipedpath", "modmaleiconpath", "modmodelpath", "modname",
    "modnthactiveeffectmagnitude", "modnthaemagnitude", "modntheffectitemarea", "modntheffectitemmagnitude", "modntheffectitemscriptname",
    "modntheiarea", "modntheiduration", "modntheimagnitude", "modobjectcharge", "modobjecthealth", "modpca", "modpcattribute", "modpcfame",
    "modpcinfamy", "modpcmiscstat", "modpcs", "modpcskill", "modpcspelleffectiveness", "modplayerskillexp", "modplayerskillexpc", "modquality",
    "modscale", "modspellmagickacost", "modweaponreach", "modweaponspeed", "modweight", "movemousex", "movemousey", "movetextinputcursor",
    "movetomarker", "nameincludes", "numtohex", "offersapparatus", "offersarmor", "offersbooks", "offersclothing", "offersingredients",
    "offersmagicitems", "offersmiscitems", "offerspotions", "offersrecharging", "offersrepair", "offersservicesc", "offersspells", "offersweapons",
    "oncontroldown", "onkeydown", "opentextinput", "outputlocalmappicturesoverride", "parentcellhaswater", "payfine", "payfinethief", "pcb",
    "pickidle", "placeatme", "playbink", "playgroup", "playidle", "playmagiceffectvisuals", "playsound", "playsound3d", "pms", "positioncell",
    "positionworld", "pow", "preloadmagiceffect", "print", "printc", "printd", "printtileinfo", "printtoconsole", "purgecellbuffers", "pushactoraway",
    "questexists", "racos", "rand", "ratan", "ratan2", "rcos", "rcosh", "refreshcurrentclimate", "refreshtopiclist", "releasekey",
    "releaseweatheroverride", "removeallitems", "removebasespell", "removeenchantment", "removeequippedweaponpoison", "removeeventhandler",
    "removefromleveledlist", "removeitem", "removeitemns", "removelevitembylevel", "removeme", "removemeir", "removemodlocaldata",
    "removentheffectitem", "removenthlevitem", "removenthmagiceffectcounter", "removenthmagiceffectcounterc", "removenthmecounter", "removescript",
    "removescriptpackage", "removespell", "removespellns", "reset3dstate", "resetallvariables", "resethealth", "resetinterior", "resolvemodindex",
    "resurrect", "rightshift", "rotate", "rotmat", "rowvec", "rsin", "rtan", "rtanh", "runbatchscript", "runscriptline", "saa", "samefaction",
    "samefactionaspc", "samerace", "sameraceaspc", "samesex", "say", "sayto", "scaonactor", "scripteffectelapsedseconds", "selectplayerspell",
    "sendtrespassalarm", "setactivequest", "setactorfullname", "setactormaxswimbreath", "setactorrefraction", "setactorrespawns", "setactorsai",
    "setactorswimbreath", "setactorvalue", "setactorvaluec", "setalert", "setallvisible", "setaltcontrol2", "setangle", "setapparatustype",
    "setarmorar", "setarmortype", "setarrowprojectileenchantment", "setarrowprojectilepoison", "setatstart", "setattackdamage", "setav", "setavmod",
    "setavmodc", "setbartergold", "setbaseform", "setbipediconpathex", "setbipedmodelpathex", "setbipedslotmask", "setbookisscroll",
    "setbookskilltaught", "setbuttonpressed", "setcalcalllevels", "setcamerafov2", "setcancastpower", "setcancorpsecheck", "setcantraveltomapmarker",
    "setcantwait", "setcellbehavesasexterior", "setcellclimate", "setcellfullname", "setcellhaswater", "setcelllighting", "setcellmusictype",
    "setcellownership", "setcellpublicflag", "setcellresethours", "setcellwaterheight", "setcellwatertype", "setclass", "setclassattribute",
    "setclassattributec", "setclassskills", "setclassskills2", "setclassspecialization", "setclimatehasmassser", "setclimatehassecunda",
    "setclimatemoonphaselength", "setclimatesunrisebegin", "setclimatesunsetbegin", "setclimatesunsetend", "setclimatevolatility", "setclosesound",
    "setcloudspeedlower", "setcombatstyle", "setcombatstyleacrobaticsdodgechance", "setcombatstyleattackchance",
    "setcombatstyleattacknotunderattackmult", "setcombatstyleattackskillmodbase", "setcombatstyleattackunderattackmult", "setcombatstyleblockchance",
    "setcombatstyleblocknotunderattackmult", "setcombatstyleblockskillmodmult", "setcombatstyleblockunderattackmult",
    "setcombatstylebuffstandoffdist", "setcombatstyledodgebacktimermax", "setcombatstyledodgebacktimermin", "setcombatstyledodgechance",
    "setcombatstyledodgefatiguemodbase", "setcombatstyledodgefatiguemodmult", "setcombatstyledodgefwnotattackingmult",
    "setcombatstyledodgefwtimermax", "setcombatstyledodgefwtimermin", "setcombatstyledodgelrtimermax", "setcombatstyledodgelrtimermin",
    "setcombatstyledodgenotunderattackmult", "setcombatstyleencumberedspeedmodbase", "setcombatstyleencumberedspeedmodmult",
    "setcombatstylegroupstandoffdist", "setcombatstyleh2hbonustoattack", "setcombatstyleholdtimermax", "setcombatstyleidletimermax",
    "setcombatstyleidletimermin", "setcombatstyleignorealliesinarea", "setcombatstylekobonustopowerattack", "setcombatstylemeleealertok",
    "setcombatstylepowerattackchance", "setcombatstylepowerattackfatiguemodmult", "setcombatstyleprefersranged", "setcombatstylerangemaxmult",
    "setcombatstylerangeoptimalmult", "setcombatstylerejectsyields", "setcombatstylerushattackdistmult", "setcombatstylestaggerbonustoattack",
    "setcombatstyleswitchdistmelee", "setcombatstyleswitchdistranged", "setcombatstylewillyield", "setcontrol", "setcreatureskill",
    "setcreaturesoundbase", "setcreaturetype", "setcrimegold", "setcurrentcharge", "setcurrenthealth", "setdebugmode", "setdescription",
    "setdestroyed", "setdetectionstate", "setdisableglobalcollision", "setdoordefaultopen", "setenchantment", "setenchantmentcharge",
    "setenchantmentcost", "setenchantmenttype", "setequipmentslot", "setequippedcurrenthealth", "setequippedweaponpoison", "setessential",
    "seteventhandler", "seteyes", "setfactionevil", "setfactionrank", "setfactionreaction", "setfactionspecialcombat", "setfemale",
    "setfemalebipedpath", "setfemalegroundpath", "setflycameraspeedmult", "setfogdayfar", "setfogdaynear", "setfognightfar", "setfognightnear",
    "setforcerun", "setforcesneak", "setfunctionvalue", "setghost", "setgoldvalue", "setgoldvalue_t", "setgoldvaluet", "sethair", "setharvested",
    "sethasbeenpickedup", "sethidesamulet", "sethidesrings", "sethotkeyitem", "seticonpath", "setignorefriendlyhits", "setignoresresistance",
    "setinchargen", "setingredientchance", "setinputtext", "setinvertfasttravel", "setinvestmentgold", "setisautomaticdoor", "setiscontrol",
    "setisfood", "setishiddendoor", "setisobliviongate", "setisplayable", "setitemvalue", "setlevcreaturetemplate", "setlevel", "setlightduration",
    "setlightningfrequency", "setlightrgb", "setlocalgravity", "setlocalgravityvector", "setloopsound", "setlowlevelprocessing",
    "setmagiceffectareasound", "setmagiceffectareasoundc", "setmagiceffectbarterfactor", "setmagiceffectbasecost", "setmagiceffectbasecostc",
    "setmagiceffectboltsound", "setmagiceffectboltsoundc", "setmagiceffectcanrecoverc", "setmagiceffectcastingsound", "setmagiceffectcastingsoundc",
    "setmagiceffectcounters", "setmagiceffectenchantfactor", "setmagiceffectenchantfactorc", "setmagiceffectenchantshader",
    "setmagiceffectforenchanting", "setmagiceffectforenchantingc", "setmagiceffectforspellmaking", "setmagiceffectfxpersists",
    "setmagiceffectfxpersistsc", "setmagiceffecthitshader", "setmagiceffecthitshaderc", "setmagiceffecthitsoundc", "setmagiceffecticon",
    "setmagiceffecticonc", "setmagiceffectisdetrimental", "setmagiceffectishostile", "setmagiceffectishostilec", "setmagiceffectlight",
    "setmagiceffectlightc", "setmagiceffectmagnitudepercentc", "setmagiceffectmodel", "setmagiceffectmodelc", "setmagiceffectname",
    "setmagiceffectnoarea", "setmagiceffectnoareac", "setmagiceffectnoduration", "setmagiceffectnodurationc", "setmagiceffectnohiteffectc",
    "setmagiceffectnoingredient", "setmagiceffectnoingredientc", "setmagiceffectnomagnitudec", "setmagiceffectonselfallowed",
    "setmagiceffectonselfallowedc", "setmagiceffectontargetallowedc", "setmagiceffectontouchallowed", "setmagiceffectontouchallowedc",
    "setmagiceffectotheractorvaluec", "setmagiceffectprojectilespeed", "setmagiceffectprojectilespeedc", "setmagiceffectresistvaluec",
    "setmagiceffectschool", "setmagiceffectschoolc", "setmagiceffectuseactorvaluec", "setmagiceffectusedobjectc", "setmagiceffectusesactorvalue",
    "setmagiceffectusesactorvaluec", "setmagiceffectusesarmorc", "setmagiceffectusesattribute", "setmagiceffectusesattributec",
    "setmagiceffectusescreaturec", "setmagiceffectusesskill", "setmagiceffectusesskillc", "setmagiceffectusesweapon", "setmagicitemautocalc",
    "setmagicprojectilespell", "setmalebipedpath", "setmalegroundpath", "setmaleiconpath", "setmapmarkervisible", "setmeareasound", "setmeareasoundc",
    "setmebarterfactor", "setmebarterfactorc", "setmebasecost", "setmeboltsound", "setmeboltsoundc", "setmecanrecover", "setmecanrecoverc",
    "setmecastingsound", "setmecastingsoundc", "setmeenchantfactorc", "setmeenchantshader", "setmeenchantshaderc", "setmeforenchanting",
    "setmeforenchantingc", "setmeforspellmakingc", "setmefxpersists", "setmefxpersistsc", "setmehitshader", "setmehitshaderc", "setmehitsound",
    "setmeicon", "setmeiconc", "setmeisdetrimental", "setmeisdetrimentalc", "setmeishostile", "setmeishostilec", "setmelight",
    "setmemagnitudepercent", "setmemagnitudepercentc", "setmemodel", "setmemodelc", "setmename", "setmenamec", "setmenoarea", "setmenoduration",
    "setmenodurationc", "setmenohiteffect", "setmenohiteffectc", "setmenoingredient", "setmenoingredientc", "setmenomagnitudec", "setmenufloatvalue",
    "setmenustringvalue", "setmeonselfallowed", "setmeonselfallowedc", "setmeontargetallowedc", "setmeontouchallowed", "setmeontouchallowedc",
    "setmeotheractorvalue", "setmeotheractorvaluec", "setmeprojectilespeedc", "setmerchantcontainer", "setmeresistvalue", "setmeresistvaluec",
    "setmeschool", "setmeschoolc", "setmessagesound", "setmeuseactorvalue", "setmeuseactorvaluec", "setmeusedobject", "setmeusedobjectc",
    "setmeusesarmor", "setmeusesattribute", "setmeusesattributec", "setmeusescreature", "setmeusescreaturec", "setmeusesskill", "setmeusesskillc",
    "setmeusesweaponc", "setmodelpath", "setmodlocaldata", "setmousespeedx", "setmousespeedy", "setmpspell", "setname", "setnoavoidance",
    "setnopersuasion", "setnorumors", "setnthactiveeffectmagnitude", "setnthaemagnitude", "setntheffectitemactorvalue", "setntheffectitemarea",
    "setntheffectitemduration", "setntheffectitemmagnitude", "setntheffectitemrange", "setntheffectitemscripthostile", "setntheffectitemscriptname",
    "setntheffectitemscriptnameex", "setntheffectitemscriptvisualeffect", "setntheffectitemscriptvisualeffectc", "setntheiarea", "setntheiav",
    "setntheiduration", "setntheimagnitude", "setntheirange", "setntheiscript", "setntheishostile", "setntheisname", "setntheisschool",
    "setntheisvisualeffectc", "setnthfactionranknameex", "setnumericgamesetting", "setnumericinisetting", "setobjectcharge", "setoffersapparatus",
    "setoffersarmor", "setoffersbooks", "setoffersclothing", "setoffersingredients", "setofferslights", "setoffersmiscitems", "setofferspotions",
    "setoffersrecharging", "setoffersrepair", "setoffersservicesc", "setofferstraining", "setoffersweapons", "setolmpgrids", "setopenkey",
    "setopensound", "setopenstate", "setownership", "setpackageallowfalls", "setpackageallowswimming", "setpackagealwaysrun", "setpackagealwayssneak",
    "setpackagearmorunequipped", "setpackagedata", "setpackagedefensivecombat", "setpackagelocationdata", "setpackagelockdoorsatend",
    "setpackagelockdoorsatstart", "setpackagemustcomplete", "setpackagemustreachlocation", "setpackagenoidleanims", "setpackageonceperday",
    "setpackagescheduledata", "setpackageskipfalloutbehavior", "setpackagetarget", "setpackageunlockdoorsatend", "setpackageunlockdoorsatlocation",
    "setpackageunlockdoorsatstart", "setpackageusehorse", "setpackduration", "setparentcellowningfactionrequiredrank", "setpathnodedisabled",
    "setpcamurderer", "setpcattributebonus", "setpcattributebonusc", "setpcfactionattack", "setpcfactionmurder", "setpcfactionsteal",
    "setpcfactionsubmitauthority", "setpcfame", "setpcinfamy", "setpcmajorskillups", "setpcsleephours", "setpctrainingsessionsused",
    "setplayerbirthsign", "setplayerinseworld", "setplayerskeletonpath", "setplayerskilladvances", "setplayerskilladvancesc",
    "setplayerslastriddenhorse", "setpos", "setpowertimer", "setprojectilesource", "setprojectilespeed", "setquality", "setquestitem",
    "setquestobject", "setracealias", "setracescale", "setracevoice", "setraceweight", "setrefcount", "setrefessential", "setrestrained",
    "setrigidbodymass", "setscaleex", "setsceneiscomplex", "setscript", "setshowquestitems", "setsigilstoneuses", "setsize",
    "setskillgoverningattribute", "setskillspecialization", "setskillspecializationc", "setskilluseincrement", "setskilluseincrementc",
    "setsoulgemcapacity", "setsoullevel", "setsoundattenuation", "setspelldisallowabsorbreflect", "setspellexplodeswithnotarget", "setspellhostile",
    "setspellimmunetosilence", "setspellmasterylevel", "setspellpcstart", "setspellscripteffectalwaysapplies", "setspelltype", "setstage",
    "setstagedate", "setstringinisetting", "setsummonable", "setsundamage", "setsunglare", "settaken", "settextinputcontrolhandler",
    "settextinputhandler", "settexturepath", "settimeleft", "settrainerlevel", "settrainerskill", "settransdelta", "settravelhorse",
    "setunsafecontainer", "setvelocity", "setverticalvelocity", "setweaponreach", "setweaponspeed", "setweapontype", "setweather",
    "setweathercloudspeedupper", "setweathercolor", "setweatherfogdayfar", "setweatherfogdaynear", "setweatherfognightnear", "setweatherhdrvalue",
    "setweatherlightningfrequency", "setweathersundamage", "setweathertransdelta", "setweatherwindspeed", "setweight", "setwindspeed",
    "showbirthsignmenu", "showclassmenu", "showenchantment", "showmap", "showracemenu", "showspellmaking", "sin", "sinh", "skipanim", "sms", "sqrt",
    "squareroot", "startconversation", "startquest", "stopcombat", "stopcombatalarmonactor", "stoplook", "stopmagiceffectvisuals", "stopquest",
    "stopwaiting", "streammusic", "stringtoactorvalue", "sv_compare", "sv_construct", "sv_count", "sv_destruct", "sv_erase", "sv_insert", "sv_length",
    "sv_percentify", "sv_replace", "sv_split", "sv_tolower", "sv_tonumeric", "sv_toupper", "tan", "tanh", "tapkey", "testexpr", "this",
    "toggleactorsai", "togglecreaturemodel", "togglefirstperson", "toggleskillperk", "togglespecialanim", "tonumber", "tostring", "toupper",
    "trapupdate", "triggerhitshader", "triggerplayerskilluse", "triggerplayerskillusec", "typeof", "unequipitem", "unequipitemns",
    "unequipitemsilent", "unequipme", "unhammerkey", "unlock", "unsetstagetext", "update3d", "updatecontainermenu", "updatetextinput", "vampirefeed",
    "vecmag", "vecnorm", "vectorcross", "vectordot", "vectormagnitude", "vectornormalize", "wait", "whichservicemenu", "yield", "zeromat",

    //-------------------------------
    //
    // Oblivion Reloaded

    "cameralookatposition", "camerareset", "isthirdperson", "getversion", "getlocationname", "setextraeffectenabled", "setcustomconstant",
    "getweathername", "getsetting", "setsetting", "cameratranslate", "camerarotate", "cameratranslatetoposition", "camerarotatetoposition",
    "cameralookat",
    //----------------------------

    // Pluggy

    "arraycmp", "arraycount", "arrayesp", "arrayprotect", "arraysize", "autosclhuds", "autosclhudt", "copyarray", "copystring", "createarray",
    "createespbook", "createstring", "delallhudss", "delallhudts", "delfile", "delhuds", "delhudt", "deltxtfile", "destroyallarrays",
    "destroyallstrings", "destroyarray", "destroystring", "duparray", "esptostring", "filetostring", "findfirstfile", "findfloatinarray",
    "findinarray", "findnextfile", "findrefinarray", "firstfreeinarray", "firstinarray", "fixname", "fixnameex", "floattostring", "fmtstring",
    "fromobsestring", "fromtsfc", "getesp", "getfilesize", "getinarray", "getrefesp", "gettypeinarray", "halt", "hasfixedname", "hudsesp",
    "hudsprotect", "huds_align", "huds_l", "huds_opac", "huds_sclx", "huds_scly", "huds_show", "huds_tex", "huds_x", "huds_y", "hudtesp", "hudtinfo",
    "hudtprotect", "hudt_align", "hudt_font", "hudt_l", "hudt_opac", "hudt_sclx", "hudt_scly", "hudt_show", "hudt_text", "hudt_x", "hudt_y",
    "hudsinfo", "inidelkey", "inigetnthsection", "inikeyexists", "inireadfloat", "inireadint", "inireadref", "inireadstring", "inisectionscount",
    "iniwritefloat", "iniwriteint", "iniwriteref", "iniwritestring", "inttohex", "inttostring", "ishudenabled", "ispluggydatareset", "killmenu", "lc",
    "longtoref", "modrefesp", "newhuds", "newhudt", "packarray", "pausebox", "plgyspcl", "reftolong", "reftostring", "reminarray", "renfile",
    "rentxtfile", "resetname", "runbatstring", "sanstring", "screeninfo", "setfloatinarray", "sethudt", "setinarray", "setrefinarray", "setstring",
    "strlc", "stringcat", "stringcmp", "stringesp", "stringgetname", "stringgetnameex", "stringins", "stringlen", "stringmsg", "stringmsgbox",
    "stringpos", "stringprotect", "stringrep", "stringsetname", "stringsetnameex", "stringtofloat", "stringtoint", "stringtoref", "stringtotxtfile",
    "toobse", "toobsestring", "totsfc", "txtfileexists", "userfileexists", "csc", "rcsc",
    //---------------------------

    // tfsc

    "straddnewline", "strappend", "strappendcharcode", "strcat", "strclear", "strclearlast", "strcompare", "strcopy", "strdel", "strdeleteall",
    "strexpr", "strgetfemalebipedpath", "strgetfemalegroundpath", "strgetfemaleiconpath", "strgetmalebipedpath", "strgetmaleiconpath",
    "strgetmodelpath", "strgetname", "strgetntheffectitemscriptname", "strgetnthfactionrankname", "strgetrandomname", "stridreplace", "strlength",
    "strload", "strmessagebox", "strnew", "strprint", "strreplace", "strsave", "strset", "strsetfemalebipedpath", "strsetfemalegroundpath",
    "strsetfemaleiconpath", "strsetmalebipedpath", "strsetmaleiconpath", "strsetmodelpath", "strsetname", "strsetntheffectitemscriptname", 
    //---------------------------

    // Blockhead


    "getbodyassetoverride", "getfacegenage", "getheadassetoverride", "refreshanimdata", "registerequipmentoverridehandler", "resetagetextureoverride",
    "resetbodyassetoverride", "resetheadassetoverride", "setagetextureoverride", "setbodyassetoverride", "setfacegenage", "setheadassetoverride",
    "toggleanimoverride", "unregisterequipmentoverridehandler", 
    //---------------------------

    // Switch Nighteye

    "enumnighteyeshader", "setnighteyeshader", 
    //---------------------------
    //
    // MenuQue

    "getallskills", "getavskillmasterylevelc", "getavskillmasterylevelf", "getfontloaded", "getgenericbuttonpressed", "getloadedfonts",
    "getlocalmapseen", "getmenueventtype", "getmenufloatvalue", "getmenustringvalue", "getmouseimage", "getmousepos", "getplayerskilladvancesf",
    "getplayerskillusef", "getrequiredskillexpc", "getrequiredskillexpf", "getskillcode", "getskillform", "getskillgoverningattributef",
    "getskillspecializationc", "getskillspecializationf", "getskilluseincrementf", "gettexteditbox", "gettexteditstring", "gettrainingmenucost",
    "gettrainingmenulevel", "gettrainingmenuskill", "getworldmapdata", "getworldmapdoor", "incrementplayerskillusef", "insertxml",
    "insertxmltemplate", "istexteditinuse", "kyoma_test", "modplayerskillexpf", "mqcreatemenufloatvalue", "mqcreatemenustringvalue",
    "mqgetactivequest", "mqgetactivequesttargets", "mqgetcompletedquests", "mqgetcurrentquests", "mqgetenchmenubaseitem", "mqgethighlightedclass",
    "mqgetmapmarkers", "mqgetmenuactivechildindex", "mqgetmenuactivefloatvalue", "mqgetmenuactivestringvalue", "mqgetmenuchildcount",
    "mqgetmenuchildfloatvalue", "mqgetmenuchildhastrait", "mqgetmenuchildname", "mqgetmenuchildstringvalue", "mqgetmenuglobalfloatvalue",
    "mqgetmenuglobalstringvalue", "mqgetquestcompleted", "mqgetselectedclass", "mqsetactivequest", "mqsetmenuactivefloatvalue",
    "mqsetmenuactivestringvalue", "mqsetmenuchildfloatvalue", "mqsetmenuchildstringvalue", "mqsetmenuglobalstringvalue", "mqsetmenuglobalfloatvalue",
    "mqsetmessageboxsource", "mquncompletequest", "removemenueventhandler", "setmenueventhandler", "setmouseimage", "setplayerskilladvancesf",
    "setskillgoverningattributef", "setskillspecializationc", "setskillspecializationf", "setskilluseincrementf", "settexteditstring",
    "settrainerskillc", "setworldmapdata", "showgenericmenu", "showlevelupmenu", "showmagicpopupmenu", "showtexteditmenu", "showtrainingmenu",
    "tile_fadefloat", "tile_getfloat", "tile_getinfo", "tile_getname", "tile_getstring", "tile_getvar", "tile_hastrait", "tile_setfloat",
    "tile_setstring", "triggerplayerskillusef", "updatelocalmap", 
    //---------------------------
    //
    // EAX Functions

    "createeaxeffect", "deleteeaxeffect", "disableeax", "eaxcopyeffect", "eaxeffectexists", "eaxeffectsareequal", "eaxgetactiveeffect",
    "eaxnumeffects", "eaxpusheffect", "eaxpopeffect", "eaxremoveallinstances", "eaxremovefirstinstance", "eaxstackisempty", "eaxstacksize",
    "enableeax", "geteaxairabsorptionhf", "geteaxdecayhfratio", "geteaxdecaytime", "geteaxenvironment", "geteaxenvironmentsize",
    "geteaxenvironmentdiffusion", "geteaxreflections", "geteaxreflectionsdelay", "geteaxreverb", "geteaxreverbdelay", "geteaxroom", "geteaxroomhf",
    "geteaxroomrollofffactor", "initializeeax", "iseaxenabled", "iseaxinitialized", "seteaxairabsorptionhf", "seteaxallproperties", "seteaxdecaytime",
    "seteaxdecayhfratio", "seteaxenvironment", "seteaxenvironmentsize", "seteaxenvironmentdiffusion", "seteaxreflections", "seteaxreflectionsdelay",
    "seteaxreverb", "seteaxreverbdelay", "seteaxroom", "seteaxroomhf", "seteaxroomrollofffactor", 
    //---------------------------
    //
    // NetworkPipe

    "networkpipe_createclient", "networkpipe_getdata", "networkpipe_isnewgame", "networkpipe_killclient", "networkpipe_receive",
    "networkpipe_setdata", "networkpipe_send", "networkpipe_startservice", "networkpipe_stopservice",
    //---------------------------
    //
    // NifSe


    "bsfurnituremarkergetpositionrefs", "bsfurnituremarkersetpositionrefs", "getniftypeindex", "niavobjectaddproperty",
    "niavobjectclearcollisionobject", "niavobjectcopycollisionobject", "niavobjectdeleteproperty", "niavobjectgetcollisionmode",
    "niavobjectgetcollisionobject", "niavobjectgetlocalrotation", "niavobjectgetlocalscale", "niavobjectgetlocaltransform",
    "niavobjectgetlocaltranslation", "niavobjectgetnumproperties", "niavobjectgetproperties", "niavobjectgetpropertybytype",
    "niavobjectsetcollisionmode", "niavobjectsetlocalrotation", "niavobjectsetlocalscale", "niavobjectsetlocaltransform",
    "niavobjectsetlocaltranslation", "nialphapropertygetblendstate", "nialphapropertygetdestinationblendfunction",
    "nialphapropertygetsourceblendfunction", "nialphapropertygettestfunction", "nialphapropertygetteststate", "nialphapropertygettestthreshold",
    "nialphapropertygettrianglesortmode", "nialphapropertysetblendstate", "nialphapropertysetdestinationblendfunction",
    "nialphapropertysetsourceblendfunction", "nialphapropertysettestfunction", "nialphapropertysetteststate", "nialphapropertysettestthreshold",
    "nialphapropertysettrianglesortmode", "niextradatagetarray", "niextradatagetname", "niextradatagetnumber", "niextradatagetstring",
    "niextradatasetarray", "niextradatasetname", "niextradatasetnumber", "niextradatasetstring", "nimaterialpropertygetambientcolor",
    "nimaterialpropertygetdiffusecolor", "nimaterialpropertygetemissivecolor", "nimaterialpropertygetglossiness",
    "nimaterialpropertygetspecularcolor", "nimaterialpropertygettransparency", "nimaterialpropertysetambientcolor",
    "nimaterialpropertysetdiffusecolor", "nimaterialpropertysetemissivecolor", "nimaterialpropertysetglossiness",
    "nimaterialpropertysetspecularcolor", "nimaterialpropertysettransparency", "ninodeaddchild", "ninodecopychild", "ninodedeletechild",
    "ninodegetchildbyname", "ninodegetchildren", "ninodegetnumchildren", "niobjectgettype", "niobjectgettypename", "niobjectnetaddextradata",
    "niobjectnetdeleteextradata", "niobjectnetgetextradata", "niobjectnetgetextradatabyname", "niobjectnetgetname", "niobjectnetgetnumextradata",
    "niobjectnetsetname", "niobjecttypederivesfrom", "nisourcetexturegetfile", "nisourcetextureisexternal", "nisourcetexturesetexternaltexture",
    "nistencilpropertygetfacedrawmode", "nistencilpropertygetfailaction", "nistencilpropertygetpassaction", "nistencilpropertygetstencilfunction",
    "nistencilpropertygetstencilmask", "nistencilpropertygetstencilref", "nistencilpropertygetstencilstate", "nistencilpropertygetzfailaction",
    "nistencilpropertysetfacedrawmode", "nistencilpropertysetfailaction", "nistencilpropertysetpassaction", "nistencilpropertysetstencilfunction",
    "nistencilpropertysetstencilmask", "nistencilpropertysetstencilref", "nistencilpropertysetstencilstate", "nistencilpropertysetzfailaction",
    "nitexturingpropertyaddtexturesource", "nitexturingpropertydeletetexturesource", "nitexturingpropertygettexturecenteroffset",
    "nitexturingpropertygettextureclampmode", "nitexturingpropertygettexturecount", "nitexturingpropertygettexturefiltermode",
    "nitexturingpropertygettextureflags", "nitexturingpropertygettexturerotation", "nitexturingpropertygettexturesource",
    "nitexturingpropertygettexturetiling", "nitexturingpropertygettexturetranslation", "nitexturingpropertygettextureuvset",
    "nitexturingpropertyhastexture", "nitexturingpropertysettexturecenteroffset", "nitexturingpropertysettextureclampmode",
    "nitexturingpropertysettexturecount", "nitexturingpropertysettexturefiltermode", "nitexturingpropertysettextureflags",
    "nitexturingpropertysettexturehastransform", "nitexturingpropertysettexturerotation", "nitexturingpropertysettexturetiling",
    "nitexturingpropertysettexturetranslation", "nitexturingpropertysettextureuvset", "nitexturingpropertytexturehastransform",
    "nivertexcolorpropertygetlightingmode", "nivertexcolorpropertygetvertexmode", "nivertexcolorpropertysetlightingmode",
    "nivertexcolorpropertysetvertexmode", "nifclose", "nifgetaltgrip", "nifgetbackshield", "nifgetnumblocks", "nifgetoffhand", "nifgetoriginalpath",
    "nifgetpath", "nifopen", "nifwritetodisk", 
    //------------------------
    //
    // reid


    "getruntimeeditorid", 
    //------------------------
    //
    // runtimedebugger

    "debugbreak", "toggledebugbreaking", 
    //------------------------
    //
    // addActorValues

    "dumpactorvaluec", "dumpactorvaluef", "getactorvaluebasecalcc", "getactorvaluebasecalcf", "getactorvaluecurrentc", "getactorvaluecurrentf",
    "getactorvaluemaxc", "getactorvaluemaxf", "getactorvaluemodc", "getactorvaluemodf", "modactorvaluemodc", "modactorvaluemodf", "setactorvaluemodc",
    "setactorvaluemodf", "dumpavc", "dumpavf", "getavmodc", "getavmodf", "modavmodc", "modavmodf", "setavmodc", "setavmodf", "getavbasecalcc",
    "getavbasecalcf", "getavmaxc", "getavmaxf", "getavcurrentc", "getavcurrent", 
    //---------------------
    //
    // memoryDumper

    "setdumpaddr", "setdumptype", "setfadeamount", "setobjectaddr", "showmemorydump", 
    //---------------------
    //
    // algohol

    "qfromaxisangle", "qfromeuler", "qinterpolate", "qmultquat", "qmultvector3", "qnormalize", "qtoeuler", "v3crossproduct", "v3length",
    "v3normalize", 
    //---------------------
    //
    // soundCommands

    "fademusic", "geteffectsvolume", "getfootvolume", "getmastervolume", "getmusicvolume", "getvoicevolume", "playmusicfile", "seteffectsvolume",
    "setfootvolume", "setmastervolume", "setmusicvolume", "setvoicevolume", 
    //---------------------
    //
    // Enhanced Music Controls

    "emcaddpathtoplaylist", "emccreateplaylist", "emcgetallplaylists", "emcgetafterbattledelay", "emcgetbattledelay", "emcgeteffectsvolume",
    "emcgetfadetime", "emcgetfootvolume", "emcgetmastervolume", "emcgetmaxrestoretime", "emcgetmusicspeed", "emcgetmusictype", "emcgetmusicvolume",
    "emcgetpausetime", "emcgetplaylist", "emcgetplaylisttracks", "emcgettrackname", "emcgettrackduration", "emcgettrackposition", "emcgetvoicevolume",
    "emcisbattleoverridden", "emcismusiconhold", "emcismusicswitching", "emcisplaylistactive", "emcmusicnexttrack", "emcmusicpause",
    "emcmusicrestart", "emcmusicresume", "emcmusicstop", "emcplaylistexists", "emcplaytrack", "emcrestoreplaylist", "emcsetafterbattledelay",
    "emcsetbattledelay", "emcsetbattleoverride", "emcseteffectsvolume", "emcsetfadetime", "emcsetfootvolume", "emcsetmastervolume",
    "emcsetmaxrestoretime", "emcsetmusichold", "emcsetmusicspeed", "emcsetmusicvolume", "emcsetpausetime", "emcsetplaylist", "emcsettrackposition",
    "emcsetmusictype", "emcsetvoicevolume", 
    //---------------------
    //
    // vipcjx

    "vcaddmark", "vcgetfilepath", "vcgethaircolorrgb", "vcgetvaluenumeric", "vcgetvaluestring", "vcismarked", "vcprintini", "vcsetactorstate",
    "vcsethaircolor", "vcsethaircolorrgb", "vcsethaircolorrgb3p", 
    //---------------------
    //
    // cameraCommands

    "cameragetref", "cameralookat", "cameralookatposition", "cameramove", "cameramovetoposition", "camerareset", "camerarotate",
    "camerarotatetoposition", "camerasetref", "camerastoplook", 
    //---------------------
    //
    // obme

    "clearntheibasecost", "clearntheieffectname", "clearntheihandlerparam", "clearntheihostility", "clearntheiiconpath", "clearntheiresistav",
    "clearntheischool", "clearntheivfxcode", "createmgef", "getmagiceffecthandlerc", "getmagiceffecthandlerparamc", "getmagiceffecthostilityc",
    "getntheibasecost", "getntheieffectname", "getntheihandlerparam", "getntheihostility", "getntheiiconpath", "getntheiresistav", "getntheischool",
    "getntheivfxcode", "resolvemgefcode", "setmagiceffecthandlerc", "setmagiceffecthandlerintparamc", "setmagiceffecthandlerrefparamc",
    "setmagiceffecthostilityc", "setntheibasecost", "setntheieffectname", "setntheihandlerintparam", "setntheihandlerrefparam", "setntheihostility",
    "setntheiiconpath", "setntheiresistav", "setntheischool", "setntheivfxcode", 
    //---------------------
    //
    // conscribe

    "deletelinesfromlog", "getloglinecount", "getregisteredlognames", "readfromlog", "registerlog", "scribe", "unregisterlog", 
    //---------------------
    //
    // systemDialog

    "sysdlg_browser", "sysdlg_readbrowser", "sysdlg_textinput", 
    //---------------------
    //
    // clearspellicon

    "clearspellicon", "hasassignedicon", "overwritespellicon", "setspellicon", 
    //---------------------
    //
    // HUDActiveEffectLimit

    "gethudactiveeffectlimit", "sethudactiveeffectlimit", 
    //---------------------
    //
    // lcd

    "lcd_addinttobuffer", "lcd_addtexttobuffer", "lcd_clearrect", "lcd_cleartextbuffer", "lcd_close", "lcd_drawcircle", "lcd_drawgrid", "lcd_drawint",
    "lcd_drawline", "lcd_drawprogressbarh", "lcd_drawprogressbarv", "lcd_drawprogresscircle", "lcd_drawrect", "lcd_drawtext", "lcd_drawtextbuffer",
    "lcd_drawtexture", "lcd_flush", "lcd_getbuttonstate", "lcd_getheight", "lcd_getwidth", "lcd_ismulti", "lcd_isopen", "lcd_open", "lcd_refresh",
    "lcd_savebuttonsnapshot", "lcd_scale", "lcd_setfont", 
    //---------------------

  };

};
}
extern "C" {

void *tree_sitter_obl_external_scanner_create() {
  return new Scanner();
  /* return NULL; */
}

bool tree_sitter_obl_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_obl_external_scanner_serialize(void *payload, char *state) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(state);
}

void tree_sitter_obl_external_scanner_deserialize(void *payload, const char *state, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(state, length);
}

void tree_sitter_obl_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
