#include "Res.h"
#include "SexyAppFramework/ResourceManager.h"

using namespace Sexy;

#pragma warning(disable:4311 4312)

static bool gNeedRecalcVariableToIdMap = false;

bool Sexy::ExtractResourcesByName(ResourceManager *theManager, const char *theName)
{
	if (strcmp(theName,"BjornBorder")==0) return ExtractBjornBorderResources(theManager);
	if (strcmp(theName,"Character")==0) return ExtractCharacterResources(theManager);
	if (strcmp(theName,"CinderBorder")==0) return ExtractCinderBorderResources(theManager);
	if (strcmp(theName,"ClaudeBorder")==0) return ExtractClaudeBorderResources(theManager);
	if (strcmp(theName,"Dialog")==0) return ExtractDialogResources(theManager);
	if (strcmp(theName,"Duel")==0) return ExtractDuelResources(theManager);
	if (strcmp(theName,"Game")==0) return ExtractGameResources(theManager);
	if (strcmp(theName,"Help")==0) return ExtractHelpResources(theManager);
	if (strcmp(theName,"HuBorder")==0) return ExtractHuBorderResources(theManager);
	if (strcmp(theName,"IP")==0) return ExtractIPResources(theManager);
	if (strcmp(theName,"Init")==0) return ExtractInitResources(theManager);
	if (strcmp(theName,"Interface")==0) return ExtractInterfaceResources(theManager);
	if (strcmp(theName,"JimmyBorder")==0) return ExtractJimmyBorderResources(theManager);
	if (strcmp(theName,"KattutBorder")==0) return ExtractKattutBorderResources(theManager);
	if (strcmp(theName,"LeaderboardMenu")==0) return ExtractLeaderboardMenuResources(theManager);
	if (strcmp(theName,"LevelSelect")==0) return ExtractLevelSelectResources(theManager);
	if (strcmp(theName,"Load")==0) return ExtractLoadResources(theManager);
	if (strcmp(theName,"LoadingThread")==0) return ExtractLoadingThreadResources(theManager);
	if (strcmp(theName,"LuckySpin")==0) return ExtractLuckySpinResources(theManager);
	if (strcmp(theName,"MainMenu")==0) return ExtractMainMenuResources(theManager);
	if (strcmp(theName,"NightsPDLC_Loading")==0) return ExtractNightsPDLC_LoadingResources(theManager);
	if (strcmp(theName,"NightsPDLC_MainMenu")==0) return ExtractNightsPDLC_MainMenuResources(theManager);
	if (strcmp(theName,"NightsPDLC_MarinaBorder")==0) return ExtractNightsPDLC_MarinaBorderResources(theManager);
	if (strcmp(theName,"NightsPDLC_Trophy")==0) return ExtractNightsPDLC_TrophyResources(theManager);
	if (strcmp(theName,"NightsTU")==0) return ExtractNightsTUResources(theManager);
	if (strcmp(theName,"NightsTUChars")==0) return ExtractNightsTUCharsResources(theManager);
	if (strcmp(theName,"NightsTUDialog")==0) return ExtractNightsTUDialogResources(theManager);
	if (strcmp(theName,"NightsTULocDE")==0) return ExtractNightsTULocDEResources(theManager);
	if (strcmp(theName,"NightsTULocEN")==0) return ExtractNightsTULocENResources(theManager);
	if (strcmp(theName,"NightsTULocES")==0) return ExtractNightsTULocESResources(theManager);
	if (strcmp(theName,"NightsTULocFR")==0) return ExtractNightsTULocFRResources(theManager);
	if (strcmp(theName,"NightsTULocIT")==0) return ExtractNightsTULocITResources(theManager);
	if (strcmp(theName,"NightsTULocJP")==0) return ExtractNightsTULocJPResources(theManager);
	if (strcmp(theName,"NightsTULocKO")==0) return ExtractNightsTULocKOResources(theManager);
	if (strcmp(theName,"NightsTULocPT")==0) return ExtractNightsTULocPTResources(theManager);
	if (strcmp(theName,"NightsTULocTC")==0) return ExtractNightsTULocTCResources(theManager);
	if (strcmp(theName,"PS3")==0) return ExtractPS3Resources(theManager);
	if (strcmp(theName,"Party")==0) return ExtractPartyResources(theManager);
	if (strcmp(theName,"RenfieldBorder")==0) return ExtractRenfieldBorderResources(theManager);
	if (strcmp(theName,"SplorkBorder")==0) return ExtractSplorkBorderResources(theManager);
	if (strcmp(theName,"Story")==0) return ExtractStoryResources(theManager);
	if (strcmp(theName,"TulaBorder")==0) return ExtractTulaBorderResources(theManager);
	if (strcmp(theName,"Upsell")==0) return ExtractUpsellResources(theManager);
	if (strcmp(theName,"WarrenBorder")==0) return ExtractWarrenBorderResources(theManager);
	return false;
}

Sexy::ResourceId Sexy::GetIdByStringId(const char *theStringId)
{
	typedef std::map<std::string,int> MyMap;
	static MyMap aMap;
	if(aMap.empty())
	{
		for(int i=0; i<RESOURCE_ID_MAX; i++)
			aMap[GetStringIdById(i)] = i;
	}

	MyMap::iterator anItr = aMap.find(theStringId);
	if (anItr == aMap.end())
		return RESOURCE_ID_MAX;
	else
		return (ResourceId) anItr->second;
}

// BjornBorder Resources
Image* Sexy::IMAGE_IP_BJORN_BOTTOM;
Image* Sexy::IMAGE_IP_BJORN_GUTTER_BG_LEFT;
Image* Sexy::IMAGE_IP_BJORN_GUTTER_BG_RIGHT;
Image* Sexy::IMAGE_IP_BJORN_GUTTER_CLOUDS;
Image* Sexy::IMAGE_IP_BJORN_GUTTER_HILL;
Image* Sexy::IMAGE_IP_BJORN_GUTTER_TREE;
Image* Sexy::IMAGE_IP_BJORN_LEFT;
Image* Sexy::IMAGE_IP_BJORN_RIGHT;
Image* Sexy::IMAGE_IP_BJORN_TOP;

bool Sexy::ExtractBjornBorderResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_IP_BJORN_BOTTOM = aMgr.GetImageThrow("IMAGE_IP_BJORN_BOTTOM");
		IMAGE_IP_BJORN_GUTTER_BG_LEFT = aMgr.GetImageThrow("IMAGE_IP_BJORN_GUTTER_BG_LEFT");
		IMAGE_IP_BJORN_GUTTER_BG_RIGHT = aMgr.GetImageThrow("IMAGE_IP_BJORN_GUTTER_BG_RIGHT");
		IMAGE_IP_BJORN_GUTTER_CLOUDS = aMgr.GetImageThrow("IMAGE_IP_BJORN_GUTTER_CLOUDS");
		IMAGE_IP_BJORN_GUTTER_HILL = aMgr.GetImageThrow("IMAGE_IP_BJORN_GUTTER_HILL");
		IMAGE_IP_BJORN_GUTTER_TREE = aMgr.GetImageThrow("IMAGE_IP_BJORN_GUTTER_TREE");
		IMAGE_IP_BJORN_LEFT = aMgr.GetImageThrow("IMAGE_IP_BJORN_LEFT");
		IMAGE_IP_BJORN_RIGHT = aMgr.GetImageThrow("IMAGE_IP_BJORN_RIGHT");
		IMAGE_IP_BJORN_TOP = aMgr.GetImageThrow("IMAGE_IP_BJORN_TOP");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Character Resources
Image* Sexy::IMAGE_CHR_CHARACTER1;
Image* Sexy::IMAGE_CHR_CHARACTER10;
Image* Sexy::IMAGE_CHR_CHARACTER11;
Image* Sexy::IMAGE_CHR_CHARACTER2;
Image* Sexy::IMAGE_CHR_CHARACTER3;
Image* Sexy::IMAGE_CHR_CHARACTER4;
Image* Sexy::IMAGE_CHR_CHARACTER5;
Image* Sexy::IMAGE_CHR_CHARACTER6;
Image* Sexy::IMAGE_CHR_CHARACTER7;
Image* Sexy::IMAGE_CHR_CHARACTER8;
Image* Sexy::IMAGE_CHR_CHARACTER9;
Image* Sexy::IMAGE_CHR_CHARACTERS;
Image* Sexy::IMAGE_CHR_CHARACTERSHADOWS;
Image* Sexy::IMAGE_CHR_YINYANGEYE;

bool Sexy::ExtractCharacterResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_CHR_CHARACTER1 = aMgr.GetImageThrow("IMAGE_CHR_CHARACTER1");
		IMAGE_CHR_CHARACTER10 = aMgr.GetImageThrow("IMAGE_CHR_CHARACTER10");
		IMAGE_CHR_CHARACTER11 = aMgr.GetImageThrow("IMAGE_CHR_CHARACTER11");
		IMAGE_CHR_CHARACTER2 = aMgr.GetImageThrow("IMAGE_CHR_CHARACTER2");
		IMAGE_CHR_CHARACTER3 = aMgr.GetImageThrow("IMAGE_CHR_CHARACTER3");
		IMAGE_CHR_CHARACTER4 = aMgr.GetImageThrow("IMAGE_CHR_CHARACTER4");
		IMAGE_CHR_CHARACTER5 = aMgr.GetImageThrow("IMAGE_CHR_CHARACTER5");
		IMAGE_CHR_CHARACTER6 = aMgr.GetImageThrow("IMAGE_CHR_CHARACTER6");
		IMAGE_CHR_CHARACTER7 = aMgr.GetImageThrow("IMAGE_CHR_CHARACTER7");
		IMAGE_CHR_CHARACTER8 = aMgr.GetImageThrow("IMAGE_CHR_CHARACTER8");
		IMAGE_CHR_CHARACTER9 = aMgr.GetImageThrow("IMAGE_CHR_CHARACTER9");
		IMAGE_CHR_CHARACTERS = aMgr.GetImageThrow("IMAGE_CHR_CHARACTERS");
		IMAGE_CHR_CHARACTERSHADOWS = aMgr.GetImageThrow("IMAGE_CHR_CHARACTERSHADOWS");
		IMAGE_CHR_YINYANGEYE = aMgr.GetImageThrow("IMAGE_CHR_YINYANGEYE");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// CinderBorder Resources
Image* Sexy::IMAGE_IP_CINDERBOTTOM_GUTTER_BG_LEFT;
Image* Sexy::IMAGE_IP_CINDERBOTTOM_GUTTER_BG_RIGHT;
Image* Sexy::IMAGE_IP_CINDER_BOTTOM;
Image* Sexy::IMAGE_IP_CINDER_LEFT;
Image* Sexy::IMAGE_IP_CINDER_RIGHT;
Image* Sexy::IMAGE_IP_CINDER_TOP;

bool Sexy::ExtractCinderBorderResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_IP_CINDERBOTTOM_GUTTER_BG_LEFT = aMgr.GetImageThrow("IMAGE_IP_CINDERBOTTOM_GUTTER_BG_LEFT");
		IMAGE_IP_CINDERBOTTOM_GUTTER_BG_RIGHT = aMgr.GetImageThrow("IMAGE_IP_CINDERBOTTOM_GUTTER_BG_RIGHT");
		IMAGE_IP_CINDER_BOTTOM = aMgr.GetImageThrow("IMAGE_IP_CINDER_BOTTOM");
		IMAGE_IP_CINDER_LEFT = aMgr.GetImageThrow("IMAGE_IP_CINDER_LEFT");
		IMAGE_IP_CINDER_RIGHT = aMgr.GetImageThrow("IMAGE_IP_CINDER_RIGHT");
		IMAGE_IP_CINDER_TOP = aMgr.GetImageThrow("IMAGE_IP_CINDER_TOP");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// ClaudeBorder Resources
Image* Sexy::IMAGE_IP_CLAUDE_BOTTOM;
Image* Sexy::IMAGE_IP_CLAUDE_GUTTER_BG_LEFT;
Image* Sexy::IMAGE_IP_CLAUDE_GUTTER_BG_RIGHT;
Image* Sexy::IMAGE_IP_CLAUDE_GUTTER_BIG_FISH1;
Image* Sexy::IMAGE_IP_CLAUDE_GUTTER_BIG_FISH2;
Image* Sexy::IMAGE_IP_CLAUDE_GUTTER_BIG_FISH3;
Image* Sexy::IMAGE_IP_CLAUDE_GUTTER_L_KELP;
Image* Sexy::IMAGE_IP_CLAUDE_GUTTER_R_KELP;
Image* Sexy::IMAGE_IP_CLAUDE_GUTTER_SMALL_FISH1;
Image* Sexy::IMAGE_IP_CLAUDE_GUTTER_SMALL_FISH2;
Image* Sexy::IMAGE_IP_CLAUDE_GUTTER_SMALL_FISH3;
Image* Sexy::IMAGE_IP_CLAUDE_LEFT;
Image* Sexy::IMAGE_IP_CLAUDE_RIGHT;
Image* Sexy::IMAGE_IP_CLAUDE_TOP;

bool Sexy::ExtractClaudeBorderResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_IP_CLAUDE_BOTTOM = aMgr.GetImageThrow("IMAGE_IP_CLAUDE_BOTTOM");
		IMAGE_IP_CLAUDE_GUTTER_BG_LEFT = aMgr.GetImageThrow("IMAGE_IP_CLAUDE_GUTTER_BG_LEFT");
		IMAGE_IP_CLAUDE_GUTTER_BG_RIGHT = aMgr.GetImageThrow("IMAGE_IP_CLAUDE_GUTTER_BG_RIGHT");
		IMAGE_IP_CLAUDE_GUTTER_BIG_FISH1 = aMgr.GetImageThrow("IMAGE_IP_CLAUDE_GUTTER_BIG_FISH1");
		IMAGE_IP_CLAUDE_GUTTER_BIG_FISH2 = aMgr.GetImageThrow("IMAGE_IP_CLAUDE_GUTTER_BIG_FISH2");
		IMAGE_IP_CLAUDE_GUTTER_BIG_FISH3 = aMgr.GetImageThrow("IMAGE_IP_CLAUDE_GUTTER_BIG_FISH3");
		IMAGE_IP_CLAUDE_GUTTER_L_KELP = aMgr.GetImageThrow("IMAGE_IP_CLAUDE_GUTTER_L_KELP");
		IMAGE_IP_CLAUDE_GUTTER_R_KELP = aMgr.GetImageThrow("IMAGE_IP_CLAUDE_GUTTER_R_KELP");
		IMAGE_IP_CLAUDE_GUTTER_SMALL_FISH1 = aMgr.GetImageThrow("IMAGE_IP_CLAUDE_GUTTER_SMALL_FISH1");
		IMAGE_IP_CLAUDE_GUTTER_SMALL_FISH2 = aMgr.GetImageThrow("IMAGE_IP_CLAUDE_GUTTER_SMALL_FISH2");
		IMAGE_IP_CLAUDE_GUTTER_SMALL_FISH3 = aMgr.GetImageThrow("IMAGE_IP_CLAUDE_GUTTER_SMALL_FISH3");
		IMAGE_IP_CLAUDE_LEFT = aMgr.GetImageThrow("IMAGE_IP_CLAUDE_LEFT");
		IMAGE_IP_CLAUDE_RIGHT = aMgr.GetImageThrow("IMAGE_IP_CLAUDE_RIGHT");
		IMAGE_IP_CLAUDE_TOP = aMgr.GetImageThrow("IMAGE_IP_CLAUDE_TOP");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Dialog Resources
Image* Sexy::IMAGE_DLG_BIGQUESTIONMARK;
Image* Sexy::IMAGE_DLG_BLUEFRAME;
Image* Sexy::IMAGE_DLG_BOTTOMBAR;
Image* Sexy::IMAGE_DLG_BROWNBUTTON1;
Image* Sexy::IMAGE_DLG_BROWNBUTTON2;
Image* Sexy::IMAGE_DLG_BUTTON1;
Image* Sexy::IMAGE_DLG_BUTTON2;
Image* Sexy::IMAGE_DLG_BUTTON3;
Image* Sexy::IMAGE_DLG_BUTTONOVERLAY2;
Image* Sexy::IMAGE_DLG_CONNECTOR;
Image* Sexy::IMAGE_DLG_DIALOGBOX;
Image* Sexy::IMAGE_DLG_EDITBUTTON;
Image* Sexy::IMAGE_DLG_ETCHINGS;
Image* Sexy::IMAGE_DLG_FRAME1;
Image* Sexy::IMAGE_DLG_FRAME2;
Image* Sexy::IMAGE_DLG_FRAME3;
Image* Sexy::IMAGE_DLG_GLOSS;
Image* Sexy::IMAGE_DLG_GRAYFRAME;
Image* Sexy::IMAGE_DLG_GREENOK;
Image* Sexy::IMAGE_DLG_HELP_BAR;
Image* Sexy::IMAGE_DLG_HELP_BUTTONS;
Image* Sexy::IMAGE_DLG_HELP_LB_SLIDER;
Image* Sexy::IMAGE_DLG_HELP_RB_SLIDER;
Image* Sexy::IMAGE_DLG_HELP_SLIDER;
Image* Sexy::IMAGE_DLG_HORZBAR;
Image* Sexy::IMAGE_DLG_INSTANTREPLAY;
Image* Sexy::IMAGE_DLG_INSTRUCTIONS;
Image* Sexy::IMAGE_DLG_INSTRUCTIONS2;
Image* Sexy::IMAGE_DLG_INSTRUCTIONS3;
Image* Sexy::IMAGE_DLG_INSTRUCTIONS4;
Image* Sexy::IMAGE_DLG_LJOINT;
Image* Sexy::IMAGE_DLG_MASTERSTAGE;
Image* Sexy::IMAGE_DLG_MASTERSTAGEPROGBAR;
Image* Sexy::IMAGE_DLG_MENU;
Image* Sexy::IMAGE_DLG_PLAYBUTTON1;
Image* Sexy::IMAGE_DLG_PLAYBUTTON2;
Image* Sexy::IMAGE_DLG_PLAYWIDGET1;
Image* Sexy::IMAGE_DLG_PLAYWIDGET2;
Image* Sexy::IMAGE_DLG_POPUP;
Image* Sexy::IMAGE_DLG_PURPLEBUTTON;
Image* Sexy::IMAGE_DLG_QUESTIONMARK;
Image* Sexy::IMAGE_DLG_RANDOM;
Image* Sexy::IMAGE_DLG_REPLAYSEGMENT;
Image* Sexy::IMAGE_DLG_REPLAYSPIN;
Image* Sexy::IMAGE_DLG_REPLAYTOP;
Image* Sexy::IMAGE_DLG_SEGMENT;
Image* Sexy::IMAGE_DLG_SELECTORFRAME;
Image* Sexy::IMAGE_DLG_SLIDER;
Image* Sexy::IMAGE_DLG_SLIDERHILIGHT;
Image* Sexy::IMAGE_DLG_SLIDERORB;
Image* Sexy::IMAGE_DLG_STAGEBAR;
Image* Sexy::IMAGE_DLG_STAGEBULLET;
Image* Sexy::IMAGE_DLG_STAGEPROGRESSBAR;
Image* Sexy::IMAGE_DLG_TEXTBOX;
Image* Sexy::IMAGE_DLG_TEXTRECT;
Image* Sexy::IMAGE_DLG_TIP;

bool Sexy::ExtractDialogResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_DLG_BIGQUESTIONMARK = aMgr.GetImageThrow("IMAGE_DLG_BIGQUESTIONMARK");
		IMAGE_DLG_BLUEFRAME = aMgr.GetImageThrow("IMAGE_DLG_BLUEFRAME");
		IMAGE_DLG_BOTTOMBAR = aMgr.GetImageThrow("IMAGE_DLG_BOTTOMBAR");
		IMAGE_DLG_BROWNBUTTON1 = aMgr.GetImageThrow("IMAGE_DLG_BROWNBUTTON1");
		IMAGE_DLG_BROWNBUTTON2 = aMgr.GetImageThrow("IMAGE_DLG_BROWNBUTTON2");
		IMAGE_DLG_BUTTON1 = aMgr.GetImageThrow("IMAGE_DLG_BUTTON1");
		IMAGE_DLG_BUTTON2 = aMgr.GetImageThrow("IMAGE_DLG_BUTTON2");
		IMAGE_DLG_BUTTON3 = aMgr.GetImageThrow("IMAGE_DLG_BUTTON3");
		IMAGE_DLG_BUTTONOVERLAY2 = aMgr.GetImageThrow("IMAGE_DLG_BUTTONOVERLAY2");
		IMAGE_DLG_CONNECTOR = aMgr.GetImageThrow("IMAGE_DLG_CONNECTOR");
		IMAGE_DLG_DIALOGBOX = aMgr.GetImageThrow("IMAGE_DLG_DIALOGBOX");
		IMAGE_DLG_EDITBUTTON = aMgr.GetImageThrow("IMAGE_DLG_EDITBUTTON");
		IMAGE_DLG_ETCHINGS = aMgr.GetImageThrow("IMAGE_DLG_ETCHINGS");
		IMAGE_DLG_FRAME1 = aMgr.GetImageThrow("IMAGE_DLG_FRAME1");
		IMAGE_DLG_FRAME2 = aMgr.GetImageThrow("IMAGE_DLG_FRAME2");
		IMAGE_DLG_FRAME3 = aMgr.GetImageThrow("IMAGE_DLG_FRAME3");
		IMAGE_DLG_GLOSS = aMgr.GetImageThrow("IMAGE_DLG_GLOSS");
		IMAGE_DLG_GRAYFRAME = aMgr.GetImageThrow("IMAGE_DLG_GRAYFRAME");
		IMAGE_DLG_GREENOK = aMgr.GetImageThrow("IMAGE_DLG_GREENOK");
		IMAGE_DLG_HELP_BAR = aMgr.GetImageThrow("IMAGE_DLG_HELP_BAR");
		IMAGE_DLG_HELP_BUTTONS = aMgr.GetImageThrow("IMAGE_DLG_HELP_BUTTONS");
		IMAGE_DLG_HELP_LB_SLIDER = aMgr.GetImageThrow("IMAGE_DLG_HELP_LB_SLIDER");
		IMAGE_DLG_HELP_RB_SLIDER = aMgr.GetImageThrow("IMAGE_DLG_HELP_RB_SLIDER");
		IMAGE_DLG_HELP_SLIDER = aMgr.GetImageThrow("IMAGE_DLG_HELP_SLIDER");
		IMAGE_DLG_HORZBAR = aMgr.GetImageThrow("IMAGE_DLG_HORZBAR");
		IMAGE_DLG_INSTANTREPLAY = aMgr.GetImageThrow("IMAGE_DLG_INSTANTREPLAY");
		IMAGE_DLG_INSTRUCTIONS = aMgr.GetImageThrow("IMAGE_DLG_INSTRUCTIONS");
		IMAGE_DLG_INSTRUCTIONS2 = aMgr.GetImageThrow("IMAGE_DLG_INSTRUCTIONS2");
		IMAGE_DLG_INSTRUCTIONS3 = aMgr.GetImageThrow("IMAGE_DLG_INSTRUCTIONS3");
		IMAGE_DLG_INSTRUCTIONS4 = aMgr.GetImageThrow("IMAGE_DLG_INSTRUCTIONS4");
		IMAGE_DLG_LJOINT = aMgr.GetImageThrow("IMAGE_DLG_LJOINT");
		IMAGE_DLG_MASTERSTAGE = aMgr.GetImageThrow("IMAGE_DLG_MASTERSTAGE");
		IMAGE_DLG_MASTERSTAGEPROGBAR = aMgr.GetImageThrow("IMAGE_DLG_MASTERSTAGEPROGBAR");
		IMAGE_DLG_MENU = aMgr.GetImageThrow("IMAGE_DLG_MENU");
		IMAGE_DLG_PLAYBUTTON1 = aMgr.GetImageThrow("IMAGE_DLG_PLAYBUTTON1");
		IMAGE_DLG_PLAYBUTTON2 = aMgr.GetImageThrow("IMAGE_DLG_PLAYBUTTON2");
		IMAGE_DLG_PLAYWIDGET1 = aMgr.GetImageThrow("IMAGE_DLG_PLAYWIDGET1");
		IMAGE_DLG_PLAYWIDGET2 = aMgr.GetImageThrow("IMAGE_DLG_PLAYWIDGET2");
		IMAGE_DLG_POPUP = aMgr.GetImageThrow("IMAGE_DLG_POPUP");
		IMAGE_DLG_PURPLEBUTTON = aMgr.GetImageThrow("IMAGE_DLG_PURPLEBUTTON");
		IMAGE_DLG_QUESTIONMARK = aMgr.GetImageThrow("IMAGE_DLG_QUESTIONMARK");
		IMAGE_DLG_RANDOM = aMgr.GetImageThrow("IMAGE_DLG_RANDOM");
		IMAGE_DLG_REPLAYSEGMENT = aMgr.GetImageThrow("IMAGE_DLG_REPLAYSEGMENT");
		IMAGE_DLG_REPLAYSPIN = aMgr.GetImageThrow("IMAGE_DLG_REPLAYSPIN");
		IMAGE_DLG_REPLAYTOP = aMgr.GetImageThrow("IMAGE_DLG_REPLAYTOP");
		IMAGE_DLG_SEGMENT = aMgr.GetImageThrow("IMAGE_DLG_SEGMENT");
		IMAGE_DLG_SELECTORFRAME = aMgr.GetImageThrow("IMAGE_DLG_SELECTORFRAME");
		IMAGE_DLG_SLIDER = aMgr.GetImageThrow("IMAGE_DLG_SLIDER");
		IMAGE_DLG_SLIDERHILIGHT = aMgr.GetImageThrow("IMAGE_DLG_SLIDERHILIGHT");
		IMAGE_DLG_SLIDERORB = aMgr.GetImageThrow("IMAGE_DLG_SLIDERORB");
		IMAGE_DLG_STAGEBAR = aMgr.GetImageThrow("IMAGE_DLG_STAGEBAR");
		IMAGE_DLG_STAGEBULLET = aMgr.GetImageThrow("IMAGE_DLG_STAGEBULLET");
		IMAGE_DLG_STAGEPROGRESSBAR = aMgr.GetImageThrow("IMAGE_DLG_STAGEPROGRESSBAR");
		IMAGE_DLG_TEXTBOX = aMgr.GetImageThrow("IMAGE_DLG_TEXTBOX");
		IMAGE_DLG_TEXTRECT = aMgr.GetImageThrow("IMAGE_DLG_TEXTRECT");
		IMAGE_DLG_TIP = aMgr.GetImageThrow("IMAGE_DLG_TIP");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Duel Resources
Image* Sexy::IMAGE_DUEL_LOBBY_PLAYER;

bool Sexy::ExtractDuelResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_DUEL_LOBBY_PLAYER = aMgr.GetImageThrow("IMAGE_DUEL_LOBBY_PLAYER");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Game Resources
Image* Sexy::IMAGE_ALPHABALL;
Image* Sexy::IMAGE_BALL;
Image* Sexy::IMAGE_BALLPEG;
Image* Sexy::IMAGE_BALLPEGCB;
Image* Sexy::IMAGE_BALLSHADOW;
Image* Sexy::IMAGE_BIGBALL;
Image* Sexy::IMAGE_BIGBALLSHADOW;
Image* Sexy::IMAGE_BLUERIBBON;
Image* Sexy::IMAGE_BONUS10000;
Image* Sexy::IMAGE_BONUS100000;
Image* Sexy::IMAGE_BONUS100000LIGHT;
Image* Sexy::IMAGE_BONUS10000LIGHT;
Image* Sexy::IMAGE_BONUS25000;
Image* Sexy::IMAGE_BONUS25000LIGHT;
Image* Sexy::IMAGE_BONUS5000;
Image* Sexy::IMAGE_BONUS50000;
Image* Sexy::IMAGE_BONUS50000LIGHT;
Image* Sexy::IMAGE_BONUS5000LIGHT;
Image* Sexy::IMAGE_BONUSGLOW;
Image* Sexy::IMAGE_BONUSGLOW_BLUE;
Image* Sexy::IMAGE_BONUSGLOW_GREEN;
Image* Sexy::IMAGE_BONUSHALO;
Image* Sexy::IMAGE_BRICK;
Image* Sexy::IMAGE_BRICKCB;
Image* Sexy::IMAGE_BRICKGLOW;
Image* Sexy::IMAGE_BUBBLES;
Image* Sexy::IMAGE_CATCHERGLOW;
Image* Sexy::IMAGE_CIRCLE;
Image* Sexy::IMAGE_COINHEADS;
Image* Sexy::IMAGE_COINHILIGHT;
Image* Sexy::IMAGE_COINTAILS;
Image* Sexy::IMAGE_DEFINNERPEG;
Image* Sexy::IMAGE_DEFOUTERPEG;
Image* Sexy::IMAGE_EMBER;
Image* Sexy::IMAGE_FEVERBORDER;
Image* Sexy::IMAGE_FEVERCAM;
Image* Sexy::IMAGE_FEVERGLOWSTAR;
Image* Sexy::IMAGE_FEVERRAINBOW;
Image* Sexy::IMAGE_FEVERRAY;
Image* Sexy::IMAGE_FEVERSCORE;
Image* Sexy::IMAGE_FEVERSCORETOP;
Image* Sexy::IMAGE_FEVERSPARK;
Image* Sexy::IMAGE_FEVERSTAR_BLUE;
Image* Sexy::IMAGE_FEVERSTAR_GREEN;
Image* Sexy::IMAGE_FEVERSTAR_RED;
Image* Sexy::IMAGE_FEVERTRAIL;
Image* Sexy::IMAGE_FIREBALL;
Image* Sexy::IMAGE_FIREBALLFIRE;
Image* Sexy::IMAGE_FLAMETRAIL;
Image* Sexy::IMAGE_FLECK;
Image* Sexy::IMAGE_FLOWER;
Image* Sexy::IMAGE_GUIDEARROW;
Image* Sexy::IMAGE_GUIDEHIT;
Image* Sexy::IMAGE_GUIDEPOINT;
Image* Sexy::IMAGE_GUIDERECT;
Image* Sexy::IMAGE_GUIDERECT2;
Image* Sexy::IMAGE_HAT;
Image* Sexy::IMAGE_JIMMY;
Image* Sexy::IMAGE_JIMMYSPEECH;
Image* Sexy::IMAGE_MAGICHAT;
Image* Sexy::IMAGE_MASTERBADGE;
Image* Sexy::IMAGE_NUKE;
Image* Sexy::IMAGE_NUKESTREAK;
Image* Sexy::IMAGE_PAUSED;
Image* Sexy::IMAGE_PEGGLOW;
Image* Sexy::IMAGE_PEGSHADOW;
Image* Sexy::IMAGE_POWERUPICON;
Image* Sexy::IMAGE_PULSE2_POWERUP;
Image* Sexy::IMAGE_PULSE2_SCORE;
Image* Sexy::IMAGE_PULSE_GOAL;
Image* Sexy::IMAGE_PULSE_NORMAL;
Image* Sexy::IMAGE_PULSE_POWERUP;
Image* Sexy::IMAGE_PULSE_SCORE;
Image* Sexy::IMAGE_PYRAMIDBALL;
Image* Sexy::IMAGE_PYRAMIDRAY;
Image* Sexy::IMAGE_SCOREICON;
Image* Sexy::IMAGE_SMOKE;
Image* Sexy::IMAGE_SPACEBUBBLE;
Image* Sexy::IMAGE_SPACEBURST;
Image* Sexy::IMAGE_SPACEHALO;
Image* Sexy::IMAGE_SPACESTAR;
Image* Sexy::IMAGE_SPARKLE;
Image* Sexy::IMAGE_SPARKLE_FEVER;
Image* Sexy::IMAGE_SPOOKYEYES;
Image* Sexy::IMAGE_SPOOKYGHOST;
Image* Sexy::IMAGE_SPOOKYPOOF1;
Image* Sexy::IMAGE_SPOOKYPOOF2;
Image* Sexy::IMAGE_SPOOKYTRAIL;
Image* Sexy::IMAGE_STAR_STREAK;
Image* Sexy::IMAGE_STREAK;
Image* Sexy::IMAGE_TINYBLUERIBBON;
Image* Sexy::IMAGE_TIPARROW;
Image* Sexy::IMAGE_VS_DUEL;
Image* Sexy::IMAGE_VS_DUELBACK;
Image* Sexy::IMAGE_XFEVER;
Image* Sexy::IMAGE_XFEVERGLOW;
Image* Sexy::IMAGE_YINYANG;

