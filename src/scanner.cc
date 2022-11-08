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
    if (valid_symbols[FUNCTION] && !valid_symbols[TERMINATOR]) {
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
        } else {return false;}
      } else {
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
      lexer->mark_end(lexer);
      advance(lexer);
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
    "abs", "acos", "activate", "activate2", "actorvaluetocode", "actorvaluetostring", "actorvaluetostringc", "addachievement", "addeffectitem",
    "addeffectitemc", "addflames", "addfulleffectitem", "addfulleffectitemc", "additem", "additemns", "addmagiceffectcounter",
    "addmagiceffectcounterc", "addmecounter", "addmecounterc", "addscriptpackage", "addspell", "addspellns", "addtoleveledlist", "addtopic",
    "advancepclevel", "advancepcskill", "advskill", "ahammerkey", "animpathincludes", "appendtoname", "ar_append", "ar_badnumericindex",
    "ar_badstringindex", "ar_construct", "ar_copy", "ar_customsort", "ar_deepcopy", "ar_dump", "ar_dumpid", "ar_erase", "ar_find", "ar_first",
    "ar_haskey", "ar_insert", "ar_insertrange", "getactormaxswimbreath", "copyrace", "ar_keys", "ar_last", "ar_list", "ar_map", "ar_next", "ar_null",
    "ar_prev", "ar_range", "ar_resize", "ar_size", "ar_sort", "ar_sortalpha", "asciitochar", "asin", "atan", "atan2", "autosave", "avstring",
    "calcleveleditem", "calclevitemnr", "calclevitems", "cancastpower", "cancorpsecheck", "canfasttravelfromworld", "canhaveflames",
    "canpaycrimegold", "cantraveltomapmarker", "cast", "ceil", "chartoascii", "clearactivequest", "clearhotkey", "clearleveledlist", "clearownership",
    "clearownershipt", "clearplayerslastriddenhorse", "clickmenubutton", "cloneform", "closeallmenus", "closecurrentobliviongate",
    "closeobliviongate", "closetextinput", "colvec", "comparefemalebipedpath", "comparefemalegroundpath", "comparefemaleiconpath", "compareiconpath",
    "comparemalebipedpath", "comparemalegroundpath", "comparemaleiconpath", "comparemodelpath", "comparename", "comparenames", "comparescripts",
    "completequest", "con_cal", "con_getinisetting", "con_hairtint", "con_loadgame", "con_modwatershader", "con_playerspellbook", "con_quitgame",
    "con_refreshini", "con_runmemorypass", "con_save", "con_saveini", "con_setcamerafov", "con_setclipdist", "con_setfog", "con_setgamesetting",
    "con_setgamma", "con_sethdrparam", "con_setimagespaceglow", "con_setinisetting", "con_setskyparam", "con_settargetrefraction",
    "con_settargetrefractionfire", "con_sexchange", "con_tcl", "con_tfc", "con_tgm", "con_toggleai", "con_togglecombatai", "con_toggledetection",
    "con_togglemapmarkers", "con_togglemenus", "con_waterdeepcolor", "con_waterreflectioncolor", "con_watershallowcolor", "copyalleffectitems",
    "copyeyes", "copyfemalebipedpath", "copyfemalegroundpath", "copyfemaleiconpath", "copyhair", "copyiconpath", "copyir", "copymalebipedpath",
    "copymalegroundpath", "copymaleiconpath", "copymodelpath", "copyname", "copyntheffectitem", "cos", "cosh", "createfullactorcopy", "createtempref",
    "creaturehasnohead", "creaturehasnoleftarm", "creaturehasnomovement", "creaturehasnorightarm", "creaturenocombatinwater",
    "creatureusesweaponandshield", "dacos", "dasin", "datan", "datan2", "dcos", "dcosh", "debugprint", "deletefrominputtext", "deletefullactorcopy",
    "deletereference", "disable", "disablecontrol", "disablekey", "disablelinkedpathpoints", "disablemouse", "disableplayercontrols", "dispatchevent",
    "dispel", "dispelallspells", "dispelnthactiveeffect", "dispelnthae", "drop", "dropme", "dsin", "dsinh", "dtan", "dtanh", "duplicateallitems",
    "duplicatenpcstats", "enable", "enablecontrol", "enablefasttravel", "enablekey", "enablelinkedpathpoints", "enablemouse", "enableplayercontrols",
    "equipitem", "equipitem2", "equipitem2ns", "equipitemns", "equipitemsilent", "equipme", "essentialdeathreload", "eval", "evaluatepackage",
    "eventhandlerexist", "evp", "exp", "factionhasspecialcombat", "fileexists", "floor", "fmod", "forceactorvalue", "forceav",
    "forcecloseobliviongate", "forcecolumnvector", "forceflee", "forcerowvector", "forcetakecover", "forceweather", "generateidentitymatrix",
    "generaterotationmatrix", "generatezeromatrix", "getactionref", "getactiveeffectcasters", "getactiveeffectcodes", "getactiveeffectcount",
    "getactivemenucomponentid", "getactivemenufilter", "getactivemenumode", "getactivemenuobject", "getactivemenuref", "getactivemenuselection",
    "getactivequest", "getactiveuicomponentfullname", "getactiveuicomponentid", "getactiveuicomponentname", "getactoralpha", "getactorbaselevel",
    "getactorlightamount", "getactormaxlevel", "getactorminlevel", "getactorpackages", "getactorsoullevel", "getactorvalue", "getactorvaluec",
    "getalarmed", "getalchmenuapparatus", "getalchmenuingredient", "getalchmenuingredientcount", "getallies", "getallmodlocaldata", "getaltcontrol2",
    "getamountsoldstolen", "getangle", "getapbowench", "getapench", "getapparatustype", "getappoison", "getarmorar", "getarmorrating",
    "getarmorratingupperbody", "getarmortype", "getarrayvariable", "getarrowprojectilebowenchantment", "getarrowprojectileenchantment",
    "getarrowprojectilepoison", "getattackdamage", "getattacked", "getavskillmastery", "getavskillmasteryc", "getfactions",
    "getgroundsurfacematerial", "getav", "getavc", "getavforbaseactor", "getavforbaseactorc", "getavmod", "getavmodc", "getbartergold",
    "getbarteritem", "getbarteritemquantity", "getbaseactorvalue", "getbaseactorvaluec", "getbaseav", "getbaseav2", "getbaseav2c", "getbaseav3",
    "getbaseav3c", "getbaseitems", "getbaseobject", "getbipediconpath", "getbipedmodelpath", "getbipedslotmask", "getbirthsignspells",
    "getbookcantbetaken", "getbookisscroll", "getbooklength", "getbookskilltaught", "getbooktext", "getboundingbox", "getboundingradius",
    "getbuttonpressed", "getcalcalllevels", "getcalceachincount", "getcallingscript", "getcellbehavesasexterior", "getcellchanged", "getcellclimate",
    "getcelldetachtime", "getcellfactionrank", "getcelllighting", "getcellmusictype", "getcellnorthrotation", "getcellresethours", "getcellwatertype",
    "getchancenone", "getclass", "getclassattribute", "getclassdefaultmatch", "getclassmenuhighlightedclass", "getclassmenuselectedclass",
    "getclassskill", "getclassskills", "getclassspecialization", "getclimatehasmasser", "getclimatehassecunda", "getclimatemoonphaselength",
    "getclimatesunrisebegin", "getclimatesunriseend", "getclimatesunsetbegin", "getclimatesunsetend", "getclimatevolatility", "getclosesound",
    "getclothingvalue", "getcloudspeedlower", "getcloudspeedupper", "getcombatspells", "getcombatstyle", "getcombatstyleacrobaticsdodgechance",
    "getcombatstyleattackchance", "getcombatstyleattackduringblockmult", "getcombatstyleattacknotunderattackmult", "getcombatstyleattackskillmodbase",
    "getcombatstyleattackskillmodmult", "getcombatstyleattackunderattackmult", "getcombatstyleblockchance", "getcombatstyleblocknotunderattackmult",
    "getcombatstyleblockskillmodbase", "getcombatstyleblockskillmodmult", "getcombatstyleblockunderattackmult", "getcombatstylebuffstandoffdist",
    "getcombatstyledodgebacknotunderattackmult", "getcombatstyledodgebacktimermax", "getcombatstyledodgebacktimermin",
    "getcombatstyledodgebackunderattackmult", "getcombatstyledodgechance", "getcombatstyledodgefatiguemodbase", "getcombatstyledodgefatiguemodmult",
    "getcombatstyledodgefwattackingmult", "getcombatstyledodgefwnotattackingmult", "getcombatstyledodgefwtimermax", "getcombatstyledodgefwtimermin",
    "getcombatstyledodgelrchance", "getcombatstyledodgelrtimermax", "getcombatstyledodgelrtimermin", "getcombatstyledodgenotunderattackmult",
    "getcombatstyledodgeunderattackmult", "getcombatstyleencumberedspeedmodbase", "getcombatstyleencumberedspeedmodmult",
    "getcombatstylefleeingdisabled", "getcombatstylegroupstandoffdist", "getcombatstyleh2hbonustoattack", "getcombatstyleholdtimermax",
    "getcombatstyleholdtimermin", "getcombatstyleidletimermax", "getcombatstyleidletimermin", "getcombatstyleignorealliesinarea",
    "getcombatstylekobonustoattack", "getcombatstylekobonustopowerattack", "getcombatstylemeleealertok", "getcombatstylepowerattackchance",
    "getcombatstylepowerattackfatiguemodbase", "getcombatstylepowerattackfatiguemodmult", "getcombatstyleprefersranged",
    "getcombatstylerangedstandoffdist", "getcombatstylerangemaxmult", "getcombatstylerangeoptimalmult", "getcombatstylerejectsyields",
    "getcombatstylerushattackchance", "getcombatstylerushattackdistmult", "getcombatstylestaggerbonustoattack",
    "getcombatstylestaggerbonustopowerattack", "getcombatstyleswitchdistmelee", "getcombatstyleswitchdistranged", "getcombatstylewillyield",
    "getcombattarget", "getcompletedquests", "getcontainer", "getcontainermenuview", "getcontainerrespawns", "getcontrol", "getcreaturebasescale",
    "getcreaturecombatskill", "getcreatureflies", "getcreaturemagicskill", "getcreaturemodelpaths", "getcreaturereach", "getcreaturesoullevel",
    "getcreaturesound", "getcreaturesoundbase", "getcreaturestealthskill", "getcreatureswims", "getcreaturetype", "getcreaturewalks", "getcrime",
    "getcrimegold", "getcrimeknown", "getcrosshairref", "getcurrentaipackage", "getcurrentaiprocedure", "getcurrentcharge", "getcurrentclimateid",
    "getcurrenteditorpackage", "getcurrenteventname", "getcurrenthealth", "getcurrentpackage", "getcurrentpackageprocedure", "getcurrentquests",
    "getcurrentregion", "getcurrentregions", "getcurrentscript", "getcurrentsoullevel", "getcurrenttime", "getcurrentweatherid",
    "getcurrentweatherpercent", "getcursorpos", "getdayofweek", "getdead", "getdeadcount", "getdebugselection", "getdescription", "getdestroyed",
    "getdetected", "getdetectionlevel", "getdisabled", "getdisposition", "getdistance", "getdoordefaultopen", "getdoorteleportrot",
    "getdoorteleportx", "getdoorteleporty", "getdoorteleportz", "geteditorid", "geteditorsize", "getenchantment", "getenchantmentcharge",
    "getenchantmentcost", "getenchantmenttype", "getenchmenubaseitem", "getenchmenuenchitem", "getenchmenusoulgem", "getequipmentslot",
    "getequipmentslotmask", "getequipped", "getequippedcurrentcharge", "getequippedcurrenthealth", "getequippeditems", "getequippedobject",
    "getequippedtorchtimeleft", "getequippedweaponpoison", "geteyes", "getfactionrank", "getfactionrankdifference", "getfactionreaction",
    "getfalltimer", "getfatiguepercentage", "getfirstref", "getfirstrefincell", "getfogdayfar", "getfogdaynear", "getfognightfar", "getfognightnear",
    "getfollowers", "getforcerun", "getforcesneak", "getformfrommod", "getformidstring", "getfps", "getfriendhit", "getfullgoldvalue",
    "getfurnituremarkerid", "getgamedifficulty", "getgameloaded", "getgamerestarted", "getgamesetting", "getglobalvalue", "getgodmode", "getgold",
    "getgoldvalue", "getgridstoload", "getgs", "gethair", "gethaircolor", "gethdrvalue", "getheadingangle", "gethidesamulet", "gethidesrings",
    "gethighactors", "gethorse", "gethotkeyitem", "geticonpath", "getidledoneonce", "getignorefriendlyhits", "getignoresresistance", "getincell",
    "getincellparam", "getinfaction", "getingredient", "getingredientchance", "getinputtext", "getinsamecell", "getinventoryobject",
    "getinvestmentgold", "getinvrefsforitem", "getinworldspace", "getisalerted", "getisclass", "getisclassdefault", "getiscreature",
    "getiscurrentpackage", "getiscurrentweather", "getisghost", "getisid", "getisplayablerace", "getisplayerbirthsign", "getisrace", "getisreference",
    "getissex", "getisuseditem", "getisuseditemtype", "getitemcount", "getitems", "getkeyname", "getkeypress", "getknockedstate",
    "getlastcreatedpotion", "getlastcreatedspell", "getlastenchanteditem", "getlastsigilstonecreateditem", "getlastsigilstoneenchanteditem",
    "getlastss", "getlastsscreated", "getlastssitem", "getlasttransactionitem", "getlasttransactionquantity", "getlastuniquecreatedpotion",
    "getlastusedsigilstone", "getlevel", "getleveledspells", "getlevitembylevel", "getlevitemindexbyform", "getlevitemindexbylevel",
    "getlevcreaturetemplate", "getmenufloatvalue", "getmenustringvalue", "getqmmaximum", "getqmitem", "getqmcurrent", "getrequiredskillexpc",
    "getlightduration", "getlightningfrequency", "getlightradius", "getlightrgb", "getlinkeddoor", "getlocalgravity", "getlocked", "getlocklevel",
    "getloopsound", "getlos", "getlowactors", "getluckmodifiedskill", "getmagiceffectareasound", "getmagiceffectareasoundc",
    "getmagiceffectbarterfactor", "getmagiceffectbarterfactorc", "getmagiceffectbasecost", "getmagiceffectbasecostc", "getmagiceffectboltsound",
    "getmagiceffectboltsoundc", "getmagiceffectcastingsound", "getmagiceffectcastingsoundc", "getmagiceffectchars", "getmagiceffectcharsc",
    "getmagiceffectcode", "getmagiceffectcounters", "getmagiceffectcountersc", "getmagiceffectenchantfactor", "getmagiceffectenchantfactorc",
    "getmagiceffectenchantshader", "getmagiceffectenchantshaderc", "getmagiceffecthitshader", "getmagiceffecthitshaderc", "getmagiceffecthitsound",
    "getmagiceffecthitsoundc", "getmagiceffecticon", "getmagiceffecticonc", "getmagiceffectlight", "getmagiceffectlightc", "getmagiceffectmodel",
    "getmagiceffectmodelc", "getmagiceffectname", "getmagiceffectnamec", "getmagiceffectnumcounters", "getmagiceffectnumcountersc",
    "getmagiceffectotheractorvalue", "getmagiceffectotheractorvaluec", "getmagiceffectprojectilespeed", "getmagiceffectprojectilespeedc",
    "getmagiceffectresistvalue", "getmagiceffectresistvaluec", "getmagiceffectschool", "getmagiceffectschoolc", "getmagiceffectusedobject",
    "getmagiceffectusedobjectc", "getmagicitemeffectcount", "getmagicitemtype", "getmagicprojectilespell", "getmapmarkers", "getmapmarkertype",
    "getmapmenumarkername", "getmapmenumarkerref", "getmaxav", "getmaxavc", "getmaxlevel", "getmeareasound", "getmeareasoundc", "getmebarterc",
    "getmebasecost", "getmebasecostc", "getmeboltsound", "getmeboltsoundc", "getmecastingsound", "getmecastingsoundc", "getmecounters",
    "getmecountersc", "getmeebarter", "getmeebarterc", "getmeenchant", "getmeenchantc", "getmeenchantshader", "getmeenchantshaderc", "getmehitshader",
    "getmehitshaderc", "getmehitsound", "getmehitsoundc", "getmeicon", "getmeiconc", "getmelight", "getmelightc", "getmemodel", "getmemodelc",
    "getmename", "getmenamec", "getmenuhastrait", "getmenumcounters", "getmenumcountersc", "getmeotheractorvalue", "getmeotheractorvaluec",
    "getmeprojspeed", "getmeprojspeedc", "getmerchantcontainer", "getmeresistvalue", "getmeresistvaluec", "getmeschool", "getmeschoolc",
    "getmessageboxtype", "getmeusedobject", "getmeusedobjectc", "getmiddlehighactors", "getmieffectcount", "getminlevel", "getmitype", "getmodelpath",
    "getmodindex", "getmodlocaldata", "getmousebuttonpress", "getmousebuttonsswapped", "getmpspell", "getname", "getnextref", "getnorumors",
    "getnthacitveeffectmagnitude", "getnthactiveeffectactorvalue", "getnthactiveeffectbounditem", "getnthactiveeffectcaster",
    "getnthactiveeffectcode", "getnthactiveeffectdata", "getnthactiveeffectduration", "getnthactiveeffectenchantobject",
    "getnthactiveeffectmagicenchantobject", "getnthactiveeffectmagicitem", "getnthactiveeffectmagicitemindex", "getnthactiveeffectmagnitude",
    "getnthactiveeffectsummonref", "getnthactiveeffecttimeelapsed", "getnthaeav", "getnthaebounditem", "getnthaecaster", "getnthaecode",
    "getnthaedata", "getnthaeduration", "getnthaeindex", "getnthaemagicenchantobject", "getnthaemagicitem", "getnthaemagnitude", "getnthaesummonref",
    "getnthaetime", "getnthchildref", "getnthdetectedactor", "getntheffectitem", "getntheffectitemactorvalue", "getntheffectitemarea",
    "getntheffectitemcode", "getntheffectitemduration", "getntheffectitemmagnitude", "getntheffectitemname", "getntheffectitemrange",
    "getntheffectitemscript", "getntheffectitemscriptname", "getntheffectitemscriptschool", "getntheffectitemscriptvisualeffect", "getntheiarea",
    "getntheiav", "getntheicode", "getntheiduration", "getntheimagnitude", "getntheiname", "getntheirange", "getntheiscript", "getntheisschool",
    "getntheisvisualeffect", "getnthexplicitref", "getnthfaction", "getnthfactionrankname", "getnthfollower", "getnthlevitem", "getnthlevitemcount",
    "getnthlevitemlevel", "getnthmagiceffectcounter", "getnthmagiceffectcounterc", "getnthmecounter", "getnthmecounterc", "getnthmodname",
    "getnthpackage", "getnthplayerspell", "getnthracebonusskill", "getnthracespell", "getnthspell", "getnumchildrefs", "getnumdetectedactors",
    "getnumericinisetting", "getnumexplicitrefs", "getnumfactions", "getnumfollowers", "getnumitems", "getnumkeyspressed", "getnumlevitems",
    "getnumloadedmods", "getnumloadedplugins", "getnummousebuttonspressed", "getnumpackages", "getnumranks", "getnumrefs", "getnumrefsincell",
    "getobjectcharge", "getobjecthealth", "getobjecttype", "getobliviondirectory", "getobserevision", "getobseversion", "getoffersservicesnow",
    "getopenkey", "getopensound", "getopenstate", "getowner", "getowningfactionrank", "getowningfactionrequiredrank", "getpackageallowfalls",
    "getpackageallowswimming", "getpackagealwaysrun", "getpackagealwayssneak", "getpackagearmorunequipped", "getpackagecontinueifpcnear",
    "getpackagedata", "getpackagedefensivecombat", "getpackagelocationdata", "getpackagelockdoorsatend", "getpackagelockdoorsatlocation",
    "getpackagelockdoorsatstart", "getpackagemustcomplete", "getpackagemustreachlocation", "getpackagenoidleanims", "getpackageoffersservices",
    "getpackageonceperday", "getpackagescheduledata", "getpackageskipfalloutbehavior", "getpackagetarget", "getpackagetargetdata",
    "getpackageunlockdoorsatend", "getpackageunlockdoorsatlocation", "getpackageunlockdoorsatstart", "getpackageusehorse",
    "getpackageweaponsunequipped", "getparentcell", "getparentcellowner", "getparentcellowningfactionrank", "getparentcellowningfactionrequiredrank",
    "getparentcellwaterheight", "getparentref", "getparentworldspace", "getpathnodelinkedref", "getpathnodepos", "getpathnodesinradius",
    "getpathnodesinrect", "getpcattributebonus", "getpcattributebonusc", "getpcexpelled", "getpcfactionattack", "getpcfactionmurder",
    "getpcfactionsteal", "getpcfactionsubmitauthority", "getpcfame", "getpcinfaction", "getpcinfamy", "getpcisclass", "getpcisrace", "getpcissex",
    "getpclastdroppeditem", "getpclastdroppeditemref", "getpclasthorse", "getpclastloaddoor", "getpcmajorskillups", "getpcmiscstat",
    "getpcmovementspeedmodifier", "getpcsleephours", "getpcspelleffectivenessmodifier", "getpctrainingsessionsused", "getpersuasionnumber",
    "getplayerbirthsign", "getplayercontrolsdisabled", "getplayerhaslastriddenhorse", "getplayerinseworld", "getplayerskilladvances",
    "getplayerskilladvancesc", "getplayerskilluse", "getplayerskillusec", "getplayerslastactivatedloaddoor", "getplayerslastriddenhorse",
    "getplayerspell", "getplayerspellcount", "getpluginversion", "getplyerspellcount", "getpos", "getprocesslevel", "getprojectile",
    "getprojectiledistancetraveled", "getprojectilelifetime", "getprojectilesource", "getprojectilespeed", "getprojectiletype", "getqr", "getquality",
    "getquantitymenucurrentquantity", "getquantitymenuitem", "getquantitymenumaximumquantity", "getquestrunning", "getquestvariable", "getrace",
    "getraceattribute", "getraceattributec", "getracedefaulthair", "getraceeyes", "getracehairs", "getracereaction", "getracescale",
    "getraceskillbonus", "getraceskillbonusc", "getracespellcount", "getracevoice", "getraceweight", "getrandompercent", "getrawformidstring",
    "getrefcount", "getrefvariable", "getrequiredskillexp", "getrestrained", "getrider", "getscale", "getscript", "getscriptactiveeffectindex",
    "getscriptvariable", "getsecondspassed", "getselectedspells", "getself", "getservicesmask", "getshouldattack", "getsigilstoneuses", "getsitting",
    "getskillgoverningattribute", "getskillgoverningattributec", "getskillspecialization", "getskilluseincrement", "getskilluseincrementc",
    "getskillspecializationc", "getsoundattenuation", "getstageentries", "getstageids", "gettailmodelpath", "isclassattributec", "ismiscitem",
    "getsleeping", "getsoulgemcapacity", "getsoullevel", "getsoundplaying", "getsourcemodindex", "getspecialanims", "getspellareaeffectignoreslos",
    "getspellcount", "getspelldisallowabsorbreflect", "getspelleffectiveness", "getspellexplodeswithnotarget", "getspellhostile",
    "getspellimmunetosilence", "getspellmagickacost", "getspellmasterylevel", "getspellpcstart", "getspells", "getspellschool",
    "getspellscripteffectalwaysapplies", "getspelltype", "getstage", "getstagedone", "getstartingangle", "getstartingpos", "getstringgamesetting",
    "getstringinisetting", "getsundamage", "getsunglare", "gettalkedtopc", "gettalkedtopcparam", "gettargets", "gettelekinesisref", "getteleportcell",
    "getteleportcellname", "getterrainheight", "gettextinputcontrolpressed", "gettextinputcursorpos", "gettexturepath", "gettilechildren",
    "gettiletraits", "gettimedead", "gettimeleft", "gettotalactiveeffectmagnitude", "gettotalactiveeffectmagnitudec", "gettotalaeabilitymagnitude",
    "gettotalaeabilitymagnitudec", "gettotalaealchemymagnitude", "gettotalaealchemymagnitudec", "gettotalaeallspellsmagnitude",
    "gettotalaeallspellsmagnitudec", "gettotalaediseasemagnitude", "gettotalaediseasemagnitudec", "gettotalaeenchantmentmagnitude",
    "gettotalaeenchantmentmagnitudec", "gettotalaelesserpowermagnitude", "gettotalaelesserpowermagnitudec", "gettotalaemagnitude",
    "gettotalaemagnitudec", "gettotalaenonabilitymagnitude", "gettotalaenonabilitymagnitudec", "gettotalaepowermagnitude",
    "gettotalaepowermagnitudec", "gettotalaespellmagnitude", "gettotalaespellmagnitudec", "gettotalpcattributebonus", "gettotalpersuasionnumber",
    "gettrainerlevel", "gettrainerskill", "gettransactioninfo", "gettransdelta", "gettravelhorse", "gettrespasswarninglevel", "getunconscious",
    "getuseditemactivate", "getuseditemlevel", "getusedpowers", "getusertime", "getvampire", "getvariable", "getvelocity", "getverticalvelocity",
    "getwalkspeed", "getwaterheight", "getwatershader", "getweahtercloudspeedupper", "getweaponanimtype", "getweaponreach", "getweaponskilltype",
    "getweaponspeed", "getweapontype", "getweatherclassification", "getweathercloudspeedlower", "getweathercloudspeedupper", "getweathercolor",
    "getweatherfogdayfar", "getweatherfogdaynear", "getweatherfognightfar", "getweatherfognightnear", "getweatherhdrvalue",
    "getweatherlightningfrequency", "getweatheroverride", "getweathersundamage", "getweathersunglare", "getweathertransdelta", "getweatherwindspeed",
    "getweight", "getwindspeed", "getworldparentworld", "getworldspaceparentworldspace", "globalvariableexists", "gotojail", "hammerkey",
    "hasbeenpickedup", "haseffectshader", "hasflames", "haslowlevelprocessing", "hasmagiceffect", "hasmodel", "hasname", "hasnopersuasion",
    "hasspell", "hastail", "hasvampirefed", "hasvariable", "haswater", "holdkey", "iconpathincludes", "identitymat", "incrementplayerskilluse",
    "incrementplayerskillusec", "insertininputtext", "isactionref", "isactivatable", "isactivator", "isactor", "isactoravictim", "isactordetected",
    "isactorevil", "isactorrespawning", "isactorsaioff", "isactorusingatorch", "isalchemyitem", "isammo", "isanimgroupplaying", "isanimplayer",
    "isanimplaying", "isapparatus", "isarmor", "isattacking", "isautomaticdoor", "isbartermenuactive", "isbipediconpathvalid",
    "isbipedmodelpathvalid", "isblocking", "isbook", "iscasting", "iscellowner", "iscellpublic", "isclassattribute", "isclassskill", "isclassskillc",
    "isclonedform", "isclothing", "iscloudy", "isconsoleopen", "iscontainer", "iscontinuingpackagepcnear", "iscontrol", "iscontroldisabled",
    "iscontrolpressed", "iscreature", "iscreaturebiped", "iscurrentfurnitureobj", "iscurrentfurnitureref", "isdigit", "isdodging", "isdoor",
    "isequipped", "isessential", "isfacingup", "isfactionevil", "isfactionhidden", "isfemale", "isflora", "isflying", "isfood", "isformvalid",
    "isfurniture", "isgamemessagebox", "isglobalcollisiondisabled", "isguard", "isharvested", "ishiddendoor", "ishorsestolen", "isiconpathvalid",
    "isidleplaying", "isinair", "isincombat", "isindangerouswater", "isingredient", "isininterior", "isinmyownedcell", "isinoblivion", "isjumping",
    "iskey", "iskeydisabled", "iskeypressed", "iskeypressed2", "iskeypressed3", "isleftup", "isletter", "islight", "islightcarriable", "isloaddoor",
    "ismagiceffectcanrecover", "ismagiceffectcanrecoverc", "ismagiceffectdetrimental", "ismagiceffectdetrimentalc", "ismagiceffectforenchanting",
    "ismagiceffectforenchantingc", "ismagiceffectforspellmaking", "ismagiceffectforspellmakingc", "ismagiceffecthostile", "ismagiceffecthostilec",
    "ismagiceffectmagnitudepercent", "ismagiceffectmagnitudepercentc", "ismagiceffectonselfallowed", "ismagiceffectonselfallowedc",
    "ismagiceffectontargetallowed", "ismagiceffectontargetallowedc", "ismagiceffectontouchallowed", "ismagiceffectontouchallowedc",
    "ismagicitemautocalc", "ismajor", "ismajorc", "ismapmarkervisible", "ismecanrecover", "ismecanrecoverc", "ismedetrimental", "ismedetrimentalc",
    "ismeforenchanting", "ismeforenchantingc", "ismeforspellmaking", "ismeforspellmakingc", "ismehostile", "ismehostilec", "ismemagnitudepercent",
    "ismemagnitudepercentc", "ismeonselfallowed", "ismeonselfallowedc", "ismeontargetallowed", "ismeontargetallowedc", "ismeontouchallowed",
    "ismeontouchallowedc", "isminimalusedoor", "ismodelpathvalid", "ismodloaded", "ismovingbackward", "ismovingforward", "ismovingleft",
    "ismovingright", "isnaked", "isnthactiveeffectapplied", "isntheffectitemscripted", "isntheffectitemscripthostile", "isntheishostile",
    "isobliviongate", "isoblivioninterior", "isoblivionworld", "isofflimits", "isonground", "isowner", "ispathnodedisabled", "ispcamurderer",
    "ispcleveloffset", "ispcsleeping", "ispersistent", "isplayable", "isplayable2", "isplayerinjail", "isplayermovingintonewspace",
    "isplayerslastriddenhorse", "ispleasant", "isplugininstalled", "ispoison", "ispotion", "ispowerattacking", "isprintable", "ispunctuation",
    "isquestcomplete", "isquestitem", "isracebonusskill", "isracebonusskillc", "israceplayable", "israining", "isrecoiling", "isrefdeleted",
    "isreference", "isrefessential", "isridinghorse", "isrunning", "isscripted", "isshieldout", "issigilstone", "issneaking", "issnowing",
    "issoulgem", "isspellhostile", "isspelltarget", "isstaggered", "issummonable", "isswimming", "istaken", "istalking", "istextinputinuse",
    "isthirdperson", "istimepassing", "istorchout", "istrespassing", "isturnarrest", "isturningleft", "isturningright", "isunderwater",
    "isunsaferespawns", "isuppercase", "iswaiting", "isweapon", "isweaponout", "isxbox", "isyielding", "kill", "killactor", "killallactors",
    "leftshift", "linktodoor", "loadgameex", "lock", "log", "log10", "logicaland", "logicalnot", "logicalor", "logicalxor", "look", "loopgroup",
    "magiceffectcodefromchars", "magiceffectfromchars", "magiceffectfromcode", "magiceffectfxpersists", "magiceffectfxpersistsc",
    "magiceffecthasnoarea", "magiceffecthasnoareac", "magiceffecthasnoduration", "magiceffecthasnodurationc", "magiceffecthasnohiteffect",
    "magiceffecthasnohiteffectc", "magiceffecthasnoingredient", "magiceffecthasnoingredientc", "magiceffecthasnomagnitude",
    "magiceffecthasnomagnitudec", "magiceffectusesarmor", "magiceffectusesarmorc", "magiceffectusesattribute", "magiceffectusesattributec",
    "magiceffectusescreature", "magiceffectusescreaturec", "magiceffectusesotheractorvalue", "magiceffectusesotheractorvaluec",
    "magiceffectusesskill", "magiceffectusesskillc", "magiceffectusesweapon", "magiceffectusesweaponc", "magichaseffect", "magichaseffectc",
    "magicitemhaseffect", "magicitemhaseffectcode", "magicitemhaseffectcount", "magicitemhaseffectcountc", "magicitemhaseffectcountcode",
    "magicitemhaseffectitemscript", "matadd", "matchpotion", "matinv", "matmult", "matrixadd", "matrixdeterminant", "matrixinvert", "matrixmultiply",
    "matrixrref", "matrixscale", "matrixsubtract", "matrixtrace", "matrixtranspose", "matscale", "matsubtract", "mecodefromchars", "mefxpersists",
    "mefxpersistsc", "mehasnoarea", "mehasnoareac", "mehasnoduration", "mehasnodurationc", "mehasnohiteffect", "mehasnohiteffectc",
    "mehasnoingredient", "mehasnoingredientc", "mehasnomagnitude", "mehasnomagnitudec", "menuholdkey", "menumode", "menureleasekey", "menutapkey",
    "message", "messagebox", "messageboxex", "messageex", "meusesarmor", "meusesarmorc", "meusesattribute", "meusesattributec", "meusescreature",
    "meusescreaturec", "meusesotheractorvalue", "meusesotheractorvaluec", "meusesskill", "meusesskillc", "meusesweapon", "meusesweaponc",
    "modactorvalue", "modactorvalue2", "modactorvaluec", "modamountsoldstolen", "modarmorar", "modattackdamage", "modav", "modav2", "modavc",
    "modavmod", "modavmodc", "modbartergold", "modcrimegold", "modcurrentcharge", "moddisposition", "modelpathincludes", "modenchantmentcharge",
    "modenchantmentcost", "modequippedcurrentcharge", "modequippedcurrenthealth", "modfactionrank", "modfactionreaction", "modfemalebipedpath",
    "modfemalegroundpath", "modfemaleiconpath", "modgoldvalue", "modiconpath", "modlocaldataexists", "modmalebipedpath", "modmalegroundpath",
    "modmaleiconpath", "modmodelpath", "modname", "modnthactiveeffectmagnitude", "modnthaemagnitude", "modntheffectitemarea",
    "modntheffectitemduration", "modntheffectitemmagnitude", "modntheffectitemscriptname", "modntheiarea", "modntheiduration", "modntheimagnitude",
    "modntheisname", "modobjectcharge", "modobjecthealth", "modpca", "modpcattribute", "modpcfame", "modpcinfamy", "modpcmiscstat",
    "modpcmovementspeed", "modpcs", "modpcskill", "modpcspelleffectiveness", "modplayerskillexp", "modplayerskillexpc", "modquality", "modscale",
    "modsigilstoneuses", "modspellmagickacost", "modweaponreach", "modweaponspeed", "modweight", "movemousex", "movemousey", "movetextinputcursor",
    "moveto", "movetomarker", "nameincludes", "numtohex", "offersapparatus", "offersarmor", "offersbooks", "offersclothing", "offersingredients",
    "offerslights", "offersmagicitems", "offersmiscitems", "offerspotions", "offersrecharging", "offersrepair", "offersservicesc", "offersspells",
    "offerstraining", "offersweapons", "oncontroldown", "onkeydown", "opentextinput", "outputlocalmappicturesoverride", "parentcellhaswater",
    "overrideactorswimbreath", "setactormaxswimbreath", "setactorswimbreath", "setcalcalllevels", "setcellmusictype", "setcreaturetype",
    "pathedgeexists", "payfine", "payfinethief", "pcb", "pickidle", "placeatme", "playbink", "playgroup", "playidle", "playmagiceffectvisuals",
    "playmagicshadervisuals", "playsound", "playsound3d", "pms", "positioncell", "positionworld", "pow", "preloadmagiceffect", "print",
    "printactivetileinfo", "printc", "printd", "printtileinfo", "printtoconsole", "purgecellbuffers", "pushactoraway", "questexists", "racos", "rand",
    "rasin", "ratan", "ratan2", "rcos", "rcosh", "refreshcurrentclimate", "refreshtopiclist", "releasekey", "releaseweatheroverride",
    "removealleffectitems", "removeallitems", "removebasespell", "removeenchantment", "removeequippedweaponpoison", "removeeventhandler",
    "removeflames", "removefromleveledlist", "removeitem", "removeitemns", "removelevitembylevel", "removeme", "removemeir", "removemodlocaldata",
    "removentheffect", "removentheffectitem", "removenthlevitem", "removenthmagiceffectcounter", "removenthmagiceffectcounterc", "removenthmecounter",
    "removenthmecounterc", "removescript", "removescriptpackage", "removespell", "removespellns", "reset3dstate", "resetallvariables",
    "resetfalldamagetimer", "resethealth", "resetinterior", "resolvemodindex", "resurrect", "rightshift", "rotate", "rotmat", "rowvec", "rsin",
    "rsinh", "rtan", "rtanh", "runbatchscript", "runscriptline", "saa", "samefaction", "samefactionaspc", "samerace", "sameraceaspc", "samesex",
    "samesexaspc", "say", "sayto", "scaonactor", "scripteffectelapsedseconds", "selectplayerspell", "sendtrespassalarm", "setactivequest",
    "setactoralpha", "setactorfullname", "setactorrefraction", "setactorrespawns", "setactorsai", "setactorvalue", "setactorvaluec", "setalert",
    "setallreachable", "setallvisible", "setaltcontrol2", "setangle", "setapparatustype", "setarmorar", "setarmortype",
    "setarrowprojectilebowenchantment", "setarrowprojectileenchantment", "setarrowprojectilepoison", "setatstart", "setattackdamage", "setav",
    "setavc", "setavmod", "setavmodc", "setbartergold", "setbaseform", "setbipediconpathex", "setbipedmodelpathex", "setbipedslotmask",
    "setbookcantbetaken", "setbookisscroll", "setbookskilltaught", "setbuttonpressed", "setcancastpower", "setcancorpsecheck",
    "setcanfasttravelfromworld", "setcantraveltomapmarker", "setcellbehavesasexterior", "setcellclimate", "setcellfullname", "setcellhaswater",
    "setcellispublic", "setcelllighting", "setcellownership", "setcellpublicflag", "setcellresethours", "setcellwaterheight", "setcellwatertype",
    "setchancenone", "setclass", "setclassattribute", "setclassattributec", "setclassskills", "setclassskills2", "setclassspecialization",
    "setclimatehasmasser", "setclimatehasmassser", "setclimatehassecunda", "setclimatemoonphaselength", "setclimatesunrisebegin",
    "setclimatesunriseend", "setclimatesunsetbegin", "setclimatesunsetend", "setclimatevolatility", "setclosesound", "setcloudspeedlower",
    "setcloudspeedupper", "setcombatstyle", "setcombatstyleacrobaticsdodgechance", "setcombatstyleattackchance",
    "setcombatstyleattackduringblockmult", "setcombatstyleattacknotunderattackmult", "setcombatstyleattackskillmodbase",
    "setcombatstyleattackskillmodmult", "setcombatstyleattackunderattackmult", "setcombatstyleblockchance", "setcombatstyleblocknotunderattackmult",
    "setcombatstyleblockskillmodbase", "setcombatstyleblockskillmodmult", "setcombatstyleblockunderattackmult", "setcombatstylebuffstandoffdist",
    "setcombatstyledodgebacknotunderattackmult", "setcombatstyledodgebacktimermax", "setcombatstyledodgebacktimermin",
    "setcombatstyledodgebackunderattackmult", "setcombatstyledodgechance", "setcombatstyledodgefatiguemodbase", "setcombatstyledodgefatiguemodmult",
    "setcombatstyledodgefwattackingmult", "setcombatstyledodgefwnotattackingmult", "setcombatstyledodgefwtimermax", "setcombatstyledodgefwtimermin",
    "setcombatstyledodgelrchance", "setcombatstyledodgelrtimermax", "setcombatstyledodgelrtimermin", "setcombatstyledodgenotunderattackmult",
    "setcombatstyledodgeunderattackmult", "setcombatstyleencumberedspeedmodbase", "setcombatstyleencumberedspeedmodmult",
    "setcombatstylefleeingdisabled", "setcombatstylegroupstandoffdist", "setcombatstyleh2hbonustoattack", "setcombatstyleholdtimermax",
    "setcombatstyleholdtimermin", "setcombatstyleidletimermax", "setcombatstyleidletimermin", "setcombatstyleignorealliesinarea",
    "setcombatstylekobonustoattack", "setcombatstylekobonustopowerattack", "setcombatstylemeleealertok", "setcombatstylepowerattackchance",
    "setcombatstylepowerattackfatiguemodbase", "setcombatstylepowerattackfatiguemodmult", "setcombatstyleprefersranged",
    "setcombatstylerangedstandoffdist", "setcombatstylerangemaxmult", "setcombatstylerangeoptimalmult", "setcombatstylerejectsyields",
    "setcombatstylerushattackchance", "setcombatstylerushattackdistmult", "setcombatstylestaggerbonustoattack",
    "setcombatstylestaggerbonustopowerattack", "setcombatstyleswitchdistmelee", "setcombatstyleswitchdistranged", "setcombatstylewillyield",
    "setcontainerrespawns", "setcontrol", "setcreatureskill", "setcreaturesoundbase", "setcrimegold", "setcurrentcharge", "setcurrenthealth",
    "setcurrentsoullevel", "setdebugmode", "setdescription", "setdestroyed", "setdetectionstate", "setdisableglobalcollision", "setdoordefaultopen",
    "setdoorteleport", "setenchantment", "setenchantmentcharge", "setenchantmentcost", "setenchantmenttype", "setequipmentslot",
    "setequippedcurrentcharge", "setequippedcurrenthealth", "setequippedweaponpoison", "setessential", "seteventhandler", "seteyes", "setfactionevil",
    "setfactionhasspecialcombat", "setflycameraspeedmult", "setlevcreaturetemplate", "setskillspecializationc", "setsoundattenuation",
    "setfactionhidden", "setfactionrank", "setfactionreaction", "setfactionspecialcombat", "setfemale", "setfemalebipedpath", "setfemalegroundpath",
    "setfemaleiconpath", "setfogdayfar", "setfogdaynear", "setfognightfar", "setfognightnear", "setforcerun", "setforcesneak", "setfunctionvalue",
    "setgamedifficulty", "setghost", "setgoldvalue", "setgoldvalue_t", "setgoldvaluet", "sethair", "setharvested", "sethasbeenpickedup",
    "sethdrvalue", "sethidesamulet", "sethidesrings", "sethotkeyitem", "seticonpath", "setignorefriendlyhits", "setignoresresistance", "setinchargen",
    "setingredient", "setingredientchance", "setinputtext", "setinvestmentgold", "setisautomaticdoor", "setiscontrol", "setisfood", "setishiddendoor",
    "setisminimalusedoor", "setisobliviongate", "setisplayable", "setitemvalue", "setlevel", "setlightduration", "setlightningfrequency",
    "setlightradius", "setlightrgb", "setlocalgravity", "setlocalgravityvector", "setloopsound", "setlowlevelprocessing",
    "setmaagiceffectuseactorvalue", "setmagiceffectareasound", "setmagiceffectareasoundc", "setmagiceffectbarterfactor",
    "setmagiceffectbarterfactorc", "setmagiceffectbasecost", "setmagiceffectbasecostc", "setmagiceffectboltsound", "setmagiceffectboltsoundc",
    "setmagiceffectcanrecover", "setmagiceffectcanrecoverc", "setmagiceffectcastingsound", "setmagiceffectcastingsoundc", "setmagiceffectcounters",
    "setmagiceffectcountersc", "setmagiceffectenchantfactor", "setmagiceffectenchantfactorc", "setmagiceffectenchantshader",
    "setmagiceffectenchantshaderc", "setmagiceffectforenchanting", "setmagiceffectforenchantingc", "setmagiceffectforspellmaking",
    "setmagiceffectforspellmakingc", "setmagiceffectfxpersists", "setmagiceffectfxpersistsc", "setmagiceffecthitshader", "setmagiceffecthitshaderc",
    "setmagiceffecthitsound", "setmagiceffecthitsoundc", "setmagiceffecticon", "setmagiceffecticonc", "setmagiceffectisdetrimental",
    "setmagiceffectisdetrimentalc", "setmagiceffectishostile", "setmagiceffectishostilec", "setmagiceffectlight", "setmagiceffectlightc",
    "setmagiceffectmagnitudepercent", "setmagiceffectmagnitudepercentc", "setmagiceffectmodel", "setmagiceffectmodelc", "setmagiceffectname",
    "setmagiceffectnamec", "setmagiceffectnoarea", "setmagiceffectnoareac", "setmagiceffectnoduration", "setmagiceffectnodurationc",
    "setmagiceffectnohiteffect", "setmagiceffectnohiteffectc", "setmagiceffectnoingredient", "setmagiceffectnoingredientc",
    "setmagiceffectnomagnitude", "setmagiceffectnomagnitudec", "setmagiceffectonselfallowed", "setmagiceffectonselfallowedc",
    "setmagiceffectontargetallowed", "setmagiceffectontargetallowedc", "setmagiceffectontouchallowed", "setmagiceffectontouchallowedc",
    "setmagiceffectotheractorvalue", "setmagiceffectotheractorvaluec", "setmagiceffectprojectilespeed", "setmagiceffectprojectilespeedc",
    "setmagiceffectresistvalue", "setmagiceffectresistvaluec", "setmagiceffectschool", "setmagiceffectschoolc", "setmagiceffectuseactorvaluec",
    "setmagiceffectusedobject", "setmagiceffectusedobjectc", "setmagiceffectusesactorvalue", "setmagiceffectusesactorvaluec",
    "setmagiceffectusesarmor", "setmagiceffectusesarmorc", "setmagiceffectusesattribute", "setmagiceffectusesattributec",
    "setmagiceffectusescreature", "setmagiceffectusescreaturec", "setmagiceffectusesskill", "setmagiceffectusesskillc", "setmagiceffectusesweapon",
    "setmagiceffectusesweaponc", "setmagicitemautocalc", "setmagicprojectilespell", "setmalebipedpath", "setmalegroundpath", "setmaleiconpath",
    "setmapmarkertype", "setmapmarkervisible", "setmeareasound", "setmeareasoundc", "setmebarterfactor", "setmebarterfactorc", "setmebasecost",
    "setmebasecostc", "setmeboltsound", "setmeboltsoundc", "setmecanrecover", "setmecanrecoverc", "setmecastingsound", "setmecastingsoundc",
    "setmeenchantfactor", "setmeenchantfactorc", "setmeenchantshader", "setmeenchantshaderc", "setmeforenchanting", "setmeforenchantingc",
    "setmeforspellmaking", "setmeforspellmakingc", "setmefxpersists", "setmefxpersistsc", "setmehitshader", "setmehitshaderc", "setmehitsound",
    "setmehitsoundc", "setmeicon", "setmeiconc", "setmeisdetrimental", "setmeisdetrimentalc", "setmeishostile", "setmeishostilec", "setmelight",
    "setmelightc", "setmemagnitudepercent", "setmemagnitudepercentc", "setmemodel", "setmemodelc", "setmename", "setmenamec", "setmenoarea",
    "setmenoareac", "setmenoduration", "setmenodurationc", "setmenohiteffect", "setmenohiteffectc", "setmenoingredient", "setmenoingredientc",
    "setmenomagnitude", "setmenomagnitudec", "setmenufloatvalue", "setmenustringvalue", "setmeonselfallowed", "setmeonselfallowedc",
    "setmeontargetallowed", "setmeontargetallowedc", "setmeontouchallowed", "setmeontouchallowedc", "setmeotheractorvalue", "setmeotheractorvaluec",
    "setmeprojectilespeed", "setmeprojectilespeedc", "setmerchantcontainer", "setmeresistvalue", "setmeresistvaluec", "setmeschool", "setmeschoolc",
    "setmessageicon", "setmessagesound", "setmeuseactorvalue", "setmeuseactorvaluec", "setmeusedobject", "setmeusedobjectc", "setmeusesarmor",
    "setmeusesarmorc", "setmeusesattribute", "setmeusesattributec", "setmeusescreature", "setmeusescreaturec", "setmeusesskill", "setmeusesskillc",
    "setmeusesweapon", "setmeusesweaponc", "setmodelpath", "setmodlocaldata", "setmousespeedx", "setmousespeedy", "setmpspell", "setname",
    "setnameex", "setnoavoidance", "setnopersuasion", "setnorumors", "setnthactiveeffectmagnitude", "setnthaemagnitude", "setntheffectitemactorvalue",
    "setntheffectitemactorvaluec", "setntheffectitemarea", "setntheffectitemduration", "setntheffectitemmagnitude", "setntheffectitemrange",
    "setntheffectitemscript", "setntheffectitemscripthostile", "setntheffectitemscriptname", "setntheffectitemscriptnameex",
    "setntheffectitemscriptschool", "setntheffectitemscriptvisualeffect", "setntheffectitemscriptvisualeffectc", "setntheiarea", "setntheiav",
    "setntheiavc", "setntheiduration", "setntheimagnitude", "setntheirange", "setntheiscript", "setntheishostile", "setntheisname", "setntheisschool",
    "setntheisvisualeffect", "setntheisvisualeffectc", "setnthfactionranknameex", "setnumericgamesetting", "setnumericinisetting", "setobjectcharge",
    "setobjecthealth", "setoffersapparatus", "setoffersarmor", "setoffersbooks", "setoffersclothing", "setoffersingredients", "setofferslights",
    "setoffersmagicitems", "setoffersmiscitems", "setofferspotions", "setoffersrecharging", "setoffersrepair", "setoffersservicesc",
    "setoffersspells", "setofferstraining", "setoffersweapons", "setolmpgrids", "setopenkey", "setopensound", "setopenstate", "setownership",
    "setownership_t", "setpackageallowfalls", "setpackageallowswimming", "setpackagealwaysrun", "setpackagealwayssneak", "setpackagearmorunequipped",
    "setpackagecontinueifpcnear", "setpackagedata", "setpackagedefensivecombat", "setpackagelocationdata", "setpackagelockdoorsatend",
    "setpackagelockdoorsatlocation", "setpackagelockdoorsatstart", "setpackagemustcomplete", "setpackagemustreachlocation", "setpackagenoidleanims",
    "setpackageoffersservices", "setpackageonceperday", "setpackagescheduledata", "setpackageskipfalloutbehavior", "setpackagetarget",
    "setpackagetargetdata", "setpackageunlockdoorsatend", "setpackageunlockdoorsatlocation", "setpackageunlockdoorsatstart", "setpackageusehorse",
    "setpackageweaponsunequipped", "setpackduration", "setpathnodedisabled", "setpcamurderer", "setpcattributebonus", "setpcattributebonusc",
    "setpcexpelled", "setpcfactionattack", "setpcfactionmurder", "setpcfactionsteal", "setpcfactionsubmitauthority", "setpcfame", "setpcinfamy",
    "setpcleveloffset", "setpcmajorskillups", "setpcsleephours", "setpctrainingsessionsused", "setplayerbirthsign", "setplayerinseworld",
    "setplayerprojectile", "setplayerskeletonpath", "setplayerskilladvances", "setplayerskilladvancesc", "setplayerslastriddenhorse", "setpos",
    "setpos_t", "setpowertimer", "setprojectilesource", "setprojectilespeed", "setquality", "setquestitem", "setquestobject", "setracealias",
    "setraceplayable", "setracescale", "setracevoice", "setraceweight", "setrefcount", "setrefessential", "setrestrained", "setrigidbodymass",
    "setscale", "setscaleex", "setsceneiscomplex", "setscript", "setshowquestitems", "setsigilstoneuses", "setsize", "setskillgoverningattribute",
    "setskillgoverningattributec", "setskillspecialization", "setskilluseincrement", "setskilluseincrementc", "setsoulgemcapacity", "setsoullevel",
    "setspellareaeffectignoreslos", "setspelldisallowabsorbreflect", "setspellexplodeswithnotarget", "setspellhostile", "setspellimmunetosilence",
    "setspellmagickacost", "setspellmasterylevel", "setspellpcstart", "setspellscripteffectalwaysapplies", "setspelltype", "setstage", "setstagedate",
    "setstagetext", "setstringinisetting", "settextinputhandler", "stringtoactorvalue", "unsetstagetext", "updatecontainermenu",
    "setstringgamesettingex", "setsummonable", "setsundamage", "setsunglare", "settaken", "settextinputcontrolhandler",
    "settextinputdefaultcontrolsdisabled", "settexturepath", "settimeleft", "settrainerlevel", "settrainerskill", "settransdelta", "settravelhorse",
    "setunconscious", "setunsafecontainer", "setvelocity", "setverticalvelocity", "setweaponreach", "setweaponspeed", "setweapontype", "setweather",
    "setweathercloudspeedlower", "setweathercloudspeedupper", "setweathercolor", "setweatherfogdayfar", "setweatherfogdaynear",
    "setweatherfognightfar", "setweatherfognightnear", "setweatherhdrvalue", "setweatherlightningfrequency", "setweathersundamage",
    "setweathersunglare", "setweathertransdelta", "setweatherwindspeed", "setweight", "setwindspeed", "showbirthsignmenu", "showclassmenu",
    "showdialogsubtitles", "showenchantment", "showmap", "showracemenu", "showspellmaking", "sin", "sinh", "skipanim", "sms", "sqrt", "squareroot",
    "startcombat", "startconversation", "startquest", "stopcombat", "stopcombatalarmonactor", "stoplook", "stopmagiceffectvisuals",
    "stopmagicshadervisuals", "stopquest", "stopwaiting", "streammusic", "sv_compare", "sv_construct", "sv_count", "sv_destruct", "sv_erase",
    "sv_find", "sv_insert", "sv_length", "sv_percentify", "sv_replace", "sv_split", "sv_tolower", "sv_tonumeric", "sv_toupper", "tan", "tanh",
    "tapcontrol", "tapkey", "testexpr", "this", "toggleactorsai", "togglecreaturemodel", "togglefirstperson", "toggleskillperk", "togglespecialanim",
    "tolower", "tonumber", "tostring", "toupper", "trapupdate", "triggerhitshader", "triggerplayerskilluse", "triggerplayerskillusec", "typeof",
    "uncompletequest", "unequipitem", "unequipitemns", "unequipitemsilent", "unequipme", "unhammerkey", "unlock", "update3d", "updatetextinput",
    "updatespellpurchasemenu", "vampirefeed", "vecmag", "vecnorm", "vectorcross", "vectordot", "vectormagnitude", "vectornormalize", "wait",
    "wakeuppc", "whichservicemenu", "yield", "zeromat",
    //-------------------------------

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
