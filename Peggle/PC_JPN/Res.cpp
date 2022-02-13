#include "Res.h"
#include "SexyAppFramework/ResourceManager.h"

using namespace Sexy;

#pragma warning(disable:4311 4312)

static bool gNeedRecalcVariableToIdMap = false;

bool Sexy::ExtractResourcesByName(ResourceManager *theManager, const char *theName)
{
	if (strcmp(theName,"Adventure")==0) return ExtractAdventureResources(theManager);
	if (strcmp(theName,"Character")==0) return ExtractCharacterResources(theManager);
	if (strcmp(theName,"Dialog")==0) return ExtractDialogResources(theManager);
	if (strcmp(theName,"Game")==0) return ExtractGameResources(theManager);
	if (strcmp(theName,"Help")==0) return ExtractHelpResources(theManager);
	if (strcmp(theName,"IP")==0) return ExtractIPResources(theManager);
	if (strcmp(theName,"Init")==0) return ExtractInitResources(theManager);
	if (strcmp(theName,"Interface")==0) return ExtractInterfaceResources(theManager);
	if (strcmp(theName,"LevelSelect")==0) return ExtractLevelSelectResources(theManager);
	if (strcmp(theName,"Load")==0) return ExtractLoadResources(theManager);
	if (strcmp(theName,"LoadingThread")==0) return ExtractLoadingThreadResources(theManager);
	if (strcmp(theName,"LuckySpin")==0) return ExtractLuckySpinResources(theManager);
	if (strcmp(theName,"MainMenu")==0) return ExtractMainMenuResources(theManager);
	if (strcmp(theName,"Story")==0) return ExtractStoryResources(theManager);
	if (strcmp(theName,"Upsell")==0) return ExtractUpsellResources(theManager);
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

// Adventure Resources
Image* Sexy::IMAGE_ADV_ADVENTURE;
Image* Sexy::IMAGE_ADV_RESTART_COVER;

bool Sexy::ExtractAdventureResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_ADV_ADVENTURE = aMgr.GetImageThrow("IMAGE_ADV_ADVENTURE");
		IMAGE_ADV_RESTART_COVER = aMgr.GetImageThrow("IMAGE_ADV_RESTART_COVER");
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

// Dialog Resources
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
Image* Sexy::IMAGE_DLG_FRAME1;
Image* Sexy::IMAGE_DLG_FRAME2;
Image* Sexy::IMAGE_DLG_FRAME3;
Image* Sexy::IMAGE_DLG_GREENOK;
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
Image* Sexy::IMAGE_DLG_REPLAYTOP;
Image* Sexy::IMAGE_DLG_SEGMENT;
Image* Sexy::IMAGE_DLG_SELECTORFRAME;
Image* Sexy::IMAGE_DLG_SLIDER;
Image* Sexy::IMAGE_DLG_SLIDERHILIGHT;
Image* Sexy::IMAGE_DLG_SLIDERORB;
Image* Sexy::IMAGE_DLG_STAGEBAR;
Image* Sexy::IMAGE_DLG_STAGEBULLET;
Image* Sexy::IMAGE_DLG_STAGEPROGRESSBAR;
Image* Sexy::IMAGE_DLG_STARBADGEICON;
Image* Sexy::IMAGE_DLG_TEXTBOX;
Image* Sexy::IMAGE_DLG_TEXTRECT;
Image* Sexy::IMAGE_DLG_TINYLOCKED;
Image* Sexy::IMAGE_DLG_TIP;

bool Sexy::ExtractDialogResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
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
		IMAGE_DLG_FRAME1 = aMgr.GetImageThrow("IMAGE_DLG_FRAME1");
		IMAGE_DLG_FRAME2 = aMgr.GetImageThrow("IMAGE_DLG_FRAME2");
		IMAGE_DLG_FRAME3 = aMgr.GetImageThrow("IMAGE_DLG_FRAME3");
		IMAGE_DLG_GREENOK = aMgr.GetImageThrow("IMAGE_DLG_GREENOK");
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
		IMAGE_DLG_REPLAYTOP = aMgr.GetImageThrow("IMAGE_DLG_REPLAYTOP");
		IMAGE_DLG_SEGMENT = aMgr.GetImageThrow("IMAGE_DLG_SEGMENT");
		IMAGE_DLG_SELECTORFRAME = aMgr.GetImageThrow("IMAGE_DLG_SELECTORFRAME");
		IMAGE_DLG_SLIDER = aMgr.GetImageThrow("IMAGE_DLG_SLIDER");
		IMAGE_DLG_SLIDERHILIGHT = aMgr.GetImageThrow("IMAGE_DLG_SLIDERHILIGHT");
		IMAGE_DLG_SLIDERORB = aMgr.GetImageThrow("IMAGE_DLG_SLIDERORB");
		IMAGE_DLG_STAGEBAR = aMgr.GetImageThrow("IMAGE_DLG_STAGEBAR");
		IMAGE_DLG_STAGEBULLET = aMgr.GetImageThrow("IMAGE_DLG_STAGEBULLET");
		IMAGE_DLG_STAGEPROGRESSBAR = aMgr.GetImageThrow("IMAGE_DLG_STAGEPROGRESSBAR");
		IMAGE_DLG_STARBADGEICON = aMgr.GetImageThrow("IMAGE_DLG_STARBADGEICON");
		IMAGE_DLG_TEXTBOX = aMgr.GetImageThrow("IMAGE_DLG_TEXTBOX");
		IMAGE_DLG_TEXTRECT = aMgr.GetImageThrow("IMAGE_DLG_TEXTRECT");
		IMAGE_DLG_TINYLOCKED = aMgr.GetImageThrow("IMAGE_DLG_TINYLOCKED");
		IMAGE_DLG_TIP = aMgr.GetImageThrow("IMAGE_DLG_TIP");
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
Image* Sexy::IMAGE_HELP_BUTTONOVERLAY;
Image* Sexy::IMAGE_HELP_ICONS;
Image* Sexy::IMAGE_HELP_MODES;
Image* Sexy::IMAGE_HELP_SCREEN;

bool Sexy::ExtractHelpResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_HELP_BUTTONOVERLAY = aMgr.GetImageThrow("IMAGE_HELP_BUTTONOVERLAY");
		IMAGE_HELP_ICONS = aMgr.GetImageThrow("IMAGE_HELP_ICONS");
		IMAGE_HELP_MODES = aMgr.GetImageThrow("IMAGE_HELP_MODES");
		IMAGE_HELP_SCREEN = aMgr.GetImageThrow("IMAGE_HELP_SCREEN");
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
Image* Sexy::IMAGE_IP_BLC;
Image* Sexy::IMAGE_IP_BRC;
Image* Sexy::IMAGE_IP_FEVERMETER;
Image* Sexy::IMAGE_IP_L1;
Image* Sexy::IMAGE_IP_L2;
Image* Sexy::IMAGE_IP_LWINDOW;
Image* Sexy::IMAGE_IP_ORBGLOW;
Image* Sexy::IMAGE_IP_POWERUPBANNER;
Image* Sexy::IMAGE_IP_R1;
Image* Sexy::IMAGE_IP_R2;
Image* Sexy::IMAGE_IP_RWINDOW;
Image* Sexy::IMAGE_IP_SEAMS;
Image* Sexy::IMAGE_IP_SHOOTER;
Image* Sexy::IMAGE_IP_SHOOTERBACK;
Image* Sexy::IMAGE_IP_SHOOTERORB;
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
		IMAGE_IP_BLC = aMgr.GetImageThrow("IMAGE_IP_BLC");
		IMAGE_IP_BRC = aMgr.GetImageThrow("IMAGE_IP_BRC");
		IMAGE_IP_FEVERMETER = aMgr.GetImageThrow("IMAGE_IP_FEVERMETER");
		IMAGE_IP_L1 = aMgr.GetImageThrow("IMAGE_IP_L1");
		IMAGE_IP_L2 = aMgr.GetImageThrow("IMAGE_IP_L2");
		IMAGE_IP_LWINDOW = aMgr.GetImageThrow("IMAGE_IP_LWINDOW");
		IMAGE_IP_ORBGLOW = aMgr.GetImageThrow("IMAGE_IP_ORBGLOW");
		IMAGE_IP_POWERUPBANNER = aMgr.GetImageThrow("IMAGE_IP_POWERUPBANNER");
		IMAGE_IP_R1 = aMgr.GetImageThrow("IMAGE_IP_R1");
		IMAGE_IP_R2 = aMgr.GetImageThrow("IMAGE_IP_R2");
		IMAGE_IP_RWINDOW = aMgr.GetImageThrow("IMAGE_IP_RWINDOW");
		IMAGE_IP_SEAMS = aMgr.GetImageThrow("IMAGE_IP_SEAMS");
		IMAGE_IP_SHOOTER = aMgr.GetImageThrow("IMAGE_IP_SHOOTER");
		IMAGE_IP_SHOOTERBACK = aMgr.GetImageThrow("IMAGE_IP_SHOOTERBACK");
		IMAGE_IP_SHOOTERORB = aMgr.GetImageThrow("IMAGE_IP_SHOOTERORB");
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
Image* Sexy::IMAGE_CURSOR_DRAGGING;
Image* Sexy::IMAGE_CURSOR_HAND;
Image* Sexy::IMAGE_CURSOR_POINTER;
Image* Sexy::IMAGE_CURSOR_TEXT;
Image* Sexy::IMAGE_SCREENFRAMEBOTTOM;
Image* Sexy::IMAGE_SCREENFRAMELEFT;
Image* Sexy::IMAGE_SCREENFRAMERIGHT;
Image* Sexy::IMAGE_SCREENFRAMETOP;
Image* Sexy::IMAGE_SUNGLOW;
Image* Sexy::IMAGE_WIN_CLOSE;
Image* Sexy::IMAGE_WIN_MINIMIZE;
Image* Sexy::IMAGE_WIN_UNMAX;
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
		IMAGE_CURSOR_DRAGGING = aMgr.GetImageThrow("IMAGE_CURSOR_DRAGGING");
		IMAGE_CURSOR_HAND = aMgr.GetImageThrow("IMAGE_CURSOR_HAND");
		IMAGE_CURSOR_POINTER = aMgr.GetImageThrow("IMAGE_CURSOR_POINTER");
		IMAGE_CURSOR_TEXT = aMgr.GetImageThrow("IMAGE_CURSOR_TEXT");
		IMAGE_SCREENFRAMEBOTTOM = aMgr.GetImageThrow("IMAGE_SCREENFRAMEBOTTOM");
		IMAGE_SCREENFRAMELEFT = aMgr.GetImageThrow("IMAGE_SCREENFRAMELEFT");
		IMAGE_SCREENFRAMERIGHT = aMgr.GetImageThrow("IMAGE_SCREENFRAMERIGHT");
		IMAGE_SCREENFRAMETOP = aMgr.GetImageThrow("IMAGE_SCREENFRAMETOP");
		IMAGE_SUNGLOW = aMgr.GetImageThrow("IMAGE_SUNGLOW");
		IMAGE_WIN_CLOSE = aMgr.GetImageThrow("IMAGE_WIN_CLOSE");
		IMAGE_WIN_MINIMIZE = aMgr.GetImageThrow("IMAGE_WIN_MINIMIZE");
		IMAGE_WIN_UNMAX = aMgr.GetImageThrow("IMAGE_WIN_UNMAX");
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
Image* Sexy::IMAGE_INT_BUTTONCOVER;
Image* Sexy::IMAGE_INT_CANNON;
Image* Sexy::IMAGE_INT_CANNONCOVER;
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
		IMAGE_INT_BUTTONCOVER = aMgr.GetImageThrow("IMAGE_INT_BUTTONCOVER");
		IMAGE_INT_CANNON = aMgr.GetImageThrow("IMAGE_INT_CANNON");
		IMAGE_INT_CANNONCOVER = aMgr.GetImageThrow("IMAGE_INT_CANNONCOVER");
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
		IMAGE_INT_PLUNGER = aMgr.GetImageThrow("IMAGE_INT_PLUNGER");
		IMAGE_INT_SCOREHILIGHT = aMgr.GetImageThrow("IMAGE_INT_SCOREHILIGHT");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// LevelSelect Resources
Image* Sexy::IMAGE_LS_BACKBUTTON;
Image* Sexy::IMAGE_LS_CHALLENGEBADGE;
Image* Sexy::IMAGE_LS_LEVELSCREEN;
Image* Sexy::IMAGE_LS_LEVELSCREENLEFT;
Image* Sexy::IMAGE_LS_LEVELSCREENRIGHT;
Image* Sexy::IMAGE_LS_LEVELSELECTOR;
Image* Sexy::IMAGE_LS_LOCK;
Image* Sexy::IMAGE_LS_LOCK_SMALL;
Image* Sexy::IMAGE_LS_MAINMENUBUTTON;
Image* Sexy::IMAGE_LS_NEXTBUTTON;
Image* Sexy::IMAGE_LS_RANDOMBUTTON;
Image* Sexy::IMAGE_LS_RANDOMLEVEL;
Image* Sexy::IMAGE_LS_TINYBLUERIBBON;

bool Sexy::ExtractLevelSelectResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_LS_BACKBUTTON = aMgr.GetImageThrow("IMAGE_LS_BACKBUTTON");
		IMAGE_LS_CHALLENGEBADGE = aMgr.GetImageThrow("IMAGE_LS_CHALLENGEBADGE");
		IMAGE_LS_LEVELSCREEN = aMgr.GetImageThrow("IMAGE_LS_LEVELSCREEN");
		IMAGE_LS_LEVELSCREENLEFT = aMgr.GetImageThrow("IMAGE_LS_LEVELSCREENLEFT");
		IMAGE_LS_LEVELSCREENRIGHT = aMgr.GetImageThrow("IMAGE_LS_LEVELSCREENRIGHT");
		IMAGE_LS_LEVELSELECTOR = aMgr.GetImageThrow("IMAGE_LS_LEVELSELECTOR");
		IMAGE_LS_LOCK = aMgr.GetImageThrow("IMAGE_LS_LOCK");
		IMAGE_LS_LOCK_SMALL = aMgr.GetImageThrow("IMAGE_LS_LOCK_SMALL");
		IMAGE_LS_MAINMENUBUTTON = aMgr.GetImageThrow("IMAGE_LS_MAINMENUBUTTON");
		IMAGE_LS_NEXTBUTTON = aMgr.GetImageThrow("IMAGE_LS_NEXTBUTTON");
		IMAGE_LS_RANDOMBUTTON = aMgr.GetImageThrow("IMAGE_LS_RANDOMBUTTON");
		IMAGE_LS_RANDOMLEVEL = aMgr.GetImageThrow("IMAGE_LS_RANDOMLEVEL");
		IMAGE_LS_TINYBLUERIBBON = aMgr.GetImageThrow("IMAGE_LS_TINYBLUERIBBON");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Load Resources
Image* Sexy::IMAGE_LOAD_BACK;
Image* Sexy::IMAGE_LOAD_BALL;
Image* Sexy::IMAGE_LOAD_DELUXE;
Image* Sexy::IMAGE_LOAD_HILL;
Image* Sexy::IMAGE_LOAD_LIGHTS;
Image* Sexy::IMAGE_LOAD_LOGO;
Image* Sexy::IMAGE_LOAD_OVERLAY;
Image* Sexy::IMAGE_LOAD_PLAYNOW;
Image* Sexy::IMAGE_LOAD_POPCAP;
Image* Sexy::IMAGE_LOAD_SHADOW;
Image* Sexy::IMAGE_LOAD_SUNHEAD;
Image* Sexy::IMAGE_LOAD_TM;
Image* Sexy::IMAGE_PARTNER;

bool Sexy::ExtractLoadResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_LOAD_BACK = aMgr.GetImageThrow("IMAGE_LOAD_BACK");
		IMAGE_LOAD_BALL = aMgr.GetImageThrow("IMAGE_LOAD_BALL");
		IMAGE_LOAD_DELUXE = aMgr.GetImageThrow("IMAGE_LOAD_DELUXE");
		IMAGE_LOAD_HILL = aMgr.GetImageThrow("IMAGE_LOAD_HILL");
		IMAGE_LOAD_LIGHTS = aMgr.GetImageThrow("IMAGE_LOAD_LIGHTS");
		IMAGE_LOAD_LOGO = aMgr.GetImageThrow("IMAGE_LOAD_LOGO");
		IMAGE_LOAD_OVERLAY = aMgr.GetImageThrow("IMAGE_LOAD_OVERLAY");
		IMAGE_LOAD_PLAYNOW = aMgr.GetImageThrow("IMAGE_LOAD_PLAYNOW");
		IMAGE_LOAD_POPCAP = aMgr.GetImageThrow("IMAGE_LOAD_POPCAP");
		IMAGE_LOAD_SHADOW = aMgr.GetImageThrow("IMAGE_LOAD_SHADOW");
		IMAGE_LOAD_SUNHEAD = aMgr.GetImageThrow("IMAGE_LOAD_SUNHEAD");
		IMAGE_LOAD_TM = aMgr.GetImageThrow("IMAGE_LOAD_TM");
		IMAGE_PARTNER = aMgr.GetImageThrow("IMAGE_PARTNER");
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
int Sexy::SOUND_APPLAUSE;
int Sexy::SOUND_AWARD;
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
int Sexy::SOUND_LEVELDONE;
int Sexy::SOUND_LEVELLOST;
int Sexy::SOUND_LEVELWON;
int Sexy::SOUND_MISS;
int Sexy::SOUND_MOUSEOVER;
int Sexy::SOUND_MULTIBALL;
int Sexy::SOUND_PEGHIT;
int Sexy::SOUND_PEGHIT2;
int Sexy::SOUND_PEGHIT3;
int Sexy::SOUND_PEGHIT_LOW;
int Sexy::SOUND_PEGPOP;
int Sexy::SOUND_PENALTY;
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
int Sexy::SOUND_RICHOCHET;
int Sexy::SOUND_SCORECOUNTER;
int Sexy::SOUND_SIGH;
int Sexy::SOUND_SKILLSHOT;
int Sexy::SOUND_SLOWMO;
int Sexy::SOUND_SPOOKYBALL2;
int Sexy::SOUND_SPOOKYBALL3;
int Sexy::SOUND_SPOOKYBALL4;
int Sexy::SOUND_STAMP;
int Sexy::SOUND_TEXT_WOOSH;
int Sexy::SOUND_TING;
int Sexy::SOUND_TONE;
int Sexy::SOUND_TONEHI;
int Sexy::SOUND_TONELO;
int Sexy::SOUND_TONESUPERHI;
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
		SOUND_APPLAUSE = aMgr.GetSoundThrow("SOUND_APPLAUSE");
		SOUND_AWARD = aMgr.GetSoundThrow("SOUND_AWARD");
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
		SOUND_LEVELDONE = aMgr.GetSoundThrow("SOUND_LEVELDONE");
		SOUND_LEVELLOST = aMgr.GetSoundThrow("SOUND_LEVELLOST");
		SOUND_LEVELWON = aMgr.GetSoundThrow("SOUND_LEVELWON");
		SOUND_MISS = aMgr.GetSoundThrow("SOUND_MISS");
		SOUND_MOUSEOVER = aMgr.GetSoundThrow("SOUND_MOUSEOVER");
		SOUND_MULTIBALL = aMgr.GetSoundThrow("SOUND_MULTIBALL");
		SOUND_PEGHIT = aMgr.GetSoundThrow("SOUND_PEGHIT");
		SOUND_PEGHIT2 = aMgr.GetSoundThrow("SOUND_PEGHIT2");
		SOUND_PEGHIT3 = aMgr.GetSoundThrow("SOUND_PEGHIT3");
		SOUND_PEGHIT_LOW = aMgr.GetSoundThrow("SOUND_PEGHIT_LOW");
		SOUND_PEGPOP = aMgr.GetSoundThrow("SOUND_PEGPOP");
		SOUND_PENALTY = aMgr.GetSoundThrow("SOUND_PENALTY");
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
		SOUND_RICHOCHET = aMgr.GetSoundThrow("SOUND_RICHOCHET");
		SOUND_SCORECOUNTER = aMgr.GetSoundThrow("SOUND_SCORECOUNTER");
		SOUND_SIGH = aMgr.GetSoundThrow("SOUND_SIGH");
		SOUND_SKILLSHOT = aMgr.GetSoundThrow("SOUND_SKILLSHOT");
		SOUND_SLOWMO = aMgr.GetSoundThrow("SOUND_SLOWMO");
		SOUND_SPOOKYBALL2 = aMgr.GetSoundThrow("SOUND_SPOOKYBALL2");
		SOUND_SPOOKYBALL3 = aMgr.GetSoundThrow("SOUND_SPOOKYBALL3");
		SOUND_SPOOKYBALL4 = aMgr.GetSoundThrow("SOUND_SPOOKYBALL4");
		SOUND_STAMP = aMgr.GetSoundThrow("SOUND_STAMP");
		SOUND_TEXT_WOOSH = aMgr.GetSoundThrow("SOUND_TEXT_WOOSH");
		SOUND_TING = aMgr.GetSoundThrow("SOUND_TING");
		SOUND_TONE = aMgr.GetSoundThrow("SOUND_TONE");
		SOUND_TONEHI = aMgr.GetSoundThrow("SOUND_TONEHI");
		SOUND_TONELO = aMgr.GetSoundThrow("SOUND_TONELO");
		SOUND_TONESUPERHI = aMgr.GetSoundThrow("SOUND_TONESUPERHI");
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
Image* Sexy::IMAGE_MM_ADVENTURE;
Image* Sexy::IMAGE_MM_APPROVEDSTAMP;
Image* Sexy::IMAGE_MM_BACKGROUND;
Image* Sexy::IMAGE_MM_BJORN;
Image* Sexy::IMAGE_MM_BLANKSUN;
Image* Sexy::IMAGE_MM_BOTTOM;
Image* Sexy::IMAGE_MM_BUYIT;
Image* Sexy::IMAGE_MM_CERTIFICATE;
Image* Sexy::IMAGE_MM_CERTIFICATEOK;
Image* Sexy::IMAGE_MM_CHALLENGE;
Image* Sexy::IMAGE_MM_CRY;
Image* Sexy::IMAGE_MM_DUEL;
Image* Sexy::IMAGE_MM_FOREGROUND;
Image* Sexy::IMAGE_MM_LEFT;
Image* Sexy::IMAGE_MM_RIGHT;
Image* Sexy::IMAGE_MM_SOLO;
Image* Sexy::IMAGE_MM_SPEECHBUBBLE;
Image* Sexy::IMAGE_MM_TOP;
Image* Sexy::IMAGE_MM_TROPHIES;
Image* Sexy::IMAGE_MM_TROPHYREVEAL;

bool Sexy::ExtractMainMenuResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_MM_ADVENTURE = aMgr.GetImageThrow("IMAGE_MM_ADVENTURE");
		IMAGE_MM_APPROVEDSTAMP = aMgr.GetImageThrow("IMAGE_MM_APPROVEDSTAMP");
		IMAGE_MM_BACKGROUND = aMgr.GetImageThrow("IMAGE_MM_BACKGROUND");
		IMAGE_MM_BJORN = aMgr.GetImageThrow("IMAGE_MM_BJORN");
		IMAGE_MM_BLANKSUN = aMgr.GetImageThrow("IMAGE_MM_BLANKSUN");
		IMAGE_MM_BOTTOM = aMgr.GetImageThrow("IMAGE_MM_BOTTOM");
		IMAGE_MM_BUYIT = aMgr.GetImageThrow("IMAGE_MM_BUYIT");
		IMAGE_MM_CERTIFICATE = aMgr.GetImageThrow("IMAGE_MM_CERTIFICATE");
		IMAGE_MM_CERTIFICATEOK = aMgr.GetImageThrow("IMAGE_MM_CERTIFICATEOK");
		IMAGE_MM_CHALLENGE = aMgr.GetImageThrow("IMAGE_MM_CHALLENGE");
		IMAGE_MM_CRY = aMgr.GetImageThrow("IMAGE_MM_CRY");
		IMAGE_MM_DUEL = aMgr.GetImageThrow("IMAGE_MM_DUEL");
		IMAGE_MM_FOREGROUND = aMgr.GetImageThrow("IMAGE_MM_FOREGROUND");
		IMAGE_MM_LEFT = aMgr.GetImageThrow("IMAGE_MM_LEFT");
		IMAGE_MM_RIGHT = aMgr.GetImageThrow("IMAGE_MM_RIGHT");
		IMAGE_MM_SOLO = aMgr.GetImageThrow("IMAGE_MM_SOLO");
		IMAGE_MM_SPEECHBUBBLE = aMgr.GetImageThrow("IMAGE_MM_SPEECHBUBBLE");
		IMAGE_MM_TOP = aMgr.GetImageThrow("IMAGE_MM_TOP");
		IMAGE_MM_TROPHIES = aMgr.GetImageThrow("IMAGE_MM_TROPHIES");
		IMAGE_MM_TROPHYREVEAL = aMgr.GetImageThrow("IMAGE_MM_TROPHYREVEAL");
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
		IMAGE_STORY_ROCKET = aMgr.GetImageThrow("IMAGE_STORY_ROCKET");
		IMAGE_STORY_WIN = aMgr.GetImageThrow("IMAGE_STORY_WIN");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Upsell Resources
Image* Sexy::IMAGE_UPSELL_BALL;
Image* Sexy::IMAGE_UPSELL_BLURB1;
Image* Sexy::IMAGE_UPSELL_BLURB10;
Image* Sexy::IMAGE_UPSELL_BLURB2;
Image* Sexy::IMAGE_UPSELL_BLURB3;
Image* Sexy::IMAGE_UPSELL_BLURB4;
Image* Sexy::IMAGE_UPSELL_BLURB5;
Image* Sexy::IMAGE_UPSELL_BLURB6;
Image* Sexy::IMAGE_UPSELL_BLURB7;
Image* Sexy::IMAGE_UPSELL_BLURB8;
Image* Sexy::IMAGE_UPSELL_BLURB9;
Image* Sexy::IMAGE_UPSELL_BUY_NOW;
Image* Sexy::IMAGE_UPSELL_JUNK1;
Image* Sexy::IMAGE_UPSELL_JUNK2;
Image* Sexy::IMAGE_UPSELL_JUNK3;
Image* Sexy::IMAGE_UPSELL_JUNK4;
Image* Sexy::IMAGE_UPSELL_LEVEL1;
Image* Sexy::IMAGE_UPSELL_LEVEL10;
Image* Sexy::IMAGE_UPSELL_LEVEL2;
Image* Sexy::IMAGE_UPSELL_LEVEL3;
Image* Sexy::IMAGE_UPSELL_LEVEL4;
Image* Sexy::IMAGE_UPSELL_LEVEL5;
Image* Sexy::IMAGE_UPSELL_LEVEL6;
Image* Sexy::IMAGE_UPSELL_LEVEL7;
Image* Sexy::IMAGE_UPSELL_LEVEL8;
Image* Sexy::IMAGE_UPSELL_LEVEL9;
Image* Sexy::IMAGE_UPSELL_LOGO;
Image* Sexy::IMAGE_UPSELL_PEG;
Image* Sexy::IMAGE_UPSELL_SWOOSH;
Image* Sexy::IMAGE_UPSELL_TEXT;
Image* Sexy::IMAGE_UPSELL_ZEN;

bool Sexy::ExtractUpsellResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_UPSELL_BALL = aMgr.GetImageThrow("IMAGE_UPSELL_BALL");
		IMAGE_UPSELL_BLURB1 = aMgr.GetImageThrow("IMAGE_UPSELL_BLURB1");
		IMAGE_UPSELL_BLURB10 = aMgr.GetImageThrow("IMAGE_UPSELL_BLURB10");
		IMAGE_UPSELL_BLURB2 = aMgr.GetImageThrow("IMAGE_UPSELL_BLURB2");
		IMAGE_UPSELL_BLURB3 = aMgr.GetImageThrow("IMAGE_UPSELL_BLURB3");
		IMAGE_UPSELL_BLURB4 = aMgr.GetImageThrow("IMAGE_UPSELL_BLURB4");
		IMAGE_UPSELL_BLURB5 = aMgr.GetImageThrow("IMAGE_UPSELL_BLURB5");
		IMAGE_UPSELL_BLURB6 = aMgr.GetImageThrow("IMAGE_UPSELL_BLURB6");
		IMAGE_UPSELL_BLURB7 = aMgr.GetImageThrow("IMAGE_UPSELL_BLURB7");
		IMAGE_UPSELL_BLURB8 = aMgr.GetImageThrow("IMAGE_UPSELL_BLURB8");
		IMAGE_UPSELL_BLURB9 = aMgr.GetImageThrow("IMAGE_UPSELL_BLURB9");
		IMAGE_UPSELL_BUY_NOW = aMgr.GetImageThrow("IMAGE_UPSELL_BUY_NOW");
		IMAGE_UPSELL_JUNK1 = aMgr.GetImageThrow("IMAGE_UPSELL_JUNK1");
		IMAGE_UPSELL_JUNK2 = aMgr.GetImageThrow("IMAGE_UPSELL_JUNK2");
		IMAGE_UPSELL_JUNK3 = aMgr.GetImageThrow("IMAGE_UPSELL_JUNK3");
		IMAGE_UPSELL_JUNK4 = aMgr.GetImageThrow("IMAGE_UPSELL_JUNK4");
		IMAGE_UPSELL_LEVEL1 = aMgr.GetImageThrow("IMAGE_UPSELL_LEVEL1");
		IMAGE_UPSELL_LEVEL10 = aMgr.GetImageThrow("IMAGE_UPSELL_LEVEL10");
		IMAGE_UPSELL_LEVEL2 = aMgr.GetImageThrow("IMAGE_UPSELL_LEVEL2");
		IMAGE_UPSELL_LEVEL3 = aMgr.GetImageThrow("IMAGE_UPSELL_LEVEL3");
		IMAGE_UPSELL_LEVEL4 = aMgr.GetImageThrow("IMAGE_UPSELL_LEVEL4");
		IMAGE_UPSELL_LEVEL5 = aMgr.GetImageThrow("IMAGE_UPSELL_LEVEL5");
		IMAGE_UPSELL_LEVEL6 = aMgr.GetImageThrow("IMAGE_UPSELL_LEVEL6");
		IMAGE_UPSELL_LEVEL7 = aMgr.GetImageThrow("IMAGE_UPSELL_LEVEL7");
		IMAGE_UPSELL_LEVEL8 = aMgr.GetImageThrow("IMAGE_UPSELL_LEVEL8");
		IMAGE_UPSELL_LEVEL9 = aMgr.GetImageThrow("IMAGE_UPSELL_LEVEL9");
		IMAGE_UPSELL_LOGO = aMgr.GetImageThrow("IMAGE_UPSELL_LOGO");
		IMAGE_UPSELL_PEG = aMgr.GetImageThrow("IMAGE_UPSELL_PEG");
		IMAGE_UPSELL_SWOOSH = aMgr.GetImageThrow("IMAGE_UPSELL_SWOOSH");
		IMAGE_UPSELL_TEXT = aMgr.GetImageThrow("IMAGE_UPSELL_TEXT");
		IMAGE_UPSELL_ZEN = aMgr.GetImageThrow("IMAGE_UPSELL_ZEN");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

static void* gResources[] =
{
	&IMAGE_SCREENFRAMELEFT,
	&IMAGE_SCREENFRAMERIGHT,
	&IMAGE_SCREENFRAMETOP,
	&IMAGE_SCREENFRAMEBOTTOM,
	&IMAGE_SUNGLOW,
	&IMAGE_CURSOR_POINTER,
	&IMAGE_CURSOR_HAND,
	&IMAGE_CURSOR_DRAGGING,
	&IMAGE_CURSOR_TEXT,
	&IMAGE_WIN_MINIMIZE,
	&IMAGE_WIN_UNMAX,
	&IMAGE_WIN_CLOSE,
	&SOUND_MORNING,
	&FONT_OVERLOAD16,
	&FONT_OVERLOAD16OUTLINE,
	&FONT_OVERLOAD16OUTLINE2,
	&IMAGE_LOAD_BACK,
	&IMAGE_LOAD_HILL,
	&IMAGE_LOAD_OVERLAY,
	&IMAGE_LOAD_LIGHTS,
	&IMAGE_LOAD_LOGO,
	&IMAGE_LOAD_SHADOW,
	&IMAGE_LOAD_SUNHEAD,
	&IMAGE_LOAD_PLAYNOW,
	&IMAGE_LOAD_BALL,
	&IMAGE_LOAD_DELUXE,
	&IMAGE_LOAD_TM,
	&IMAGE_LOAD_POPCAP,
	&IMAGE_PARTNER,
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
	&SOUND_TONELO,
	&SOUND_TONE,
	&SOUND_TONEHI,
	&SOUND_TONESUPERHI,
	&SOUND_STAMP,
	&SOUND_ADD_BALL,
	&SOUND_DIALOG_MOVE,
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
	&IMAGE_MM_RIGHT,
	&IMAGE_MM_TOP,
	&IMAGE_MM_LEFT,
	&IMAGE_MM_BOTTOM,
	&IMAGE_MM_FOREGROUND,
	&IMAGE_MM_BACKGROUND,
	&IMAGE_MM_BJORN,
	&IMAGE_MM_BLANKSUN,
	&IMAGE_MM_SPEECHBUBBLE,
	&IMAGE_MM_CRY,
	&IMAGE_MM_BUYIT,
	&IMAGE_MM_CERTIFICATE,
	&IMAGE_MM_CERTIFICATEOK,
	&IMAGE_MM_APPROVEDSTAMP,
	&IMAGE_MM_TROPHIES,
	&IMAGE_MM_TROPHYREVEAL,
	&IMAGE_MM_ADVENTURE,
	&IMAGE_MM_SOLO,
	&IMAGE_MM_DUEL,
	&IMAGE_MM_CHALLENGE,
	&IMAGE_LS_LEVELSCREEN,
	&IMAGE_LS_LEVELSCREENLEFT,
	&IMAGE_LS_LEVELSCREENRIGHT,
	&IMAGE_LS_LEVELSELECTOR,
	&IMAGE_LS_BACKBUTTON,
	&IMAGE_LS_NEXTBUTTON,
	&IMAGE_LS_MAINMENUBUTTON,
	&IMAGE_LS_RANDOMBUTTON,
	&IMAGE_LS_LOCK,
	&IMAGE_LS_LOCK_SMALL,
	&IMAGE_LS_CHALLENGEBADGE,
	&IMAGE_LS_RANDOMLEVEL,
	&IMAGE_LS_TINYBLUERIBBON,
	&IMAGE_HELP_SCREEN,
	&IMAGE_HELP_MODES,
	&IMAGE_HELP_BUTTONOVERLAY,
	&IMAGE_HELP_ICONS,
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
	&IMAGE_NUKESTREAK,
	&IMAGE_DLG_BOTTOMBAR,
	&IMAGE_DLG_RANDOM,
	&IMAGE_DLG_BLUEFRAME,
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
	&IMAGE_DLG_TIP,
	&IMAGE_DLG_INSTRUCTIONS,
	&IMAGE_DLG_INSTRUCTIONS2,
	&IMAGE_DLG_INSTRUCTIONS3,
	&IMAGE_DLG_INSTRUCTIONS4,
	&IMAGE_DLG_BUTTONOVERLAY2,
	&IMAGE_DLG_STARBADGEICON,
	&IMAGE_DLG_TINYLOCKED,
	&IMAGE_DLG_PURPLEBUTTON,
	&IMAGE_DLG_MENU,
	&IMAGE_DLG_INSTANTREPLAY,
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
	&IMAGE_STORY_WIN,
	&IMAGE_STORY_CLAWS,
	&IMAGE_STORY_ROCKET,
	&IMAGE_STORY_BIGSPARKLE,
	&IMAGE_ADV_ADVENTURE,
	&IMAGE_ADV_RESTART_COVER,
	&IMAGE_UPSELL_LEVEL1,
	&IMAGE_UPSELL_LEVEL2,
	&IMAGE_UPSELL_LEVEL3,
	&IMAGE_UPSELL_LEVEL4,
	&IMAGE_UPSELL_LEVEL5,
	&IMAGE_UPSELL_LEVEL6,
	&IMAGE_UPSELL_LEVEL7,
	&IMAGE_UPSELL_LEVEL8,
	&IMAGE_UPSELL_LEVEL9,
	&IMAGE_UPSELL_LEVEL10,
	&IMAGE_UPSELL_BUY_NOW,
	&IMAGE_UPSELL_BALL,
	&IMAGE_UPSELL_TEXT,
	&IMAGE_UPSELL_LOGO,
	&IMAGE_UPSELL_PEG,
	&IMAGE_UPSELL_SWOOSH,
	&IMAGE_UPSELL_BLURB1,
	&IMAGE_UPSELL_BLURB2,
	&IMAGE_UPSELL_BLURB3,
	&IMAGE_UPSELL_BLURB4,
	&IMAGE_UPSELL_BLURB5,
	&IMAGE_UPSELL_BLURB6,
	&IMAGE_UPSELL_BLURB7,
	&IMAGE_UPSELL_BLURB8,
	&IMAGE_UPSELL_BLURB9,
	&IMAGE_UPSELL_BLURB10,
	&IMAGE_UPSELL_ZEN,
	&IMAGE_UPSELL_JUNK1,
	&IMAGE_UPSELL_JUNK2,
	&IMAGE_UPSELL_JUNK3,
	&IMAGE_UPSELL_JUNK4,
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
		case IMAGE_SCREENFRAMELEFT_ID: return "IMAGE_SCREENFRAMELEFT";
		case IMAGE_SCREENFRAMERIGHT_ID: return "IMAGE_SCREENFRAMERIGHT";
		case IMAGE_SCREENFRAMETOP_ID: return "IMAGE_SCREENFRAMETOP";
		case IMAGE_SCREENFRAMEBOTTOM_ID: return "IMAGE_SCREENFRAMEBOTTOM";
		case IMAGE_SUNGLOW_ID: return "IMAGE_SUNGLOW";
		case IMAGE_CURSOR_POINTER_ID: return "IMAGE_CURSOR_POINTER";
		case IMAGE_CURSOR_HAND_ID: return "IMAGE_CURSOR_HAND";
		case IMAGE_CURSOR_DRAGGING_ID: return "IMAGE_CURSOR_DRAGGING";
		case IMAGE_CURSOR_TEXT_ID: return "IMAGE_CURSOR_TEXT";
		case IMAGE_WIN_MINIMIZE_ID: return "IMAGE_WIN_MINIMIZE";
		case IMAGE_WIN_UNMAX_ID: return "IMAGE_WIN_UNMAX";
		case IMAGE_WIN_CLOSE_ID: return "IMAGE_WIN_CLOSE";
		case SOUND_MORNING_ID: return "SOUND_MORNING";
		case FONT_OVERLOAD16_ID: return "FONT_OVERLOAD16";
		case FONT_OVERLOAD16OUTLINE_ID: return "FONT_OVERLOAD16OUTLINE";
		case FONT_OVERLOAD16OUTLINE2_ID: return "FONT_OVERLOAD16OUTLINE2";
		case IMAGE_LOAD_BACK_ID: return "IMAGE_LOAD_BACK";
		case IMAGE_LOAD_HILL_ID: return "IMAGE_LOAD_HILL";
		case IMAGE_LOAD_OVERLAY_ID: return "IMAGE_LOAD_OVERLAY";
		case IMAGE_LOAD_LIGHTS_ID: return "IMAGE_LOAD_LIGHTS";
		case IMAGE_LOAD_LOGO_ID: return "IMAGE_LOAD_LOGO";
		case IMAGE_LOAD_SHADOW_ID: return "IMAGE_LOAD_SHADOW";
		case IMAGE_LOAD_SUNHEAD_ID: return "IMAGE_LOAD_SUNHEAD";
		case IMAGE_LOAD_PLAYNOW_ID: return "IMAGE_LOAD_PLAYNOW";
		case IMAGE_LOAD_BALL_ID: return "IMAGE_LOAD_BALL";
		case IMAGE_LOAD_DELUXE_ID: return "IMAGE_LOAD_DELUXE";
		case IMAGE_LOAD_TM_ID: return "IMAGE_LOAD_TM";
		case IMAGE_LOAD_POPCAP_ID: return "IMAGE_LOAD_POPCAP";
		case IMAGE_PARTNER_ID: return "IMAGE_PARTNER";
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
		case SOUND_TONELO_ID: return "SOUND_TONELO";
		case SOUND_TONE_ID: return "SOUND_TONE";
		case SOUND_TONEHI_ID: return "SOUND_TONEHI";
		case SOUND_TONESUPERHI_ID: return "SOUND_TONESUPERHI";
		case SOUND_STAMP_ID: return "SOUND_STAMP";
		case SOUND_ADD_BALL_ID: return "SOUND_ADD_BALL";
		case SOUND_DIALOG_MOVE_ID: return "SOUND_DIALOG_MOVE";
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
		case IMAGE_MM_RIGHT_ID: return "IMAGE_MM_RIGHT";
		case IMAGE_MM_TOP_ID: return "IMAGE_MM_TOP";
		case IMAGE_MM_LEFT_ID: return "IMAGE_MM_LEFT";
		case IMAGE_MM_BOTTOM_ID: return "IMAGE_MM_BOTTOM";
		case IMAGE_MM_FOREGROUND_ID: return "IMAGE_MM_FOREGROUND";
		case IMAGE_MM_BACKGROUND_ID: return "IMAGE_MM_BACKGROUND";
		case IMAGE_MM_BJORN_ID: return "IMAGE_MM_BJORN";
		case IMAGE_MM_BLANKSUN_ID: return "IMAGE_MM_BLANKSUN";
		case IMAGE_MM_SPEECHBUBBLE_ID: return "IMAGE_MM_SPEECHBUBBLE";
		case IMAGE_MM_CRY_ID: return "IMAGE_MM_CRY";
		case IMAGE_MM_BUYIT_ID: return "IMAGE_MM_BUYIT";
		case IMAGE_MM_CERTIFICATE_ID: return "IMAGE_MM_CERTIFICATE";
		case IMAGE_MM_CERTIFICATEOK_ID: return "IMAGE_MM_CERTIFICATEOK";
		case IMAGE_MM_APPROVEDSTAMP_ID: return "IMAGE_MM_APPROVEDSTAMP";
		case IMAGE_MM_TROPHIES_ID: return "IMAGE_MM_TROPHIES";
		case IMAGE_MM_TROPHYREVEAL_ID: return "IMAGE_MM_TROPHYREVEAL";
		case IMAGE_MM_ADVENTURE_ID: return "IMAGE_MM_ADVENTURE";
		case IMAGE_MM_SOLO_ID: return "IMAGE_MM_SOLO";
		case IMAGE_MM_DUEL_ID: return "IMAGE_MM_DUEL";
		case IMAGE_MM_CHALLENGE_ID: return "IMAGE_MM_CHALLENGE";
		case IMAGE_LS_LEVELSCREEN_ID: return "IMAGE_LS_LEVELSCREEN";
		case IMAGE_LS_LEVELSCREENLEFT_ID: return "IMAGE_LS_LEVELSCREENLEFT";
		case IMAGE_LS_LEVELSCREENRIGHT_ID: return "IMAGE_LS_LEVELSCREENRIGHT";
		case IMAGE_LS_LEVELSELECTOR_ID: return "IMAGE_LS_LEVELSELECTOR";
		case IMAGE_LS_BACKBUTTON_ID: return "IMAGE_LS_BACKBUTTON";
		case IMAGE_LS_NEXTBUTTON_ID: return "IMAGE_LS_NEXTBUTTON";
		case IMAGE_LS_MAINMENUBUTTON_ID: return "IMAGE_LS_MAINMENUBUTTON";
		case IMAGE_LS_RANDOMBUTTON_ID: return "IMAGE_LS_RANDOMBUTTON";
		case IMAGE_LS_LOCK_ID: return "IMAGE_LS_LOCK";
		case IMAGE_LS_LOCK_SMALL_ID: return "IMAGE_LS_LOCK_SMALL";
		case IMAGE_LS_CHALLENGEBADGE_ID: return "IMAGE_LS_CHALLENGEBADGE";
		case IMAGE_LS_RANDOMLEVEL_ID: return "IMAGE_LS_RANDOMLEVEL";
		case IMAGE_LS_TINYBLUERIBBON_ID: return "IMAGE_LS_TINYBLUERIBBON";
		case IMAGE_HELP_SCREEN_ID: return "IMAGE_HELP_SCREEN";
		case IMAGE_HELP_MODES_ID: return "IMAGE_HELP_MODES";
		case IMAGE_HELP_BUTTONOVERLAY_ID: return "IMAGE_HELP_BUTTONOVERLAY";
		case IMAGE_HELP_ICONS_ID: return "IMAGE_HELP_ICONS";
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
		case IMAGE_NUKESTREAK_ID: return "IMAGE_NUKESTREAK";
		case IMAGE_DLG_BOTTOMBAR_ID: return "IMAGE_DLG_BOTTOMBAR";
		case IMAGE_DLG_RANDOM_ID: return "IMAGE_DLG_RANDOM";
		case IMAGE_DLG_BLUEFRAME_ID: return "IMAGE_DLG_BLUEFRAME";
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
		case IMAGE_DLG_TIP_ID: return "IMAGE_DLG_TIP";
		case IMAGE_DLG_INSTRUCTIONS_ID: return "IMAGE_DLG_INSTRUCTIONS";
		case IMAGE_DLG_INSTRUCTIONS2_ID: return "IMAGE_DLG_INSTRUCTIONS2";
		case IMAGE_DLG_INSTRUCTIONS3_ID: return "IMAGE_DLG_INSTRUCTIONS3";
		case IMAGE_DLG_INSTRUCTIONS4_ID: return "IMAGE_DLG_INSTRUCTIONS4";
		case IMAGE_DLG_BUTTONOVERLAY2_ID: return "IMAGE_DLG_BUTTONOVERLAY2";
		case IMAGE_DLG_STARBADGEICON_ID: return "IMAGE_DLG_STARBADGEICON";
		case IMAGE_DLG_TINYLOCKED_ID: return "IMAGE_DLG_TINYLOCKED";
		case IMAGE_DLG_PURPLEBUTTON_ID: return "IMAGE_DLG_PURPLEBUTTON";
		case IMAGE_DLG_MENU_ID: return "IMAGE_DLG_MENU";
		case IMAGE_DLG_INSTANTREPLAY_ID: return "IMAGE_DLG_INSTANTREPLAY";
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
		case IMAGE_STORY_WIN_ID: return "IMAGE_STORY_WIN";
		case IMAGE_STORY_CLAWS_ID: return "IMAGE_STORY_CLAWS";
		case IMAGE_STORY_ROCKET_ID: return "IMAGE_STORY_ROCKET";
		case IMAGE_STORY_BIGSPARKLE_ID: return "IMAGE_STORY_BIGSPARKLE";
		case IMAGE_ADV_ADVENTURE_ID: return "IMAGE_ADV_ADVENTURE";
		case IMAGE_ADV_RESTART_COVER_ID: return "IMAGE_ADV_RESTART_COVER";
		case IMAGE_UPSELL_LEVEL1_ID: return "IMAGE_UPSELL_LEVEL1";
		case IMAGE_UPSELL_LEVEL2_ID: return "IMAGE_UPSELL_LEVEL2";
		case IMAGE_UPSELL_LEVEL3_ID: return "IMAGE_UPSELL_LEVEL3";
		case IMAGE_UPSELL_LEVEL4_ID: return "IMAGE_UPSELL_LEVEL4";
		case IMAGE_UPSELL_LEVEL5_ID: return "IMAGE_UPSELL_LEVEL5";
		case IMAGE_UPSELL_LEVEL6_ID: return "IMAGE_UPSELL_LEVEL6";
		case IMAGE_UPSELL_LEVEL7_ID: return "IMAGE_UPSELL_LEVEL7";
		case IMAGE_UPSELL_LEVEL8_ID: return "IMAGE_UPSELL_LEVEL8";
		case IMAGE_UPSELL_LEVEL9_ID: return "IMAGE_UPSELL_LEVEL9";
		case IMAGE_UPSELL_LEVEL10_ID: return "IMAGE_UPSELL_LEVEL10";
		case IMAGE_UPSELL_BUY_NOW_ID: return "IMAGE_UPSELL_BUY_NOW";
		case IMAGE_UPSELL_BALL_ID: return "IMAGE_UPSELL_BALL";
		case IMAGE_UPSELL_TEXT_ID: return "IMAGE_UPSELL_TEXT";
		case IMAGE_UPSELL_LOGO_ID: return "IMAGE_UPSELL_LOGO";
		case IMAGE_UPSELL_PEG_ID: return "IMAGE_UPSELL_PEG";
		case IMAGE_UPSELL_SWOOSH_ID: return "IMAGE_UPSELL_SWOOSH";
		case IMAGE_UPSELL_BLURB1_ID: return "IMAGE_UPSELL_BLURB1";
		case IMAGE_UPSELL_BLURB2_ID: return "IMAGE_UPSELL_BLURB2";
		case IMAGE_UPSELL_BLURB3_ID: return "IMAGE_UPSELL_BLURB3";
		case IMAGE_UPSELL_BLURB4_ID: return "IMAGE_UPSELL_BLURB4";
		case IMAGE_UPSELL_BLURB5_ID: return "IMAGE_UPSELL_BLURB5";
		case IMAGE_UPSELL_BLURB6_ID: return "IMAGE_UPSELL_BLURB6";
		case IMAGE_UPSELL_BLURB7_ID: return "IMAGE_UPSELL_BLURB7";
		case IMAGE_UPSELL_BLURB8_ID: return "IMAGE_UPSELL_BLURB8";
		case IMAGE_UPSELL_BLURB9_ID: return "IMAGE_UPSELL_BLURB9";
		case IMAGE_UPSELL_BLURB10_ID: return "IMAGE_UPSELL_BLURB10";
		case IMAGE_UPSELL_ZEN_ID: return "IMAGE_UPSELL_ZEN";
		case IMAGE_UPSELL_JUNK1_ID: return "IMAGE_UPSELL_JUNK1";
		case IMAGE_UPSELL_JUNK2_ID: return "IMAGE_UPSELL_JUNK2";
		case IMAGE_UPSELL_JUNK3_ID: return "IMAGE_UPSELL_JUNK3";
		case IMAGE_UPSELL_JUNK4_ID: return "IMAGE_UPSELL_JUNK4";
		default: return "";
	}
}