bool Sexy::ExtractGameResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_ALPHABALL = aMgr.GetImageThrow("IMAGE_ALPHABALL");
		IMAGE_BALL = aMgr.GetImageThrow("IMAGE_BALL");
		IMAGE_BALLPEG = aMgr.GetImageThrow("IMAGE_BALLPEG");
		IMAGE_BALLPEGCB = aMgr.GetImageThrow("IMAGE_BALLPEGCB");
		IMAGE_BALLSHADOW = aMgr.GetImageThrow("IMAGE_BALLSHADOW");
		IMAGE_BIGBALL = aMgr.GetImageThrow("IMAGE_BIGBALL");
		IMAGE_BIGBALLSHADOW = aMgr.GetImageThrow("IMAGE_BIGBALLSHADOW");
		IMAGE_BLUERIBBON = aMgr.GetImageThrow("IMAGE_BLUERIBBON");
		IMAGE_BONUS10000 = aMgr.GetImageThrow("IMAGE_BONUS10000");
		IMAGE_BONUS100000 = aMgr.GetImageThrow("IMAGE_BONUS100000");
		IMAGE_BONUS100000LIGHT = aMgr.GetImageThrow("IMAGE_BONUS100000LIGHT");
		IMAGE_BONUS10000LIGHT = aMgr.GetImageThrow("IMAGE_BONUS10000LIGHT");
		IMAGE_BONUS25000 = aMgr.GetImageThrow("IMAGE_BONUS25000");
		IMAGE_BONUS25000LIGHT = aMgr.GetImageThrow("IMAGE_BONUS25000LIGHT");
		IMAGE_BONUS5000 = aMgr.GetImageThrow("IMAGE_BONUS5000");
		IMAGE_BONUS50000 = aMgr.GetImageThrow("IMAGE_BONUS50000");
		IMAGE_BONUS50000LIGHT = aMgr.GetImageThrow("IMAGE_BONUS50000LIGHT");
		IMAGE_BONUS5000LIGHT = aMgr.GetImageThrow("IMAGE_BONUS5000LIGHT");
		IMAGE_BONUSGLOW = aMgr.GetImageThrow("IMAGE_BONUSGLOW");
		IMAGE_BONUSGLOW_BLUE = aMgr.GetImageThrow("IMAGE_BONUSGLOW_BLUE");
		IMAGE_BONUSGLOW_GREEN = aMgr.GetImageThrow("IMAGE_BONUSGLOW_GREEN");
		IMAGE_BONUSHALO = aMgr.GetImageThrow("IMAGE_BONUSHALO");
		IMAGE_BRICK = aMgr.GetImageThrow("IMAGE_BRICK");
		IMAGE_BRICKCB = aMgr.GetImageThrow("IMAGE_BRICKCB");
		IMAGE_BRICKGLOW = aMgr.GetImageThrow("IMAGE_BRICKGLOW");
		IMAGE_BUBBLES = aMgr.GetImageThrow("IMAGE_BUBBLES");
		IMAGE_CATCHERGLOW = aMgr.GetImageThrow("IMAGE_CATCHERGLOW");
		IMAGE_CIRCLE = aMgr.GetImageThrow("IMAGE_CIRCLE");
		IMAGE_COINHEADS = aMgr.GetImageThrow("IMAGE_COINHEADS");
		IMAGE_COINHILIGHT = aMgr.GetImageThrow("IMAGE_COINHILIGHT");
		IMAGE_COINTAILS = aMgr.GetImageThrow("IMAGE_COINTAILS");
		IMAGE_DEFINNERPEG = aMgr.GetImageThrow("IMAGE_DEFINNERPEG");
		IMAGE_DEFOUTERPEG = aMgr.GetImageThrow("IMAGE_DEFOUTERPEG");
		IMAGE_EMBER = aMgr.GetImageThrow("IMAGE_EMBER");
		IMAGE_FEVERBORDER = aMgr.GetImageThrow("IMAGE_FEVERBORDER");
		IMAGE_FEVERCAM = aMgr.GetImageThrow("IMAGE_FEVERCAM");
		IMAGE_FEVERGLOWSTAR = aMgr.GetImageThrow("IMAGE_FEVERGLOWSTAR");
		IMAGE_FEVERRAINBOW = aMgr.GetImageThrow("IMAGE_FEVERRAINBOW");
		IMAGE_FEVERRAY = aMgr.GetImageThrow("IMAGE_FEVERRAY");
		IMAGE_FEVERSCORE = aMgr.GetImageThrow("IMAGE_FEVERSCORE");
		IMAGE_FEVERSCORETOP = aMgr.GetImageThrow("IMAGE_FEVERSCORETOP");
		IMAGE_FEVERSPARK = aMgr.GetImageThrow("IMAGE_FEVERSPARK");
		IMAGE_FEVERSTAR_BLUE = aMgr.GetImageThrow("IMAGE_FEVERSTAR_BLUE");
		IMAGE_FEVERSTAR_GREEN = aMgr.GetImageThrow("IMAGE_FEVERSTAR_GREEN");
		IMAGE_FEVERSTAR_RED = aMgr.GetImageThrow("IMAGE_FEVERSTAR_RED");
		IMAGE_FEVERTRAIL = aMgr.GetImageThrow("IMAGE_FEVERTRAIL");
		IMAGE_FIREBALL = aMgr.GetImageThrow("IMAGE_FIREBALL");
		IMAGE_FIREBALLFIRE = aMgr.GetImageThrow("IMAGE_FIREBALLFIRE");
		IMAGE_FLAMETRAIL = aMgr.GetImageThrow("IMAGE_FLAMETRAIL");
		IMAGE_FLECK = aMgr.GetImageThrow("IMAGE_FLECK");
		IMAGE_FLOWER = aMgr.GetImageThrow("IMAGE_FLOWER");
		IMAGE_GUIDEARROW = aMgr.GetImageThrow("IMAGE_GUIDEARROW");
		IMAGE_GUIDEHIT = aMgr.GetImageThrow("IMAGE_GUIDEHIT");
		IMAGE_GUIDEPOINT = aMgr.GetImageThrow("IMAGE_GUIDEPOINT");
		IMAGE_GUIDERECT = aMgr.GetImageThrow("IMAGE_GUIDERECT");
		IMAGE_GUIDERECT2 = aMgr.GetImageThrow("IMAGE_GUIDERECT2");
		IMAGE_HAT = aMgr.GetImageThrow("IMAGE_HAT");
		IMAGE_JIMMY = aMgr.GetImageThrow("IMAGE_JIMMY");
		IMAGE_JIMMYSPEECH = aMgr.GetImageThrow("IMAGE_JIMMYSPEECH");
		IMAGE_MAGICHAT = aMgr.GetImageThrow("IMAGE_MAGICHAT");
		IMAGE_MASTERBADGE = aMgr.GetImageThrow("IMAGE_MASTERBADGE");
		IMAGE_NUKE = aMgr.GetImageThrow("IMAGE_NUKE");
		IMAGE_NUKESTREAK = aMgr.GetImageThrow("IMAGE_NUKESTREAK");
		IMAGE_PAUSED = aMgr.GetImageThrow("IMAGE_PAUSED");
		IMAGE_PEGGLOW = aMgr.GetImageThrow("IMAGE_PEGGLOW");
		IMAGE_PEGSHADOW = aMgr.GetImageThrow("IMAGE_PEGSHADOW");
		IMAGE_POWERUPICON = aMgr.GetImageThrow("IMAGE_POWERUPICON");
		IMAGE_PULSE2_POWERUP = aMgr.GetImageThrow("IMAGE_PULSE2_POWERUP");
		IMAGE_PULSE2_SCORE = aMgr.GetImageThrow("IMAGE_PULSE2_SCORE");
		IMAGE_PULSE_GOAL = aMgr.GetImageThrow("IMAGE_PULSE_GOAL");
		IMAGE_PULSE_NORMAL = aMgr.GetImageThrow("IMAGE_PULSE_NORMAL");
		IMAGE_PULSE_POWERUP = aMgr.GetImageThrow("IMAGE_PULSE_POWERUP");
		IMAGE_PULSE_SCORE = aMgr.GetImageThrow("IMAGE_PULSE_SCORE");
		IMAGE_PYRAMIDBALL = aMgr.GetImageThrow("IMAGE_PYRAMIDBALL");
		IMAGE_PYRAMIDRAY = aMgr.GetImageThrow("IMAGE_PYRAMIDRAY");
		IMAGE_SCOREICON = aMgr.GetImageThrow("IMAGE_SCOREICON");
		IMAGE_SMOKE = aMgr.GetImageThrow("IMAGE_SMOKE");
		IMAGE_SPACEBUBBLE = aMgr.GetImageThrow("IMAGE_SPACEBUBBLE");
		IMAGE_SPACEBURST = aMgr.GetImageThrow("IMAGE_SPACEBURST");
		IMAGE_SPACEHALO = aMgr.GetImageThrow("IMAGE_SPACEHALO");
		IMAGE_SPACESTAR = aMgr.GetImageThrow("IMAGE_SPACESTAR");
		IMAGE_SPARKLE = aMgr.GetImageThrow("IMAGE_SPARKLE");
		IMAGE_SPARKLE_FEVER = aMgr.GetImageThrow("IMAGE_SPARKLE_FEVER");
		IMAGE_SPOOKYEYES = aMgr.GetImageThrow("IMAGE_SPOOKYEYES");
		IMAGE_SPOOKYGHOST = aMgr.GetImageThrow("IMAGE_SPOOKYGHOST");
		IMAGE_SPOOKYPOOF1 = aMgr.GetImageThrow("IMAGE_SPOOKYPOOF1");
		IMAGE_SPOOKYPOOF2 = aMgr.GetImageThrow("IMAGE_SPOOKYPOOF2");
		IMAGE_SPOOKYTRAIL = aMgr.GetImageThrow("IMAGE_SPOOKYTRAIL");
		IMAGE_STAR_STREAK = aMgr.GetImageThrow("IMAGE_STAR_STREAK");
		IMAGE_STREAK = aMgr.GetImageThrow("IMAGE_STREAK");
		IMAGE_TINYBLUERIBBON = aMgr.GetImageThrow("IMAGE_TINYBLUERIBBON");
		IMAGE_TIPARROW = aMgr.GetImageThrow("IMAGE_TIPARROW");
		IMAGE_VS_DUEL = aMgr.GetImageThrow("IMAGE_VS_DUEL");
		IMAGE_VS_DUELBACK = aMgr.GetImageThrow("IMAGE_VS_DUELBACK");
		IMAGE_XFEVER = aMgr.GetImageThrow("IMAGE_XFEVER");
		IMAGE_XFEVERGLOW = aMgr.GetImageThrow("IMAGE_XFEVERGLOW");
		IMAGE_YINYANG = aMgr.GetImageThrow("IMAGE_YINYANG");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Help Resources
Image* Sexy::IMAGE_HELP_ICONS;
Image* Sexy::IMAGE_HELP_ICONS2;

bool Sexy::ExtractHelpResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_HELP_ICONS = aMgr.GetImageThrow("IMAGE_HELP_ICONS");
		IMAGE_HELP_ICONS2 = aMgr.GetImageThrow("IMAGE_HELP_ICONS2");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// HuBorder Resources
Image* Sexy::IMAGE_IP_HU_BOTTOM;
Image* Sexy::IMAGE_IP_HU_LEFT;
Image* Sexy::IMAGE_IP_HU_RIGHT;
Image* Sexy::IMAGE_IP_HU_TOP;
Image* Sexy::IMAGE_IP_MASTERHU_GUTTER_BG_LEFT;
Image* Sexy::IMAGE_IP_MASTERHU_GUTTER_BG_RIGHT;
Image* Sexy::IMAGE_IP_MASTERHU_GUTTER_CLOUD;
Image* Sexy::IMAGE_IP_MASTERHU_GUTTER_L_HILL;
Image* Sexy::IMAGE_IP_MASTERHU_GUTTER_R_HILL;

bool Sexy::ExtractHuBorderResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_IP_HU_BOTTOM = aMgr.GetImageThrow("IMAGE_IP_HU_BOTTOM");
		IMAGE_IP_HU_LEFT = aMgr.GetImageThrow("IMAGE_IP_HU_LEFT");
		IMAGE_IP_HU_RIGHT = aMgr.GetImageThrow("IMAGE_IP_HU_RIGHT");
		IMAGE_IP_HU_TOP = aMgr.GetImageThrow("IMAGE_IP_HU_TOP");
		IMAGE_IP_MASTERHU_GUTTER_BG_LEFT = aMgr.GetImageThrow("IMAGE_IP_MASTERHU_GUTTER_BG_LEFT");
		IMAGE_IP_MASTERHU_GUTTER_BG_RIGHT = aMgr.GetImageThrow("IMAGE_IP_MASTERHU_GUTTER_BG_RIGHT");
		IMAGE_IP_MASTERHU_GUTTER_CLOUD = aMgr.GetImageThrow("IMAGE_IP_MASTERHU_GUTTER_CLOUD");
		IMAGE_IP_MASTERHU_GUTTER_L_HILL = aMgr.GetImageThrow("IMAGE_IP_MASTERHU_GUTTER_L_HILL");
		IMAGE_IP_MASTERHU_GUTTER_R_HILL = aMgr.GetImageThrow("IMAGE_IP_MASTERHU_GUTTER_R_HILL");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// IP Resources
Image* Sexy::IMAGE_IP_B;
Image* Sexy::IMAGE_IP_BALLOTRON;
Image* Sexy::IMAGE_IP_BEXTEND;
Image* Sexy::IMAGE_IP_BLC;
Image* Sexy::IMAGE_IP_BRC;
Image* Sexy::IMAGE_IP_FEVERMETER;
Image* Sexy::IMAGE_IP_GOLD_PLATE;
Image* Sexy::IMAGE_IP_L1;
Image* Sexy::IMAGE_IP_L2;
Image* Sexy::IMAGE_IP_LEXTEND;
Image* Sexy::IMAGE_IP_LWINDOW;
Image* Sexy::IMAGE_IP_ORBGLOW;
Image* Sexy::IMAGE_IP_PARTY_BOTTOM;
Image* Sexy::IMAGE_IP_PARTY_LEFT;
Image* Sexy::IMAGE_IP_PARTY_RIGHT;
Image* Sexy::IMAGE_IP_PARTY_TOP;
Image* Sexy::IMAGE_IP_POWERUPBANNER;
Image* Sexy::IMAGE_IP_R1;
Image* Sexy::IMAGE_IP_R2;
Image* Sexy::IMAGE_IP_REXTEND;
Image* Sexy::IMAGE_IP_RWINDOW;
Image* Sexy::IMAGE_IP_SEAMS;
Image* Sexy::IMAGE_IP_SHOOTER;
Image* Sexy::IMAGE_IP_SHOOTERBACK;
Image* Sexy::IMAGE_IP_SHOOTERORB;
Image* Sexy::IMAGE_IP_TEXTEND;
Image* Sexy::IMAGE_IP_TITLEBAR;
Image* Sexy::IMAGE_IP_TITLEGLOSS;
Image* Sexy::IMAGE_IP_TITLELC;
Image* Sexy::IMAGE_IP_TITLERC;
Image* Sexy::IMAGE_IP_TITLESLIDER;
Image* Sexy::IMAGE_IP_TL1;
Image* Sexy::IMAGE_IP_TL2;
Image* Sexy::IMAGE_IP_TLC;
Image* Sexy::IMAGE_IP_TR1;
Image* Sexy::IMAGE_IP_TR2;
Image* Sexy::IMAGE_IP_TRC;

bool Sexy::ExtractIPResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_IP_B = aMgr.GetImageThrow("IMAGE_IP_B");
		IMAGE_IP_BALLOTRON = aMgr.GetImageThrow("IMAGE_IP_BALLOTRON");
		IMAGE_IP_BEXTEND = aMgr.GetImageThrow("IMAGE_IP_BEXTEND");
		IMAGE_IP_BLC = aMgr.GetImageThrow("IMAGE_IP_BLC");
		IMAGE_IP_BRC = aMgr.GetImageThrow("IMAGE_IP_BRC");
		IMAGE_IP_FEVERMETER = aMgr.GetImageThrow("IMAGE_IP_FEVERMETER");
		IMAGE_IP_GOLD_PLATE = aMgr.GetImageThrow("IMAGE_IP_GOLD_PLATE");
		IMAGE_IP_L1 = aMgr.GetImageThrow("IMAGE_IP_L1");
		IMAGE_IP_L2 = aMgr.GetImageThrow("IMAGE_IP_L2");
		IMAGE_IP_LEXTEND = aMgr.GetImageThrow("IMAGE_IP_LEXTEND");
		IMAGE_IP_LWINDOW = aMgr.GetImageThrow("IMAGE_IP_LWINDOW");
		IMAGE_IP_ORBGLOW = aMgr.GetImageThrow("IMAGE_IP_ORBGLOW");
		IMAGE_IP_PARTY_BOTTOM = aMgr.GetImageThrow("IMAGE_IP_PARTY_BOTTOM");
		IMAGE_IP_PARTY_LEFT = aMgr.GetImageThrow("IMAGE_IP_PARTY_LEFT");
		IMAGE_IP_PARTY_RIGHT = aMgr.GetImageThrow("IMAGE_IP_PARTY_RIGHT");
		IMAGE_IP_PARTY_TOP = aMgr.GetImageThrow("IMAGE_IP_PARTY_TOP");
		IMAGE_IP_POWERUPBANNER = aMgr.GetImageThrow("IMAGE_IP_POWERUPBANNER");
		IMAGE_IP_R1 = aMgr.GetImageThrow("IMAGE_IP_R1");
		IMAGE_IP_R2 = aMgr.GetImageThrow("IMAGE_IP_R2");
		IMAGE_IP_REXTEND = aMgr.GetImageThrow("IMAGE_IP_REXTEND");
		IMAGE_IP_RWINDOW = aMgr.GetImageThrow("IMAGE_IP_RWINDOW");
		IMAGE_IP_SEAMS = aMgr.GetImageThrow("IMAGE_IP_SEAMS");
		IMAGE_IP_SHOOTER = aMgr.GetImageThrow("IMAGE_IP_SHOOTER");
		IMAGE_IP_SHOOTERBACK = aMgr.GetImageThrow("IMAGE_IP_SHOOTERBACK");
		IMAGE_IP_SHOOTERORB = aMgr.GetImageThrow("IMAGE_IP_SHOOTERORB");
		IMAGE_IP_TEXTEND = aMgr.GetImageThrow("IMAGE_IP_TEXTEND");
		IMAGE_IP_TITLEBAR = aMgr.GetImageThrow("IMAGE_IP_TITLEBAR");
		IMAGE_IP_TITLEGLOSS = aMgr.GetImageThrow("IMAGE_IP_TITLEGLOSS");
		IMAGE_IP_TITLELC = aMgr.GetImageThrow("IMAGE_IP_TITLELC");
		IMAGE_IP_TITLERC = aMgr.GetImageThrow("IMAGE_IP_TITLERC");
		IMAGE_IP_TITLESLIDER = aMgr.GetImageThrow("IMAGE_IP_TITLESLIDER");
		IMAGE_IP_TL1 = aMgr.GetImageThrow("IMAGE_IP_TL1");
		IMAGE_IP_TL2 = aMgr.GetImageThrow("IMAGE_IP_TL2");
		IMAGE_IP_TLC = aMgr.GetImageThrow("IMAGE_IP_TLC");
		IMAGE_IP_TR1 = aMgr.GetImageThrow("IMAGE_IP_TR1");
		IMAGE_IP_TR2 = aMgr.GetImageThrow("IMAGE_IP_TR2");
		IMAGE_IP_TRC = aMgr.GetImageThrow("IMAGE_IP_TRC");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Init Resources
Font* Sexy::FONT_OVERLOAD16;
Font* Sexy::FONT_OVERLOAD16OUTLINE;
Font* Sexy::FONT_OVERLOAD16OUTLINE2;
Image* Sexy::IMAGE_SUNGLOW;
int Sexy::SOUND_MORNING;

bool Sexy::ExtractInitResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		FONT_OVERLOAD16 = aMgr.GetFontThrow("FONT_OVERLOAD16");
		FONT_OVERLOAD16OUTLINE = aMgr.GetFontThrow("FONT_OVERLOAD16OUTLINE");
		FONT_OVERLOAD16OUTLINE2 = aMgr.GetFontThrow("FONT_OVERLOAD16OUTLINE2");
		IMAGE_SUNGLOW = aMgr.GetImageThrow("IMAGE_SUNGLOW");
		SOUND_MORNING = aMgr.GetSoundThrow("SOUND_MORNING");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Interface Resources
Image* Sexy::IMAGE_INT_BACKSHADOW;
Image* Sexy::IMAGE_INT_BALL;
Image* Sexy::IMAGE_INT_BALLBACK;
Image* Sexy::IMAGE_INT_BALLGLASS;
Image* Sexy::IMAGE_INT_BALLOMASKBL;
Image* Sexy::IMAGE_INT_BALLOMASKBR;
Image* Sexy::IMAGE_INT_BALLOMASKTL;
Image* Sexy::IMAGE_INT_BALLOMASKTR;
Image* Sexy::IMAGE_INT_BGCHECKBOX;
Image* Sexy::IMAGE_INT_BGCHECKGLOW;
Image* Sexy::IMAGE_INT_BIGDLGBUTTON;
Image* Sexy::IMAGE_INT_BIGDLGGLOW;
Image* Sexy::IMAGE_INT_BIGMENUBUTTON;
Image* Sexy::IMAGE_INT_BIGMENUGLOW;
Image* Sexy::IMAGE_INT_BUTTONCOVER;
Image* Sexy::IMAGE_INT_CANNON;
Image* Sexy::IMAGE_INT_CANNONCOVER;
Image* Sexy::IMAGE_INT_COLORCHECK;
Image* Sexy::IMAGE_INT_CONTROLS;
Image* Sexy::IMAGE_INT_COUNTER;
Image* Sexy::IMAGE_INT_FBCENTERDISC;
Image* Sexy::IMAGE_INT_FBFREEBALL;
Image* Sexy::IMAGE_INT_FBGLOW;
Image* Sexy::IMAGE_INT_FBLIGHTUP;
Image* Sexy::IMAGE_INT_FBPOINTS;
Image* Sexy::IMAGE_INT_FEVERBARLITES;
Image* Sexy::IMAGE_INT_FEVERBARS;
Image* Sexy::IMAGE_INT_FEVERGLOW;
Image* Sexy::IMAGE_INT_FEVERGLOW1;
Image* Sexy::IMAGE_INT_FEVERGLOW2;
Image* Sexy::IMAGE_INT_FEVERGLOW3;
Image* Sexy::IMAGE_INT_FEVERMETER;
Image* Sexy::IMAGE_INT_FEVERMETERBOTTOM;
Image* Sexy::IMAGE_INT_FEVERMETERTOP;
Image* Sexy::IMAGE_INT_FEVERRAILING;
Image* Sexy::IMAGE_INT_FREEBALLMETER;
Image* Sexy::IMAGE_INT_FREEBALLMETERTOP;
Image* Sexy::IMAGE_INT_LEVELSELECT;
Image* Sexy::IMAGE_INT_LEVELSELECTBUTTON;
Image* Sexy::IMAGE_INT_LEVELSELECTGLOW;
Image* Sexy::IMAGE_INT_PADLOCK;
Image* Sexy::IMAGE_INT_PLUNGER;
Image* Sexy::IMAGE_INT_SCOREHILIGHT;

bool Sexy::ExtractInterfaceResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_INT_BACKSHADOW = aMgr.GetImageThrow("IMAGE_INT_BACKSHADOW");
		IMAGE_INT_BALL = aMgr.GetImageThrow("IMAGE_INT_BALL");
		IMAGE_INT_BALLBACK = aMgr.GetImageThrow("IMAGE_INT_BALLBACK");
		IMAGE_INT_BALLGLASS = aMgr.GetImageThrow("IMAGE_INT_BALLGLASS");
		IMAGE_INT_BALLOMASKBL = aMgr.GetImageThrow("IMAGE_INT_BALLOMASKBL");
		IMAGE_INT_BALLOMASKBR = aMgr.GetImageThrow("IMAGE_INT_BALLOMASKBR");
		IMAGE_INT_BALLOMASKTL = aMgr.GetImageThrow("IMAGE_INT_BALLOMASKTL");
		IMAGE_INT_BALLOMASKTR = aMgr.GetImageThrow("IMAGE_INT_BALLOMASKTR");
		IMAGE_INT_BGCHECKBOX = aMgr.GetImageThrow("IMAGE_INT_BGCHECKBOX");
		IMAGE_INT_BGCHECKGLOW = aMgr.GetImageThrow("IMAGE_INT_BGCHECKGLOW");
		IMAGE_INT_BIGDLGBUTTON = aMgr.GetImageThrow("IMAGE_INT_BIGDLGBUTTON");
		IMAGE_INT_BIGDLGGLOW = aMgr.GetImageThrow("IMAGE_INT_BIGDLGGLOW");
		IMAGE_INT_BIGMENUBUTTON = aMgr.GetImageThrow("IMAGE_INT_BIGMENUBUTTON");
		IMAGE_INT_BIGMENUGLOW = aMgr.GetImageThrow("IMAGE_INT_BIGMENUGLOW");
		IMAGE_INT_BUTTONCOVER = aMgr.GetImageThrow("IMAGE_INT_BUTTONCOVER");
		IMAGE_INT_CANNON = aMgr.GetImageThrow("IMAGE_INT_CANNON");
		IMAGE_INT_CANNONCOVER = aMgr.GetImageThrow("IMAGE_INT_CANNONCOVER");
		IMAGE_INT_COLORCHECK = aMgr.GetImageThrow("IMAGE_INT_COLORCHECK");
		IMAGE_INT_CONTROLS = aMgr.GetImageThrow("IMAGE_INT_CONTROLS");
		IMAGE_INT_COUNTER = aMgr.GetImageThrow("IMAGE_INT_COUNTER");
		IMAGE_INT_FBCENTERDISC = aMgr.GetImageThrow("IMAGE_INT_FBCENTERDISC");
		IMAGE_INT_FBFREEBALL = aMgr.GetImageThrow("IMAGE_INT_FBFREEBALL");
		IMAGE_INT_FBGLOW = aMgr.GetImageThrow("IMAGE_INT_FBGLOW");
		IMAGE_INT_FBLIGHTUP = aMgr.GetImageThrow("IMAGE_INT_FBLIGHTUP");
		IMAGE_INT_FBPOINTS = aMgr.GetImageThrow("IMAGE_INT_FBPOINTS");
		IMAGE_INT_FEVERBARLITES = aMgr.GetImageThrow("IMAGE_INT_FEVERBARLITES");
		IMAGE_INT_FEVERBARS = aMgr.GetImageThrow("IMAGE_INT_FEVERBARS");
		IMAGE_INT_FEVERGLOW = aMgr.GetImageThrow("IMAGE_INT_FEVERGLOW");
		IMAGE_INT_FEVERGLOW1 = aMgr.GetImageThrow("IMAGE_INT_FEVERGLOW1");
		IMAGE_INT_FEVERGLOW2 = aMgr.GetImageThrow("IMAGE_INT_FEVERGLOW2");
		IMAGE_INT_FEVERGLOW3 = aMgr.GetImageThrow("IMAGE_INT_FEVERGLOW3");
		IMAGE_INT_FEVERMETER = aMgr.GetImageThrow("IMAGE_INT_FEVERMETER");
		IMAGE_INT_FEVERMETERBOTTOM = aMgr.GetImageThrow("IMAGE_INT_FEVERMETERBOTTOM");
		IMAGE_INT_FEVERMETERTOP = aMgr.GetImageThrow("IMAGE_INT_FEVERMETERTOP");
		IMAGE_INT_FEVERRAILING = aMgr.GetImageThrow("IMAGE_INT_FEVERRAILING");
		IMAGE_INT_FREEBALLMETER = aMgr.GetImageThrow("IMAGE_INT_FREEBALLMETER");
		IMAGE_INT_FREEBALLMETERTOP = aMgr.GetImageThrow("IMAGE_INT_FREEBALLMETERTOP");
		IMAGE_INT_LEVELSELECT = aMgr.GetImageThrow("IMAGE_INT_LEVELSELECT");
		IMAGE_INT_LEVELSELECTBUTTON = aMgr.GetImageThrow("IMAGE_INT_LEVELSELECTBUTTON");
		IMAGE_INT_LEVELSELECTGLOW = aMgr.GetImageThrow("IMAGE_INT_LEVELSELECTGLOW");
		IMAGE_INT_PADLOCK = aMgr.GetImageThrow("IMAGE_INT_PADLOCK");
		IMAGE_INT_PLUNGER = aMgr.GetImageThrow("IMAGE_INT_PLUNGER");
		IMAGE_INT_SCOREHILIGHT = aMgr.GetImageThrow("IMAGE_INT_SCOREHILIGHT");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// JimmyBorder Resources
Image* Sexy::IMAGE_IP_JIMMY_BOTTOM;
Image* Sexy::IMAGE_IP_JIMMY_GUTTER_BG_LEFT;
Image* Sexy::IMAGE_IP_JIMMY_GUTTER_BG_RIGHT;
Image* Sexy::IMAGE_IP_JIMMY_GUTTER_L_FALL1;
Image* Sexy::IMAGE_IP_JIMMY_GUTTER_L_FALL2;
Image* Sexy::IMAGE_IP_JIMMY_GUTTER_L_FOREGROUND;
Image* Sexy::IMAGE_IP_JIMMY_GUTTER_R_FALL1;
Image* Sexy::IMAGE_IP_JIMMY_GUTTER_R_FALL2;
Image* Sexy::IMAGE_IP_JIMMY_GUTTER_R_FOREGROUND;
Image* Sexy::IMAGE_IP_JIMMY_LEFT;
Image* Sexy::IMAGE_IP_JIMMY_RIGHT;
Image* Sexy::IMAGE_IP_JIMMY_TOP;

bool Sexy::ExtractJimmyBorderResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_IP_JIMMY_BOTTOM = aMgr.GetImageThrow("IMAGE_IP_JIMMY_BOTTOM");
		IMAGE_IP_JIMMY_GUTTER_BG_LEFT = aMgr.GetImageThrow("IMAGE_IP_JIMMY_GUTTER_BG_LEFT");
		IMAGE_IP_JIMMY_GUTTER_BG_RIGHT = aMgr.GetImageThrow("IMAGE_IP_JIMMY_GUTTER_BG_RIGHT");
		IMAGE_IP_JIMMY_GUTTER_L_FALL1 = aMgr.GetImageThrow("IMAGE_IP_JIMMY_GUTTER_L_FALL1");
		IMAGE_IP_JIMMY_GUTTER_L_FALL2 = aMgr.GetImageThrow("IMAGE_IP_JIMMY_GUTTER_L_FALL2");
		IMAGE_IP_JIMMY_GUTTER_L_FOREGROUND = aMgr.GetImageThrow("IMAGE_IP_JIMMY_GUTTER_L_FOREGROUND");
		IMAGE_IP_JIMMY_GUTTER_R_FALL1 = aMgr.GetImageThrow("IMAGE_IP_JIMMY_GUTTER_R_FALL1");
		IMAGE_IP_JIMMY_GUTTER_R_FALL2 = aMgr.GetImageThrow("IMAGE_IP_JIMMY_GUTTER_R_FALL2");
		IMAGE_IP_JIMMY_GUTTER_R_FOREGROUND = aMgr.GetImageThrow("IMAGE_IP_JIMMY_GUTTER_R_FOREGROUND");
		IMAGE_IP_JIMMY_LEFT = aMgr.GetImageThrow("IMAGE_IP_JIMMY_LEFT");
		IMAGE_IP_JIMMY_RIGHT = aMgr.GetImageThrow("IMAGE_IP_JIMMY_RIGHT");
		IMAGE_IP_JIMMY_TOP = aMgr.GetImageThrow("IMAGE_IP_JIMMY_TOP");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// KattutBorder Resources
Image* Sexy::IMAGE_IP_KATTUT_BOTTOM;
Image* Sexy::IMAGE_IP_KATTUT_GUTTER_BG_LEFT;
Image* Sexy::IMAGE_IP_KATTUT_GUTTER_BG_RIGHT;
Image* Sexy::IMAGE_IP_KATTUT_GUTTER_CLOUDS;
Image* Sexy::IMAGE_IP_KATTUT_LEFT;
Image* Sexy::IMAGE_IP_KATTUT_RIGHT;
Image* Sexy::IMAGE_IP_KATTUT_TOP;

bool Sexy::ExtractKattutBorderResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_IP_KATTUT_BOTTOM = aMgr.GetImageThrow("IMAGE_IP_KATTUT_BOTTOM");
		IMAGE_IP_KATTUT_GUTTER_BG_LEFT = aMgr.GetImageThrow("IMAGE_IP_KATTUT_GUTTER_BG_LEFT");
		IMAGE_IP_KATTUT_GUTTER_BG_RIGHT = aMgr.GetImageThrow("IMAGE_IP_KATTUT_GUTTER_BG_RIGHT");
		IMAGE_IP_KATTUT_GUTTER_CLOUDS = aMgr.GetImageThrow("IMAGE_IP_KATTUT_GUTTER_CLOUDS");
		IMAGE_IP_KATTUT_LEFT = aMgr.GetImageThrow("IMAGE_IP_KATTUT_LEFT");
		IMAGE_IP_KATTUT_RIGHT = aMgr.GetImageThrow("IMAGE_IP_KATTUT_RIGHT");
		IMAGE_IP_KATTUT_TOP = aMgr.GetImageThrow("IMAGE_IP_KATTUT_TOP");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// LeaderboardMenu Resources
Image* Sexy::IMAGE_LB_100;
Image* Sexy::IMAGE_LB_BACKING;
Image* Sexy::IMAGE_LB_FREEBALL;
Image* Sexy::IMAGE_LB_GAMECLIP;
Image* Sexy::IMAGE_LB_GAMECLIP_SMALL;
Image* Sexy::IMAGE_LB_GAMECLIP_SMALL_STROKE;
Image* Sexy::IMAGE_LB_HOLDER;
Image* Sexy::IMAGE_LB_MASTER0;
Image* Sexy::IMAGE_LB_MASTER1;
Image* Sexy::IMAGE_LB_MASTER2;
Image* Sexy::IMAGE_LB_MASTER3;
Image* Sexy::IMAGE_LB_MASTER4;
Image* Sexy::IMAGE_LB_MASTER5;
Image* Sexy::IMAGE_LB_MASTER6;
Image* Sexy::IMAGE_LB_MASTER7;
Image* Sexy::IMAGE_LB_MASTER8;
Image* Sexy::IMAGE_LB_MASTER9;
Image* Sexy::IMAGE_LB_NOBALL;
Image* Sexy::IMAGE_LB_SHOT;
Image* Sexy::IMAGE_LB_ZEN;

bool Sexy::ExtractLeaderboardMenuResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_LB_100 = aMgr.GetImageThrow("IMAGE_LB_100");
		IMAGE_LB_BACKING = aMgr.GetImageThrow("IMAGE_LB_BACKING");
		IMAGE_LB_FREEBALL = aMgr.GetImageThrow("IMAGE_LB_FREEBALL");
		IMAGE_LB_GAMECLIP = aMgr.GetImageThrow("IMAGE_LB_GAMECLIP");
		IMAGE_LB_GAMECLIP_SMALL = aMgr.GetImageThrow("IMAGE_LB_GAMECLIP_SMALL");
		IMAGE_LB_GAMECLIP_SMALL_STROKE = aMgr.GetImageThrow("IMAGE_LB_GAMECLIP_SMALL_STROKE");
		IMAGE_LB_HOLDER = aMgr.GetImageThrow("IMAGE_LB_HOLDER");
		IMAGE_LB_MASTER0 = aMgr.GetImageThrow("IMAGE_LB_MASTER0");
		IMAGE_LB_MASTER1 = aMgr.GetImageThrow("IMAGE_LB_MASTER1");
		IMAGE_LB_MASTER2 = aMgr.GetImageThrow("IMAGE_LB_MASTER2");
		IMAGE_LB_MASTER3 = aMgr.GetImageThrow("IMAGE_LB_MASTER3");
		IMAGE_LB_MASTER4 = aMgr.GetImageThrow("IMAGE_LB_MASTER4");
		IMAGE_LB_MASTER5 = aMgr.GetImageThrow("IMAGE_LB_MASTER5");
		IMAGE_LB_MASTER6 = aMgr.GetImageThrow("IMAGE_LB_MASTER6");
		IMAGE_LB_MASTER7 = aMgr.GetImageThrow("IMAGE_LB_MASTER7");
		IMAGE_LB_MASTER8 = aMgr.GetImageThrow("IMAGE_LB_MASTER8");
		IMAGE_LB_MASTER9 = aMgr.GetImageThrow("IMAGE_LB_MASTER9");
		IMAGE_LB_NOBALL = aMgr.GetImageThrow("IMAGE_LB_NOBALL");
		IMAGE_LB_SHOT = aMgr.GetImageThrow("IMAGE_LB_SHOT");
		IMAGE_LB_ZEN = aMgr.GetImageThrow("IMAGE_LB_ZEN");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// LevelSelect Resources
Image* Sexy::IMAGE_LS_CHALLENGEBADGE;
Image* Sexy::IMAGE_LS_DOWNLOAD;
Image* Sexy::IMAGE_LS_LOCK;
Image* Sexy::IMAGE_LS_LOCK_SMALL;
Image* Sexy::IMAGE_LS_RANDOMLEVEL;
Image* Sexy::IMAGE_LS_TINYBLUERIBBON;
Image* Sexy::IMAGE_LS_TINYMASTER;
Image* Sexy::IMAGE_LS_WATERMARK;

bool Sexy::ExtractLevelSelectResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_LS_CHALLENGEBADGE = aMgr.GetImageThrow("IMAGE_LS_CHALLENGEBADGE");
		IMAGE_LS_DOWNLOAD = aMgr.GetImageThrow("IMAGE_LS_DOWNLOAD");
		IMAGE_LS_LOCK = aMgr.GetImageThrow("IMAGE_LS_LOCK");
		IMAGE_LS_LOCK_SMALL = aMgr.GetImageThrow("IMAGE_LS_LOCK_SMALL");
		IMAGE_LS_RANDOMLEVEL = aMgr.GetImageThrow("IMAGE_LS_RANDOMLEVEL");
		IMAGE_LS_TINYBLUERIBBON = aMgr.GetImageThrow("IMAGE_LS_TINYBLUERIBBON");
		IMAGE_LS_TINYMASTER = aMgr.GetImageThrow("IMAGE_LS_TINYMASTER");
		IMAGE_LS_WATERMARK = aMgr.GetImageThrow("IMAGE_LS_WATERMARK");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Load Resources
Image* Sexy::IMAGE_LOAD_BALL;
Image* Sexy::IMAGE_LOAD_LIGHTS;
Image* Sexy::IMAGE_LOAD_LOGO;
Image* Sexy::IMAGE_LOAD_OVERLAY;
Image* Sexy::IMAGE_LOAD_PLAYNOW;
Image* Sexy::IMAGE_LOAD_SHADOW;
Image* Sexy::IMAGE_LOAD_SUNHEAD;
Image* Sexy::IMAGE_LOAD_TM;

bool Sexy::ExtractLoadResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_LOAD_BALL = aMgr.GetImageThrow("IMAGE_LOAD_BALL");
		IMAGE_LOAD_LIGHTS = aMgr.GetImageThrow("IMAGE_LOAD_LIGHTS");
		IMAGE_LOAD_LOGO = aMgr.GetImageThrow("IMAGE_LOAD_LOGO");
		IMAGE_LOAD_OVERLAY = aMgr.GetImageThrow("IMAGE_LOAD_OVERLAY");
		IMAGE_LOAD_PLAYNOW = aMgr.GetImageThrow("IMAGE_LOAD_PLAYNOW");
		IMAGE_LOAD_SHADOW = aMgr.GetImageThrow("IMAGE_LOAD_SHADOW");
		IMAGE_LOAD_SUNHEAD = aMgr.GetImageThrow("IMAGE_LOAD_SUNHEAD");
		IMAGE_LOAD_TM = aMgr.GetImageThrow("IMAGE_LOAD_TM");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// LoadingThread Resources
Font* Sexy::FONT_BALLSLEFT;
Font* Sexy::FONT_BONK;
Font* Sexy::FONT_BUTTON;
Font* Sexy::FONT_LEVELUP;
Font* Sexy::FONT_OVERLOAD10;
Font* Sexy::FONT_OVERLOAD10OUTLINE;
Font* Sexy::FONT_OVERLOAD12;
Font* Sexy::FONT_OVERLOAD12OUTLINE;
Font* Sexy::FONT_OVERLOAD24;
Font* Sexy::FONT_OVERLOAD24GRAD1;
Font* Sexy::FONT_OVERLOAD24GRAD2;
Font* Sexy::FONT_OVERLOAD24OUTLINE;
Font* Sexy::FONT_OVERLOADMONO10;
Font* Sexy::FONT_OVERLOADMONO12;
Font* Sexy::FONT_PLAIN;
Font* Sexy::FONT_PLAIN2;
Font* Sexy::FONT_PLAIN2BIG;
Font* Sexy::FONT_PLAIN2BIGOUTLINE;
Font* Sexy::FONT_PLAIN2OUTLINE;
Font* Sexy::FONT_PLAINOUTLINE;
Font* Sexy::FONT_SCORE_DISP;
Font* Sexy::FONT_SMALL;
Font* Sexy::FONT_SMALLMONO;
Font* Sexy::FONT_SMALL_DISP;
Font* Sexy::FONT_STAGE;
int Sexy::SOUND_AAH;
int Sexy::SOUND_ADD_BALL;
int Sexy::SOUND_ALL_RANDOM_OFF;
int Sexy::SOUND_ALL_RANDOM_ON;
int Sexy::SOUND_APPLAUSE;
int Sexy::SOUND_AWARD;
int Sexy::SOUND_BEST_SHOT;
int Sexy::SOUND_BUBBLES;
int Sexy::SOUND_BUCKETHIT;
int Sexy::SOUND_BUTTON1;
int Sexy::SOUND_BUTTON2;
int Sexy::SOUND_CANNONCOCK;
int Sexy::SOUND_CANNONSHOT;
int Sexy::SOUND_COINSPIN;
int Sexy::SOUND_COINSPIN_NO;
int Sexy::SOUND_CYMBAL;
int Sexy::SOUND_DIALOG_MOVE;
int Sexy::SOUND_DING;
int Sexy::SOUND_EXPLODE;
int Sexy::SOUND_EXTRABALL;
int Sexy::SOUND_EXTRABALL2;
int Sexy::SOUND_EXTRABALL3;
int Sexy::SOUND_FEVERHIT;
int Sexy::SOUND_FIREBALLBOUNCE;
int Sexy::SOUND_FIREBALLLOOP;
int Sexy::SOUND_FIREBALLSHOT;
int Sexy::SOUND_FIREWORKPOP;
int Sexy::SOUND_FIREWORKS1;
int Sexy::SOUND_FIREWORKS2;
int Sexy::SOUND_FLIP;
int Sexy::SOUND_FLIPPERBOUNCE;
int Sexy::SOUND_FLIPPERDOWN;
int Sexy::SOUND_FLIPPERUP;
int Sexy::SOUND_FREEBALL;
int Sexy::SOUND_GONG;
int Sexy::SOUND_JOIN_LOBBY;
int Sexy::SOUND_LEAVE_LOBBY;
int Sexy::SOUND_LEVELDONE;
int Sexy::SOUND_LEVELLOST;
int Sexy::SOUND_LEVELWON;
int Sexy::SOUND_MISS;
int Sexy::SOUND_MOUSEOVER;
int Sexy::SOUND_MULTIBALL;
int Sexy::SOUND_NEW_LEVEL;
int Sexy::SOUND_NEW_LEVEL_FAST1;
int Sexy::SOUND_NEW_LEVEL_FAST2;
int Sexy::SOUND_NEW_LEVEL_FAST3;
int Sexy::SOUND_NEW_LEVEL_FAST4;
int Sexy::SOUND_NEW_SHOTCLOCK;
int Sexy::SOUND_NUM_ROUNDS_CHANGE;
int Sexy::SOUND_OPTIONS_CANCEL;
int Sexy::SOUND_OPTIONS_CONFIRM;
int Sexy::SOUND_PEGHIT;
int Sexy::SOUND_PEGHIT2;
int Sexy::SOUND_PEGHIT3;
int Sexy::SOUND_PEGHIT_LOW;
int Sexy::SOUND_PEGPOP;
int Sexy::SOUND_PENALTY;
int Sexy::SOUND_PLAYER_READY;
int Sexy::SOUND_POINTBOOST;
int Sexy::SOUND_POWERUP;
int Sexy::SOUND_POWERUP_FIREBALL;
int Sexy::SOUND_POWERUP_FLIPPERS;
int Sexy::SOUND_POWERUP_FLOWERPOWER;
int Sexy::SOUND_POWERUP_GUIDE;
int Sexy::SOUND_POWERUP_LUCKYSPIN;
int Sexy::SOUND_POWERUP_MULTIBALL;
int Sexy::SOUND_POWERUP_PYRAMID;
int Sexy::SOUND_POWERUP_SPACEBLAST;
int Sexy::SOUND_POWERUP_SPOOKYBALL;
int Sexy::SOUND_POWERUP_ZEN;
int Sexy::SOUND_RAINBOW;
int Sexy::SOUND_RESULTS_TEXT;
int Sexy::SOUND_RIBBON_2ND;
int Sexy::SOUND_RIBBON_3RD;
int Sexy::SOUND_RIBBON_4TH;
int Sexy::SOUND_RIBBON_AWARD;
int Sexy::SOUND_RICHOCHET;
int Sexy::SOUND_ROUND_DISC;
int Sexy::SOUND_SCORECOUNTER;
int Sexy::SOUND_SCORE_BAR_EXPLODE;
int Sexy::SOUND_SCORE_BAR_EXPLODE_WIN;
int Sexy::SOUND_SCORE_BAR_FILL;
int Sexy::SOUND_SCORE_BAR_REFILL;
int Sexy::SOUND_SCORE_BAR_TICK;
int Sexy::SOUND_SCREEN_MOVE;
int Sexy::SOUND_SHOT_125K;
int Sexy::SOUND_SHOT_25K;
int Sexy::SOUND_SHOT_75K;
int Sexy::SOUND_SHOT_CLOCK_SUBTLE;
int Sexy::SOUND_SIGH;
int Sexy::SOUND_SKILLSHOT;
int Sexy::SOUND_SLOWMO;
int Sexy::SOUND_SPOOKYBALL2;
int Sexy::SOUND_SPOOKYBALL3;
int Sexy::SOUND_SPOOKYBALL4;
int Sexy::SOUND_STAMP;
int Sexy::SOUND_START_VIEW_BOARD;
int Sexy::SOUND_STOP_VIEW_BOARD;
int Sexy::SOUND_STORY_TYPING;
int Sexy::SOUND_STYLE_SHOT_FILL;
int Sexy::SOUND_TEXT_WOOSH;
int Sexy::SOUND_TING;
int Sexy::SOUND_TONE;
int Sexy::SOUND_TONEHI;
int Sexy::SOUND_TONELO;
int Sexy::SOUND_TONESUPERHI;
int Sexy::SOUND_TROPHY_STAY;
int Sexy::SOUND_TYPING;
int Sexy::SOUND_WHISTLE;
int Sexy::SOUND_WOOSH;

bool Sexy::ExtractLoadingThreadResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		FONT_BALLSLEFT = aMgr.GetFontThrow("FONT_BALLSLEFT");
		FONT_BONK = aMgr.GetFontThrow("FONT_BONK");
		FONT_BUTTON = aMgr.GetFontThrow("FONT_BUTTON");
		FONT_LEVELUP = aMgr.GetFontThrow("FONT_LEVELUP");
		FONT_OVERLOAD10 = aMgr.GetFontThrow("FONT_OVERLOAD10");
		FONT_OVERLOAD10OUTLINE = aMgr.GetFontThrow("FONT_OVERLOAD10OUTLINE");
		FONT_OVERLOAD12 = aMgr.GetFontThrow("FONT_OVERLOAD12");
		FONT_OVERLOAD12OUTLINE = aMgr.GetFontThrow("FONT_OVERLOAD12OUTLINE");
		FONT_OVERLOAD24 = aMgr.GetFontThrow("FONT_OVERLOAD24");
		FONT_OVERLOAD24GRAD1 = aMgr.GetFontThrow("FONT_OVERLOAD24GRAD1");
		FONT_OVERLOAD24GRAD2 = aMgr.GetFontThrow("FONT_OVERLOAD24GRAD2");
		FONT_OVERLOAD24OUTLINE = aMgr.GetFontThrow("FONT_OVERLOAD24OUTLINE");
		FONT_OVERLOADMONO10 = aMgr.GetFontThrow("FONT_OVERLOADMONO10");
		FONT_OVERLOADMONO12 = aMgr.GetFontThrow("FONT_OVERLOADMONO12");
		FONT_PLAIN = aMgr.GetFontThrow("FONT_PLAIN");
		FONT_PLAIN2 = aMgr.GetFontThrow("FONT_PLAIN2");
		FONT_PLAIN2BIG = aMgr.GetFontThrow("FONT_PLAIN2BIG");
		FONT_PLAIN2BIGOUTLINE = aMgr.GetFontThrow("FONT_PLAIN2BIGOUTLINE");
		FONT_PLAIN2OUTLINE = aMgr.GetFontThrow("FONT_PLAIN2OUTLINE");
		FONT_PLAINOUTLINE = aMgr.GetFontThrow("FONT_PLAINOUTLINE");
		FONT_SCORE_DISP = aMgr.GetFontThrow("FONT_SCORE_DISP");
		FONT_SMALL = aMgr.GetFontThrow("FONT_SMALL");
		FONT_SMALLMONO = aMgr.GetFontThrow("FONT_SMALLMONO");
		FONT_SMALL_DISP = aMgr.GetFontThrow("FONT_SMALL_DISP");
		FONT_STAGE = aMgr.GetFontThrow("FONT_STAGE");
		SOUND_AAH = aMgr.GetSoundThrow("SOUND_AAH");
		SOUND_ADD_BALL = aMgr.GetSoundThrow("SOUND_ADD_BALL");
		SOUND_ALL_RANDOM_OFF = aMgr.GetSoundThrow("SOUND_ALL_RANDOM_OFF");
		SOUND_ALL_RANDOM_ON = aMgr.GetSoundThrow("SOUND_ALL_RANDOM_ON");
		SOUND_APPLAUSE = aMgr.GetSoundThrow("SOUND_APPLAUSE");
		SOUND_AWARD = aMgr.GetSoundThrow("SOUND_AWARD");
		SOUND_BEST_SHOT = aMgr.GetSoundThrow("SOUND_BEST_SHOT");
		SOUND_BUBBLES = aMgr.GetSoundThrow("SOUND_BUBBLES");
		SOUND_BUCKETHIT = aMgr.GetSoundThrow("SOUND_BUCKETHIT");
		SOUND_BUTTON1 = aMgr.GetSoundThrow("SOUND_BUTTON1");
		SOUND_BUTTON2 = aMgr.GetSoundThrow("SOUND_BUTTON2");
		SOUND_CANNONCOCK = aMgr.GetSoundThrow("SOUND_CANNONCOCK");
		SOUND_CANNONSHOT = aMgr.GetSoundThrow("SOUND_CANNONSHOT");
		SOUND_COINSPIN = aMgr.GetSoundThrow("SOUND_COINSPIN");
		SOUND_COINSPIN_NO = aMgr.GetSoundThrow("SOUND_COINSPIN_NO");
		SOUND_CYMBAL = aMgr.GetSoundThrow("SOUND_CYMBAL");
		SOUND_DIALOG_MOVE = aMgr.GetSoundThrow("SOUND_DIALOG_MOVE");
		SOUND_DING = aMgr.GetSoundThrow("SOUND_DING");
		SOUND_EXPLODE = aMgr.GetSoundThrow("SOUND_EXPLODE");
		SOUND_EXTRABALL = aMgr.GetSoundThrow("SOUND_EXTRABALL");
		SOUND_EXTRABALL2 = aMgr.GetSoundThrow("SOUND_EXTRABALL2");
		SOUND_EXTRABALL3 = aMgr.GetSoundThrow("SOUND_EXTRABALL3");
		SOUND_FEVERHIT = aMgr.GetSoundThrow("SOUND_FEVERHIT");
		SOUND_FIREBALLBOUNCE = aMgr.GetSoundThrow("SOUND_FIREBALLBOUNCE");
		SOUND_FIREBALLLOOP = aMgr.GetSoundThrow("SOUND_FIREBALLLOOP");
		SOUND_FIREBALLSHOT = aMgr.GetSoundThrow("SOUND_FIREBALLSHOT");
		SOUND_FIREWORKPOP = aMgr.GetSoundThrow("SOUND_FIREWORKPOP");
		SOUND_FIREWORKS1 = aMgr.GetSoundThrow("SOUND_FIREWORKS1");
		SOUND_FIREWORKS2 = aMgr.GetSoundThrow("SOUND_FIREWORKS2");
		SOUND_FLIP = aMgr.GetSoundThrow("SOUND_FLIP");
		SOUND_FLIPPERBOUNCE = aMgr.GetSoundThrow("SOUND_FLIPPERBOUNCE");
		SOUND_FLIPPERDOWN = aMgr.GetSoundThrow("SOUND_FLIPPERDOWN");
		SOUND_FLIPPERUP = aMgr.GetSoundThrow("SOUND_FLIPPERUP");
		SOUND_FREEBALL = aMgr.GetSoundThrow("SOUND_FREEBALL");
		SOUND_GONG = aMgr.GetSoundThrow("SOUND_GONG");
		SOUND_JOIN_LOBBY = aMgr.GetSoundThrow("SOUND_JOIN_LOBBY");
		SOUND_LEAVE_LOBBY = aMgr.GetSoundThrow("SOUND_LEAVE_LOBBY");
		SOUND_LEVELDONE = aMgr.GetSoundThrow("SOUND_LEVELDONE");
		SOUND_LEVELLOST = aMgr.GetSoundThrow("SOUND_LEVELLOST");
		SOUND_LEVELWON = aMgr.GetSoundThrow("SOUND_LEVELWON");
		SOUND_MISS = aMgr.GetSoundThrow("SOUND_MISS");
		SOUND_MOUSEOVER = aMgr.GetSoundThrow("SOUND_MOUSEOVER");
		SOUND_MULTIBALL = aMgr.GetSoundThrow("SOUND_MULTIBALL");
		SOUND_NEW_LEVEL = aMgr.GetSoundThrow("SOUND_NEW_LEVEL");
		SOUND_NEW_LEVEL_FAST1 = aMgr.GetSoundThrow("SOUND_NEW_LEVEL_FAST1");
		SOUND_NEW_LEVEL_FAST2 = aMgr.GetSoundThrow("SOUND_NEW_LEVEL_FAST2");
		SOUND_NEW_LEVEL_FAST3 = aMgr.GetSoundThrow("SOUND_NEW_LEVEL_FAST3");
		SOUND_NEW_LEVEL_FAST4 = aMgr.GetSoundThrow("SOUND_NEW_LEVEL_FAST4");
		SOUND_NEW_SHOTCLOCK = aMgr.GetSoundThrow("SOUND_NEW_SHOTCLOCK");
		SOUND_NUM_ROUNDS_CHANGE = aMgr.GetSoundThrow("SOUND_NUM_ROUNDS_CHANGE");
		SOUND_OPTIONS_CANCEL = aMgr.GetSoundThrow("SOUND_OPTIONS_CANCEL");
		SOUND_OPTIONS_CONFIRM = aMgr.GetSoundThrow("SOUND_OPTIONS_CONFIRM");
		SOUND_PEGHIT = aMgr.GetSoundThrow("SOUND_PEGHIT");
		SOUND_PEGHIT2 = aMgr.GetSoundThrow("SOUND_PEGHIT2");
		SOUND_PEGHIT3 = aMgr.GetSoundThrow("SOUND_PEGHIT3");
		SOUND_PEGHIT_LOW = aMgr.GetSoundThrow("SOUND_PEGHIT_LOW");
		SOUND_PEGPOP = aMgr.GetSoundThrow("SOUND_PEGPOP");
		SOUND_PENALTY = aMgr.GetSoundThrow("SOUND_PENALTY");
		SOUND_PLAYER_READY = aMgr.GetSoundThrow("SOUND_PLAYER_READY");
		SOUND_POINTBOOST = aMgr.GetSoundThrow("SOUND_POINTBOOST");
		SOUND_POWERUP = aMgr.GetSoundThrow("SOUND_POWERUP");
		SOUND_POWERUP_FIREBALL = aMgr.GetSoundThrow("SOUND_POWERUP_FIREBALL");
		SOUND_POWERUP_FLIPPERS = aMgr.GetSoundThrow("SOUND_POWERUP_FLIPPERS");
		SOUND_POWERUP_FLOWERPOWER = aMgr.GetSoundThrow("SOUND_POWERUP_FLOWERPOWER");
		SOUND_POWERUP_GUIDE = aMgr.GetSoundThrow("SOUND_POWERUP_GUIDE");
		SOUND_POWERUP_LUCKYSPIN = aMgr.GetSoundThrow("SOUND_POWERUP_LUCKYSPIN");
		SOUND_POWERUP_MULTIBALL = aMgr.GetSoundThrow("SOUND_POWERUP_MULTIBALL");
		SOUND_POWERUP_PYRAMID = aMgr.GetSoundThrow("SOUND_POWERUP_PYRAMID");
		SOUND_POWERUP_SPACEBLAST = aMgr.GetSoundThrow("SOUND_POWERUP_SPACEBLAST");
		SOUND_POWERUP_SPOOKYBALL = aMgr.GetSoundThrow("SOUND_POWERUP_SPOOKYBALL");
		SOUND_POWERUP_ZEN = aMgr.GetSoundThrow("SOUND_POWERUP_ZEN");
		SOUND_RAINBOW = aMgr.GetSoundThrow("SOUND_RAINBOW");
		SOUND_RESULTS_TEXT = aMgr.GetSoundThrow("SOUND_RESULTS_TEXT");
		SOUND_RIBBON_2ND = aMgr.GetSoundThrow("SOUND_RIBBON_2ND");
		SOUND_RIBBON_3RD = aMgr.GetSoundThrow("SOUND_RIBBON_3RD");
		SOUND_RIBBON_4TH = aMgr.GetSoundThrow("SOUND_RIBBON_4TH");
		SOUND_RIBBON_AWARD = aMgr.GetSoundThrow("SOUND_RIBBON_AWARD");
		SOUND_RICHOCHET = aMgr.GetSoundThrow("SOUND_RICHOCHET");
		SOUND_ROUND_DISC = aMgr.GetSoundThrow("SOUND_ROUND_DISC");
		SOUND_SCORECOUNTER = aMgr.GetSoundThrow("SOUND_SCORECOUNTER");
		SOUND_SCORE_BAR_EXPLODE = aMgr.GetSoundThrow("SOUND_SCORE_BAR_EXPLODE");
		SOUND_SCORE_BAR_EXPLODE_WIN = aMgr.GetSoundThrow("SOUND_SCORE_BAR_EXPLODE_WIN");
		SOUND_SCORE_BAR_FILL = aMgr.GetSoundThrow("SOUND_SCORE_BAR_FILL");
		SOUND_SCORE_BAR_REFILL = aMgr.GetSoundThrow("SOUND_SCORE_BAR_REFILL");
		SOUND_SCORE_BAR_TICK = aMgr.GetSoundThrow("SOUND_SCORE_BAR_TICK");
		SOUND_SCREEN_MOVE = aMgr.GetSoundThrow("SOUND_SCREEN_MOVE");
		SOUND_SHOT_125K = aMgr.GetSoundThrow("SOUND_SHOT_125K");
		SOUND_SHOT_25K = aMgr.GetSoundThrow("SOUND_SHOT_25K");
		SOUND_SHOT_75K = aMgr.GetSoundThrow("SOUND_SHOT_75K");
		SOUND_SHOT_CLOCK_SUBTLE = aMgr.GetSoundThrow("SOUND_SHOT_CLOCK_SUBTLE");
		SOUND_SIGH = aMgr.GetSoundThrow("SOUND_SIGH");
		SOUND_SKILLSHOT = aMgr.GetSoundThrow("SOUND_SKILLSHOT");
		SOUND_SLOWMO = aMgr.GetSoundThrow("SOUND_SLOWMO");
		SOUND_SPOOKYBALL2 = aMgr.GetSoundThrow("SOUND_SPOOKYBALL2");
		SOUND_SPOOKYBALL3 = aMgr.GetSoundThrow("SOUND_SPOOKYBALL3");
		SOUND_SPOOKYBALL4 = aMgr.GetSoundThrow("SOUND_SPOOKYBALL4");
		SOUND_STAMP = aMgr.GetSoundThrow("SOUND_STAMP");
		SOUND_START_VIEW_BOARD = aMgr.GetSoundThrow("SOUND_START_VIEW_BOARD");
		SOUND_STOP_VIEW_BOARD = aMgr.GetSoundThrow("SOUND_STOP_VIEW_BOARD");
		SOUND_STORY_TYPING = aMgr.GetSoundThrow("SOUND_STORY_TYPING");
		SOUND_STYLE_SHOT_FILL = aMgr.GetSoundThrow("SOUND_STYLE_SHOT_FILL");
		SOUND_TEXT_WOOSH = aMgr.GetSoundThrow("SOUND_TEXT_WOOSH");
		SOUND_TING = aMgr.GetSoundThrow("SOUND_TING");
		SOUND_TONE = aMgr.GetSoundThrow("SOUND_TONE");
		SOUND_TONEHI = aMgr.GetSoundThrow("SOUND_TONEHI");
		SOUND_TONELO = aMgr.GetSoundThrow("SOUND_TONELO");
		SOUND_TONESUPERHI = aMgr.GetSoundThrow("SOUND_TONESUPERHI");
		SOUND_TROPHY_STAY = aMgr.GetSoundThrow("SOUND_TROPHY_STAY");
		SOUND_TYPING = aMgr.GetSoundThrow("SOUND_TYPING");
		SOUND_WHISTLE = aMgr.GetSoundThrow("SOUND_WHISTLE");
		SOUND_WOOSH = aMgr.GetSoundThrow("SOUND_WOOSH");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// LuckySpin Resources
Image* Sexy::IMAGE_SPIN_ARROW;
Image* Sexy::IMAGE_SPIN_EXTRABALLMASK;
Image* Sexy::IMAGE_SPIN_EXTRAON;
Image* Sexy::IMAGE_SPIN_HATON;
Image* Sexy::IMAGE_SPIN_RANDOMON;
Image* Sexy::IMAGE_SPIN_RANDOMTEXT;
Image* Sexy::IMAGE_SPIN_RANDOMTEXTON;
Image* Sexy::IMAGE_SPIN_RIMLIGHT;
Image* Sexy::IMAGE_SPIN_RIMLIGHT2;
Image* Sexy::IMAGE_SPIN_SPINNER;
Image* Sexy::IMAGE_SPIN_TRIPLEON;

bool Sexy::ExtractLuckySpinResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_SPIN_ARROW = aMgr.GetImageThrow("IMAGE_SPIN_ARROW");
		IMAGE_SPIN_EXTRABALLMASK = aMgr.GetImageThrow("IMAGE_SPIN_EXTRABALLMASK");
		IMAGE_SPIN_EXTRAON = aMgr.GetImageThrow("IMAGE_SPIN_EXTRAON");
		IMAGE_SPIN_HATON = aMgr.GetImageThrow("IMAGE_SPIN_HATON");
		IMAGE_SPIN_RANDOMON = aMgr.GetImageThrow("IMAGE_SPIN_RANDOMON");
		IMAGE_SPIN_RANDOMTEXT = aMgr.GetImageThrow("IMAGE_SPIN_RANDOMTEXT");
		IMAGE_SPIN_RANDOMTEXTON = aMgr.GetImageThrow("IMAGE_SPIN_RANDOMTEXTON");
		IMAGE_SPIN_RIMLIGHT = aMgr.GetImageThrow("IMAGE_SPIN_RIMLIGHT");
		IMAGE_SPIN_RIMLIGHT2 = aMgr.GetImageThrow("IMAGE_SPIN_RIMLIGHT2");
		IMAGE_SPIN_SPINNER = aMgr.GetImageThrow("IMAGE_SPIN_SPINNER");
		IMAGE_SPIN_TRIPLEON = aMgr.GetImageThrow("IMAGE_SPIN_TRIPLEON");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// MainMenu Resources
Image* Sexy::IMAGE_MM_BLANKSUN;
Image* Sexy::IMAGE_MM_BUYIT;
Image* Sexy::IMAGE_MM_CRY;
Image* Sexy::IMAGE_MM_MURAL_BACK_MP;
Image* Sexy::IMAGE_MM_MURAL_BACK_SP;
Image* Sexy::IMAGE_MM_MURAL_BACK_WAIT;
Image* Sexy::IMAGE_MM_MURAL_MP;
Image* Sexy::IMAGE_MM_MURAL_SP;
Image* Sexy::IMAGE_MM_MURAL_WAIT;
Image* Sexy::IMAGE_MM_SPEECHBUBBLE;
Image* Sexy::IMAGE_MM_TROPHIES;
Image* Sexy::IMAGE_MM_TROPHYREVEAL;

bool Sexy::ExtractMainMenuResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_MM_BLANKSUN = aMgr.GetImageThrow("IMAGE_MM_BLANKSUN");
		IMAGE_MM_BUYIT = aMgr.GetImageThrow("IMAGE_MM_BUYIT");
		IMAGE_MM_CRY = aMgr.GetImageThrow("IMAGE_MM_CRY");
		IMAGE_MM_MURAL_BACK_MP = aMgr.GetImageThrow("IMAGE_MM_MURAL_BACK_MP");
		IMAGE_MM_MURAL_BACK_SP = aMgr.GetImageThrow("IMAGE_MM_MURAL_BACK_SP");
		IMAGE_MM_MURAL_BACK_WAIT = aMgr.GetImageThrow("IMAGE_MM_MURAL_BACK_WAIT");
		IMAGE_MM_MURAL_MP = aMgr.GetImageThrow("IMAGE_MM_MURAL_MP");
		IMAGE_MM_MURAL_SP = aMgr.GetImageThrow("IMAGE_MM_MURAL_SP");
		IMAGE_MM_MURAL_WAIT = aMgr.GetImageThrow("IMAGE_MM_MURAL_WAIT");
		IMAGE_MM_SPEECHBUBBLE = aMgr.GetImageThrow("IMAGE_MM_SPEECHBUBBLE");
		IMAGE_MM_TROPHIES = aMgr.GetImageThrow("IMAGE_MM_TROPHIES");
		IMAGE_MM_TROPHYREVEAL = aMgr.GetImageThrow("IMAGE_MM_TROPHYREVEAL");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// NightsPDLC_Loading Resources
Image* Sexy::IMAGE_LOAD_GODRAY;
Image* Sexy::IMAGE_LOAD_LENSFLARE;
Image* Sexy::IMAGE_LOAD_MURAL_BG_WAIT_NIGHT;
Image* Sexy::IMAGE_LOAD_MURAL_SP_NIGHT;
Image* Sexy::IMAGE_LOAD_MURAL_WAIT_NIGHT;
Image* Sexy::IMAGE_LOAD_NIGHTSLOGO_MOON;
Image* Sexy::IMAGE_LOAD_RIM_LIGHT;
Image* Sexy::IMAGE_LOAD_SUNSET_BG;

bool Sexy::ExtractNightsPDLC_LoadingResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_LOAD_GODRAY = aMgr.GetImageThrow("IMAGE_LOAD_GODRAY");
		IMAGE_LOAD_LENSFLARE = aMgr.GetImageThrow("IMAGE_LOAD_LENSFLARE");
		IMAGE_LOAD_MURAL_BG_WAIT_NIGHT = aMgr.GetImageThrow("IMAGE_LOAD_MURAL_BG_WAIT_NIGHT");
		IMAGE_LOAD_MURAL_SP_NIGHT = aMgr.GetImageThrow("IMAGE_LOAD_MURAL_SP_NIGHT");
		IMAGE_LOAD_MURAL_WAIT_NIGHT = aMgr.GetImageThrow("IMAGE_LOAD_MURAL_WAIT_NIGHT");
		IMAGE_LOAD_NIGHTSLOGO_MOON = aMgr.GetImageThrow("IMAGE_LOAD_NIGHTSLOGO_MOON");
		IMAGE_LOAD_RIM_LIGHT = aMgr.GetImageThrow("IMAGE_LOAD_RIM_LIGHT");
		IMAGE_LOAD_SUNSET_BG = aMgr.GetImageThrow("IMAGE_LOAD_SUNSET_BG");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// NightsPDLC_MainMenu Resources
Image* Sexy::IMAGE_MM_MARINASTAGE;
Image* Sexy::IMAGE_MM_TROPHY_CROWN;
Image* Sexy::IMAGE_MM_TROPHY_CUP;
Image* Sexy::IMAGE_MM_TROPHY_TORCH;
Image* Sexy::IMAGE_MM_TROPHY_ZEN;

bool Sexy::ExtractNightsPDLC_MainMenuResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_MM_MARINASTAGE = aMgr.GetImageThrow("IMAGE_MM_MARINASTAGE");
		IMAGE_MM_TROPHY_CROWN = aMgr.GetImageThrow("IMAGE_MM_TROPHY_CROWN");
		IMAGE_MM_TROPHY_CUP = aMgr.GetImageThrow("IMAGE_MM_TROPHY_CUP");
		IMAGE_MM_TROPHY_TORCH = aMgr.GetImageThrow("IMAGE_MM_TROPHY_TORCH");
		IMAGE_MM_TROPHY_ZEN = aMgr.GetImageThrow("IMAGE_MM_TROPHY_ZEN");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// NightsPDLC_MarinaBorder Resources
Image* Sexy::IMAGE_IP_MARINA_BOTTOM;
Image* Sexy::IMAGE_IP_MARINA_GUTTER_JELLYFISH1;
Image* Sexy::IMAGE_IP_MARINA_GUTTER_JELLYFISH2;
Image* Sexy::IMAGE_IP_MARINA_GUTTER_LEFT;
Image* Sexy::IMAGE_IP_MARINA_GUTTER_RIGHT;
Image* Sexy::IMAGE_IP_MARINA_LEFT;
Image* Sexy::IMAGE_IP_MARINA_RIGHT;
Image* Sexy::IMAGE_IP_MARINA_TOP;

bool Sexy::ExtractNightsPDLC_MarinaBorderResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_IP_MARINA_BOTTOM = aMgr.GetImageThrow("IMAGE_IP_MARINA_BOTTOM");
		IMAGE_IP_MARINA_GUTTER_JELLYFISH1 = aMgr.GetImageThrow("IMAGE_IP_MARINA_GUTTER_JELLYFISH1");
		IMAGE_IP_MARINA_GUTTER_JELLYFISH2 = aMgr.GetImageThrow("IMAGE_IP_MARINA_GUTTER_JELLYFISH2");
		IMAGE_IP_MARINA_GUTTER_LEFT = aMgr.GetImageThrow("IMAGE_IP_MARINA_GUTTER_LEFT");
		IMAGE_IP_MARINA_GUTTER_RIGHT = aMgr.GetImageThrow("IMAGE_IP_MARINA_GUTTER_RIGHT");
		IMAGE_IP_MARINA_LEFT = aMgr.GetImageThrow("IMAGE_IP_MARINA_LEFT");
		IMAGE_IP_MARINA_RIGHT = aMgr.GetImageThrow("IMAGE_IP_MARINA_RIGHT");
		IMAGE_IP_MARINA_TOP = aMgr.GetImageThrow("IMAGE_IP_MARINA_TOP");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// NightsPDLC_Trophy Resources
Image* Sexy::IMAGE_TROPHY_ADV;
Image* Sexy::IMAGE_TROPHY_CURTAIN;
Image* Sexy::IMAGE_TROPHY_CURTAIN_L;
Image* Sexy::IMAGE_TROPHY_CURTAIN_R;
Image* Sexy::IMAGE_TROPHY_EXIT_BUTTON;
Image* Sexy::IMAGE_TROPHY_HOLE;
Image* Sexy::IMAGE_TROPHY_MASTER1;
Image* Sexy::IMAGE_TROPHY_MASTER2;
Image* Sexy::IMAGE_TROPHY_MASTER3;
Image* Sexy::IMAGE_TROPHY_PARTICLE1;
Image* Sexy::IMAGE_TROPHY_PARTICLE2;
Image* Sexy::IMAGE_TROPHY_PARTICLE3;
Image* Sexy::IMAGE_TROPHY_PARTICLE4;
Image* Sexy::IMAGE_TROPHY_PARTICLE5;
Image* Sexy::IMAGE_TROPHY_PARTICLE6;
Image* Sexy::IMAGE_TROPHY_PARTICLE_WHITE_MED_ROUND;
Image* Sexy::IMAGE_TROPHY_SPARKLE;
Image* Sexy::IMAGE_TROPHY_SPEECH_B;
Image* Sexy::IMAGE_TROPHY_SPEECH_BL;
Image* Sexy::IMAGE_TROPHY_SPEECH_BP;
Image* Sexy::IMAGE_TROPHY_SPEECH_BR;
Image* Sexy::IMAGE_TROPHY_SPEECH_C;
Image* Sexy::IMAGE_TROPHY_SPEECH_L;
Image* Sexy::IMAGE_TROPHY_SPEECH_LP;
Image* Sexy::IMAGE_TROPHY_SPEECH_R;
Image* Sexy::IMAGE_TROPHY_SPEECH_RP;
Image* Sexy::IMAGE_TROPHY_SPEECH_T;
Image* Sexy::IMAGE_TROPHY_SPEECH_TL;
Image* Sexy::IMAGE_TROPHY_SPEECH_TP;
Image* Sexy::IMAGE_TROPHY_SPEECH_TR;

bool Sexy::ExtractNightsPDLC_TrophyResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_TROPHY_ADV = aMgr.GetImageThrow("IMAGE_TROPHY_ADV");
		IMAGE_TROPHY_CURTAIN = aMgr.GetImageThrow("IMAGE_TROPHY_CURTAIN");
		IMAGE_TROPHY_CURTAIN_L = aMgr.GetImageThrow("IMAGE_TROPHY_CURTAIN_L");
		IMAGE_TROPHY_CURTAIN_R = aMgr.GetImageThrow("IMAGE_TROPHY_CURTAIN_R");
		IMAGE_TROPHY_EXIT_BUTTON = aMgr.GetImageThrow("IMAGE_TROPHY_EXIT_BUTTON");
		IMAGE_TROPHY_HOLE = aMgr.GetImageThrow("IMAGE_TROPHY_HOLE");
		IMAGE_TROPHY_MASTER1 = aMgr.GetImageThrow("IMAGE_TROPHY_MASTER1");
		IMAGE_TROPHY_MASTER2 = aMgr.GetImageThrow("IMAGE_TROPHY_MASTER2");
		IMAGE_TROPHY_MASTER3 = aMgr.GetImageThrow("IMAGE_TROPHY_MASTER3");
		IMAGE_TROPHY_PARTICLE1 = aMgr.GetImageThrow("IMAGE_TROPHY_PARTICLE1");
		IMAGE_TROPHY_PARTICLE2 = aMgr.GetImageThrow("IMAGE_TROPHY_PARTICLE2");
		IMAGE_TROPHY_PARTICLE3 = aMgr.GetImageThrow("IMAGE_TROPHY_PARTICLE3");
		IMAGE_TROPHY_PARTICLE4 = aMgr.GetImageThrow("IMAGE_TROPHY_PARTICLE4");
		IMAGE_TROPHY_PARTICLE5 = aMgr.GetImageThrow("IMAGE_TROPHY_PARTICLE5");
		IMAGE_TROPHY_PARTICLE6 = aMgr.GetImageThrow("IMAGE_TROPHY_PARTICLE6");
		IMAGE_TROPHY_PARTICLE_WHITE_MED_ROUND = aMgr.GetImageThrow("IMAGE_TROPHY_PARTICLE_WHITE_MED_ROUND");
		IMAGE_TROPHY_SPARKLE = aMgr.GetImageThrow("IMAGE_TROPHY_SPARKLE");
		IMAGE_TROPHY_SPEECH_B = aMgr.GetImageThrow("IMAGE_TROPHY_SPEECH_B");
		IMAGE_TROPHY_SPEECH_BL = aMgr.GetImageThrow("IMAGE_TROPHY_SPEECH_BL");
		IMAGE_TROPHY_SPEECH_BP = aMgr.GetImageThrow("IMAGE_TROPHY_SPEECH_BP");
		IMAGE_TROPHY_SPEECH_BR = aMgr.GetImageThrow("IMAGE_TROPHY_SPEECH_BR");
		IMAGE_TROPHY_SPEECH_C = aMgr.GetImageThrow("IMAGE_TROPHY_SPEECH_C");
		IMAGE_TROPHY_SPEECH_L = aMgr.GetImageThrow("IMAGE_TROPHY_SPEECH_L");
		IMAGE_TROPHY_SPEECH_LP = aMgr.GetImageThrow("IMAGE_TROPHY_SPEECH_LP");
		IMAGE_TROPHY_SPEECH_R = aMgr.GetImageThrow("IMAGE_TROPHY_SPEECH_R");
		IMAGE_TROPHY_SPEECH_RP = aMgr.GetImageThrow("IMAGE_TROPHY_SPEECH_RP");
		IMAGE_TROPHY_SPEECH_T = aMgr.GetImageThrow("IMAGE_TROPHY_SPEECH_T");
		IMAGE_TROPHY_SPEECH_TL = aMgr.GetImageThrow("IMAGE_TROPHY_SPEECH_TL");
		IMAGE_TROPHY_SPEECH_TP = aMgr.GetImageThrow("IMAGE_TROPHY_SPEECH_TP");
		IMAGE_TROPHY_SPEECH_TR = aMgr.GetImageThrow("IMAGE_TROPHY_SPEECH_TR");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// NightsTU Resources
Image* Sexy::IMAGE_ADDTL_GLOW;
Image* Sexy::IMAGE_BALL_LIGHTNING;
Image* Sexy::IMAGE_CURVE;
Image* Sexy::IMAGE_FLY0;
Image* Sexy::IMAGE_FLY1;
Image* Sexy::IMAGE_LIGHTNING;
Image* Sexy::IMAGE_LIGHTNING_BACK;
Image* Sexy::IMAGE_LIGHTNING_BALLSPARK;
Image* Sexy::IMAGE_LIGHTNING_FRONT;
Image* Sexy::IMAGE_LIGHTNING_FRONT_SMALL;
Image* Sexy::IMAGE_LIGHTNING_ROD;
Image* Sexy::IMAGE_LIGHTNING_ROD_ON;
Image* Sexy::IMAGE_LIGHTNING_ROD_RING_BACK;
Image* Sexy::IMAGE_LIGHTNING_ROD_RING_FRONT;
Image* Sexy::IMAGE_LIGHTNING_ROD_ZAP;
Image* Sexy::IMAGE_LIGHTNING_SPARK;
Image* Sexy::IMAGE_MARINA_BG;
Image* Sexy::IMAGE_MARINA_LOGO;
Image* Sexy::IMAGE_MARINA_SHOOTER;
Image* Sexy::IMAGE_NIGHTS_BUTTON;
Image* Sexy::IMAGE_OTHERBUTTON_GLOW;
Image* Sexy::IMAGE_SUPERSWIRL;
Image* Sexy::IMAGE_TWINKLE_STAR;
int Sexy::SOUND_APPLAUSE_LONG;
int Sexy::SOUND_CREDITS_SPOTLIGHT_ON;
int Sexy::SOUND_INTRO;
int Sexy::SOUND_LIGHTNING_LOOP;
int Sexy::SOUND_LIGHTNING_START;
int Sexy::SOUND_LOGO_BUZZ_ON;
int Sexy::SOUND_NEON_FLICKER;
int Sexy::SOUND_PEGSPARK;
int Sexy::SOUND_POWERUP_LIGHTNING;
int Sexy::SOUND_POWERUP_LIGHTNING_HIT;
int Sexy::SOUND_SPEECH_BUBBLE_POPUP;
int Sexy::SOUND_STAGE_DREAMY_IN;
int Sexy::SOUND_STAGE_DREAMY_OUT;
int Sexy::SOUND_TROPHY_PHOTO_IN;
int Sexy::SOUND_TROPHY_WIN_INTRO;

bool Sexy::ExtractNightsTUResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_ADDTL_GLOW = aMgr.GetImageThrow("IMAGE_ADDTL_GLOW");
		IMAGE_BALL_LIGHTNING = aMgr.GetImageThrow("IMAGE_BALL_LIGHTNING");
		IMAGE_CURVE = aMgr.GetImageThrow("IMAGE_CURVE");
		IMAGE_FLY0 = aMgr.GetImageThrow("IMAGE_FLY0");
		IMAGE_FLY1 = aMgr.GetImageThrow("IMAGE_FLY1");
		IMAGE_LIGHTNING = aMgr.GetImageThrow("IMAGE_LIGHTNING");
		IMAGE_LIGHTNING_BACK = aMgr.GetImageThrow("IMAGE_LIGHTNING_BACK");
		IMAGE_LIGHTNING_BALLSPARK = aMgr.GetImageThrow("IMAGE_LIGHTNING_BALLSPARK");
		IMAGE_LIGHTNING_FRONT = aMgr.GetImageThrow("IMAGE_LIGHTNING_FRONT");
		IMAGE_LIGHTNING_FRONT_SMALL = aMgr.GetImageThrow("IMAGE_LIGHTNING_FRONT_SMALL");
		IMAGE_LIGHTNING_ROD = aMgr.GetImageThrow("IMAGE_LIGHTNING_ROD");
		IMAGE_LIGHTNING_ROD_ON = aMgr.GetImageThrow("IMAGE_LIGHTNING_ROD_ON");
		IMAGE_LIGHTNING_ROD_RING_BACK = aMgr.GetImageThrow("IMAGE_LIGHTNING_ROD_RING_BACK");
		IMAGE_LIGHTNING_ROD_RING_FRONT = aMgr.GetImageThrow("IMAGE_LIGHTNING_ROD_RING_FRONT");
		IMAGE_LIGHTNING_ROD_ZAP = aMgr.GetImageThrow("IMAGE_LIGHTNING_ROD_ZAP");
		IMAGE_LIGHTNING_SPARK = aMgr.GetImageThrow("IMAGE_LIGHTNING_SPARK");
		IMAGE_MARINA_BG = aMgr.GetImageThrow("IMAGE_MARINA_BG");
		IMAGE_MARINA_LOGO = aMgr.GetImageThrow("IMAGE_MARINA_LOGO");
		IMAGE_MARINA_SHOOTER = aMgr.GetImageThrow("IMAGE_MARINA_SHOOTER");
		IMAGE_NIGHTS_BUTTON = aMgr.GetImageThrow("IMAGE_NIGHTS_BUTTON");
		IMAGE_OTHERBUTTON_GLOW = aMgr.GetImageThrow("IMAGE_OTHERBUTTON_GLOW");
		IMAGE_SUPERSWIRL = aMgr.GetImageThrow("IMAGE_SUPERSWIRL");
		IMAGE_TWINKLE_STAR = aMgr.GetImageThrow("IMAGE_TWINKLE_STAR");
		SOUND_APPLAUSE_LONG = aMgr.GetSoundThrow("SOUND_APPLAUSE_LONG");
		SOUND_CREDITS_SPOTLIGHT_ON = aMgr.GetSoundThrow("SOUND_CREDITS_SPOTLIGHT_ON");
		SOUND_INTRO = aMgr.GetSoundThrow("SOUND_INTRO");
		SOUND_LIGHTNING_LOOP = aMgr.GetSoundThrow("SOUND_LIGHTNING_LOOP");
		SOUND_LIGHTNING_START = aMgr.GetSoundThrow("SOUND_LIGHTNING_START");
		SOUND_LOGO_BUZZ_ON = aMgr.GetSoundThrow("SOUND_LOGO_BUZZ_ON");
		SOUND_NEON_FLICKER = aMgr.GetSoundThrow("SOUND_NEON_FLICKER");
		SOUND_PEGSPARK = aMgr.GetSoundThrow("SOUND_PEGSPARK");
		SOUND_POWERUP_LIGHTNING = aMgr.GetSoundThrow("SOUND_POWERUP_LIGHTNING");
		SOUND_POWERUP_LIGHTNING_HIT = aMgr.GetSoundThrow("SOUND_POWERUP_LIGHTNING_HIT");
		SOUND_SPEECH_BUBBLE_POPUP = aMgr.GetSoundThrow("SOUND_SPEECH_BUBBLE_POPUP");
		SOUND_STAGE_DREAMY_IN = aMgr.GetSoundThrow("SOUND_STAGE_DREAMY_IN");
		SOUND_STAGE_DREAMY_OUT = aMgr.GetSoundThrow("SOUND_STAGE_DREAMY_OUT");
		SOUND_TROPHY_PHOTO_IN = aMgr.GetSoundThrow("SOUND_TROPHY_PHOTO_IN");
		SOUND_TROPHY_WIN_INTRO = aMgr.GetSoundThrow("SOUND_TROPHY_WIN_INTRO");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// NightsTUChars Resources
Image* Sexy::IMAGE_CHR_CHARACTERSHADOWS_NIGHTS;
Image* Sexy::IMAGE_CHR_CHARACTERS_NIGHTS;
Image* Sexy::IMAGE_CHR_CHARACTER_ADV12;
Image* Sexy::IMAGE_CHR_CHARACTER_MARINA;
Image* Sexy::IMAGE_CHR_CHARACTER_NEW1;
Image* Sexy::IMAGE_CHR_CHARACTER_NEW10;
Image* Sexy::IMAGE_CHR_CHARACTER_NEW2;
Image* Sexy::IMAGE_CHR_CHARACTER_NEW3;
Image* Sexy::IMAGE_CHR_CHARACTER_NEW4;
Image* Sexy::IMAGE_CHR_CHARACTER_NEW5;
Image* Sexy::IMAGE_CHR_CHARACTER_NEW6;
Image* Sexy::IMAGE_CHR_CHARACTER_NEW7;
Image* Sexy::IMAGE_CHR_CHARACTER_NEW8;
Image* Sexy::IMAGE_CHR_CHARACTER_NEW9;
Image* Sexy::IMAGE_CHR_PARTICLE1;
Image* Sexy::IMAGE_CHR_PARTICLE2;
Image* Sexy::IMAGE_CHR_PARTICLE3;
Image* Sexy::IMAGE_CHR_PARTICLE4;
Image* Sexy::IMAGE_CHR_PARTICLE5;
Image* Sexy::IMAGE_CHR_PARTICLE6;

bool Sexy::ExtractNightsTUCharsResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_CHR_CHARACTERSHADOWS_NIGHTS = aMgr.GetImageThrow("IMAGE_CHR_CHARACTERSHADOWS_NIGHTS");
		IMAGE_CHR_CHARACTERS_NIGHTS = aMgr.GetImageThrow("IMAGE_CHR_CHARACTERS_NIGHTS");
		IMAGE_CHR_CHARACTER_ADV12 = aMgr.GetImageThrow("IMAGE_CHR_CHARACTER_ADV12");
		IMAGE_CHR_CHARACTER_MARINA = aMgr.GetImageThrow("IMAGE_CHR_CHARACTER_MARINA");
		IMAGE_CHR_CHARACTER_NEW1 = aMgr.GetImageThrow("IMAGE_CHR_CHARACTER_NEW1");
		IMAGE_CHR_CHARACTER_NEW10 = aMgr.GetImageThrow("IMAGE_CHR_CHARACTER_NEW10");
		IMAGE_CHR_CHARACTER_NEW2 = aMgr.GetImageThrow("IMAGE_CHR_CHARACTER_NEW2");
		IMAGE_CHR_CHARACTER_NEW3 = aMgr.GetImageThrow("IMAGE_CHR_CHARACTER_NEW3");
		IMAGE_CHR_CHARACTER_NEW4 = aMgr.GetImageThrow("IMAGE_CHR_CHARACTER_NEW4");
		IMAGE_CHR_CHARACTER_NEW5 = aMgr.GetImageThrow("IMAGE_CHR_CHARACTER_NEW5");
		IMAGE_CHR_CHARACTER_NEW6 = aMgr.GetImageThrow("IMAGE_CHR_CHARACTER_NEW6");
		IMAGE_CHR_CHARACTER_NEW7 = aMgr.GetImageThrow("IMAGE_CHR_CHARACTER_NEW7");
		IMAGE_CHR_CHARACTER_NEW8 = aMgr.GetImageThrow("IMAGE_CHR_CHARACTER_NEW8");
		IMAGE_CHR_CHARACTER_NEW9 = aMgr.GetImageThrow("IMAGE_CHR_CHARACTER_NEW9");
		IMAGE_CHR_PARTICLE1 = aMgr.GetImageThrow("IMAGE_CHR_PARTICLE1");
		IMAGE_CHR_PARTICLE2 = aMgr.GetImageThrow("IMAGE_CHR_PARTICLE2");
		IMAGE_CHR_PARTICLE3 = aMgr.GetImageThrow("IMAGE_CHR_PARTICLE3");
		IMAGE_CHR_PARTICLE4 = aMgr.GetImageThrow("IMAGE_CHR_PARTICLE4");
		IMAGE_CHR_PARTICLE5 = aMgr.GetImageThrow("IMAGE_CHR_PARTICLE5");
		IMAGE_CHR_PARTICLE6 = aMgr.GetImageThrow("IMAGE_CHR_PARTICLE6");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// NightsTUDialog Resources
Image* Sexy::IMAGE_DLG_RANDOM_SQUARE;

bool Sexy::ExtractNightsTUDialogResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_DLG_RANDOM_SQUARE = aMgr.GetImageThrow("IMAGE_DLG_RANDOM_SQUARE");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// NightsTULocDE Resources
Image* Sexy::IMAGE_MARINA_POWERUP_DE;
Image* Sexy::IMAGE_PARTY_BOLT_DE;

bool Sexy::ExtractNightsTULocDEResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_MARINA_POWERUP_DE = aMgr.GetImageThrow("IMAGE_MARINA_POWERUP_DE");
		IMAGE_PARTY_BOLT_DE = aMgr.GetImageThrow("IMAGE_PARTY_BOLT_DE");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// NightsTULocEN Resources
Image* Sexy::IMAGE_MARINA_POWERUP_EN;
Image* Sexy::IMAGE_PARTY_BOLT_EN;

bool Sexy::ExtractNightsTULocENResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_MARINA_POWERUP_EN = aMgr.GetImageThrow("IMAGE_MARINA_POWERUP_EN");
		IMAGE_PARTY_BOLT_EN = aMgr.GetImageThrow("IMAGE_PARTY_BOLT_EN");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// NightsTULocES Resources
Image* Sexy::IMAGE_MARINA_POWERUP_ES;
Image* Sexy::IMAGE_PARTY_BOLT_ES;

bool Sexy::ExtractNightsTULocESResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_MARINA_POWERUP_ES = aMgr.GetImageThrow("IMAGE_MARINA_POWERUP_ES");
		IMAGE_PARTY_BOLT_ES = aMgr.GetImageThrow("IMAGE_PARTY_BOLT_ES");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// NightsTULocFR Resources
Image* Sexy::IMAGE_MARINA_POWERUP_FR;
Image* Sexy::IMAGE_PARTY_BOLT_FR;

bool Sexy::ExtractNightsTULocFRResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_MARINA_POWERUP_FR = aMgr.GetImageThrow("IMAGE_MARINA_POWERUP_FR");
		IMAGE_PARTY_BOLT_FR = aMgr.GetImageThrow("IMAGE_PARTY_BOLT_FR");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// NightsTULocIT Resources
Image* Sexy::IMAGE_MARINA_POWERUP_IT;
Image* Sexy::IMAGE_PARTY_BOLT_IT;

bool Sexy::ExtractNightsTULocITResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_MARINA_POWERUP_IT = aMgr.GetImageThrow("IMAGE_MARINA_POWERUP_IT");
		IMAGE_PARTY_BOLT_IT = aMgr.GetImageThrow("IMAGE_PARTY_BOLT_IT");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// NightsTULocJP Resources
Image* Sexy::IMAGE_MARINA_POWERUP_JP;
Image* Sexy::IMAGE_PARTY_BOLT_JP;

bool Sexy::ExtractNightsTULocJPResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_MARINA_POWERUP_JP = aMgr.GetImageThrow("IMAGE_MARINA_POWERUP_JP");
		IMAGE_PARTY_BOLT_JP = aMgr.GetImageThrow("IMAGE_PARTY_BOLT_JP");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// NightsTULocKO Resources
Image* Sexy::IMAGE_MARINA_POWERUP_KO;
Image* Sexy::IMAGE_PARTY_BOLT_KO;

bool Sexy::ExtractNightsTULocKOResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_MARINA_POWERUP_KO = aMgr.GetImageThrow("IMAGE_MARINA_POWERUP_KO");
		IMAGE_PARTY_BOLT_KO = aMgr.GetImageThrow("IMAGE_PARTY_BOLT_KO");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// NightsTULocPT Resources
Image* Sexy::IMAGE_MARINA_POWERUP_PT;
Image* Sexy::IMAGE_PARTY_BOLT_PT;

bool Sexy::ExtractNightsTULocPTResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_MARINA_POWERUP_PT = aMgr.GetImageThrow("IMAGE_MARINA_POWERUP_PT");
		IMAGE_PARTY_BOLT_PT = aMgr.GetImageThrow("IMAGE_PARTY_BOLT_PT");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// NightsTULocTC Resources
Image* Sexy::IMAGE_MARINA_POWERUP_TC;
Image* Sexy::IMAGE_PARTY_BOLT_TC;

bool Sexy::ExtractNightsTULocTCResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_MARINA_POWERUP_TC = aMgr.GetImageThrow("IMAGE_MARINA_POWERUP_TC");
		IMAGE_PARTY_BOLT_TC = aMgr.GetImageThrow("IMAGE_PARTY_BOLT_TC");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// PS3 Resources
Image* Sexy::IMAGE_PS3_21PIX_BUTTONS;
Image* Sexy::IMAGE_PS3_26PIX_BUTTONS;
Image* Sexy::IMAGE_PS3_L1_BUTTON;
Image* Sexy::IMAGE_PS3_L2_BUTTON;
Image* Sexy::IMAGE_PS3_R1_BUTTON;
Image* Sexy::IMAGE_PS3_R2_BUTTON;

bool Sexy::ExtractPS3Resources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_PS3_21PIX_BUTTONS = aMgr.GetImageThrow("IMAGE_PS3_21PIX_BUTTONS");
		IMAGE_PS3_26PIX_BUTTONS = aMgr.GetImageThrow("IMAGE_PS3_26PIX_BUTTONS");
		IMAGE_PS3_L1_BUTTON = aMgr.GetImageThrow("IMAGE_PS3_L1_BUTTON");
		IMAGE_PS3_L2_BUTTON = aMgr.GetImageThrow("IMAGE_PS3_L2_BUTTON");
		IMAGE_PS3_R1_BUTTON = aMgr.GetImageThrow("IMAGE_PS3_R1_BUTTON");
		IMAGE_PS3_R2_BUTTON = aMgr.GetImageThrow("IMAGE_PS3_R2_BUTTON");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Party Resources
Image* Sexy::IMAGE_PARTY_BESTSHOT;
Image* Sexy::IMAGE_PARTY_BIGPURPLE;
Image* Sexy::IMAGE_PARTY_CHAR_BGS;
Image* Sexy::IMAGE_PARTY_CLOCK_COIN;
Image* Sexy::IMAGE_PARTY_FEVERMARKERS;
Image* Sexy::IMAGE_PARTY_HALO_OVER;
Image* Sexy::IMAGE_PARTY_HALO_UNDER;
Image* Sexy::IMAGE_PARTY_HOST_BADGE;
Image* Sexy::IMAGE_PARTY_MARQUE;
Image* Sexy::IMAGE_PARTY_OPTIONS;
Image* Sexy::IMAGE_PARTY_PEGS;
Image* Sexy::IMAGE_PARTY_PIPS;
Image* Sexy::IMAGE_PARTY_POWERUPS;
Image* Sexy::IMAGE_PARTY_READY;
Image* Sexy::IMAGE_PARTY_READY_BUTTON;
Image* Sexy::IMAGE_PARTY_REPLAYFRAME;
Image* Sexy::IMAGE_PARTY_RESULTS_BAR;
Image* Sexy::IMAGE_PARTY_RESYNC;
Image* Sexy::IMAGE_PARTY_RIBBON1ST;
Image* Sexy::IMAGE_PARTY_RIBBON2ND;
Image* Sexy::IMAGE_PARTY_RIBBON3RD;
Image* Sexy::IMAGE_PARTY_RIBBON4TH;
Image* Sexy::IMAGE_PARTY_ROUND_COIN;
Image* Sexy::IMAGE_PARTY_SCOREMARKERS;
Image* Sexy::IMAGE_PARTY_SHOT_CLOCK;
Image* Sexy::IMAGE_PARTY_SHOT_CLOCK_GLOW;
Image* Sexy::IMAGE_PARTY_SIDEBAR;
Image* Sexy::IMAGE_PARTY_SIDEBAR_FEVER;
Image* Sexy::IMAGE_PARTY_SIDEBAR_GLOW;
Image* Sexy::IMAGE_PARTY_SIDEBAR_PLAYER;
Image* Sexy::IMAGE_PARTY_SIDEBAR_SELECTED;
Image* Sexy::IMAGE_PARTY_SPEEDLINES;
Image* Sexy::IMAGE_PARTY_TAPE3;
Image* Sexy::IMAGE_PARTY_TAPE4;
Image* Sexy::IMAGE_PARTY_TFX_GLOW;
Image* Sexy::IMAGE_PARTY_TFX_RAY;
Image* Sexy::IMAGE_PARTY_TFX_WAVE;
Image* Sexy::IMAGE_PARTY_TROPHY;
Image* Sexy::IMAGE_PARTY_ZOOM;

bool Sexy::ExtractPartyResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_PARTY_BESTSHOT = aMgr.GetImageThrow("IMAGE_PARTY_BESTSHOT");
		IMAGE_PARTY_BIGPURPLE = aMgr.GetImageThrow("IMAGE_PARTY_BIGPURPLE");
		IMAGE_PARTY_CHAR_BGS = aMgr.GetImageThrow("IMAGE_PARTY_CHAR_BGS");
		IMAGE_PARTY_CLOCK_COIN = aMgr.GetImageThrow("IMAGE_PARTY_CLOCK_COIN");
		IMAGE_PARTY_FEVERMARKERS = aMgr.GetImageThrow("IMAGE_PARTY_FEVERMARKERS");
		IMAGE_PARTY_HALO_OVER = aMgr.GetImageThrow("IMAGE_PARTY_HALO_OVER");
		IMAGE_PARTY_HALO_UNDER = aMgr.GetImageThrow("IMAGE_PARTY_HALO_UNDER");
		IMAGE_PARTY_HOST_BADGE = aMgr.GetImageThrow("IMAGE_PARTY_HOST_BADGE");
		IMAGE_PARTY_MARQUE = aMgr.GetImageThrow("IMAGE_PARTY_MARQUE");
		IMAGE_PARTY_OPTIONS = aMgr.GetImageThrow("IMAGE_PARTY_OPTIONS");
		IMAGE_PARTY_PEGS = aMgr.GetImageThrow("IMAGE_PARTY_PEGS");
		IMAGE_PARTY_PIPS = aMgr.GetImageThrow("IMAGE_PARTY_PIPS");
		IMAGE_PARTY_POWERUPS = aMgr.GetImageThrow("IMAGE_PARTY_POWERUPS");
		IMAGE_PARTY_READY = aMgr.GetImageThrow("IMAGE_PARTY_READY");
		IMAGE_PARTY_READY_BUTTON = aMgr.GetImageThrow("IMAGE_PARTY_READY_BUTTON");
		IMAGE_PARTY_REPLAYFRAME = aMgr.GetImageThrow("IMAGE_PARTY_REPLAYFRAME");
		IMAGE_PARTY_RESULTS_BAR = aMgr.GetImageThrow("IMAGE_PARTY_RESULTS_BAR");
		IMAGE_PARTY_RESYNC = aMgr.GetImageThrow("IMAGE_PARTY_RESYNC");
		IMAGE_PARTY_RIBBON1ST = aMgr.GetImageThrow("IMAGE_PARTY_RIBBON1ST");
		IMAGE_PARTY_RIBBON2ND = aMgr.GetImageThrow("IMAGE_PARTY_RIBBON2ND");
		IMAGE_PARTY_RIBBON3RD = aMgr.GetImageThrow("IMAGE_PARTY_RIBBON3RD");
		IMAGE_PARTY_RIBBON4TH = aMgr.GetImageThrow("IMAGE_PARTY_RIBBON4TH");
		IMAGE_PARTY_ROUND_COIN = aMgr.GetImageThrow("IMAGE_PARTY_ROUND_COIN");
		IMAGE_PARTY_SCOREMARKERS = aMgr.GetImageThrow("IMAGE_PARTY_SCOREMARKERS");
		IMAGE_PARTY_SHOT_CLOCK = aMgr.GetImageThrow("IMAGE_PARTY_SHOT_CLOCK");
		IMAGE_PARTY_SHOT_CLOCK_GLOW = aMgr.GetImageThrow("IMAGE_PARTY_SHOT_CLOCK_GLOW");
		IMAGE_PARTY_SIDEBAR = aMgr.GetImageThrow("IMAGE_PARTY_SIDEBAR");
		IMAGE_PARTY_SIDEBAR_FEVER = aMgr.GetImageThrow("IMAGE_PARTY_SIDEBAR_FEVER");
		IMAGE_PARTY_SIDEBAR_GLOW = aMgr.GetImageThrow("IMAGE_PARTY_SIDEBAR_GLOW");
		IMAGE_PARTY_SIDEBAR_PLAYER = aMgr.GetImageThrow("IMAGE_PARTY_SIDEBAR_PLAYER");
		IMAGE_PARTY_SIDEBAR_SELECTED = aMgr.GetImageThrow("IMAGE_PARTY_SIDEBAR_SELECTED");
		IMAGE_PARTY_SPEEDLINES = aMgr.GetImageThrow("IMAGE_PARTY_SPEEDLINES");
		IMAGE_PARTY_TAPE3 = aMgr.GetImageThrow("IMAGE_PARTY_TAPE3");
		IMAGE_PARTY_TAPE4 = aMgr.GetImageThrow("IMAGE_PARTY_TAPE4");
		IMAGE_PARTY_TFX_GLOW = aMgr.GetImageThrow("IMAGE_PARTY_TFX_GLOW");
		IMAGE_PARTY_TFX_RAY = aMgr.GetImageThrow("IMAGE_PARTY_TFX_RAY");
		IMAGE_PARTY_TFX_WAVE = aMgr.GetImageThrow("IMAGE_PARTY_TFX_WAVE");
		IMAGE_PARTY_TROPHY = aMgr.GetImageThrow("IMAGE_PARTY_TROPHY");
		IMAGE_PARTY_ZOOM = aMgr.GetImageThrow("IMAGE_PARTY_ZOOM");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// RenfieldBorder Resources
Image* Sexy::IMAGE_IP_RENFIELD_GUTTER_BG_LEFT;
Image* Sexy::IMAGE_IP_RENFIELD_GUTTER_BG_RIGHT;
Image* Sexy::IMAGE_IP_RENFIELD_GUTTER_MIST;
Image* Sexy::IMAGE_IP_RENF_BOTTOM;
Image* Sexy::IMAGE_IP_RENF_LEFT;
Image* Sexy::IMAGE_IP_RENF_RIGHT;
Image* Sexy::IMAGE_IP_RENF_TOP;

bool Sexy::ExtractRenfieldBorderResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_IP_RENFIELD_GUTTER_BG_LEFT = aMgr.GetImageThrow("IMAGE_IP_RENFIELD_GUTTER_BG_LEFT");
		IMAGE_IP_RENFIELD_GUTTER_BG_RIGHT = aMgr.GetImageThrow("IMAGE_IP_RENFIELD_GUTTER_BG_RIGHT");
		IMAGE_IP_RENFIELD_GUTTER_MIST = aMgr.GetImageThrow("IMAGE_IP_RENFIELD_GUTTER_MIST");
		IMAGE_IP_RENF_BOTTOM = aMgr.GetImageThrow("IMAGE_IP_RENF_BOTTOM");
		IMAGE_IP_RENF_LEFT = aMgr.GetImageThrow("IMAGE_IP_RENF_LEFT");
		IMAGE_IP_RENF_RIGHT = aMgr.GetImageThrow("IMAGE_IP_RENF_RIGHT");
		IMAGE_IP_RENF_TOP = aMgr.GetImageThrow("IMAGE_IP_RENF_TOP");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// SplorkBorder Resources
Image* Sexy::IMAGE_IP_SPLORK_BOTTOM;
Image* Sexy::IMAGE_IP_SPLORK_GUTTER_BG_LEFT;
Image* Sexy::IMAGE_IP_SPLORK_GUTTER_BG_RIGHT;
Image* Sexy::IMAGE_IP_SPLORK_GUTTER_COMET;
Image* Sexy::IMAGE_IP_SPLORK_GUTTER_L_PLANETS;
Image* Sexy::IMAGE_IP_SPLORK_GUTTER_NEBULA;
Image* Sexy::IMAGE_IP_SPLORK_GUTTER_R_PLANETS;
Image* Sexy::IMAGE_IP_SPLORK_LEFT;
Image* Sexy::IMAGE_IP_SPLORK_RIGHT;
Image* Sexy::IMAGE_IP_SPLORK_TOP;

bool Sexy::ExtractSplorkBorderResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_IP_SPLORK_BOTTOM = aMgr.GetImageThrow("IMAGE_IP_SPLORK_BOTTOM");
		IMAGE_IP_SPLORK_GUTTER_BG_LEFT = aMgr.GetImageThrow("IMAGE_IP_SPLORK_GUTTER_BG_LEFT");
		IMAGE_IP_SPLORK_GUTTER_BG_RIGHT = aMgr.GetImageThrow("IMAGE_IP_SPLORK_GUTTER_BG_RIGHT");
		IMAGE_IP_SPLORK_GUTTER_COMET = aMgr.GetImageThrow("IMAGE_IP_SPLORK_GUTTER_COMET");
		IMAGE_IP_SPLORK_GUTTER_L_PLANETS = aMgr.GetImageThrow("IMAGE_IP_SPLORK_GUTTER_L_PLANETS");
		IMAGE_IP_SPLORK_GUTTER_NEBULA = aMgr.GetImageThrow("IMAGE_IP_SPLORK_GUTTER_NEBULA");
		IMAGE_IP_SPLORK_GUTTER_R_PLANETS = aMgr.GetImageThrow("IMAGE_IP_SPLORK_GUTTER_R_PLANETS");
		IMAGE_IP_SPLORK_LEFT = aMgr.GetImageThrow("IMAGE_IP_SPLORK_LEFT");
		IMAGE_IP_SPLORK_RIGHT = aMgr.GetImageThrow("IMAGE_IP_SPLORK_RIGHT");
		IMAGE_IP_SPLORK_TOP = aMgr.GetImageThrow("IMAGE_IP_SPLORK_TOP");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Story Resources
Image* Sexy::IMAGE_STORY_BIGSPARKLE;
Image* Sexy::IMAGE_STORY_CLAWS;
Image* Sexy::IMAGE_STORY_GAMERPIC1;
Image* Sexy::IMAGE_STORY_GAMERPIC2;
Image* Sexy::IMAGE_STORY_ROCKET;
Image* Sexy::IMAGE_STORY_WIN;

bool Sexy::ExtractStoryResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_STORY_BIGSPARKLE = aMgr.GetImageThrow("IMAGE_STORY_BIGSPARKLE");
		IMAGE_STORY_CLAWS = aMgr.GetImageThrow("IMAGE_STORY_CLAWS");
		IMAGE_STORY_GAMERPIC1 = aMgr.GetImageThrow("IMAGE_STORY_GAMERPIC1");
		IMAGE_STORY_GAMERPIC2 = aMgr.GetImageThrow("IMAGE_STORY_GAMERPIC2");
		IMAGE_STORY_ROCKET = aMgr.GetImageThrow("IMAGE_STORY_ROCKET");
		IMAGE_STORY_WIN = aMgr.GetImageThrow("IMAGE_STORY_WIN");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// TulaBorder Resources
Image* Sexy::IMAGE_IP_TULA_BOTTOM;
Image* Sexy::IMAGE_IP_TULA_GUTTER_BG_LEFT;
Image* Sexy::IMAGE_IP_TULA_GUTTER_BG_RIGHT;
Image* Sexy::IMAGE_IP_TULA_GUTTER_BLADES;
Image* Sexy::IMAGE_IP_TULA_GUTTER_BUTTERFLY1;
Image* Sexy::IMAGE_IP_TULA_GUTTER_BUTTERFLY2;
Image* Sexy::IMAGE_IP_TULA_GUTTER_BUTTERFLY3;
Image* Sexy::IMAGE_IP_TULA_LEFT;
Image* Sexy::IMAGE_IP_TULA_RIGHT;
Image* Sexy::IMAGE_IP_TULA_TOP;

bool Sexy::ExtractTulaBorderResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_IP_TULA_BOTTOM = aMgr.GetImageThrow("IMAGE_IP_TULA_BOTTOM");
		IMAGE_IP_TULA_GUTTER_BG_LEFT = aMgr.GetImageThrow("IMAGE_IP_TULA_GUTTER_BG_LEFT");
		IMAGE_IP_TULA_GUTTER_BG_RIGHT = aMgr.GetImageThrow("IMAGE_IP_TULA_GUTTER_BG_RIGHT");
		IMAGE_IP_TULA_GUTTER_BLADES = aMgr.GetImageThrow("IMAGE_IP_TULA_GUTTER_BLADES");
		IMAGE_IP_TULA_GUTTER_BUTTERFLY1 = aMgr.GetImageThrow("IMAGE_IP_TULA_GUTTER_BUTTERFLY1");
		IMAGE_IP_TULA_GUTTER_BUTTERFLY2 = aMgr.GetImageThrow("IMAGE_IP_TULA_GUTTER_BUTTERFLY2");
		IMAGE_IP_TULA_GUTTER_BUTTERFLY3 = aMgr.GetImageThrow("IMAGE_IP_TULA_GUTTER_BUTTERFLY3");
		IMAGE_IP_TULA_LEFT = aMgr.GetImageThrow("IMAGE_IP_TULA_LEFT");
		IMAGE_IP_TULA_RIGHT = aMgr.GetImageThrow("IMAGE_IP_TULA_RIGHT");
		IMAGE_IP_TULA_TOP = aMgr.GetImageThrow("IMAGE_IP_TULA_TOP");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Upsell Resources
Image* Sexy::IMAGE_UPSELL_JUNK1;

bool Sexy::ExtractUpsellResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_UPSELL_JUNK1 = aMgr.GetImageThrow("IMAGE_UPSELL_JUNK1");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// WarrenBorder Resources
Image* Sexy::IMAGE_IP_WARREN_BOTTOM;
Image* Sexy::IMAGE_IP_WARREN_GUTTER_BG_LEFT;
Image* Sexy::IMAGE_IP_WARREN_GUTTER_BG_RIGHT;
Image* Sexy::IMAGE_IP_WARREN_GUTTER_BUNNY_WHEEL;
Image* Sexy::IMAGE_IP_WARREN_GUTTER_CARDS;
Image* Sexy::IMAGE_IP_WARREN_GUTTER_DUCKIES;
Image* Sexy::IMAGE_IP_WARREN_LEFT;
Image* Sexy::IMAGE_IP_WARREN_RIGHT;
Image* Sexy::IMAGE_IP_WARREN_TOP;

bool Sexy::ExtractWarrenBorderResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_IP_WARREN_BOTTOM = aMgr.GetImageThrow("IMAGE_IP_WARREN_BOTTOM");
		IMAGE_IP_WARREN_GUTTER_BG_LEFT = aMgr.GetImageThrow("IMAGE_IP_WARREN_GUTTER_BG_LEFT");
		IMAGE_IP_WARREN_GUTTER_BG_RIGHT = aMgr.GetImageThrow("IMAGE_IP_WARREN_GUTTER_BG_RIGHT");
		IMAGE_IP_WARREN_GUTTER_BUNNY_WHEEL = aMgr.GetImageThrow("IMAGE_IP_WARREN_GUTTER_BUNNY_WHEEL");
		IMAGE_IP_WARREN_GUTTER_CARDS = aMgr.GetImageThrow("IMAGE_IP_WARREN_GUTTER_CARDS");
		IMAGE_IP_WARREN_GUTTER_DUCKIES = aMgr.GetImageThrow("IMAGE_IP_WARREN_GUTTER_DUCKIES");
		IMAGE_IP_WARREN_LEFT = aMgr.GetImageThrow("IMAGE_IP_WARREN_LEFT");
		IMAGE_IP_WARREN_RIGHT = aMgr.GetImageThrow("IMAGE_IP_WARREN_RIGHT");
		IMAGE_IP_WARREN_TOP = aMgr.GetImageThrow("IMAGE_IP_WARREN_TOP");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

static void* gResources[] =
{
	&IMAGE_SUNGLOW,
	&SOUND_MORNING,
	&FONT_OVERLOAD16,
	&FONT_OVERLOAD16OUTLINE,
	&FONT_OVERLOAD16OUTLINE2,
	&IMAGE_LOAD_OVERLAY,
	&IMAGE_LOAD_LIGHTS,
	&IMAGE_LOAD_LOGO,
	&IMAGE_LOAD_SHADOW,
	&IMAGE_LOAD_SUNHEAD,
	&IMAGE_LOAD_PLAYNOW,
	&IMAGE_LOAD_BALL,
	&IMAGE_LOAD_TM,
	&FONT_PLAIN,
	&FONT_PLAIN2BIG,
	&FONT_SMALL,
	&FONT_SMALLMONO,
	&FONT_SCORE_DISP,
	&FONT_SMALL_DISP,
	&FONT_BALLSLEFT,
	&FONT_BUTTON,
	&FONT_STAGE,
	&FONT_BONK,
	&FONT_OVERLOAD10,
	&FONT_OVERLOAD12,
	&FONT_OVERLOAD24,
	&FONT_LEVELUP,
	&FONT_OVERLOADMONO10,
	&FONT_OVERLOADMONO12,
	&FONT_OVERLOAD10OUTLINE,
	&FONT_OVERLOAD12OUTLINE,
	&FONT_OVERLOAD24OUTLINE,
	&FONT_OVERLOAD24GRAD1,
	&FONT_OVERLOAD24GRAD2,
	&FONT_PLAINOUTLINE,
	&FONT_PLAIN2,
	&FONT_PLAIN2OUTLINE,
	&FONT_PLAIN2BIGOUTLINE,
	&SOUND_PEGHIT_LOW,
	&SOUND_PEGHIT,
	&SOUND_PEGHIT2,
	&SOUND_PEGHIT3,
	&SOUND_EXTRABALL,
	&SOUND_EXTRABALL2,
	&SOUND_EXTRABALL3,
	&SOUND_MISS,
	&SOUND_COINSPIN,
	&SOUND_COINSPIN_NO,
	&SOUND_FREEBALL,
	&SOUND_PENALTY,
	&SOUND_LEVELWON,
	&SOUND_LEVELDONE,
	&SOUND_LEVELLOST,
	&SOUND_POWERUP,
	&SOUND_AAH,
	&SOUND_MULTIBALL,
	&SOUND_PEGPOP,
	&SOUND_EXPLODE,
	&SOUND_BUTTON1,
	&SOUND_BUTTON2,
	&SOUND_MOUSEOVER,
	&SOUND_DING,
	&SOUND_POINTBOOST,
	&SOUND_TING,
	&SOUND_AWARD,
	&SOUND_APPLAUSE,
	&SOUND_SKILLSHOT,
	&SOUND_SPOOKYBALL2,
	&SOUND_SPOOKYBALL3,
	&SOUND_SPOOKYBALL4,
	&SOUND_BUBBLES,
	&SOUND_FLIP,
	&SOUND_BUCKETHIT,
	&SOUND_CANNONCOCK,
	&SOUND_CANNONSHOT,
	&SOUND_SCORECOUNTER,
	&SOUND_FLIPPERUP,
	&SOUND_FLIPPERDOWN,
	&SOUND_FLIPPERBOUNCE,
	&SOUND_RAINBOW,
	&SOUND_FIREWORKS1,
	&SOUND_FIREWORKS2,
	&SOUND_RICHOCHET,
	&SOUND_CYMBAL,
	&SOUND_SIGH,
	&SOUND_WOOSH,
	&SOUND_TEXT_WOOSH,
	&SOUND_WHISTLE,
	&SOUND_FEVERHIT,
	&SOUND_FIREBALLLOOP,
	&SOUND_FIREBALLSHOT,
	&SOUND_FIREBALLBOUNCE,
	&SOUND_POWERUP_GUIDE,
	&SOUND_POWERUP_MULTIBALL,
	&SOUND_POWERUP_PYRAMID,
	&SOUND_POWERUP_SPACEBLAST,
	&SOUND_POWERUP_FLIPPERS,
	&SOUND_POWERUP_SPOOKYBALL,
	&SOUND_POWERUP_FLOWERPOWER,
	&SOUND_POWERUP_LUCKYSPIN,
	&SOUND_POWERUP_FIREBALL,
	&SOUND_POWERUP_ZEN,
	&SOUND_GONG,
	&SOUND_SLOWMO,
	&SOUND_TYPING,
	&SOUND_STORY_TYPING,
	&SOUND_TONELO,
	&SOUND_TONE,
	&SOUND_TONEHI,
	&SOUND_TONESUPERHI,
	&SOUND_STAMP,
	&SOUND_ADD_BALL,
	&SOUND_DIALOG_MOVE,
	&SOUND_SCREEN_MOVE,
	&SOUND_JOIN_LOBBY,
	&SOUND_LEAVE_LOBBY,
	&SOUND_NEW_LEVEL,
	&SOUND_NEW_LEVEL_FAST1,
	&SOUND_NEW_LEVEL_FAST2,
	&SOUND_NEW_LEVEL_FAST3,
	&SOUND_NEW_LEVEL_FAST4,
	&SOUND_NEW_SHOTCLOCK,
	&SOUND_ALL_RANDOM_ON,
	&SOUND_ALL_RANDOM_OFF,
	&SOUND_OPTIONS_CONFIRM,
	&SOUND_OPTIONS_CANCEL,
	&SOUND_START_VIEW_BOARD,
	&SOUND_STOP_VIEW_BOARD,
	&SOUND_SCORE_BAR_REFILL,
	&SOUND_SCORE_BAR_TICK,
	&SOUND_SCORE_BAR_FILL,
	&SOUND_STYLE_SHOT_FILL,
	&SOUND_TROPHY_STAY,
	&SOUND_RESULTS_TEXT,
	&SOUND_ROUND_DISC,
	&SOUND_SHOT_CLOCK_SUBTLE,
	&SOUND_RIBBON_AWARD,
	&SOUND_PLAYER_READY,
	&SOUND_BEST_SHOT,
	&SOUND_SHOT_25K,
	&SOUND_SHOT_75K,
	&SOUND_SHOT_125K,
	&SOUND_SCORE_BAR_EXPLODE,
	&SOUND_NUM_ROUNDS_CHANGE,
	&SOUND_SCORE_BAR_EXPLODE_WIN,
	&SOUND_RIBBON_4TH,
	&SOUND_RIBBON_3RD,
	&SOUND_RIBBON_2ND,
	&SOUND_FIREWORKPOP,
	&IMAGE_INT_BALL,
	&IMAGE_INT_BALLBACK,
	&IMAGE_INT_BUTTONCOVER,
	&IMAGE_INT_CANNON,
	&IMAGE_INT_CANNONCOVER,
	&IMAGE_INT_PLUNGER,
	&IMAGE_INT_BALLGLASS,
	&IMAGE_INT_FEVERMETER,
	&IMAGE_INT_FEVERMETERTOP,
	&IMAGE_INT_FEVERMETERBOTTOM,
	&IMAGE_INT_FEVERRAILING,
	&IMAGE_INT_FEVERBARS,
	&IMAGE_INT_FEVERBARLITES,
	&IMAGE_INT_COUNTER,
	&IMAGE_INT_FREEBALLMETER,
	&IMAGE_INT_FREEBALLMETERTOP,
	&IMAGE_INT_BACKSHADOW,
	&IMAGE_INT_FEVERGLOW,
	&IMAGE_INT_FEVERGLOW1,
	&IMAGE_INT_FEVERGLOW2,
	&IMAGE_INT_FEVERGLOW3,
	&IMAGE_INT_SCOREHILIGHT,
	&IMAGE_INT_BALLOMASKBL,
	&IMAGE_INT_BALLOMASKBR,
	&IMAGE_INT_BALLOMASKTL,
	&IMAGE_INT_BALLOMASKTR,
	&IMAGE_INT_FBCENTERDISC,
	&IMAGE_INT_FBGLOW,
	&IMAGE_INT_FBFREEBALL,
	&IMAGE_INT_FBLIGHTUP,
	&IMAGE_INT_FBPOINTS,
	&IMAGE_INT_BIGMENUBUTTON,
	&IMAGE_INT_LEVELSELECTBUTTON,
	&IMAGE_INT_PADLOCK,
	&IMAGE_INT_BIGDLGBUTTON,
	&IMAGE_INT_BIGMENUGLOW,
	&IMAGE_INT_BIGDLGGLOW,
	&IMAGE_INT_BGCHECKBOX,
	&IMAGE_INT_BGCHECKGLOW,
	&IMAGE_INT_COLORCHECK,
	&IMAGE_INT_CONTROLS,
	&IMAGE_INT_LEVELSELECT,
	&IMAGE_INT_LEVELSELECTGLOW,
	&IMAGE_IP_B,
	&IMAGE_IP_BLC,
	&IMAGE_IP_BRC,
	&IMAGE_IP_L1,
	&IMAGE_IP_L2,
	&IMAGE_IP_R1,
	&IMAGE_IP_R2,
	&IMAGE_IP_TL1,
	&IMAGE_IP_TL2,
	&IMAGE_IP_TR1,
	&IMAGE_IP_TR2,
	&IMAGE_IP_TLC,
	&IMAGE_IP_TRC,
	&IMAGE_IP_SEAMS,
	&IMAGE_IP_SHOOTERBACK,
	&IMAGE_IP_SHOOTER,
	&IMAGE_IP_BALLOTRON,
	&IMAGE_IP_FEVERMETER,
	&IMAGE_IP_LWINDOW,
	&IMAGE_IP_RWINDOW,
	&IMAGE_IP_SHOOTERORB,
	&IMAGE_IP_POWERUPBANNER,
	&IMAGE_IP_ORBGLOW,
	&IMAGE_IP_LEXTEND,
	&IMAGE_IP_REXTEND,
	&IMAGE_IP_TEXTEND,
	&IMAGE_IP_BEXTEND,
	&IMAGE_IP_PARTY_TOP,
	&IMAGE_IP_PARTY_LEFT,
	&IMAGE_IP_PARTY_RIGHT,
	&IMAGE_IP_PARTY_BOTTOM,
	&IMAGE_IP_GOLD_PLATE,
	&IMAGE_IP_TITLEBAR,
	&IMAGE_IP_TITLEGLOSS,
	&IMAGE_IP_TITLELC,
	&IMAGE_IP_TITLERC,
	&IMAGE_IP_TITLESLIDER,
	&IMAGE_MM_SPEECHBUBBLE,
	&IMAGE_MM_CRY,
	&IMAGE_MM_BUYIT,
	&IMAGE_MM_TROPHIES,
	&IMAGE_MM_TROPHYREVEAL,
	&IMAGE_MM_MURAL_MP,
	&IMAGE_MM_MURAL_BACK_MP,
	&IMAGE_MM_MURAL_SP,
	&IMAGE_MM_MURAL_BACK_SP,
	&IMAGE_MM_MURAL_WAIT,
	&IMAGE_MM_MURAL_BACK_WAIT,
	&IMAGE_MM_BLANKSUN,
	&IMAGE_LB_BACKING,
	&IMAGE_LB_HOLDER,
	&IMAGE_LB_100,
	&IMAGE_LB_FREEBALL,
	&IMAGE_LB_NOBALL,
	&IMAGE_LB_SHOT,
	&IMAGE_LB_ZEN,
	&IMAGE_LB_GAMECLIP,
	&IMAGE_LB_GAMECLIP_SMALL,
	&IMAGE_LB_GAMECLIP_SMALL_STROKE,
	&IMAGE_LB_MASTER0,
	&IMAGE_LB_MASTER1,
	&IMAGE_LB_MASTER2,
	&IMAGE_LB_MASTER3,
	&IMAGE_LB_MASTER4,
	&IMAGE_LB_MASTER5,
	&IMAGE_LB_MASTER6,
	&IMAGE_LB_MASTER7,
	&IMAGE_LB_MASTER8,
	&IMAGE_LB_MASTER9,
	&IMAGE_LS_LOCK,
	&IMAGE_LS_LOCK_SMALL,
	&IMAGE_LS_CHALLENGEBADGE,
	&IMAGE_LS_RANDOMLEVEL,
	&IMAGE_LS_TINYBLUERIBBON,
	&IMAGE_LS_TINYMASTER,
	&IMAGE_LS_DOWNLOAD,
	&IMAGE_LS_WATERMARK,
	&IMAGE_HELP_ICONS,
	&IMAGE_HELP_ICONS2,
	&IMAGE_HAT,
	&IMAGE_MAGICHAT,
	&IMAGE_SPARKLE,
	&IMAGE_SPARKLE_FEVER,
	&IMAGE_STREAK,
	&IMAGE_FLOWER,
	&IMAGE_POWERUPICON,
	&IMAGE_SCOREICON,
	&IMAGE_BONUSHALO,
	&IMAGE_BONUSGLOW,
	&IMAGE_BONUSGLOW_GREEN,
	&IMAGE_BONUSGLOW_BLUE,
	&IMAGE_BONUS5000,
	&IMAGE_BONUS10000,
	&IMAGE_BONUS25000,
	&IMAGE_BONUS50000,
	&IMAGE_BONUS100000,
	&IMAGE_BONUS5000LIGHT,
	&IMAGE_BONUS10000LIGHT,
	&IMAGE_BONUS25000LIGHT,
	&IMAGE_BONUS50000LIGHT,
	&IMAGE_BONUS100000LIGHT,
	&IMAGE_BALL,
	&IMAGE_YINYANG,
	&IMAGE_GUIDERECT,
	&IMAGE_GUIDERECT2,
	&IMAGE_ALPHABALL,
	&IMAGE_GUIDEARROW,
	&IMAGE_GUIDEPOINT,
	&IMAGE_GUIDEHIT,
	&IMAGE_BRICK,
	&IMAGE_BRICKCB,
	&IMAGE_BALLPEG,
	&IMAGE_BALLPEGCB,
	&IMAGE_BALLSHADOW,
	&IMAGE_PEGSHADOW,
	&IMAGE_BIGBALLSHADOW,
	&IMAGE_BIGBALL,
	&IMAGE_DEFINNERPEG,
	&IMAGE_DEFOUTERPEG,
	&IMAGE_CIRCLE,
	&IMAGE_FIREBALLFIRE,
	&IMAGE_FIREBALL,
	&IMAGE_COINHEADS,
	&IMAGE_COINTAILS,
	&IMAGE_COINHILIGHT,
	&IMAGE_BUBBLES,
	&IMAGE_BRICKGLOW,
	&IMAGE_PEGGLOW,
	&IMAGE_PYRAMIDRAY,
	&IMAGE_FEVERRAY,
	&IMAGE_FEVERGLOWSTAR,
	&IMAGE_FEVERSTAR_RED,
	&IMAGE_FEVERSTAR_GREEN,
	&IMAGE_FEVERSTAR_BLUE,
	&IMAGE_FEVERSPARK,
	&IMAGE_FEVERTRAIL,
	&IMAGE_FEVERRAINBOW,
	&IMAGE_FEVERSCORE,
	&IMAGE_FEVERSCORETOP,
	&IMAGE_STAR_STREAK,
	&IMAGE_TIPARROW,
	&IMAGE_BLUERIBBON,
	&IMAGE_TINYBLUERIBBON,
	&IMAGE_MASTERBADGE,
	&IMAGE_PAUSED,
	&IMAGE_CATCHERGLOW,
	&IMAGE_PYRAMIDBALL,
	&IMAGE_JIMMY,
	&IMAGE_JIMMYSPEECH,
	&IMAGE_FEVERCAM,
	&IMAGE_XFEVER,
	&IMAGE_XFEVERGLOW,
	&IMAGE_PULSE_NORMAL,
	&IMAGE_PULSE_GOAL,
	&IMAGE_PULSE_SCORE,
	&IMAGE_PULSE_POWERUP,
	&IMAGE_PULSE2_SCORE,
	&IMAGE_PULSE2_POWERUP,
	&IMAGE_SPACEBURST,
	&IMAGE_SPACEBUBBLE,
	&IMAGE_SPACEHALO,
	&IMAGE_SPACESTAR,
	&IMAGE_SPOOKYPOOF1,
	&IMAGE_SPOOKYPOOF2,
	&IMAGE_SPOOKYGHOST,
	&IMAGE_SPOOKYTRAIL,
	&IMAGE_SPOOKYEYES,
	&IMAGE_EMBER,
	&IMAGE_SMOKE,
	&IMAGE_FLECK,
	&IMAGE_FLAMETRAIL,
	&IMAGE_NUKE,
	&IMAGE_NUKESTREAK,
	&IMAGE_VS_DUEL,
	&IMAGE_VS_DUELBACK,
	&IMAGE_FEVERBORDER,
	&IMAGE_DLG_BOTTOMBAR,
	&IMAGE_DLG_RANDOM,
	&IMAGE_DLG_BLUEFRAME,
	&IMAGE_DLG_GRAYFRAME,
	&IMAGE_DLG_SELECTORFRAME,
	&IMAGE_DLG_BUTTON1,
	&IMAGE_DLG_BUTTON2,
	&IMAGE_DLG_BUTTON3,
	&IMAGE_DLG_BROWNBUTTON1,
	&IMAGE_DLG_BROWNBUTTON2,
	&IMAGE_DLG_GREENOK,
	&IMAGE_DLG_POPUP,
	&IMAGE_DLG_TEXTBOX,
	&IMAGE_DLG_HORZBAR,
	&IMAGE_DLG_LJOINT,
	&IMAGE_DLG_EDITBUTTON,
	&IMAGE_DLG_DIALOGBOX,
	&IMAGE_DLG_SLIDER,
	&IMAGE_DLG_SLIDERHILIGHT,
	&IMAGE_DLG_SLIDERORB,
	&IMAGE_DLG_FRAME1,
	&IMAGE_DLG_FRAME2,
	&IMAGE_DLG_FRAME3,
	&IMAGE_DLG_SEGMENT,
	&IMAGE_DLG_CONNECTOR,
	&IMAGE_DLG_REPLAYTOP,
	&IMAGE_DLG_REPLAYSEGMENT,
	&IMAGE_DLG_STAGEBULLET,
	&IMAGE_DLG_MASTERSTAGE,
	&IMAGE_DLG_MASTERSTAGEPROGBAR,
	&IMAGE_DLG_PLAYWIDGET1,
	&IMAGE_DLG_PLAYWIDGET2,
	&IMAGE_DLG_PLAYBUTTON1,
	&IMAGE_DLG_PLAYBUTTON2,
	&IMAGE_DLG_STAGEBAR,
	&IMAGE_DLG_STAGEPROGRESSBAR,
	&IMAGE_DLG_TEXTRECT,
	&IMAGE_DLG_QUESTIONMARK,
	&IMAGE_DLG_BIGQUESTIONMARK,
	&IMAGE_DLG_TIP,
	&IMAGE_DLG_INSTRUCTIONS,
	&IMAGE_DLG_INSTRUCTIONS2,
	&IMAGE_DLG_INSTRUCTIONS3,
	&IMAGE_DLG_INSTRUCTIONS4,
	&IMAGE_DLG_BUTTONOVERLAY2,
	&IMAGE_DLG_PURPLEBUTTON,
	&IMAGE_DLG_MENU,
	&IMAGE_DLG_INSTANTREPLAY,
	&IMAGE_DLG_REPLAYSPIN,
	&IMAGE_DLG_HELP_BAR,
	&IMAGE_DLG_HELP_SLIDER,
	&IMAGE_DLG_HELP_LB_SLIDER,
	&IMAGE_DLG_HELP_RB_SLIDER,
	&IMAGE_DLG_HELP_BUTTONS,
	&IMAGE_DLG_GLOSS,
	&IMAGE_DLG_ETCHINGS,
	&IMAGE_CHR_CHARACTERS,
	&IMAGE_CHR_CHARACTERSHADOWS,
	&IMAGE_CHR_CHARACTER1,
	&IMAGE_CHR_CHARACTER2,
	&IMAGE_CHR_CHARACTER3,
	&IMAGE_CHR_CHARACTER4,
	&IMAGE_CHR_CHARACTER5,
	&IMAGE_CHR_CHARACTER6,
	&IMAGE_CHR_CHARACTER7,
	&IMAGE_CHR_CHARACTER8,
	&IMAGE_CHR_CHARACTER9,
	&IMAGE_CHR_CHARACTER10,
	&IMAGE_CHR_CHARACTER11,
	&IMAGE_CHR_YINYANGEYE,
	&IMAGE_SPIN_SPINNER,
	&IMAGE_SPIN_ARROW,
	&IMAGE_SPIN_HATON,
	&IMAGE_SPIN_EXTRAON,
	&IMAGE_SPIN_TRIPLEON,
	&IMAGE_SPIN_RANDOMON,
	&IMAGE_SPIN_RANDOMTEXT,
	&IMAGE_SPIN_RANDOMTEXTON,
	&IMAGE_SPIN_RIMLIGHT,
	&IMAGE_SPIN_RIMLIGHT2,
	&IMAGE_SPIN_EXTRABALLMASK,
	&IMAGE_PARTY_MARQUE,
	&IMAGE_PARTY_OPTIONS,
	&IMAGE_PARTY_SIDEBAR,
	&IMAGE_PARTY_SIDEBAR_PLAYER,
	&IMAGE_PARTY_SIDEBAR_SELECTED,
	&IMAGE_PARTY_SIDEBAR_GLOW,
	&IMAGE_PARTY_SIDEBAR_FEVER,
	&IMAGE_PARTY_RESULTS_BAR,
	&IMAGE_PARTY_ROUND_COIN,
	&IMAGE_PARTY_CLOCK_COIN,
	&IMAGE_PARTY_SHOT_CLOCK,
	&IMAGE_PARTY_SHOT_CLOCK_GLOW,
	&IMAGE_PARTY_TROPHY,
	&IMAGE_PARTY_TFX_RAY,
	&IMAGE_PARTY_TFX_WAVE,
	&IMAGE_PARTY_TFX_GLOW,
	&IMAGE_PARTY_RIBBON1ST,
	&IMAGE_PARTY_RIBBON2ND,
	&IMAGE_PARTY_RIBBON3RD,
	&IMAGE_PARTY_RIBBON4TH,
	&IMAGE_PARTY_PEGS,
	&IMAGE_PARTY_CHAR_BGS,
	&IMAGE_PARTY_BESTSHOT,
	&IMAGE_PARTY_POWERUPS,
	&IMAGE_PARTY_SPEEDLINES,
	&IMAGE_PARTY_ZOOM,
	&IMAGE_PARTY_READY,
	&IMAGE_PARTY_SCOREMARKERS,
	&IMAGE_PARTY_FEVERMARKERS,
	&IMAGE_PARTY_PIPS,
	&IMAGE_PARTY_TAPE3,
	&IMAGE_PARTY_TAPE4,
	&IMAGE_PARTY_BIGPURPLE,
	&IMAGE_PARTY_REPLAYFRAME,
	&IMAGE_PARTY_HOST_BADGE,
	&IMAGE_PARTY_READY_BUTTON,
	&IMAGE_PARTY_HALO_OVER,
	&IMAGE_PARTY_HALO_UNDER,
	&IMAGE_PARTY_RESYNC,
	&IMAGE_DUEL_LOBBY_PLAYER,
	&IMAGE_STORY_WIN,
	&IMAGE_STORY_CLAWS,
	&IMAGE_STORY_GAMERPIC1,
	&IMAGE_STORY_GAMERPIC2,
	&IMAGE_STORY_ROCKET,
	&IMAGE_STORY_BIGSPARKLE,
	&IMAGE_UPSELL_JUNK1,
	&IMAGE_LIGHTNING_ROD,
	&IMAGE_LIGHTNING_ROD_ZAP,
	&IMAGE_LIGHTNING_ROD_ON,
	&IMAGE_LIGHTNING_ROD_RING_FRONT,
	&IMAGE_LIGHTNING_ROD_RING_BACK,
	&IMAGE_BALL_LIGHTNING,
	&IMAGE_LIGHTNING_FRONT,
	&IMAGE_LIGHTNING_FRONT_SMALL,
	&IMAGE_LIGHTNING,
	&IMAGE_LIGHTNING_BACK,
	&IMAGE_LIGHTNING_SPARK,
	&IMAGE_LIGHTNING_BALLSPARK,
	&IMAGE_SUPERSWIRL,
	&IMAGE_CURVE,
	&IMAGE_NIGHTS_BUTTON,
	&IMAGE_FLY0,
	&IMAGE_FLY1,
	&IMAGE_ADDTL_GLOW,
	&IMAGE_OTHERBUTTON_GLOW,
	&IMAGE_TWINKLE_STAR,
	&IMAGE_MARINA_LOGO,
	&IMAGE_MARINA_SHOOTER,
	&IMAGE_MARINA_BG,
	&SOUND_APPLAUSE_LONG,
	&SOUND_LOGO_BUZZ_ON,
	&SOUND_NEON_FLICKER,
	&SOUND_TROPHY_PHOTO_IN,
	&SOUND_STAGE_DREAMY_IN,
	&SOUND_STAGE_DREAMY_OUT,
	&SOUND_POWERUP_LIGHTNING_HIT,
	&SOUND_CREDITS_SPOTLIGHT_ON,
	&SOUND_SPEECH_BUBBLE_POPUP,
	&SOUND_TROPHY_WIN_INTRO,
	&SOUND_POWERUP_LIGHTNING,
	&SOUND_LIGHTNING_LOOP,
	&SOUND_LIGHTNING_START,
	&SOUND_PEGSPARK,
	&SOUND_INTRO,
	&IMAGE_MARINA_POWERUP_EN,
	&IMAGE_PARTY_BOLT_EN,
	&IMAGE_MARINA_POWERUP_FR,
	&IMAGE_PARTY_BOLT_FR,
	&IMAGE_MARINA_POWERUP_DE,
	&IMAGE_PARTY_BOLT_DE,
	&IMAGE_MARINA_POWERUP_PT,
	&IMAGE_PARTY_BOLT_PT,
	&IMAGE_MARINA_POWERUP_ES,
	&IMAGE_PARTY_BOLT_ES,
	&IMAGE_MARINA_POWERUP_IT,
	&IMAGE_PARTY_BOLT_IT,
	&IMAGE_MARINA_POWERUP_KO,
	&IMAGE_PARTY_BOLT_KO,
	&IMAGE_MARINA_POWERUP_JP,
	&IMAGE_PARTY_BOLT_JP,
	&IMAGE_MARINA_POWERUP_TC,
	&IMAGE_PARTY_BOLT_TC,
	&IMAGE_CHR_CHARACTERS_NIGHTS,
	&IMAGE_CHR_CHARACTERSHADOWS_NIGHTS,
	&IMAGE_CHR_CHARACTER_MARINA,
	&IMAGE_CHR_CHARACTER_ADV12,
	&IMAGE_CHR_CHARACTER_NEW1,
	&IMAGE_CHR_CHARACTER_NEW2,
	&IMAGE_CHR_CHARACTER_NEW3,
	&IMAGE_CHR_CHARACTER_NEW4,
	&IMAGE_CHR_CHARACTER_NEW5,
	&IMAGE_CHR_CHARACTER_NEW6,
	&IMAGE_CHR_CHARACTER_NEW7,
	&IMAGE_CHR_CHARACTER_NEW8,
	&IMAGE_CHR_CHARACTER_NEW9,
	&IMAGE_CHR_CHARACTER_NEW10,
	&IMAGE_CHR_PARTICLE1,
	&IMAGE_CHR_PARTICLE2,
	&IMAGE_CHR_PARTICLE3,
	&IMAGE_CHR_PARTICLE4,
	&IMAGE_CHR_PARTICLE5,
	&IMAGE_CHR_PARTICLE6,
	&IMAGE_DLG_RANDOM_SQUARE,
	&IMAGE_MM_TROPHY_ZEN,
	&IMAGE_MM_TROPHY_CROWN,
	&IMAGE_MM_TROPHY_CUP,
	&IMAGE_MM_TROPHY_TORCH,
	&IMAGE_MM_MARINASTAGE,
	&IMAGE_LOAD_MURAL_SP_NIGHT,
	&IMAGE_LOAD_MURAL_WAIT_NIGHT,
	&IMAGE_LOAD_MURAL_BG_WAIT_NIGHT,
	&IMAGE_LOAD_NIGHTSLOGO_MOON,
	&IMAGE_LOAD_SUNSET_BG,
	&IMAGE_LOAD_LENSFLARE,
	&IMAGE_LOAD_GODRAY,
	&IMAGE_LOAD_RIM_LIGHT,
	&IMAGE_TROPHY_CURTAIN,
	&IMAGE_TROPHY_CURTAIN_L,
	&IMAGE_TROPHY_CURTAIN_R,
	&IMAGE_TROPHY_PARTICLE_WHITE_MED_ROUND,
	&IMAGE_TROPHY_MASTER1,
	&IMAGE_TROPHY_MASTER2,
	&IMAGE_TROPHY_MASTER3,
	&IMAGE_TROPHY_ADV,
	&IMAGE_TROPHY_PARTICLE1,
	&IMAGE_TROPHY_PARTICLE2,
	&IMAGE_TROPHY_PARTICLE3,
	&IMAGE_TROPHY_PARTICLE4,
	&IMAGE_TROPHY_PARTICLE5,
	&IMAGE_TROPHY_PARTICLE6,
	&IMAGE_TROPHY_HOLE,
	&IMAGE_TROPHY_EXIT_BUTTON,
	&IMAGE_TROPHY_SPARKLE,
	&IMAGE_TROPHY_SPEECH_BR,
	&IMAGE_TROPHY_SPEECH_BL,
	&IMAGE_TROPHY_SPEECH_B,
	&IMAGE_TROPHY_SPEECH_BP,
	&IMAGE_TROPHY_SPEECH_C,
	&IMAGE_TROPHY_SPEECH_L,
	&IMAGE_TROPHY_SPEECH_R,
	&IMAGE_TROPHY_SPEECH_LP,
	&IMAGE_TROPHY_SPEECH_RP,
	&IMAGE_TROPHY_SPEECH_T,
	&IMAGE_TROPHY_SPEECH_TL,
	&IMAGE_TROPHY_SPEECH_TP,
	&IMAGE_TROPHY_SPEECH_TR,
	&IMAGE_IP_MARINA_TOP,
	&IMAGE_IP_MARINA_LEFT,
	&IMAGE_IP_MARINA_RIGHT,
	&IMAGE_IP_MARINA_BOTTOM,
	&IMAGE_IP_MARINA_GUTTER_LEFT,
	&IMAGE_IP_MARINA_GUTTER_RIGHT,
	&IMAGE_IP_MARINA_GUTTER_JELLYFISH1,
	&IMAGE_IP_MARINA_GUTTER_JELLYFISH2,
	&IMAGE_IP_BJORN_TOP,
	&IMAGE_IP_BJORN_LEFT,
	&IMAGE_IP_BJORN_RIGHT,
	&IMAGE_IP_BJORN_BOTTOM,
	&IMAGE_IP_BJORN_GUTTER_BG_LEFT,
	&IMAGE_IP_BJORN_GUTTER_BG_RIGHT,
	&IMAGE_IP_BJORN_GUTTER_HILL,
	&IMAGE_IP_BJORN_GUTTER_TREE,
	&IMAGE_IP_BJORN_GUTTER_CLOUDS,
	&IMAGE_IP_JIMMY_TOP,
	&IMAGE_IP_JIMMY_LEFT,
	&IMAGE_IP_JIMMY_RIGHT,
	&IMAGE_IP_JIMMY_BOTTOM,
	&IMAGE_IP_JIMMY_GUTTER_BG_LEFT,
	&IMAGE_IP_JIMMY_GUTTER_BG_RIGHT,
	&IMAGE_IP_JIMMY_GUTTER_L_FALL1,
	&IMAGE_IP_JIMMY_GUTTER_L_FALL2,
	&IMAGE_IP_JIMMY_GUTTER_R_FALL1,
	&IMAGE_IP_JIMMY_GUTTER_R_FALL2,
	&IMAGE_IP_JIMMY_GUTTER_L_FOREGROUND,
	&IMAGE_IP_JIMMY_GUTTER_R_FOREGROUND,
	&IMAGE_IP_KATTUT_TOP,
	&IMAGE_IP_KATTUT_LEFT,
	&IMAGE_IP_KATTUT_RIGHT,
	&IMAGE_IP_KATTUT_BOTTOM,
	&IMAGE_IP_KATTUT_GUTTER_BG_LEFT,
	&IMAGE_IP_KATTUT_GUTTER_BG_RIGHT,
	&IMAGE_IP_KATTUT_GUTTER_CLOUDS,
	&IMAGE_IP_SPLORK_TOP,
	&IMAGE_IP_SPLORK_LEFT,
	&IMAGE_IP_SPLORK_RIGHT,
	&IMAGE_IP_SPLORK_BOTTOM,
	&IMAGE_IP_SPLORK_GUTTER_BG_LEFT,
	&IMAGE_IP_SPLORK_GUTTER_BG_RIGHT,
	&IMAGE_IP_SPLORK_GUTTER_COMET,
	&IMAGE_IP_SPLORK_GUTTER_L_PLANETS,
	&IMAGE_IP_SPLORK_GUTTER_R_PLANETS,
	&IMAGE_IP_SPLORK_GUTTER_NEBULA,
	&IMAGE_IP_RENF_TOP,
	&IMAGE_IP_RENF_LEFT,
	&IMAGE_IP_RENF_RIGHT,
	&IMAGE_IP_RENF_BOTTOM,
	&IMAGE_IP_RENFIELD_GUTTER_BG_LEFT,
	&IMAGE_IP_RENFIELD_GUTTER_BG_RIGHT,
	&IMAGE_IP_RENFIELD_GUTTER_MIST,
	&IMAGE_IP_CLAUDE_TOP,
	&IMAGE_IP_CLAUDE_LEFT,
	&IMAGE_IP_CLAUDE_RIGHT,
	&IMAGE_IP_CLAUDE_BOTTOM,
	&IMAGE_IP_CLAUDE_GUTTER_BG_LEFT,
	&IMAGE_IP_CLAUDE_GUTTER_BG_RIGHT,
	&IMAGE_IP_CLAUDE_GUTTER_BIG_FISH1,
	&IMAGE_IP_CLAUDE_GUTTER_BIG_FISH2,
	&IMAGE_IP_CLAUDE_GUTTER_BIG_FISH3,
	&IMAGE_IP_CLAUDE_GUTTER_SMALL_FISH1,
	&IMAGE_IP_CLAUDE_GUTTER_SMALL_FISH2,
	&IMAGE_IP_CLAUDE_GUTTER_SMALL_FISH3,
	&IMAGE_IP_CLAUDE_GUTTER_L_KELP,
	&IMAGE_IP_CLAUDE_GUTTER_R_KELP,
	&IMAGE_IP_TULA_TOP,
	&IMAGE_IP_TULA_LEFT,
	&IMAGE_IP_TULA_RIGHT,
	&IMAGE_IP_TULA_BOTTOM,
	&IMAGE_IP_TULA_GUTTER_BG_LEFT,
	&IMAGE_IP_TULA_GUTTER_BG_RIGHT,
	&IMAGE_IP_TULA_GUTTER_BUTTERFLY1,
	&IMAGE_IP_TULA_GUTTER_BUTTERFLY2,
	&IMAGE_IP_TULA_GUTTER_BUTTERFLY3,
	&IMAGE_IP_TULA_GUTTER_BLADES,
	&IMAGE_IP_WARREN_TOP,
	&IMAGE_IP_WARREN_LEFT,
	&IMAGE_IP_WARREN_RIGHT,
	&IMAGE_IP_WARREN_BOTTOM,
	&IMAGE_IP_WARREN_GUTTER_BG_LEFT,
	&IMAGE_IP_WARREN_GUTTER_BG_RIGHT,
	&IMAGE_IP_WARREN_GUTTER_DUCKIES,
	&IMAGE_IP_WARREN_GUTTER_BUNNY_WHEEL,
	&IMAGE_IP_WARREN_GUTTER_CARDS,
	&IMAGE_IP_CINDER_TOP,
	&IMAGE_IP_CINDER_LEFT,
	&IMAGE_IP_CINDER_RIGHT,
	&IMAGE_IP_CINDER_BOTTOM,
	&IMAGE_IP_CINDERBOTTOM_GUTTER_BG_LEFT,
	&IMAGE_IP_CINDERBOTTOM_GUTTER_BG_RIGHT,
	&IMAGE_IP_HU_TOP,
	&IMAGE_IP_HU_LEFT,
	&IMAGE_IP_HU_RIGHT,
	&IMAGE_IP_HU_BOTTOM,
	&IMAGE_IP_MASTERHU_GUTTER_BG_LEFT,
	&IMAGE_IP_MASTERHU_GUTTER_BG_RIGHT,
	&IMAGE_IP_MASTERHU_GUTTER_L_HILL,
	&IMAGE_IP_MASTERHU_GUTTER_R_HILL,
	&IMAGE_IP_MASTERHU_GUTTER_CLOUD,
	&IMAGE_PS3_21PIX_BUTTONS,
	&IMAGE_PS3_26PIX_BUTTONS,
	&IMAGE_PS3_L1_BUTTON,
	&IMAGE_PS3_L2_BUTTON,
	&IMAGE_PS3_R1_BUTTON,
	&IMAGE_PS3_R2_BUTTON,
	NULL
};

Image* Sexy::LoadImageById(ResourceManager *theManager, int theId)
{
	return (*((Image**)gResources[theId]) = theManager->LoadImage(GetStringIdById(theId)));
}

void Sexy::ReplaceImageById(ResourceManager *theManager, int theId, Image *theImage)
{
	theManager->ReplaceImage(GetStringIdById(theId),theImage);
	*(Image**)gResources[theId] = theImage;
}

Image* Sexy::GetImageById(int theId)
{
	return *(Image**)gResources[theId];
}

Font* Sexy::GetFontById(int theId)
{
	return *(Font**)gResources[theId];
}

int Sexy::GetSoundById(int theId)
{
	return *(int*)gResources[theId];
}

Image*& Sexy::GetImageRefById(int theId)
{
	return *(Image**)gResources[theId];
}

Font*& Sexy::GetFontRefById(int theId)
{
	return *(Font**)gResources[theId];
}

int& Sexy::GetSoundRefById(int theId)
{
	return *(int*)gResources[theId];
}

static Sexy::ResourceId GetIdByVariable(const void *theVariable)
{
	typedef std::map<int,int> MyMap;
	static MyMap aMap;
	if(gNeedRecalcVariableToIdMap)
	{
		gNeedRecalcVariableToIdMap = false;
		aMap.clear();
		for(int i=0; i<RESOURCE_ID_MAX; i++)
			aMap[*(int*)gResources[i]] = i;
	}

	MyMap::iterator anItr = aMap.find((int)theVariable);
	if (anItr == aMap.end())
		return RESOURCE_ID_MAX;
	else
		return (ResourceId) anItr->second;
}

Sexy::ResourceId Sexy::GetIdByImage(Image *theImage)
{
	return GetIdByVariable(theImage);
}

Sexy::ResourceId Sexy::GetIdByFont(Font *theFont)
{
	return GetIdByVariable(theFont);
}

Sexy::ResourceId Sexy::GetIdBySound(int theSound)
{
	return GetIdByVariable((void*)theSound);
}

const char* Sexy::GetStringIdById(int theId)
{
	switch(theId)
	{
		case IMAGE_SUNGLOW_ID: return "IMAGE_SUNGLOW";
		case SOUND_MORNING_ID: return "SOUND_MORNING";
		case FONT_OVERLOAD16_ID: return "FONT_OVERLOAD16";
		case FONT_OVERLOAD16OUTLINE_ID: return "FONT_OVERLOAD16OUTLINE";
		case FONT_OVERLOAD16OUTLINE2_ID: return "FONT_OVERLOAD16OUTLINE2";
		case IMAGE_LOAD_OVERLAY_ID: return "IMAGE_LOAD_OVERLAY";
		case IMAGE_LOAD_LIGHTS_ID: return "IMAGE_LOAD_LIGHTS";
		case IMAGE_LOAD_LOGO_ID: return "IMAGE_LOAD_LOGO";
		case IMAGE_LOAD_SHADOW_ID: return "IMAGE_LOAD_SHADOW";
		case IMAGE_LOAD_SUNHEAD_ID: return "IMAGE_LOAD_SUNHEAD";
		case IMAGE_LOAD_PLAYNOW_ID: return "IMAGE_LOAD_PLAYNOW";
		case IMAGE_LOAD_BALL_ID: return "IMAGE_LOAD_BALL";
		case IMAGE_LOAD_TM_ID: return "IMAGE_LOAD_TM";
		case FONT_PLAIN_ID: return "FONT_PLAIN";
		case FONT_PLAIN2BIG_ID: return "FONT_PLAIN2BIG";
		case FONT_SMALL_ID: return "FONT_SMALL";
		case FONT_SMALLMONO_ID: return "FONT_SMALLMONO";
		case FONT_SCORE_DISP_ID: return "FONT_SCORE_DISP";
		case FONT_SMALL_DISP_ID: return "FONT_SMALL_DISP";
		case FONT_BALLSLEFT_ID: return "FONT_BALLSLEFT";
		case FONT_BUTTON_ID: return "FONT_BUTTON";
		case FONT_STAGE_ID: return "FONT_STAGE";
		case FONT_BONK_ID: return "FONT_BONK";
		case FONT_OVERLOAD10_ID: return "FONT_OVERLOAD10";
		case FONT_OVERLOAD12_ID: return "FONT_OVERLOAD12";
		case FONT_OVERLOAD24_ID: return "FONT_OVERLOAD24";
		case FONT_LEVELUP_ID: return "FONT_LEVELUP";
		case FONT_OVERLOADMONO10_ID: return "FONT_OVERLOADMONO10";
		case FONT_OVERLOADMONO12_ID: return "FONT_OVERLOADMONO12";
		case FONT_OVERLOAD10OUTLINE_ID: return "FONT_OVERLOAD10OUTLINE";
		case FONT_OVERLOAD12OUTLINE_ID: return "FONT_OVERLOAD12OUTLINE";
		case FONT_OVERLOAD24OUTLINE_ID: return "FONT_OVERLOAD24OUTLINE";
		case FONT_OVERLOAD24GRAD1_ID: return "FONT_OVERLOAD24GRAD1";
		case FONT_OVERLOAD24GRAD2_ID: return "FONT_OVERLOAD24GRAD2";
		case FONT_PLAINOUTLINE_ID: return "FONT_PLAINOUTLINE";
		case FONT_PLAIN2_ID: return "FONT_PLAIN2";
		case FONT_PLAIN2OUTLINE_ID: return "FONT_PLAIN2OUTLINE";
		case FONT_PLAIN2BIGOUTLINE_ID: return "FONT_PLAIN2BIGOUTLINE";
		case SOUND_PEGHIT_LOW_ID: return "SOUND_PEGHIT_LOW";
		case SOUND_PEGHIT_ID: return "SOUND_PEGHIT";
		case SOUND_PEGHIT2_ID: return "SOUND_PEGHIT2";
		case SOUND_PEGHIT3_ID: return "SOUND_PEGHIT3";
		case SOUND_EXTRABALL_ID: return "SOUND_EXTRABALL";
		case SOUND_EXTRABALL2_ID: return "SOUND_EXTRABALL2";
		case SOUND_EXTRABALL3_ID: return "SOUND_EXTRABALL3";
		case SOUND_MISS_ID: return "SOUND_MISS";
		case SOUND_COINSPIN_ID: return "SOUND_COINSPIN";
		case SOUND_COINSPIN_NO_ID: return "SOUND_COINSPIN_NO";
		case SOUND_FREEBALL_ID: return "SOUND_FREEBALL";
		case SOUND_PENALTY_ID: return "SOUND_PENALTY";
		case SOUND_LEVELWON_ID: return "SOUND_LEVELWON";
		case SOUND_LEVELDONE_ID: return "SOUND_LEVELDONE";
		case SOUND_LEVELLOST_ID: return "SOUND_LEVELLOST";
		case SOUND_POWERUP_ID: return "SOUND_POWERUP";
		case SOUND_AAH_ID: return "SOUND_AAH";
		case SOUND_MULTIBALL_ID: return "SOUND_MULTIBALL";
		case SOUND_PEGPOP_ID: return "SOUND_PEGPOP";
		case SOUND_EXPLODE_ID: return "SOUND_EXPLODE";
		case SOUND_BUTTON1_ID: return "SOUND_BUTTON1";
		case SOUND_BUTTON2_ID: return "SOUND_BUTTON2";
		case SOUND_MOUSEOVER_ID: return "SOUND_MOUSEOVER";
		case SOUND_DING_ID: return "SOUND_DING";
		case SOUND_POINTBOOST_ID: return "SOUND_POINTBOOST";
		case SOUND_TING_ID: return "SOUND_TING";
		case SOUND_AWARD_ID: return "SOUND_AWARD";
		case SOUND_APPLAUSE_ID: return "SOUND_APPLAUSE";
		case SOUND_SKILLSHOT_ID: return "SOUND_SKILLSHOT";
		case SOUND_SPOOKYBALL2_ID: return "SOUND_SPOOKYBALL2";
		case SOUND_SPOOKYBALL3_ID: return "SOUND_SPOOKYBALL3";
		case SOUND_SPOOKYBALL4_ID: return "SOUND_SPOOKYBALL4";
		case SOUND_BUBBLES_ID: return "SOUND_BUBBLES";
		case SOUND_FLIP_ID: return "SOUND_FLIP";
		case SOUND_BUCKETHIT_ID: return "SOUND_BUCKETHIT";
		case SOUND_CANNONCOCK_ID: return "SOUND_CANNONCOCK";
		case SOUND_CANNONSHOT_ID: return "SOUND_CANNONSHOT";
		case SOUND_SCORECOUNTER_ID: return "SOUND_SCORECOUNTER";
		case SOUND_FLIPPERUP_ID: return "SOUND_FLIPPERUP";
		case SOUND_FLIPPERDOWN_ID: return "SOUND_FLIPPERDOWN";
		case SOUND_FLIPPERBOUNCE_ID: return "SOUND_FLIPPERBOUNCE";
		case SOUND_RAINBOW_ID: return "SOUND_RAINBOW";
		case SOUND_FIREWORKS1_ID: return "SOUND_FIREWORKS1";
		case SOUND_FIREWORKS2_ID: return "SOUND_FIREWORKS2";
		case SOUND_RICHOCHET_ID: return "SOUND_RICHOCHET";
		case SOUND_CYMBAL_ID: return "SOUND_CYMBAL";
		case SOUND_SIGH_ID: return "SOUND_SIGH";
		case SOUND_WOOSH_ID: return "SOUND_WOOSH";
		case SOUND_TEXT_WOOSH_ID: return "SOUND_TEXT_WOOSH";
		case SOUND_WHISTLE_ID: return "SOUND_WHISTLE";
		case SOUND_FEVERHIT_ID: return "SOUND_FEVERHIT";
		case SOUND_FIREBALLLOOP_ID: return "SOUND_FIREBALLLOOP";
		case SOUND_FIREBALLSHOT_ID: return "SOUND_FIREBALLSHOT";
		case SOUND_FIREBALLBOUNCE_ID: return "SOUND_FIREBALLBOUNCE";
		case SOUND_POWERUP_GUIDE_ID: return "SOUND_POWERUP_GUIDE";
		case SOUND_POWERUP_MULTIBALL_ID: return "SOUND_POWERUP_MULTIBALL";
		case SOUND_POWERUP_PYRAMID_ID: return "SOUND_POWERUP_PYRAMID";
		case SOUND_POWERUP_SPACEBLAST_ID: return "SOUND_POWERUP_SPACEBLAST";
		case SOUND_POWERUP_FLIPPERS_ID: return "SOUND_POWERUP_FLIPPERS";
		case SOUND_POWERUP_SPOOKYBALL_ID: return "SOUND_POWERUP_SPOOKYBALL";
		case SOUND_POWERUP_FLOWERPOWER_ID: return "SOUND_POWERUP_FLOWERPOWER";
		case SOUND_POWERUP_LUCKYSPIN_ID: return "SOUND_POWERUP_LUCKYSPIN";
		case SOUND_POWERUP_FIREBALL_ID: return "SOUND_POWERUP_FIREBALL";
		case SOUND_POWERUP_ZEN_ID: return "SOUND_POWERUP_ZEN";
		case SOUND_GONG_ID: return "SOUND_GONG";
		case SOUND_SLOWMO_ID: return "SOUND_SLOWMO";
		case SOUND_TYPING_ID: return "SOUND_TYPING";
		case SOUND_STORY_TYPING_ID: return "SOUND_STORY_TYPING";
		case SOUND_TONELO_ID: return "SOUND_TONELO";
		case SOUND_TONE_ID: return "SOUND_TONE";
		case SOUND_TONEHI_ID: return "SOUND_TONEHI";
		case SOUND_TONESUPERHI_ID: return "SOUND_TONESUPERHI";
		case SOUND_STAMP_ID: return "SOUND_STAMP";
		case SOUND_ADD_BALL_ID: return "SOUND_ADD_BALL";
		case SOUND_DIALOG_MOVE_ID: return "SOUND_DIALOG_MOVE";
		case SOUND_SCREEN_MOVE_ID: return "SOUND_SCREEN_MOVE";
		case SOUND_JOIN_LOBBY_ID: return "SOUND_JOIN_LOBBY";
		case SOUND_LEAVE_LOBBY_ID: return "SOUND_LEAVE_LOBBY";
		case SOUND_NEW_LEVEL_ID: return "SOUND_NEW_LEVEL";
		case SOUND_NEW_LEVEL_FAST1_ID: return "SOUND_NEW_LEVEL_FAST1";
		case SOUND_NEW_LEVEL_FAST2_ID: return "SOUND_NEW_LEVEL_FAST2";
		case SOUND_NEW_LEVEL_FAST3_ID: return "SOUND_NEW_LEVEL_FAST3";
		case SOUND_NEW_LEVEL_FAST4_ID: return "SOUND_NEW_LEVEL_FAST4";
		case SOUND_NEW_SHOTCLOCK_ID: return "SOUND_NEW_SHOTCLOCK";
		case SOUND_ALL_RANDOM_ON_ID: return "SOUND_ALL_RANDOM_ON";
		case SOUND_ALL_RANDOM_OFF_ID: return "SOUND_ALL_RANDOM_OFF";
		case SOUND_OPTIONS_CONFIRM_ID: return "SOUND_OPTIONS_CONFIRM";
		case SOUND_OPTIONS_CANCEL_ID: return "SOUND_OPTIONS_CANCEL";
		case SOUND_START_VIEW_BOARD_ID: return "SOUND_START_VIEW_BOARD";
		case SOUND_STOP_VIEW_BOARD_ID: return "SOUND_STOP_VIEW_BOARD";
		case SOUND_SCORE_BAR_REFILL_ID: return "SOUND_SCORE_BAR_REFILL";
		case SOUND_SCORE_BAR_TICK_ID: return "SOUND_SCORE_BAR_TICK";
		case SOUND_SCORE_BAR_FILL_ID: return "SOUND_SCORE_BAR_FILL";
		case SOUND_STYLE_SHOT_FILL_ID: return "SOUND_STYLE_SHOT_FILL";
		case SOUND_TROPHY_STAY_ID: return "SOUND_TROPHY_STAY";
		case SOUND_RESULTS_TEXT_ID: return "SOUND_RESULTS_TEXT";
		case SOUND_ROUND_DISC_ID: return "SOUND_ROUND_DISC";
		case SOUND_SHOT_CLOCK_SUBTLE_ID: return "SOUND_SHOT_CLOCK_SUBTLE";
		case SOUND_RIBBON_AWARD_ID: return "SOUND_RIBBON_AWARD";
		case SOUND_PLAYER_READY_ID: return "SOUND_PLAYER_READY";
		case SOUND_BEST_SHOT_ID: return "SOUND_BEST_SHOT";
		case SOUND_SHOT_25K_ID: return "SOUND_SHOT_25K";
		case SOUND_SHOT_75K_ID: return "SOUND_SHOT_75K";
		case SOUND_SHOT_125K_ID: return "SOUND_SHOT_125K";
		case SOUND_SCORE_BAR_EXPLODE_ID: return "SOUND_SCORE_BAR_EXPLODE";
		case SOUND_NUM_ROUNDS_CHANGE_ID: return "SOUND_NUM_ROUNDS_CHANGE";
		case SOUND_SCORE_BAR_EXPLODE_WIN_ID: return "SOUND_SCORE_BAR_EXPLODE_WIN";
		case SOUND_RIBBON_4TH_ID: return "SOUND_RIBBON_4TH";
		case SOUND_RIBBON_3RD_ID: return "SOUND_RIBBON_3RD";
		case SOUND_RIBBON_2ND_ID: return "SOUND_RIBBON_2ND";
		case SOUND_FIREWORKPOP_ID: return "SOUND_FIREWORKPOP";
		case IMAGE_INT_BALL_ID: return "IMAGE_INT_BALL";
		case IMAGE_INT_BALLBACK_ID: return "IMAGE_INT_BALLBACK";
		case IMAGE_INT_BUTTONCOVER_ID: return "IMAGE_INT_BUTTONCOVER";
		case IMAGE_INT_CANNON_ID: return "IMAGE_INT_CANNON";
		case IMAGE_INT_CANNONCOVER_ID: return "IMAGE_INT_CANNONCOVER";
		case IMAGE_INT_PLUNGER_ID: return "IMAGE_INT_PLUNGER";
		case IMAGE_INT_BALLGLASS_ID: return "IMAGE_INT_BALLGLASS";
		case IMAGE_INT_FEVERMETER_ID: return "IMAGE_INT_FEVERMETER";
		case IMAGE_INT_FEVERMETERTOP_ID: return "IMAGE_INT_FEVERMETERTOP";
		case IMAGE_INT_FEVERMETERBOTTOM_ID: return "IMAGE_INT_FEVERMETERBOTTOM";
		case IMAGE_INT_FEVERRAILING_ID: return "IMAGE_INT_FEVERRAILING";
		case IMAGE_INT_FEVERBARS_ID: return "IMAGE_INT_FEVERBARS";
		case IMAGE_INT_FEVERBARLITES_ID: return "IMAGE_INT_FEVERBARLITES";
		case IMAGE_INT_COUNTER_ID: return "IMAGE_INT_COUNTER";
		case IMAGE_INT_FREEBALLMETER_ID: return "IMAGE_INT_FREEBALLMETER";
		case IMAGE_INT_FREEBALLMETERTOP_ID: return "IMAGE_INT_FREEBALLMETERTOP";
		case IMAGE_INT_BACKSHADOW_ID: return "IMAGE_INT_BACKSHADOW";
		case IMAGE_INT_FEVERGLOW_ID: return "IMAGE_INT_FEVERGLOW";
		case IMAGE_INT_FEVERGLOW1_ID: return "IMAGE_INT_FEVERGLOW1";
		case IMAGE_INT_FEVERGLOW2_ID: return "IMAGE_INT_FEVERGLOW2";
		case IMAGE_INT_FEVERGLOW3_ID: return "IMAGE_INT_FEVERGLOW3";
		case IMAGE_INT_SCOREHILIGHT_ID: return "IMAGE_INT_SCOREHILIGHT";
		case IMAGE_INT_BALLOMASKBL_ID: return "IMAGE_INT_BALLOMASKBL";
		case IMAGE_INT_BALLOMASKBR_ID: return "IMAGE_INT_BALLOMASKBR";
		case IMAGE_INT_BALLOMASKTL_ID: return "IMAGE_INT_BALLOMASKTL";
		case IMAGE_INT_BALLOMASKTR_ID: return "IMAGE_INT_BALLOMASKTR";
		case IMAGE_INT_FBCENTERDISC_ID: return "IMAGE_INT_FBCENTERDISC";
		case IMAGE_INT_FBGLOW_ID: return "IMAGE_INT_FBGLOW";
		case IMAGE_INT_FBFREEBALL_ID: return "IMAGE_INT_FBFREEBALL";
		case IMAGE_INT_FBLIGHTUP_ID: return "IMAGE_INT_FBLIGHTUP";
		case IMAGE_INT_FBPOINTS_ID: return "IMAGE_INT_FBPOINTS";
		case IMAGE_INT_BIGMENUBUTTON_ID: return "IMAGE_INT_BIGMENUBUTTON";
		case IMAGE_INT_LEVELSELECTBUTTON_ID: return "IMAGE_INT_LEVELSELECTBUTTON";
		case IMAGE_INT_PADLOCK_ID: return "IMAGE_INT_PADLOCK";
		case IMAGE_INT_BIGDLGBUTTON_ID: return "IMAGE_INT_BIGDLGBUTTON";
		case IMAGE_INT_BIGMENUGLOW_ID: return "IMAGE_INT_BIGMENUGLOW";
		case IMAGE_INT_BIGDLGGLOW_ID: return "IMAGE_INT_BIGDLGGLOW";
		case IMAGE_INT_BGCHECKBOX_ID: return "IMAGE_INT_BGCHECKBOX";
		case IMAGE_INT_BGCHECKGLOW_ID: return "IMAGE_INT_BGCHECKGLOW";
		case IMAGE_INT_COLORCHECK_ID: return "IMAGE_INT_COLORCHECK";
		case IMAGE_INT_CONTROLS_ID: return "IMAGE_INT_CONTROLS";
		case IMAGE_INT_LEVELSELECT_ID: return "IMAGE_INT_LEVELSELECT";
		case IMAGE_INT_LEVELSELECTGLOW_ID: return "IMAGE_INT_LEVELSELECTGLOW";
		case IMAGE_IP_B_ID: return "IMAGE_IP_B";
		case IMAGE_IP_BLC_ID: return "IMAGE_IP_BLC";
		case IMAGE_IP_BRC_ID: return "IMAGE_IP_BRC";
		case IMAGE_IP_L1_ID: return "IMAGE_IP_L1";
		case IMAGE_IP_L2_ID: return "IMAGE_IP_L2";
		case IMAGE_IP_R1_ID: return "IMAGE_IP_R1";
		case IMAGE_IP_R2_ID: return "IMAGE_IP_R2";
		case IMAGE_IP_TL1_ID: return "IMAGE_IP_TL1";
		case IMAGE_IP_TL2_ID: return "IMAGE_IP_TL2";
		case IMAGE_IP_TR1_ID: return "IMAGE_IP_TR1";
		case IMAGE_IP_TR2_ID: return "IMAGE_IP_TR2";
		case IMAGE_IP_TLC_ID: return "IMAGE_IP_TLC";
		case IMAGE_IP_TRC_ID: return "IMAGE_IP_TRC";
		case IMAGE_IP_SEAMS_ID: return "IMAGE_IP_SEAMS";
		case IMAGE_IP_SHOOTERBACK_ID: return "IMAGE_IP_SHOOTERBACK";
		case IMAGE_IP_SHOOTER_ID: return "IMAGE_IP_SHOOTER";
		case IMAGE_IP_BALLOTRON_ID: return "IMAGE_IP_BALLOTRON";
		case IMAGE_IP_FEVERMETER_ID: return "IMAGE_IP_FEVERMETER";
		case IMAGE_IP_LWINDOW_ID: return "IMAGE_IP_LWINDOW";
		case IMAGE_IP_RWINDOW_ID: return "IMAGE_IP_RWINDOW";
		case IMAGE_IP_SHOOTERORB_ID: return "IMAGE_IP_SHOOTERORB";
		case IMAGE_IP_POWERUPBANNER_ID: return "IMAGE_IP_POWERUPBANNER";
		case IMAGE_IP_ORBGLOW_ID: return "IMAGE_IP_ORBGLOW";
		case IMAGE_IP_LEXTEND_ID: return "IMAGE_IP_LEXTEND";
		case IMAGE_IP_REXTEND_ID: return "IMAGE_IP_REXTEND";
		case IMAGE_IP_TEXTEND_ID: return "IMAGE_IP_TEXTEND";
		case IMAGE_IP_BEXTEND_ID: return "IMAGE_IP_BEXTEND";
		case IMAGE_IP_PARTY_TOP_ID: return "IMAGE_IP_PARTY_TOP";
		case IMAGE_IP_PARTY_LEFT_ID: return "IMAGE_IP_PARTY_LEFT";
		case IMAGE_IP_PARTY_RIGHT_ID: return "IMAGE_IP_PARTY_RIGHT";
		case IMAGE_IP_PARTY_BOTTOM_ID: return "IMAGE_IP_PARTY_BOTTOM";
		case IMAGE_IP_GOLD_PLATE_ID: return "IMAGE_IP_GOLD_PLATE";
		case IMAGE_IP_TITLEBAR_ID: return "IMAGE_IP_TITLEBAR";
		case IMAGE_IP_TITLEGLOSS_ID: return "IMAGE_IP_TITLEGLOSS";
		case IMAGE_IP_TITLELC_ID: return "IMAGE_IP_TITLELC";
		case IMAGE_IP_TITLERC_ID: return "IMAGE_IP_TITLERC";
		case IMAGE_IP_TITLESLIDER_ID: return "IMAGE_IP_TITLESLIDER";
		case IMAGE_MM_SPEECHBUBBLE_ID: return "IMAGE_MM_SPEECHBUBBLE";
		case IMAGE_MM_CRY_ID: return "IMAGE_MM_CRY";
		case IMAGE_MM_BUYIT_ID: return "IMAGE_MM_BUYIT";
		case IMAGE_MM_TROPHIES_ID: return "IMAGE_MM_TROPHIES";
		case IMAGE_MM_TROPHYREVEAL_ID: return "IMAGE_MM_TROPHYREVEAL";
		case IMAGE_MM_MURAL_MP_ID: return "IMAGE_MM_MURAL_MP";
		case IMAGE_MM_MURAL_BACK_MP_ID: return "IMAGE_MM_MURAL_BACK_MP";
		case IMAGE_MM_MURAL_SP_ID: return "IMAGE_MM_MURAL_SP";
		case IMAGE_MM_MURAL_BACK_SP_ID: return "IMAGE_MM_MURAL_BACK_SP";
		case IMAGE_MM_MURAL_WAIT_ID: return "IMAGE_MM_MURAL_WAIT";
		case IMAGE_MM_MURAL_BACK_WAIT_ID: return "IMAGE_MM_MURAL_BACK_WAIT";
		case IMAGE_MM_BLANKSUN_ID: return "IMAGE_MM_BLANKSUN";
		case IMAGE_LB_BACKING_ID: return "IMAGE_LB_BACKING";
		case IMAGE_LB_HOLDER_ID: return "IMAGE_LB_HOLDER";
		case IMAGE_LB_100_ID: return "IMAGE_LB_100";
		case IMAGE_LB_FREEBALL_ID: return "IMAGE_LB_FREEBALL";
		case IMAGE_LB_NOBALL_ID: return "IMAGE_LB_NOBALL";
		case IMAGE_LB_SHOT_ID: return "IMAGE_LB_SHOT";
		case IMAGE_LB_ZEN_ID: return "IMAGE_LB_ZEN";
		case IMAGE_LB_GAMECLIP_ID: return "IMAGE_LB_GAMECLIP";
		case IMAGE_LB_GAMECLIP_SMALL_ID: return "IMAGE_LB_GAMECLIP_SMALL";
		case IMAGE_LB_GAMECLIP_SMALL_STROKE_ID: return "IMAGE_LB_GAMECLIP_SMALL_STROKE";
		case IMAGE_LB_MASTER0_ID: return "IMAGE_LB_MASTER0";
		case IMAGE_LB_MASTER1_ID: return "IMAGE_LB_MASTER1";
		case IMAGE_LB_MASTER2_ID: return "IMAGE_LB_MASTER2";
		case IMAGE_LB_MASTER3_ID: return "IMAGE_LB_MASTER3";
		case IMAGE_LB_MASTER4_ID: return "IMAGE_LB_MASTER4";
		case IMAGE_LB_MASTER5_ID: return "IMAGE_LB_MASTER5";
		case IMAGE_LB_MASTER6_ID: return "IMAGE_LB_MASTER6";
		case IMAGE_LB_MASTER7_ID: return "IMAGE_LB_MASTER7";
		case IMAGE_LB_MASTER8_ID: return "IMAGE_LB_MASTER8";
		case IMAGE_LB_MASTER9_ID: return "IMAGE_LB_MASTER9";
		case IMAGE_LS_LOCK_ID: return "IMAGE_LS_LOCK";
		case IMAGE_LS_LOCK_SMALL_ID: return "IMAGE_LS_LOCK_SMALL";
		case IMAGE_LS_CHALLENGEBADGE_ID: return "IMAGE_LS_CHALLENGEBADGE";
		case IMAGE_LS_RANDOMLEVEL_ID: return "IMAGE_LS_RANDOMLEVEL";
		case IMAGE_LS_TINYBLUERIBBON_ID: return "IMAGE_LS_TINYBLUERIBBON";
		case IMAGE_LS_TINYMASTER_ID: return "IMAGE_LS_TINYMASTER";
		case IMAGE_LS_DOWNLOAD_ID: return "IMAGE_LS_DOWNLOAD";
		case IMAGE_LS_WATERMARK_ID: return "IMAGE_LS_WATERMARK";
		case IMAGE_HELP_ICONS_ID: return "IMAGE_HELP_ICONS";
		case IMAGE_HELP_ICONS2_ID: return "IMAGE_HELP_ICONS2";
		case IMAGE_HAT_ID: return "IMAGE_HAT";
		case IMAGE_MAGICHAT_ID: return "IMAGE_MAGICHAT";
		case IMAGE_SPARKLE_ID: return "IMAGE_SPARKLE";
		case IMAGE_SPARKLE_FEVER_ID: return "IMAGE_SPARKLE_FEVER";
		case IMAGE_STREAK_ID: return "IMAGE_STREAK";
		case IMAGE_FLOWER_ID: return "IMAGE_FLOWER";
		case IMAGE_POWERUPICON_ID: return "IMAGE_POWERUPICON";
		case IMAGE_SCOREICON_ID: return "IMAGE_SCOREICON";
		case IMAGE_BONUSHALO_ID: return "IMAGE_BONUSHALO";
		case IMAGE_BONUSGLOW_ID: return "IMAGE_BONUSGLOW";
		case IMAGE_BONUSGLOW_GREEN_ID: return "IMAGE_BONUSGLOW_GREEN";
		case IMAGE_BONUSGLOW_BLUE_ID: return "IMAGE_BONUSGLOW_BLUE";
		case IMAGE_BONUS5000_ID: return "IMAGE_BONUS5000";
		case IMAGE_BONUS10000_ID: return "IMAGE_BONUS10000";
		case IMAGE_BONUS25000_ID: return "IMAGE_BONUS25000";
		case IMAGE_BONUS50000_ID: return "IMAGE_BONUS50000";
		case IMAGE_BONUS100000_ID: return "IMAGE_BONUS100000";
		case IMAGE_BONUS5000LIGHT_ID: return "IMAGE_BONUS5000LIGHT";
		case IMAGE_BONUS10000LIGHT_ID: return "IMAGE_BONUS10000LIGHT";
		case IMAGE_BONUS25000LIGHT_ID: return "IMAGE_BONUS25000LIGHT";
		case IMAGE_BONUS50000LIGHT_ID: return "IMAGE_BONUS50000LIGHT";
		case IMAGE_BONUS100000LIGHT_ID: return "IMAGE_BONUS100000LIGHT";
		case IMAGE_BALL_ID: return "IMAGE_BALL";
		case IMAGE_YINYANG_ID: return "IMAGE_YINYANG";
		case IMAGE_GUIDERECT_ID: return "IMAGE_GUIDERECT";
		case IMAGE_GUIDERECT2_ID: return "IMAGE_GUIDERECT2";
		case IMAGE_ALPHABALL_ID: return "IMAGE_ALPHABALL";
		case IMAGE_GUIDEARROW_ID: return "IMAGE_GUIDEARROW";
		case IMAGE_GUIDEPOINT_ID: return "IMAGE_GUIDEPOINT";
		case IMAGE_GUIDEHIT_ID: return "IMAGE_GUIDEHIT";
		case IMAGE_BRICK_ID: return "IMAGE_BRICK";
		case IMAGE_BRICKCB_ID: return "IMAGE_BRICKCB";
		case IMAGE_BALLPEG_ID: return "IMAGE_BALLPEG";
		case IMAGE_BALLPEGCB_ID: return "IMAGE_BALLPEGCB";
		case IMAGE_BALLSHADOW_ID: return "IMAGE_BALLSHADOW";
		case IMAGE_PEGSHADOW_ID: return "IMAGE_PEGSHADOW";
		case IMAGE_BIGBALLSHADOW_ID: return "IMAGE_BIGBALLSHADOW";
		case IMAGE_BIGBALL_ID: return "IMAGE_BIGBALL";
		case IMAGE_DEFINNERPEG_ID: return "IMAGE_DEFINNERPEG";
		case IMAGE_DEFOUTERPEG_ID: return "IMAGE_DEFOUTERPEG";
		case IMAGE_CIRCLE_ID: return "IMAGE_CIRCLE";
		case IMAGE_FIREBALLFIRE_ID: return "IMAGE_FIREBALLFIRE";
		case IMAGE_FIREBALL_ID: return "IMAGE_FIREBALL";
		case IMAGE_COINHEADS_ID: return "IMAGE_COINHEADS";
		case IMAGE_COINTAILS_ID: return "IMAGE_COINTAILS";
		case IMAGE_COINHILIGHT_ID: return "IMAGE_COINHILIGHT";
		case IMAGE_BUBBLES_ID: return "IMAGE_BUBBLES";
		case IMAGE_BRICKGLOW_ID: return "IMAGE_BRICKGLOW";
		case IMAGE_PEGGLOW_ID: return "IMAGE_PEGGLOW";
		case IMAGE_PYRAMIDRAY_ID: return "IMAGE_PYRAMIDRAY";
		case IMAGE_FEVERRAY_ID: return "IMAGE_FEVERRAY";
		case IMAGE_FEVERGLOWSTAR_ID: return "IMAGE_FEVERGLOWSTAR";
		case IMAGE_FEVERSTAR_RED_ID: return "IMAGE_FEVERSTAR_RED";
		case IMAGE_FEVERSTAR_GREEN_ID: return "IMAGE_FEVERSTAR_GREEN";
		case IMAGE_FEVERSTAR_BLUE_ID: return "IMAGE_FEVERSTAR_BLUE";
		case IMAGE_FEVERSPARK_ID: return "IMAGE_FEVERSPARK";
		case IMAGE_FEVERTRAIL_ID: return "IMAGE_FEVERTRAIL";
		case IMAGE_FEVERRAINBOW_ID: return "IMAGE_FEVERRAINBOW";
		case IMAGE_FEVERSCORE_ID: return "IMAGE_FEVERSCORE";
		case IMAGE_FEVERSCORETOP_ID: return "IMAGE_FEVERSCORETOP";
		case IMAGE_STAR_STREAK_ID: return "IMAGE_STAR_STREAK";
		case IMAGE_TIPARROW_ID: return "IMAGE_TIPARROW";
		case IMAGE_BLUERIBBON_ID: return "IMAGE_BLUERIBBON";
		case IMAGE_TINYBLUERIBBON_ID: return "IMAGE_TINYBLUERIBBON";
		case IMAGE_MASTERBADGE_ID: return "IMAGE_MASTERBADGE";
		case IMAGE_PAUSED_ID: return "IMAGE_PAUSED";
		case IMAGE_CATCHERGLOW_ID: return "IMAGE_CATCHERGLOW";
		case IMAGE_PYRAMIDBALL_ID: return "IMAGE_PYRAMIDBALL";
		case IMAGE_JIMMY_ID: return "IMAGE_JIMMY";
		case IMAGE_JIMMYSPEECH_ID: return "IMAGE_JIMMYSPEECH";
		case IMAGE_FEVERCAM_ID: return "IMAGE_FEVERCAM";
		case IMAGE_XFEVER_ID: return "IMAGE_XFEVER";
		case IMAGE_XFEVERGLOW_ID: return "IMAGE_XFEVERGLOW";
		case IMAGE_PULSE_NORMAL_ID: return "IMAGE_PULSE_NORMAL";
		case IMAGE_PULSE_GOAL_ID: return "IMAGE_PULSE_GOAL";
		case IMAGE_PULSE_SCORE_ID: return "IMAGE_PULSE_SCORE";
		case IMAGE_PULSE_POWERUP_ID: return "IMAGE_PULSE_POWERUP";
		case IMAGE_PULSE2_SCORE_ID: return "IMAGE_PULSE2_SCORE";
		case IMAGE_PULSE2_POWERUP_ID: return "IMAGE_PULSE2_POWERUP";
		case IMAGE_SPACEBURST_ID: return "IMAGE_SPACEBURST";
		case IMAGE_SPACEBUBBLE_ID: return "IMAGE_SPACEBUBBLE";
		case IMAGE_SPACEHALO_ID: return "IMAGE_SPACEHALO";
		case IMAGE_SPACESTAR_ID: return "IMAGE_SPACESTAR";
		case IMAGE_SPOOKYPOOF1_ID: return "IMAGE_SPOOKYPOOF1";
		case IMAGE_SPOOKYPOOF2_ID: return "IMAGE_SPOOKYPOOF2";
		case IMAGE_SPOOKYGHOST_ID: return "IMAGE_SPOOKYGHOST";
		case IMAGE_SPOOKYTRAIL_ID: return "IMAGE_SPOOKYTRAIL";
		case IMAGE_SPOOKYEYES_ID: return "IMAGE_SPOOKYEYES";
		case IMAGE_EMBER_ID: return "IMAGE_EMBER";
		case IMAGE_SMOKE_ID: return "IMAGE_SMOKE";
		case IMAGE_FLECK_ID: return "IMAGE_FLECK";
		case IMAGE_FLAMETRAIL_ID: return "IMAGE_FLAMETRAIL";
		case IMAGE_NUKE_ID: return "IMAGE_NUKE";
		case IMAGE_NUKESTREAK_ID: return "IMAGE_NUKESTREAK";
		case IMAGE_VS_DUEL_ID: return "IMAGE_VS_DUEL";
		case IMAGE_VS_DUELBACK_ID: return "IMAGE_VS_DUELBACK";
		case IMAGE_FEVERBORDER_ID: return "IMAGE_FEVERBORDER";
		case IMAGE_DLG_BOTTOMBAR_ID: return "IMAGE_DLG_BOTTOMBAR";
		case IMAGE_DLG_RANDOM_ID: return "IMAGE_DLG_RANDOM";
		case IMAGE_DLG_BLUEFRAME_ID: return "IMAGE_DLG_BLUEFRAME";
		case IMAGE_DLG_GRAYFRAME_ID: return "IMAGE_DLG_GRAYFRAME";
		case IMAGE_DLG_SELECTORFRAME_ID: return "IMAGE_DLG_SELECTORFRAME";
		case IMAGE_DLG_BUTTON1_ID: return "IMAGE_DLG_BUTTON1";
		case IMAGE_DLG_BUTTON2_ID: return "IMAGE_DLG_BUTTON2";
		case IMAGE_DLG_BUTTON3_ID: return "IMAGE_DLG_BUTTON3";
		case IMAGE_DLG_BROWNBUTTON1_ID: return "IMAGE_DLG_BROWNBUTTON1";
		case IMAGE_DLG_BROWNBUTTON2_ID: return "IMAGE_DLG_BROWNBUTTON2";
		case IMAGE_DLG_GREENOK_ID: return "IMAGE_DLG_GREENOK";
		case IMAGE_DLG_POPUP_ID: return "IMAGE_DLG_POPUP";
		case IMAGE_DLG_TEXTBOX_ID: return "IMAGE_DLG_TEXTBOX";
		case IMAGE_DLG_HORZBAR_ID: return "IMAGE_DLG_HORZBAR";
		case IMAGE_DLG_LJOINT_ID: return "IMAGE_DLG_LJOINT";
		case IMAGE_DLG_EDITBUTTON_ID: return "IMAGE_DLG_EDITBUTTON";
		case IMAGE_DLG_DIALOGBOX_ID: return "IMAGE_DLG_DIALOGBOX";
		case IMAGE_DLG_SLIDER_ID: return "IMAGE_DLG_SLIDER";
		case IMAGE_DLG_SLIDERHILIGHT_ID: return "IMAGE_DLG_SLIDERHILIGHT";
		case IMAGE_DLG_SLIDERORB_ID: return "IMAGE_DLG_SLIDERORB";
		case IMAGE_DLG_FRAME1_ID: return "IMAGE_DLG_FRAME1";
		case IMAGE_DLG_FRAME2_ID: return "IMAGE_DLG_FRAME2";
		case IMAGE_DLG_FRAME3_ID: return "IMAGE_DLG_FRAME3";
		case IMAGE_DLG_SEGMENT_ID: return "IMAGE_DLG_SEGMENT";
		case IMAGE_DLG_CONNECTOR_ID: return "IMAGE_DLG_CONNECTOR";
		case IMAGE_DLG_REPLAYTOP_ID: return "IMAGE_DLG_REPLAYTOP";
		case IMAGE_DLG_REPLAYSEGMENT_ID: return "IMAGE_DLG_REPLAYSEGMENT";
		case IMAGE_DLG_STAGEBULLET_ID: return "IMAGE_DLG_STAGEBULLET";
		case IMAGE_DLG_MASTERSTAGE_ID: return "IMAGE_DLG_MASTERSTAGE";
		case IMAGE_DLG_MASTERSTAGEPROGBAR_ID: return "IMAGE_DLG_MASTERSTAGEPROGBAR";
		case IMAGE_DLG_PLAYWIDGET1_ID: return "IMAGE_DLG_PLAYWIDGET1";
		case IMAGE_DLG_PLAYWIDGET2_ID: return "IMAGE_DLG_PLAYWIDGET2";
		case IMAGE_DLG_PLAYBUTTON1_ID: return "IMAGE_DLG_PLAYBUTTON1";
		case IMAGE_DLG_PLAYBUTTON2_ID: return "IMAGE_DLG_PLAYBUTTON2";
		case IMAGE_DLG_STAGEBAR_ID: return "IMAGE_DLG_STAGEBAR";
		case IMAGE_DLG_STAGEPROGRESSBAR_ID: return "IMAGE_DLG_STAGEPROGRESSBAR";
		case IMAGE_DLG_TEXTRECT_ID: return "IMAGE_DLG_TEXTRECT";
		case IMAGE_DLG_QUESTIONMARK_ID: return "IMAGE_DLG_QUESTIONMARK";
		case IMAGE_DLG_BIGQUESTIONMARK_ID: return "IMAGE_DLG_BIGQUESTIONMARK";
		case IMAGE_DLG_TIP_ID: return "IMAGE_DLG_TIP";
		case IMAGE_DLG_INSTRUCTIONS_ID: return "IMAGE_DLG_INSTRUCTIONS";
		case IMAGE_DLG_INSTRUCTIONS2_ID: return "IMAGE_DLG_INSTRUCTIONS2";
		case IMAGE_DLG_INSTRUCTIONS3_ID: return "IMAGE_DLG_INSTRUCTIONS3";
		case IMAGE_DLG_INSTRUCTIONS4_ID: return "IMAGE_DLG_INSTRUCTIONS4";
		case IMAGE_DLG_BUTTONOVERLAY2_ID: return "IMAGE_DLG_BUTTONOVERLAY2";
		case IMAGE_DLG_PURPLEBUTTON_ID: return "IMAGE_DLG_PURPLEBUTTON";
		case IMAGE_DLG_MENU_ID: return "IMAGE_DLG_MENU";
		case IMAGE_DLG_INSTANTREPLAY_ID: return "IMAGE_DLG_INSTANTREPLAY";
		case IMAGE_DLG_REPLAYSPIN_ID: return "IMAGE_DLG_REPLAYSPIN";
		case IMAGE_DLG_HELP_BAR_ID: return "IMAGE_DLG_HELP_BAR";
		case IMAGE_DLG_HELP_SLIDER_ID: return "IMAGE_DLG_HELP_SLIDER";
		case IMAGE_DLG_HELP_LB_SLIDER_ID: return "IMAGE_DLG_HELP_LB_SLIDER";
		case IMAGE_DLG_HELP_RB_SLIDER_ID: return "IMAGE_DLG_HELP_RB_SLIDER";
		case IMAGE_DLG_HELP_BUTTONS_ID: return "IMAGE_DLG_HELP_BUTTONS";
		case IMAGE_DLG_GLOSS_ID: return "IMAGE_DLG_GLOSS";
		case IMAGE_DLG_ETCHINGS_ID: return "IMAGE_DLG_ETCHINGS";
		case IMAGE_CHR_CHARACTERS_ID: return "IMAGE_CHR_CHARACTERS";
		case IMAGE_CHR_CHARACTERSHADOWS_ID: return "IMAGE_CHR_CHARACTERSHADOWS";
		case IMAGE_CHR_CHARACTER1_ID: return "IMAGE_CHR_CHARACTER1";
		case IMAGE_CHR_CHARACTER2_ID: return "IMAGE_CHR_CHARACTER2";
		case IMAGE_CHR_CHARACTER3_ID: return "IMAGE_CHR_CHARACTER3";
		case IMAGE_CHR_CHARACTER4_ID: return "IMAGE_CHR_CHARACTER4";
		case IMAGE_CHR_CHARACTER5_ID: return "IMAGE_CHR_CHARACTER5";
		case IMAGE_CHR_CHARACTER6_ID: return "IMAGE_CHR_CHARACTER6";
		case IMAGE_CHR_CHARACTER7_ID: return "IMAGE_CHR_CHARACTER7";
		case IMAGE_CHR_CHARACTER8_ID: return "IMAGE_CHR_CHARACTER8";
		case IMAGE_CHR_CHARACTER9_ID: return "IMAGE_CHR_CHARACTER9";
		case IMAGE_CHR_CHARACTER10_ID: return "IMAGE_CHR_CHARACTER10";
		case IMAGE_CHR_CHARACTER11_ID: return "IMAGE_CHR_CHARACTER11";
		case IMAGE_CHR_YINYANGEYE_ID: return "IMAGE_CHR_YINYANGEYE";
		case IMAGE_SPIN_SPINNER_ID: return "IMAGE_SPIN_SPINNER";
		case IMAGE_SPIN_ARROW_ID: return "IMAGE_SPIN_ARROW";
		case IMAGE_SPIN_HATON_ID: return "IMAGE_SPIN_HATON";
		case IMAGE_SPIN_EXTRAON_ID: return "IMAGE_SPIN_EXTRAON";
		case IMAGE_SPIN_TRIPLEON_ID: return "IMAGE_SPIN_TRIPLEON";
		case IMAGE_SPIN_RANDOMON_ID: return "IMAGE_SPIN_RANDOMON";
		case IMAGE_SPIN_RANDOMTEXT_ID: return "IMAGE_SPIN_RANDOMTEXT";
		case IMAGE_SPIN_RANDOMTEXTON_ID: return "IMAGE_SPIN_RANDOMTEXTON";
		case IMAGE_SPIN_RIMLIGHT_ID: return "IMAGE_SPIN_RIMLIGHT";
		case IMAGE_SPIN_RIMLIGHT2_ID: return "IMAGE_SPIN_RIMLIGHT2";
		case IMAGE_SPIN_EXTRABALLMASK_ID: return "IMAGE_SPIN_EXTRABALLMASK";
		case IMAGE_PARTY_MARQUE_ID: return "IMAGE_PARTY_MARQUE";
		case IMAGE_PARTY_OPTIONS_ID: return "IMAGE_PARTY_OPTIONS";
		case IMAGE_PARTY_SIDEBAR_ID: return "IMAGE_PARTY_SIDEBAR";
		case IMAGE_PARTY_SIDEBAR_PLAYER_ID: return "IMAGE_PARTY_SIDEBAR_PLAYER";
		case IMAGE_PARTY_SIDEBAR_SELECTED_ID: return "IMAGE_PARTY_SIDEBAR_SELECTED";
		case IMAGE_PARTY_SIDEBAR_GLOW_ID: return "IMAGE_PARTY_SIDEBAR_GLOW";
		case IMAGE_PARTY_SIDEBAR_FEVER_ID: return "IMAGE_PARTY_SIDEBAR_FEVER";
		case IMAGE_PARTY_RESULTS_BAR_ID: return "IMAGE_PARTY_RESULTS_BAR";
		case IMAGE_PARTY_ROUND_COIN_ID: return "IMAGE_PARTY_ROUND_COIN";
		case IMAGE_PARTY_CLOCK_COIN_ID: return "IMAGE_PARTY_CLOCK_COIN";
		case IMAGE_PARTY_SHOT_CLOCK_ID: return "IMAGE_PARTY_SHOT_CLOCK";
		case IMAGE_PARTY_SHOT_CLOCK_GLOW_ID: return "IMAGE_PARTY_SHOT_CLOCK_GLOW";
		case IMAGE_PARTY_TROPHY_ID: return "IMAGE_PARTY_TROPHY";
		case IMAGE_PARTY_TFX_RAY_ID: return "IMAGE_PARTY_TFX_RAY";
		case IMAGE_PARTY_TFX_WAVE_ID: return "IMAGE_PARTY_TFX_WAVE";
		case IMAGE_PARTY_TFX_GLOW_ID: return "IMAGE_PARTY_TFX_GLOW";
		case IMAGE_PARTY_RIBBON1ST_ID: return "IMAGE_PARTY_RIBBON1ST";
		case IMAGE_PARTY_RIBBON2ND_ID: return "IMAGE_PARTY_RIBBON2ND";
		case IMAGE_PARTY_RIBBON3RD_ID: return "IMAGE_PARTY_RIBBON3RD";
		case IMAGE_PARTY_RIBBON4TH_ID: return "IMAGE_PARTY_RIBBON4TH";
		case IMAGE_PARTY_PEGS_ID: return "IMAGE_PARTY_PEGS";
		case IMAGE_PARTY_CHAR_BGS_ID: return "IMAGE_PARTY_CHAR_BGS";
		case IMAGE_PARTY_BESTSHOT_ID: return "IMAGE_PARTY_BESTSHOT";
		case IMAGE_PARTY_POWERUPS_ID: return "IMAGE_PARTY_POWERUPS";
		case IMAGE_PARTY_SPEEDLINES_ID: return "IMAGE_PARTY_SPEEDLINES";
		case IMAGE_PARTY_ZOOM_ID: return "IMAGE_PARTY_ZOOM";
		case IMAGE_PARTY_READY_ID: return "IMAGE_PARTY_READY";
		case IMAGE_PARTY_SCOREMARKERS_ID: return "IMAGE_PARTY_SCOREMARKERS";
		case IMAGE_PARTY_FEVERMARKERS_ID: return "IMAGE_PARTY_FEVERMARKERS";
		case IMAGE_PARTY_PIPS_ID: return "IMAGE_PARTY_PIPS";
		case IMAGE_PARTY_TAPE3_ID: return "IMAGE_PARTY_TAPE3";
		case IMAGE_PARTY_TAPE4_ID: return "IMAGE_PARTY_TAPE4";
		case IMAGE_PARTY_BIGPURPLE_ID: return "IMAGE_PARTY_BIGPURPLE";
		case IMAGE_PARTY_REPLAYFRAME_ID: return "IMAGE_PARTY_REPLAYFRAME";
		case IMAGE_PARTY_HOST_BADGE_ID: return "IMAGE_PARTY_HOST_BADGE";
		case IMAGE_PARTY_READY_BUTTON_ID: return "IMAGE_PARTY_READY_BUTTON";
		case IMAGE_PARTY_HALO_OVER_ID: return "IMAGE_PARTY_HALO_OVER";
		case IMAGE_PARTY_HALO_UNDER_ID: return "IMAGE_PARTY_HALO_UNDER";
		case IMAGE_PARTY_RESYNC_ID: return "IMAGE_PARTY_RESYNC";
		case IMAGE_DUEL_LOBBY_PLAYER_ID: return "IMAGE_DUEL_LOBBY_PLAYER";
		case IMAGE_STORY_WIN_ID: return "IMAGE_STORY_WIN";
		case IMAGE_STORY_CLAWS_ID: return "IMAGE_STORY_CLAWS";
		case IMAGE_STORY_GAMERPIC1_ID: return "IMAGE_STORY_GAMERPIC1";
		case IMAGE_STORY_GAMERPIC2_ID: return "IMAGE_STORY_GAMERPIC2";
		case IMAGE_STORY_ROCKET_ID: return "IMAGE_STORY_ROCKET";
		case IMAGE_STORY_BIGSPARKLE_ID: return "IMAGE_STORY_BIGSPARKLE";
		case IMAGE_UPSELL_JUNK1_ID: return "IMAGE_UPSELL_JUNK1";
		case IMAGE_LIGHTNING_ROD_ID: return "IMAGE_LIGHTNING_ROD";
		case IMAGE_LIGHTNING_ROD_ZAP_ID: return "IMAGE_LIGHTNING_ROD_ZAP";
		case IMAGE_LIGHTNING_ROD_ON_ID: return "IMAGE_LIGHTNING_ROD_ON";
		case IMAGE_LIGHTNING_ROD_RING_FRONT_ID: return "IMAGE_LIGHTNING_ROD_RING_FRONT";
		case IMAGE_LIGHTNING_ROD_RING_BACK_ID: return "IMAGE_LIGHTNING_ROD_RING_BACK";
		case IMAGE_BALL_LIGHTNING_ID: return "IMAGE_BALL_LIGHTNING";
		case IMAGE_LIGHTNING_FRONT_ID: return "IMAGE_LIGHTNING_FRONT";
		case IMAGE_LIGHTNING_FRONT_SMALL_ID: return "IMAGE_LIGHTNING_FRONT_SMALL";
		case IMAGE_LIGHTNING_ID: return "IMAGE_LIGHTNING";
		case IMAGE_LIGHTNING_BACK_ID: return "IMAGE_LIGHTNING_BACK";
		case IMAGE_LIGHTNING_SPARK_ID: return "IMAGE_LIGHTNING_SPARK";
		case IMAGE_LIGHTNING_BALLSPARK_ID: return "IMAGE_LIGHTNING_BALLSPARK";
		case IMAGE_SUPERSWIRL_ID: return "IMAGE_SUPERSWIRL";
		case IMAGE_CURVE_ID: return "IMAGE_CURVE";
		case IMAGE_NIGHTS_BUTTON_ID: return "IMAGE_NIGHTS_BUTTON";
		case IMAGE_FLY0_ID: return "IMAGE_FLY0";
		case IMAGE_FLY1_ID: return "IMAGE_FLY1";
		case IMAGE_ADDTL_GLOW_ID: return "IMAGE_ADDTL_GLOW";
		case IMAGE_OTHERBUTTON_GLOW_ID: return "IMAGE_OTHERBUTTON_GLOW";
		case IMAGE_TWINKLE_STAR_ID: return "IMAGE_TWINKLE_STAR";
		case IMAGE_MARINA_LOGO_ID: return "IMAGE_MARINA_LOGO";
		case IMAGE_MARINA_SHOOTER_ID: return "IMAGE_MARINA_SHOOTER";
		case IMAGE_MARINA_BG_ID: return "IMAGE_MARINA_BG";
		case SOUND_APPLAUSE_LONG_ID: return "SOUND_APPLAUSE_LONG";
		case SOUND_LOGO_BUZZ_ON_ID: return "SOUND_LOGO_BUZZ_ON";
		case SOUND_NEON_FLICKER_ID: return "SOUND_NEON_FLICKER";
		case SOUND_TROPHY_PHOTO_IN_ID: return "SOUND_TROPHY_PHOTO_IN";
		case SOUND_STAGE_DREAMY_IN_ID: return "SOUND_STAGE_DREAMY_IN";
		case SOUND_STAGE_DREAMY_OUT_ID: return "SOUND_STAGE_DREAMY_OUT";
		case SOUND_POWERUP_LIGHTNING_HIT_ID: return "SOUND_POWERUP_LIGHTNING_HIT";
		case SOUND_CREDITS_SPOTLIGHT_ON_ID: return "SOUND_CREDITS_SPOTLIGHT_ON";
		case SOUND_SPEECH_BUBBLE_POPUP_ID: return "SOUND_SPEECH_BUBBLE_POPUP";
		case SOUND_TROPHY_WIN_INTRO_ID: return "SOUND_TROPHY_WIN_INTRO";
		case SOUND_POWERUP_LIGHTNING_ID: return "SOUND_POWERUP_LIGHTNING";
		case SOUND_LIGHTNING_LOOP_ID: return "SOUND_LIGHTNING_LOOP";
		case SOUND_LIGHTNING_START_ID: return "SOUND_LIGHTNING_START";
		case SOUND_PEGSPARK_ID: return "SOUND_PEGSPARK";
		case SOUND_INTRO_ID: return "SOUND_INTRO";
		case IMAGE_MARINA_POWERUP_EN_ID: return "IMAGE_MARINA_POWERUP_EN";
		case IMAGE_PARTY_BOLT_EN_ID: return "IMAGE_PARTY_BOLT_EN";
		case IMAGE_MARINA_POWERUP_FR_ID: return "IMAGE_MARINA_POWERUP_FR";
		case IMAGE_PARTY_BOLT_FR_ID: return "IMAGE_PARTY_BOLT_FR";
		case IMAGE_MARINA_POWERUP_DE_ID: return "IMAGE_MARINA_POWERUP_DE";
		case IMAGE_PARTY_BOLT_DE_ID: return "IMAGE_PARTY_BOLT_DE";
		case IMAGE_MARINA_POWERUP_PT_ID: return "IMAGE_MARINA_POWERUP_PT";
		case IMAGE_PARTY_BOLT_PT_ID: return "IMAGE_PARTY_BOLT_PT";
		case IMAGE_MARINA_POWERUP_ES_ID: return "IMAGE_MARINA_POWERUP_ES";
		case IMAGE_PARTY_BOLT_ES_ID: return "IMAGE_PARTY_BOLT_ES";
		case IMAGE_MARINA_POWERUP_IT_ID: return "IMAGE_MARINA_POWERUP_IT";
		case IMAGE_PARTY_BOLT_IT_ID: return "IMAGE_PARTY_BOLT_IT";
		case IMAGE_MARINA_POWERUP_KO_ID: return "IMAGE_MARINA_POWERUP_KO";
		case IMAGE_PARTY_BOLT_KO_ID: return "IMAGE_PARTY_BOLT_KO";
		case IMAGE_MARINA_POWERUP_JP_ID: return "IMAGE_MARINA_POWERUP_JP";
		case IMAGE_PARTY_BOLT_JP_ID: return "IMAGE_PARTY_BOLT_JP";
		case IMAGE_MARINA_POWERUP_TC_ID: return "IMAGE_MARINA_POWERUP_TC";
		case IMAGE_PARTY_BOLT_TC_ID: return "IMAGE_PARTY_BOLT_TC";
		case IMAGE_CHR_CHARACTERS_NIGHTS_ID: return "IMAGE_CHR_CHARACTERS_NIGHTS";
		case IMAGE_CHR_CHARACTERSHADOWS_NIGHTS_ID: return "IMAGE_CHR_CHARACTERSHADOWS_NIGHTS";
		case IMAGE_CHR_CHARACTER_MARINA_ID: return "IMAGE_CHR_CHARACTER_MARINA";
		case IMAGE_CHR_CHARACTER_ADV12_ID: return "IMAGE_CHR_CHARACTER_ADV12";
		case IMAGE_CHR_CHARACTER_NEW1_ID: return "IMAGE_CHR_CHARACTER_NEW1";
		case IMAGE_CHR_CHARACTER_NEW2_ID: return "IMAGE_CHR_CHARACTER_NEW2";
		case IMAGE_CHR_CHARACTER_NEW3_ID: return "IMAGE_CHR_CHARACTER_NEW3";
		case IMAGE_CHR_CHARACTER_NEW4_ID: return "IMAGE_CHR_CHARACTER_NEW4";
		case IMAGE_CHR_CHARACTER_NEW5_ID: return "IMAGE_CHR_CHARACTER_NEW5";
		case IMAGE_CHR_CHARACTER_NEW6_ID: return "IMAGE_CHR_CHARACTER_NEW6";
		case IMAGE_CHR_CHARACTER_NEW7_ID: return "IMAGE_CHR_CHARACTER_NEW7";
		case IMAGE_CHR_CHARACTER_NEW8_ID: return "IMAGE_CHR_CHARACTER_NEW8";
		case IMAGE_CHR_CHARACTER_NEW9_ID: return "IMAGE_CHR_CHARACTER_NEW9";
		case IMAGE_CHR_CHARACTER_NEW10_ID: return "IMAGE_CHR_CHARACTER_NEW10";
		case IMAGE_CHR_PARTICLE1_ID: return "IMAGE_CHR_PARTICLE1";
		case IMAGE_CHR_PARTICLE2_ID: return "IMAGE_CHR_PARTICLE2";
		case IMAGE_CHR_PARTICLE3_ID: return "IMAGE_CHR_PARTICLE3";
		case IMAGE_CHR_PARTICLE4_ID: return "IMAGE_CHR_PARTICLE4";
		case IMAGE_CHR_PARTICLE5_ID: return "IMAGE_CHR_PARTICLE5";
		case IMAGE_CHR_PARTICLE6_ID: return "IMAGE_CHR_PARTICLE6";
		case IMAGE_DLG_RANDOM_SQUARE_ID: return "IMAGE_DLG_RANDOM_SQUARE";
		case IMAGE_MM_TROPHY_ZEN_ID: return "IMAGE_MM_TROPHY_ZEN";
		case IMAGE_MM_TROPHY_CROWN_ID: return "IMAGE_MM_TROPHY_CROWN";
		case IMAGE_MM_TROPHY_CUP_ID: return "IMAGE_MM_TROPHY_CUP";
		case IMAGE_MM_TROPHY_TORCH_ID: return "IMAGE_MM_TROPHY_TORCH";
		case IMAGE_MM_MARINASTAGE_ID: return "IMAGE_MM_MARINASTAGE";
		case IMAGE_LOAD_MURAL_SP_NIGHT_ID: return "IMAGE_LOAD_MURAL_SP_NIGHT";
		case IMAGE_LOAD_MURAL_WAIT_NIGHT_ID: return "IMAGE_LOAD_MURAL_WAIT_NIGHT";
		case IMAGE_LOAD_MURAL_BG_WAIT_NIGHT_ID: return "IMAGE_LOAD_MURAL_BG_WAIT_NIGHT";
		case IMAGE_LOAD_NIGHTSLOGO_MOON_ID: return "IMAGE_LOAD_NIGHTSLOGO_MOON";
		case IMAGE_LOAD_SUNSET_BG_ID: return "IMAGE_LOAD_SUNSET_BG";
		case IMAGE_LOAD_LENSFLARE_ID: return "IMAGE_LOAD_LENSFLARE";
		case IMAGE_LOAD_GODRAY_ID: return "IMAGE_LOAD_GODRAY";
		case IMAGE_LOAD_RIM_LIGHT_ID: return "IMAGE_LOAD_RIM_LIGHT";
		case IMAGE_TROPHY_CURTAIN_ID: return "IMAGE_TROPHY_CURTAIN";
		case IMAGE_TROPHY_CURTAIN_L_ID: return "IMAGE_TROPHY_CURTAIN_L";
		case IMAGE_TROPHY_CURTAIN_R_ID: return "IMAGE_TROPHY_CURTAIN_R";
		case IMAGE_TROPHY_PARTICLE_WHITE_MED_ROUND_ID: return "IMAGE_TROPHY_PARTICLE_WHITE_MED_ROUND";
		case IMAGE_TROPHY_MASTER1_ID: return "IMAGE_TROPHY_MASTER1";
		case IMAGE_TROPHY_MASTER2_ID: return "IMAGE_TROPHY_MASTER2";
		case IMAGE_TROPHY_MASTER3_ID: return "IMAGE_TROPHY_MASTER3";
		case IMAGE_TROPHY_ADV_ID: return "IMAGE_TROPHY_ADV";
		case IMAGE_TROPHY_PARTICLE1_ID: return "IMAGE_TROPHY_PARTICLE1";
		case IMAGE_TROPHY_PARTICLE2_ID: return "IMAGE_TROPHY_PARTICLE2";
		case IMAGE_TROPHY_PARTICLE3_ID: return "IMAGE_TROPHY_PARTICLE3";
		case IMAGE_TROPHY_PARTICLE4_ID: return "IMAGE_TROPHY_PARTICLE4";
		case IMAGE_TROPHY_PARTICLE5_ID: return "IMAGE_TROPHY_PARTICLE5";
		case IMAGE_TROPHY_PARTICLE6_ID: return "IMAGE_TROPHY_PARTICLE6";
		case IMAGE_TROPHY_HOLE_ID: return "IMAGE_TROPHY_HOLE";
		case IMAGE_TROPHY_EXIT_BUTTON_ID: return "IMAGE_TROPHY_EXIT_BUTTON";
		case IMAGE_TROPHY_SPARKLE_ID: return "IMAGE_TROPHY_SPARKLE";
		case IMAGE_TROPHY_SPEECH_BR_ID: return "IMAGE_TROPHY_SPEECH_BR";
		case IMAGE_TROPHY_SPEECH_BL_ID: return "IMAGE_TROPHY_SPEECH_BL";
		case IMAGE_TROPHY_SPEECH_B_ID: return "IMAGE_TROPHY_SPEECH_B";
		case IMAGE_TROPHY_SPEECH_BP_ID: return "IMAGE_TROPHY_SPEECH_BP";
		case IMAGE_TROPHY_SPEECH_C_ID: return "IMAGE_TROPHY_SPEECH_C";
		case IMAGE_TROPHY_SPEECH_L_ID: return "IMAGE_TROPHY_SPEECH_L";
		case IMAGE_TROPHY_SPEECH_R_ID: return "IMAGE_TROPHY_SPEECH_R";
		case IMAGE_TROPHY_SPEECH_LP_ID: return "IMAGE_TROPHY_SPEECH_LP";
		case IMAGE_TROPHY_SPEECH_RP_ID: return "IMAGE_TROPHY_SPEECH_RP";
		case IMAGE_TROPHY_SPEECH_T_ID: return "IMAGE_TROPHY_SPEECH_T";
		case IMAGE_TROPHY_SPEECH_TL_ID: return "IMAGE_TROPHY_SPEECH_TL";
		case IMAGE_TROPHY_SPEECH_TP_ID: return "IMAGE_TROPHY_SPEECH_TP";
		case IMAGE_TROPHY_SPEECH_TR_ID: return "IMAGE_TROPHY_SPEECH_TR";
		case IMAGE_IP_MARINA_TOP_ID: return "IMAGE_IP_MARINA_TOP";
		case IMAGE_IP_MARINA_LEFT_ID: return "IMAGE_IP_MARINA_LEFT";
		case IMAGE_IP_MARINA_RIGHT_ID: return "IMAGE_IP_MARINA_RIGHT";
		case IMAGE_IP_MARINA_BOTTOM_ID: return "IMAGE_IP_MARINA_BOTTOM";
		case IMAGE_IP_MARINA_GUTTER_LEFT_ID: return "IMAGE_IP_MARINA_GUTTER_LEFT";
		case IMAGE_IP_MARINA_GUTTER_RIGHT_ID: return "IMAGE_IP_MARINA_GUTTER_RIGHT";
		case IMAGE_IP_MARINA_GUTTER_JELLYFISH1_ID: return "IMAGE_IP_MARINA_GUTTER_JELLYFISH1";
		case IMAGE_IP_MARINA_GUTTER_JELLYFISH2_ID: return "IMAGE_IP_MARINA_GUTTER_JELLYFISH2";
		case IMAGE_IP_BJORN_TOP_ID: return "IMAGE_IP_BJORN_TOP";
		case IMAGE_IP_BJORN_LEFT_ID: return "IMAGE_IP_BJORN_LEFT";
		case IMAGE_IP_BJORN_RIGHT_ID: return "IMAGE_IP_BJORN_RIGHT";
		case IMAGE_IP_BJORN_BOTTOM_ID: return "IMAGE_IP_BJORN_BOTTOM";
		case IMAGE_IP_BJORN_GUTTER_BG_LEFT_ID: return "IMAGE_IP_BJORN_GUTTER_BG_LEFT";
		case IMAGE_IP_BJORN_GUTTER_BG_RIGHT_ID: return "IMAGE_IP_BJORN_GUTTER_BG_RIGHT";
		case IMAGE_IP_BJORN_GUTTER_HILL_ID: return "IMAGE_IP_BJORN_GUTTER_HILL";
		case IMAGE_IP_BJORN_GUTTER_TREE_ID: return "IMAGE_IP_BJORN_GUTTER_TREE";
		case IMAGE_IP_BJORN_GUTTER_CLOUDS_ID: return "IMAGE_IP_BJORN_GUTTER_CLOUDS";
		case IMAGE_IP_JIMMY_TOP_ID: return "IMAGE_IP_JIMMY_TOP";
		case IMAGE_IP_JIMMY_LEFT_ID: return "IMAGE_IP_JIMMY_LEFT";
		case IMAGE_IP_JIMMY_RIGHT_ID: return "IMAGE_IP_JIMMY_RIGHT";
		case IMAGE_IP_JIMMY_BOTTOM_ID: return "IMAGE_IP_JIMMY_BOTTOM";
		case IMAGE_IP_JIMMY_GUTTER_BG_LEFT_ID: return "IMAGE_IP_JIMMY_GUTTER_BG_LEFT";
		case IMAGE_IP_JIMMY_GUTTER_BG_RIGHT_ID: return "IMAGE_IP_JIMMY_GUTTER_BG_RIGHT";
		case IMAGE_IP_JIMMY_GUTTER_L_FALL1_ID: return "IMAGE_IP_JIMMY_GUTTER_L_FALL1";
		case IMAGE_IP_JIMMY_GUTTER_L_FALL2_ID: return "IMAGE_IP_JIMMY_GUTTER_L_FALL2";
		case IMAGE_IP_JIMMY_GUTTER_R_FALL1_ID: return "IMAGE_IP_JIMMY_GUTTER_R_FALL1";
		case IMAGE_IP_JIMMY_GUTTER_R_FALL2_ID: return "IMAGE_IP_JIMMY_GUTTER_R_FALL2";
		case IMAGE_IP_JIMMY_GUTTER_L_FOREGROUND_ID: return "IMAGE_IP_JIMMY_GUTTER_L_FOREGROUND";
		case IMAGE_IP_JIMMY_GUTTER_R_FOREGROUND_ID: return "IMAGE_IP_JIMMY_GUTTER_R_FOREGROUND";
		case IMAGE_IP_KATTUT_TOP_ID: return "IMAGE_IP_KATTUT_TOP";
		case IMAGE_IP_KATTUT_LEFT_ID: return "IMAGE_IP_KATTUT_LEFT";
		case IMAGE_IP_KATTUT_RIGHT_ID: return "IMAGE_IP_KATTUT_RIGHT";
		case IMAGE_IP_KATTUT_BOTTOM_ID: return "IMAGE_IP_KATTUT_BOTTOM";
		case IMAGE_IP_KATTUT_GUTTER_BG_LEFT_ID: return "IMAGE_IP_KATTUT_GUTTER_BG_LEFT";
		case IMAGE_IP_KATTUT_GUTTER_BG_RIGHT_ID: return "IMAGE_IP_KATTUT_GUTTER_BG_RIGHT";
		case IMAGE_IP_KATTUT_GUTTER_CLOUDS_ID: return "IMAGE_IP_KATTUT_GUTTER_CLOUDS";
		case IMAGE_IP_SPLORK_TOP_ID: return "IMAGE_IP_SPLORK_TOP";
		case IMAGE_IP_SPLORK_LEFT_ID: return "IMAGE_IP_SPLORK_LEFT";
		case IMAGE_IP_SPLORK_RIGHT_ID: return "IMAGE_IP_SPLORK_RIGHT";
		case IMAGE_IP_SPLORK_BOTTOM_ID: return "IMAGE_IP_SPLORK_BOTTOM";
		case IMAGE_IP_SPLORK_GUTTER_BG_LEFT_ID: return "IMAGE_IP_SPLORK_GUTTER_BG_LEFT";
		case IMAGE_IP_SPLORK_GUTTER_BG_RIGHT_ID: return "IMAGE_IP_SPLORK_GUTTER_BG_RIGHT";
		case IMAGE_IP_SPLORK_GUTTER_COMET_ID: return "IMAGE_IP_SPLORK_GUTTER_COMET";
		case IMAGE_IP_SPLORK_GUTTER_L_PLANETS_ID: return "IMAGE_IP_SPLORK_GUTTER_L_PLANETS";
		case IMAGE_IP_SPLORK_GUTTER_R_PLANETS_ID: return "IMAGE_IP_SPLORK_GUTTER_R_PLANETS";
		case IMAGE_IP_SPLORK_GUTTER_NEBULA_ID: return "IMAGE_IP_SPLORK_GUTTER_NEBULA";
		case IMAGE_IP_RENF_TOP_ID: return "IMAGE_IP_RENF_TOP";
		case IMAGE_IP_RENF_LEFT_ID: return "IMAGE_IP_RENF_LEFT";
		case IMAGE_IP_RENF_RIGHT_ID: return "IMAGE_IP_RENF_RIGHT";
		case IMAGE_IP_RENF_BOTTOM_ID: return "IMAGE_IP_RENF_BOTTOM";
		case IMAGE_IP_RENFIELD_GUTTER_BG_LEFT_ID: return "IMAGE_IP_RENFIELD_GUTTER_BG_LEFT";
		case IMAGE_IP_RENFIELD_GUTTER_BG_RIGHT_ID: return "IMAGE_IP_RENFIELD_GUTTER_BG_RIGHT";
		case IMAGE_IP_RENFIELD_GUTTER_MIST_ID: return "IMAGE_IP_RENFIELD_GUTTER_MIST";
		case IMAGE_IP_CLAUDE_TOP_ID: return "IMAGE_IP_CLAUDE_TOP";
		case IMAGE_IP_CLAUDE_LEFT_ID: return "IMAGE_IP_CLAUDE_LEFT";
		case IMAGE_IP_CLAUDE_RIGHT_ID: return "IMAGE_IP_CLAUDE_RIGHT";
		case IMAGE_IP_CLAUDE_BOTTOM_ID: return "IMAGE_IP_CLAUDE_BOTTOM";
		case IMAGE_IP_CLAUDE_GUTTER_BG_LEFT_ID: return "IMAGE_IP_CLAUDE_GUTTER_BG_LEFT";
		case IMAGE_IP_CLAUDE_GUTTER_BG_RIGHT_ID: return "IMAGE_IP_CLAUDE_GUTTER_BG_RIGHT";
		case IMAGE_IP_CLAUDE_GUTTER_BIG_FISH1_ID: return "IMAGE_IP_CLAUDE_GUTTER_BIG_FISH1";
		case IMAGE_IP_CLAUDE_GUTTER_BIG_FISH2_ID: return "IMAGE_IP_CLAUDE_GUTTER_BIG_FISH2";
		case IMAGE_IP_CLAUDE_GUTTER_BIG_FISH3_ID: return "IMAGE_IP_CLAUDE_GUTTER_BIG_FISH3";
		case IMAGE_IP_CLAUDE_GUTTER_SMALL_FISH1_ID: return "IMAGE_IP_CLAUDE_GUTTER_SMALL_FISH1";
		case IMAGE_IP_CLAUDE_GUTTER_SMALL_FISH2_ID: return "IMAGE_IP_CLAUDE_GUTTER_SMALL_FISH2";
		case IMAGE_IP_CLAUDE_GUTTER_SMALL_FISH3_ID: return "IMAGE_IP_CLAUDE_GUTTER_SMALL_FISH3";
		case IMAGE_IP_CLAUDE_GUTTER_L_KELP_ID: return "IMAGE_IP_CLAUDE_GUTTER_L_KELP";
		case IMAGE_IP_CLAUDE_GUTTER_R_KELP_ID: return "IMAGE_IP_CLAUDE_GUTTER_R_KELP";
		case IMAGE_IP_TULA_TOP_ID: return "IMAGE_IP_TULA_TOP";
		case IMAGE_IP_TULA_LEFT_ID: return "IMAGE_IP_TULA_LEFT";
		case IMAGE_IP_TULA_RIGHT_ID: return "IMAGE_IP_TULA_RIGHT";
		case IMAGE_IP_TULA_BOTTOM_ID: return "IMAGE_IP_TULA_BOTTOM";
		case IMAGE_IP_TULA_GUTTER_BG_LEFT_ID: return "IMAGE_IP_TULA_GUTTER_BG_LEFT";
		case IMAGE_IP_TULA_GUTTER_BG_RIGHT_ID: return "IMAGE_IP_TULA_GUTTER_BG_RIGHT";
		case IMAGE_IP_TULA_GUTTER_BUTTERFLY1_ID: return "IMAGE_IP_TULA_GUTTER_BUTTERFLY1";
		case IMAGE_IP_TULA_GUTTER_BUTTERFLY2_ID: return "IMAGE_IP_TULA_GUTTER_BUTTERFLY2";
		case IMAGE_IP_TULA_GUTTER_BUTTERFLY3_ID: return "IMAGE_IP_TULA_GUTTER_BUTTERFLY3";
		case IMAGE_IP_TULA_GUTTER_BLADES_ID: return "IMAGE_IP_TULA_GUTTER_BLADES";
		case IMAGE_IP_WARREN_TOP_ID: return "IMAGE_IP_WARREN_TOP";
		case IMAGE_IP_WARREN_LEFT_ID: return "IMAGE_IP_WARREN_LEFT";
		case IMAGE_IP_WARREN_RIGHT_ID: return "IMAGE_IP_WARREN_RIGHT";
		case IMAGE_IP_WARREN_BOTTOM_ID: return "IMAGE_IP_WARREN_BOTTOM";
		case IMAGE_IP_WARREN_GUTTER_BG_LEFT_ID: return "IMAGE_IP_WARREN_GUTTER_BG_LEFT";
		case IMAGE_IP_WARREN_GUTTER_BG_RIGHT_ID: return "IMAGE_IP_WARREN_GUTTER_BG_RIGHT";
		case IMAGE_IP_WARREN_GUTTER_DUCKIES_ID: return "IMAGE_IP_WARREN_GUTTER_DUCKIES";
		case IMAGE_IP_WARREN_GUTTER_BUNNY_WHEEL_ID: return "IMAGE_IP_WARREN_GUTTER_BUNNY_WHEEL";
		case IMAGE_IP_WARREN_GUTTER_CARDS_ID: return "IMAGE_IP_WARREN_GUTTER_CARDS";
		case IMAGE_IP_CINDER_TOP_ID: return "IMAGE_IP_CINDER_TOP";
		case IMAGE_IP_CINDER_LEFT_ID: return "IMAGE_IP_CINDER_LEFT";
		case IMAGE_IP_CINDER_RIGHT_ID: return "IMAGE_IP_CINDER_RIGHT";
		case IMAGE_IP_CINDER_BOTTOM_ID: return "IMAGE_IP_CINDER_BOTTOM";
		case IMAGE_IP_CINDERBOTTOM_GUTTER_BG_LEFT_ID: return "IMAGE_IP_CINDERBOTTOM_GUTTER_BG_LEFT";
		case IMAGE_IP_CINDERBOTTOM_GUTTER_BG_RIGHT_ID: return "IMAGE_IP_CINDERBOTTOM_GUTTER_BG_RIGHT";
		case IMAGE_IP_HU_TOP_ID: return "IMAGE_IP_HU_TOP";
		case IMAGE_IP_HU_LEFT_ID: return "IMAGE_IP_HU_LEFT";
		case IMAGE_IP_HU_RIGHT_ID: return "IMAGE_IP_HU_RIGHT";
		case IMAGE_IP_HU_BOTTOM_ID: return "IMAGE_IP_HU_BOTTOM";
		case IMAGE_IP_MASTERHU_GUTTER_BG_LEFT_ID: return "IMAGE_IP_MASTERHU_GUTTER_BG_LEFT";
		case IMAGE_IP_MASTERHU_GUTTER_BG_RIGHT_ID: return "IMAGE_IP_MASTERHU_GUTTER_BG_RIGHT";
		case IMAGE_IP_MASTERHU_GUTTER_L_HILL_ID: return "IMAGE_IP_MASTERHU_GUTTER_L_HILL";
		case IMAGE_IP_MASTERHU_GUTTER_R_HILL_ID: return "IMAGE_IP_MASTERHU_GUTTER_R_HILL";
		case IMAGE_IP_MASTERHU_GUTTER_CLOUD_ID: return "IMAGE_IP_MASTERHU_GUTTER_CLOUD";
		case IMAGE_PS3_21PIX_BUTTONS_ID: return "IMAGE_PS3_21PIX_BUTTONS";
		case IMAGE_PS3_26PIX_BUTTONS_ID: return "IMAGE_PS3_26PIX_BUTTONS";
		case IMAGE_PS3_L1_BUTTON_ID: return "IMAGE_PS3_L1_BUTTON";
		case IMAGE_PS3_L2_BUTTON_ID: return "IMAGE_PS3_L2_BUTTON";
		case IMAGE_PS3_R1_BUTTON_ID: return "IMAGE_PS3_R1_BUTTON";
		case IMAGE_PS3_R2_BUTTON_ID: return "IMAGE_PS3_R2_BUTTON";
		default: return "";
	}
}

