#include "Res.h"
#include "SexyAppFramework/ResourceManager.h"

using namespace Sexy;

#pragma warning(disable:4311 4312)

static bool gNeedRecalcVariableToIdMap = false;

bool Sexy::ExtractResourcesByName(ResourceManager *theManager, const char *theName)
{
	if (strcmp(theName,"AdventureScreen")==0) return ExtractAdventureScreenResources(theManager);
	if (strcmp(theName,"GauntletScreen")==0) return ExtractGauntletScreenResources(theManager);
	if (strcmp(theName,"HelpScreen")==0) return ExtractHelpScreenResources(theManager);
	if (strcmp(theName,"Init")==0) return ExtractInitResources(theManager);
	if (strcmp(theName,"LevelsPics")==0) return ExtractLevelsPicsResources(theManager);
	if (strcmp(theName,"LoadingThread")==0) return ExtractLoadingThreadResources(theManager);
	if (strcmp(theName,"MainMenu")==0) return ExtractMainMenuResources(theManager);
	if (strcmp(theName,"MoreGames")==0) return ExtractMoreGamesResources(theManager);
	if (strcmp(theName,"Register")==0) return ExtractRegisterResources(theManager);
	if (strcmp(theName,"XRON")==0) return ExtractXRONResources(theManager);
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

// AdventureScreen Resources
Image* Sexy::IMAGE_ADVBACK;
Image* Sexy::IMAGE_ADVDOOR1A;
Image* Sexy::IMAGE_ADVDOOR1B;
Image* Sexy::IMAGE_ADVDOOR1C;
Image* Sexy::IMAGE_ADVDOOR2A;
Image* Sexy::IMAGE_ADVDOOR2B;
Image* Sexy::IMAGE_ADVDOOR2C;
Image* Sexy::IMAGE_ADVDOOR3A;
Image* Sexy::IMAGE_ADVDOOR3B;
Image* Sexy::IMAGE_ADVDOOR3C;
Image* Sexy::IMAGE_ADVDOOR4A;
Image* Sexy::IMAGE_ADVDOOR4B;
Image* Sexy::IMAGE_ADVDOOR4C;
Image* Sexy::IMAGE_ADVHIGHSCORE;
Image* Sexy::IMAGE_ADVMAINMENUBUTTON;
Image* Sexy::IMAGE_ADVMAINMENUBUTTON_ALT;
Image* Sexy::IMAGE_ADVMIDDLE;
Image* Sexy::IMAGE_ADVPLAYBUTTON;
Image* Sexy::IMAGE_ADVPLAYBUTTON_ALT;
Image* Sexy::IMAGE_ADVSKY;
Image* Sexy::IMAGE_ADVTEMPLE1;
Image* Sexy::IMAGE_ADVTEMPLE2;
Image* Sexy::IMAGE_ADVTEMPLE2V;
Image* Sexy::IMAGE_ADVTEMPLE3;
Image* Sexy::IMAGE_ADVTEMPLE3V;
Image* Sexy::IMAGE_ADVTEMPLE4;
Image* Sexy::IMAGE_ADVTITLE;

bool Sexy::ExtractAdventureScreenResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_ADVBACK = aMgr.GetImageThrow("IMAGE_ADVBACK");
		IMAGE_ADVDOOR1A = aMgr.GetImageThrow("IMAGE_ADVDOOR1A");
		IMAGE_ADVDOOR1B = aMgr.GetImageThrow("IMAGE_ADVDOOR1B");
		IMAGE_ADVDOOR1C = aMgr.GetImageThrow("IMAGE_ADVDOOR1C");
		IMAGE_ADVDOOR2A = aMgr.GetImageThrow("IMAGE_ADVDOOR2A");
		IMAGE_ADVDOOR2B = aMgr.GetImageThrow("IMAGE_ADVDOOR2B");
		IMAGE_ADVDOOR2C = aMgr.GetImageThrow("IMAGE_ADVDOOR2C");
		IMAGE_ADVDOOR3A = aMgr.GetImageThrow("IMAGE_ADVDOOR3A");
		IMAGE_ADVDOOR3B = aMgr.GetImageThrow("IMAGE_ADVDOOR3B");
		IMAGE_ADVDOOR3C = aMgr.GetImageThrow("IMAGE_ADVDOOR3C");
		IMAGE_ADVDOOR4A = aMgr.GetImageThrow("IMAGE_ADVDOOR4A");
		IMAGE_ADVDOOR4B = aMgr.GetImageThrow("IMAGE_ADVDOOR4B");
		IMAGE_ADVDOOR4C = aMgr.GetImageThrow("IMAGE_ADVDOOR4C");
		IMAGE_ADVHIGHSCORE = aMgr.GetImageThrow("IMAGE_ADVHIGHSCORE");
		IMAGE_ADVMAINMENUBUTTON = aMgr.GetImageThrow("IMAGE_ADVMAINMENUBUTTON");
		IMAGE_ADVMAINMENUBUTTON_ALT = aMgr.GetImageThrow("IMAGE_ADVMAINMENUBUTTON_ALT");
		IMAGE_ADVMIDDLE = aMgr.GetImageThrow("IMAGE_ADVMIDDLE");
		IMAGE_ADVPLAYBUTTON = aMgr.GetImageThrow("IMAGE_ADVPLAYBUTTON");
		IMAGE_ADVPLAYBUTTON_ALT = aMgr.GetImageThrow("IMAGE_ADVPLAYBUTTON_ALT");
		IMAGE_ADVSKY = aMgr.GetImageThrow("IMAGE_ADVSKY");
		IMAGE_ADVTEMPLE1 = aMgr.GetImageThrow("IMAGE_ADVTEMPLE1");
		IMAGE_ADVTEMPLE2 = aMgr.GetImageThrow("IMAGE_ADVTEMPLE2");
		IMAGE_ADVTEMPLE2V = aMgr.GetImageThrow("IMAGE_ADVTEMPLE2V");
		IMAGE_ADVTEMPLE3 = aMgr.GetImageThrow("IMAGE_ADVTEMPLE3");
		IMAGE_ADVTEMPLE3V = aMgr.GetImageThrow("IMAGE_ADVTEMPLE3V");
		IMAGE_ADVTEMPLE4 = aMgr.GetImageThrow("IMAGE_ADVTEMPLE4");
		IMAGE_ADVTITLE = aMgr.GetImageThrow("IMAGE_ADVTITLE");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// GauntletScreen Resources
Image* Sexy::IMAGE_GAUNTDOOR1;
Image* Sexy::IMAGE_GAUNTDOOR2;
Image* Sexy::IMAGE_GAUNTDOOR3;
Image* Sexy::IMAGE_GAUNTDOOR4;
Image* Sexy::IMAGE_GAUNTEAGLEGEM;
Image* Sexy::IMAGE_GAUNTHIGHSCORE;
Image* Sexy::IMAGE_GAUNTJAGUARGEM;
Image* Sexy::IMAGE_GAUNTMAINMENUBUTTON;
Image* Sexy::IMAGE_GAUNTMAINMENUBUTTON_ALT;
Image* Sexy::IMAGE_GAUNTPLAYBUTTON;
Image* Sexy::IMAGE_GAUNTPLAYBUTTON_ALT;
Image* Sexy::IMAGE_GAUNTPRACTICEBUTTON;
Image* Sexy::IMAGE_GAUNTSCREEN;
Image* Sexy::IMAGE_GAUNTSKY;
Image* Sexy::IMAGE_GAUNTSUNGEM;
Image* Sexy::IMAGE_GAUNTSURVIVALBUTTON;
Image* Sexy::IMAGE_GAUNTTITLE;

bool Sexy::ExtractGauntletScreenResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_GAUNTDOOR1 = aMgr.GetImageThrow("IMAGE_GAUNTDOOR1");
		IMAGE_GAUNTDOOR2 = aMgr.GetImageThrow("IMAGE_GAUNTDOOR2");
		IMAGE_GAUNTDOOR3 = aMgr.GetImageThrow("IMAGE_GAUNTDOOR3");
		IMAGE_GAUNTDOOR4 = aMgr.GetImageThrow("IMAGE_GAUNTDOOR4");
		IMAGE_GAUNTEAGLEGEM = aMgr.GetImageThrow("IMAGE_GAUNTEAGLEGEM");
		IMAGE_GAUNTHIGHSCORE = aMgr.GetImageThrow("IMAGE_GAUNTHIGHSCORE");
		IMAGE_GAUNTJAGUARGEM = aMgr.GetImageThrow("IMAGE_GAUNTJAGUARGEM");
		IMAGE_GAUNTMAINMENUBUTTON = aMgr.GetImageThrow("IMAGE_GAUNTMAINMENUBUTTON");
		IMAGE_GAUNTMAINMENUBUTTON_ALT = aMgr.GetImageThrow("IMAGE_GAUNTMAINMENUBUTTON_ALT");
		IMAGE_GAUNTPLAYBUTTON = aMgr.GetImageThrow("IMAGE_GAUNTPLAYBUTTON");
		IMAGE_GAUNTPLAYBUTTON_ALT = aMgr.GetImageThrow("IMAGE_GAUNTPLAYBUTTON_ALT");
		IMAGE_GAUNTPRACTICEBUTTON = aMgr.GetImageThrow("IMAGE_GAUNTPRACTICEBUTTON");
		IMAGE_GAUNTSCREEN = aMgr.GetImageThrow("IMAGE_GAUNTSCREEN");
		IMAGE_GAUNTSKY = aMgr.GetImageThrow("IMAGE_GAUNTSKY");
		IMAGE_GAUNTSUNGEM = aMgr.GetImageThrow("IMAGE_GAUNTSUNGEM");
		IMAGE_GAUNTSURVIVALBUTTON = aMgr.GetImageThrow("IMAGE_GAUNTSURVIVALBUTTON");
		IMAGE_GAUNTTITLE = aMgr.GetImageThrow("IMAGE_GAUNTTITLE");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// HelpScreen Resources
Image* Sexy::IMAGE_HELP_BACK;

bool Sexy::ExtractHelpScreenResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_HELP_BACK = aMgr.GetImageThrow("IMAGE_HELP_BACK");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Init Resources
Font* Sexy::FONT_DIALOG;
Font* Sexy::FONT_FLOAT;
Font* Sexy::FONT_MAIN10;
Font* Sexy::FONT_MAIN10OUTLINE;
Font* Sexy::FONT_MAIN10OUTLINE2;
Font* Sexy::FONT_MAIN10OUTLINE3;
Image* Sexy::IMAGE_COMMON_BG1;
Image* Sexy::IMAGE_COMMON_BORDER1;
Image* Sexy::IMAGE_CURSOR_DRAGGING;
Image* Sexy::IMAGE_CURSOR_HAND;
Image* Sexy::IMAGE_CURSOR_POINTER;
Image* Sexy::IMAGE_CURSOR_TEXT;
Image* Sexy::IMAGE_LOADERBAR;
Image* Sexy::IMAGE_LOADING_SCREEN;

bool Sexy::ExtractInitResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		FONT_DIALOG = aMgr.GetFontThrow("FONT_DIALOG");
		FONT_FLOAT = aMgr.GetFontThrow("FONT_FLOAT");
		FONT_MAIN10 = aMgr.GetFontThrow("FONT_MAIN10");
		FONT_MAIN10OUTLINE = aMgr.GetFontThrow("FONT_MAIN10OUTLINE");
		FONT_MAIN10OUTLINE2 = aMgr.GetFontThrow("FONT_MAIN10OUTLINE2");
		FONT_MAIN10OUTLINE3 = aMgr.GetFontThrow("FONT_MAIN10OUTLINE3");
		IMAGE_COMMON_BG1 = aMgr.GetImageThrow("IMAGE_COMMON_BG1");
		IMAGE_COMMON_BORDER1 = aMgr.GetImageThrow("IMAGE_COMMON_BORDER1");
		IMAGE_CURSOR_DRAGGING = aMgr.GetImageThrow("IMAGE_CURSOR_DRAGGING");
		IMAGE_CURSOR_HAND = aMgr.GetImageThrow("IMAGE_CURSOR_HAND");
		IMAGE_CURSOR_POINTER = aMgr.GetImageThrow("IMAGE_CURSOR_POINTER");
		IMAGE_CURSOR_TEXT = aMgr.GetImageThrow("IMAGE_CURSOR_TEXT");
		IMAGE_LOADERBAR = aMgr.GetImageThrow("IMAGE_LOADERBAR");
		IMAGE_LOADING_SCREEN = aMgr.GetImageThrow("IMAGE_LOADING_SCREEN");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// LevelsPics Resources
Image* Sexy::IMAGE_levels\blackswirley\blackswirley;
Image* Sexy::IMAGE_levels\claw\claw;
Image* Sexy::IMAGE_levels\coaster\coaster;
Image* Sexy::IMAGE_levels\coaster\tunnel01;
Image* Sexy::IMAGE_levels\coaster\tunnel02;
Image* Sexy::IMAGE_levels\groovefest\groovefest;
Image* Sexy::IMAGE_levels\groovefest\groovefest01;
Image* Sexy::IMAGE_levels\groovefest\groovefest02;
Image* Sexy::IMAGE_levels\groovefest\groovefest03;
Image* Sexy::IMAGE_levels\inversespiral\inversespiral;
Image* Sexy::IMAGE_levels\inversespiral\tunnel;
Image* Sexy::IMAGE_levels\longrange\longrange;
Image* Sexy::IMAGE_levels\loopy\loopy;
Image* Sexy::IMAGE_levels\loopy\tunnel;
Image* Sexy::IMAGE_levels\overunder\overunder;
Image* Sexy::IMAGE_levels\overunder\tunnel01;
Image* Sexy::IMAGE_levels\overunder\tunnel02;
Image* Sexy::IMAGE_levels\riverbed\riverbed;
Image* Sexy::IMAGE_levels\riverbed\riverbed01;
Image* Sexy::IMAGE_levels\riverbed\riverbed02;
Image* Sexy::IMAGE_levels\riverbed\riverbed03;
Image* Sexy::IMAGE_levels\riverbed\riverbed04;
Image* Sexy::IMAGE_levels\riverbed\riverbed05;
Image* Sexy::IMAGE_levels\serpents\quake01;
Image* Sexy::IMAGE_levels\serpents\quake02;
Image* Sexy::IMAGE_levels\serpents\quake03;
Image* Sexy::IMAGE_levels\serpents\quake04;
Image* Sexy::IMAGE_levels\serpents\serpents;
Image* Sexy::IMAGE_levels\serpents\serpentsB;
Image* Sexy::IMAGE_levels\serpents\serpentsM;
Image* Sexy::IMAGE_levels\serpents\serpentsT;
Image* Sexy::IMAGE_levels\snakepit\snakepit;
Image* Sexy::IMAGE_levels\spaceinvaders\spaceinvaders;
Image* Sexy::IMAGE_levels\spaceinvaders\tunnel;
Image* Sexy::IMAGE_levels\spiral\spiral;
Image* Sexy::IMAGE_levels\squaresville\squaresville;
Image* Sexy::IMAGE_levels\targetglyph\targetglyph;
Image* Sexy::IMAGE_levels\tiltspiral\tiltspiral;
Image* Sexy::IMAGE_levels\triangle\triangle;
Image* Sexy::IMAGE_levels\tunnellevel\tunnel1;
Image* Sexy::IMAGE_levels\tunnellevel\tunnel2;
Image* Sexy::IMAGE_levels\tunnellevel\tunnellevel;
Image* Sexy::IMAGE_levels\turnaround\turnaround;
Image* Sexy::IMAGE_levels\underover\left;
Image* Sexy::IMAGE_levels\underover\right;
Image* Sexy::IMAGE_levels\underover\underover;
Image* Sexy::IMAGE_levels\warshak\warshak;

bool Sexy::ExtractLevelsPicsResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_levels\blackswirley\blackswirley = aMgr.GetImageThrow("IMAGE_levels\blackswirley\blackswirley");
		IMAGE_levels\claw\claw = aMgr.GetImageThrow("IMAGE_levels\claw\claw");
		IMAGE_levels\coaster\coaster = aMgr.GetImageThrow("IMAGE_levels\coaster\coaster");
		IMAGE_levels\coaster\tunnel01 = aMgr.GetImageThrow("IMAGE_levels\coaster\tunnel01");
		IMAGE_levels\coaster\tunnel02 = aMgr.GetImageThrow("IMAGE_levels\coaster\tunnel02");
		IMAGE_levels\groovefest\groovefest = aMgr.GetImageThrow("IMAGE_levels\groovefest\groovefest");
		IMAGE_levels\groovefest\groovefest01 = aMgr.GetImageThrow("IMAGE_levels\groovefest\groovefest01");
		IMAGE_levels\groovefest\groovefest02 = aMgr.GetImageThrow("IMAGE_levels\groovefest\groovefest02");
		IMAGE_levels\groovefest\groovefest03 = aMgr.GetImageThrow("IMAGE_levels\groovefest\groovefest03");
		IMAGE_levels\inversespiral\inversespiral = aMgr.GetImageThrow("IMAGE_levels\inversespiral\inversespiral");
		IMAGE_levels\inversespiral\tunnel = aMgr.GetImageThrow("IMAGE_levels\inversespiral\tunnel");
		IMAGE_levels\longrange\longrange = aMgr.GetImageThrow("IMAGE_levels\longrange\longrange");
		IMAGE_levels\loopy\loopy = aMgr.GetImageThrow("IMAGE_levels\loopy\loopy");
		IMAGE_levels\loopy\tunnel = aMgr.GetImageThrow("IMAGE_levels\loopy\tunnel");
		IMAGE_levels\overunder\overunder = aMgr.GetImageThrow("IMAGE_levels\overunder\overunder");
		IMAGE_levels\overunder\tunnel01 = aMgr.GetImageThrow("IMAGE_levels\overunder\tunnel01");
		IMAGE_levels\overunder\tunnel02 = aMgr.GetImageThrow("IMAGE_levels\overunder\tunnel02");
		IMAGE_levels\riverbed\riverbed = aMgr.GetImageThrow("IMAGE_levels\riverbed\riverbed");
		IMAGE_levels\riverbed\riverbed01 = aMgr.GetImageThrow("IMAGE_levels\riverbed\riverbed01");
		IMAGE_levels\riverbed\riverbed02 = aMgr.GetImageThrow("IMAGE_levels\riverbed\riverbed02");
		IMAGE_levels\riverbed\riverbed03 = aMgr.GetImageThrow("IMAGE_levels\riverbed\riverbed03");
		IMAGE_levels\riverbed\riverbed04 = aMgr.GetImageThrow("IMAGE_levels\riverbed\riverbed04");
		IMAGE_levels\riverbed\riverbed05 = aMgr.GetImageThrow("IMAGE_levels\riverbed\riverbed05");
		IMAGE_levels\serpents\quake01 = aMgr.GetImageThrow("IMAGE_levels\serpents\quake01");
		IMAGE_levels\serpents\quake02 = aMgr.GetImageThrow("IMAGE_levels\serpents\quake02");
		IMAGE_levels\serpents\quake03 = aMgr.GetImageThrow("IMAGE_levels\serpents\quake03");
		IMAGE_levels\serpents\quake04 = aMgr.GetImageThrow("IMAGE_levels\serpents\quake04");
		IMAGE_levels\serpents\serpents = aMgr.GetImageThrow("IMAGE_levels\serpents\serpents");
		IMAGE_levels\serpents\serpentsB = aMgr.GetImageThrow("IMAGE_levels\serpents\serpentsB");
		IMAGE_levels\serpents\serpentsM = aMgr.GetImageThrow("IMAGE_levels\serpents\serpentsM");
		IMAGE_levels\serpents\serpentsT = aMgr.GetImageThrow("IMAGE_levels\serpents\serpentsT");
		IMAGE_levels\snakepit\snakepit = aMgr.GetImageThrow("IMAGE_levels\snakepit\snakepit");
		IMAGE_levels\spaceinvaders\spaceinvaders = aMgr.GetImageThrow("IMAGE_levels\spaceinvaders\spaceinvaders");
		IMAGE_levels\spaceinvaders\tunnel = aMgr.GetImageThrow("IMAGE_levels\spaceinvaders\tunnel");
		IMAGE_levels\spiral\spiral = aMgr.GetImageThrow("IMAGE_levels\spiral\spiral");
		IMAGE_levels\squaresville\squaresville = aMgr.GetImageThrow("IMAGE_levels\squaresville\squaresville");
		IMAGE_levels\targetglyph\targetglyph = aMgr.GetImageThrow("IMAGE_levels\targetglyph\targetglyph");
		IMAGE_levels\tiltspiral\tiltspiral = aMgr.GetImageThrow("IMAGE_levels\tiltspiral\tiltspiral");
		IMAGE_levels\triangle\triangle = aMgr.GetImageThrow("IMAGE_levels\triangle\triangle");
		IMAGE_levels\tunnellevel\tunnel1 = aMgr.GetImageThrow("IMAGE_levels\tunnellevel\tunnel1");
		IMAGE_levels\tunnellevel\tunnel2 = aMgr.GetImageThrow("IMAGE_levels\tunnellevel\tunnel2");
		IMAGE_levels\tunnellevel\tunnellevel = aMgr.GetImageThrow("IMAGE_levels\tunnellevel\tunnellevel");
		IMAGE_levels\turnaround\turnaround = aMgr.GetImageThrow("IMAGE_levels\turnaround\turnaround");
		IMAGE_levels\underover\left = aMgr.GetImageThrow("IMAGE_levels\underover\left");
		IMAGE_levels\underover\right = aMgr.GetImageThrow("IMAGE_levels\underover\right");
		IMAGE_levels\underover\underover = aMgr.GetImageThrow("IMAGE_levels\underover\underover");
		IMAGE_levels\warshak\warshak = aMgr.GetImageThrow("IMAGE_levels\warshak\warshak");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// LoadingThread Resources
Font* Sexy::FONT_BROWNTITLE;
Font* Sexy::FONT_HUGE;
Font* Sexy::FONT_MAIN12;
Font* Sexy::FONT_MAIN8;
Font* Sexy::FONT_MAIN8OUTLINE;
Font* Sexy::FONT_MONODIGIT;
Image* Sexy::IMAGE_ACCURACY_LIGHT;
Image* Sexy::IMAGE_BACKWARDS_LIGHT;
Image* Sexy::IMAGE_BALL_ALPHA;
Image* Sexy::IMAGE_BALL_SHADOW;
Image* Sexy::IMAGE_BLUE_ACCURACY;
Image* Sexy::IMAGE_BLUE_BACKWARDS;
Image* Sexy::IMAGE_BLUE_BALL;
Image* Sexy::IMAGE_BLUE_BOMB;
Image* Sexy::IMAGE_BLUE_LIGHT;
Image* Sexy::IMAGE_BLUE_SLOW;
Image* Sexy::IMAGE_COIN;
Image* Sexy::IMAGE_DIALOG_CHECKBOX;
Image* Sexy::IMAGE_DIALOG_CHECKBOXCAP;
Image* Sexy::IMAGE_DIALOG_CHECKBOXLINE;
Image* Sexy::IMAGE_EXPLOSION;
Image* Sexy::IMAGE_EYE_BLINK;
Image* Sexy::IMAGE_FROG_LIVES;
Image* Sexy::IMAGE_GOD_HEAD;
Image* Sexy::IMAGE_GRAY_EXPLOSION;
Image* Sexy::IMAGE_GREEN_ACCURACY;
Image* Sexy::IMAGE_GREEN_BACKWARDS;
Image* Sexy::IMAGE_GREEN_BALL;
Image* Sexy::IMAGE_GREEN_BOMB;
Image* Sexy::IMAGE_GREEN_LIGHT;
Image* Sexy::IMAGE_GREEN_SLOW;
Image* Sexy::IMAGE_HOLE;
Image* Sexy::IMAGE_HOLE_COVER;
Image* Sexy::IMAGE_MENU_BAR;
Image* Sexy::IMAGE_NEBULA;
Image* Sexy::IMAGE_NEXT_BALL;
Image* Sexy::IMAGE_PURPLE_ACCURACY;
Image* Sexy::IMAGE_PURPLE_BACKWARDS;
Image* Sexy::IMAGE_PURPLE_BALL;
Image* Sexy::IMAGE_PURPLE_BOMB;
Image* Sexy::IMAGE_PURPLE_LIGHT;
Image* Sexy::IMAGE_PURPLE_SLOW;
Image* Sexy::IMAGE_RED_ACCURACY;
Image* Sexy::IMAGE_RED_BACKWARDS;
Image* Sexy::IMAGE_RED_BALL;
Image* Sexy::IMAGE_RED_BOMB;
Image* Sexy::IMAGE_RED_LIGHT;
Image* Sexy::IMAGE_RED_SLOW;
Image* Sexy::IMAGE_RIGHT_MOUSE;
Image* Sexy::IMAGE_SHOOTER_BOTTOM;
Image* Sexy::IMAGE_SHOOTER_TONGUE;
Image* Sexy::IMAGE_SHOOTER_TOP;
Image* Sexy::IMAGE_SLIDER_THUMB;
Image* Sexy::IMAGE_SLIDER_TRACK;
Image* Sexy::IMAGE_SLOW_LIGHT;
Image* Sexy::IMAGE_SPARKLE;
Image* Sexy::IMAGE_SUNGLOW;
Image* Sexy::IMAGE_UFO;
Image* Sexy::IMAGE_UPDATE_BAR;
Image* Sexy::IMAGE_WHITE_ACCURACY;
Image* Sexy::IMAGE_WHITE_BACKWARDS;
Image* Sexy::IMAGE_WHITE_BALL;
Image* Sexy::IMAGE_WHITE_BOMB;
Image* Sexy::IMAGE_WHITE_LIGHT;
Image* Sexy::IMAGE_WHITE_SLOW;
Image* Sexy::IMAGE_YELLOW_ACCURACY;
Image* Sexy::IMAGE_YELLOW_BACKWARDS;
Image* Sexy::IMAGE_YELLOW_BALL;
Image* Sexy::IMAGE_YELLOW_BOMB;
Image* Sexy::IMAGE_YELLOW_LIGHT;
Image* Sexy::IMAGE_YELLOW_SLOW;
Image* Sexy::IMAGE_ZUMA_BAR;
Image* Sexy::IMAGE_ZUMA_BAR_DONE;
int Sexy::SOUND_ACCURACY_BALL;
int Sexy::SOUND_BACKWARDS_BALL;
int Sexy::SOUND_BALLCLICK1;
int Sexy::SOUND_BALLCLICK2;
int Sexy::SOUND_BALLDESTROYED1;
int Sexy::SOUND_BALLDESTROYED2;
int Sexy::SOUND_BALLDESTROYED3;
int Sexy::SOUND_BALLDESTROYED4;
int Sexy::SOUND_BALLDESTROYED5;
int Sexy::SOUND_BALLFIRE;
int Sexy::SOUND_BAR_FULL;
int Sexy::SOUND_BONUS_EXPLOSION;
int Sexy::SOUND_BUTTON2;
int Sexy::SOUND_CHAIN_BONUS;
int Sexy::SOUND_CHORAL1;
int Sexy::SOUND_COMBO;
int Sexy::SOUND_EARTHQUAKE;
int Sexy::SOUND_EXPLODE;
int Sexy::SOUND_EXTRA_LIFE;
int Sexy::SOUND_FROGLAND;
int Sexy::SOUND_GAME_OVER;
int Sexy::SOUND_GAME_START;
int Sexy::SOUND_GAP_BONUS;
int Sexy::SOUND_JEWEL_APPEAR;
int Sexy::SOUND_JEWEL_DISAPPEAR;
int Sexy::SOUND_JEWEL_HIT;
int Sexy::SOUND_LEVEL_UP;
int Sexy::SOUND_LOST_LIFE;
int Sexy::SOUND_POP;
int Sexy::SOUND_ROLLING;
int Sexy::SOUND_SLOWDOWN_BALL;
int Sexy::SOUND_STAGE_COMPLETE;
int Sexy::SOUND_TEMPLE_COMPLETE;
int Sexy::SOUND_TRAIL_LIGHT;
int Sexy::SOUND_TRAIL_LIGHT_END;
int Sexy::SOUND_UFO;
int Sexy::SOUND_WARNING;

bool Sexy::ExtractLoadingThreadResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		FONT_BROWNTITLE = aMgr.GetFontThrow("FONT_BROWNTITLE");
		FONT_HUGE = aMgr.GetFontThrow("FONT_HUGE");
		FONT_MAIN12 = aMgr.GetFontThrow("FONT_MAIN12");
		FONT_MAIN8 = aMgr.GetFontThrow("FONT_MAIN8");
		FONT_MAIN8OUTLINE = aMgr.GetFontThrow("FONT_MAIN8OUTLINE");
		FONT_MONODIGIT = aMgr.GetFontThrow("FONT_MONODIGIT");
		IMAGE_ACCURACY_LIGHT = aMgr.GetImageThrow("IMAGE_ACCURACY_LIGHT");
		IMAGE_BACKWARDS_LIGHT = aMgr.GetImageThrow("IMAGE_BACKWARDS_LIGHT");
		IMAGE_BALL_ALPHA = aMgr.GetImageThrow("IMAGE_BALL_ALPHA");
		IMAGE_BALL_SHADOW = aMgr.GetImageThrow("IMAGE_BALL_SHADOW");
		IMAGE_BLUE_ACCURACY = aMgr.GetImageThrow("IMAGE_BLUE_ACCURACY");
		IMAGE_BLUE_BACKWARDS = aMgr.GetImageThrow("IMAGE_BLUE_BACKWARDS");
		IMAGE_BLUE_BALL = aMgr.GetImageThrow("IMAGE_BLUE_BALL");
		IMAGE_BLUE_BOMB = aMgr.GetImageThrow("IMAGE_BLUE_BOMB");
		IMAGE_BLUE_LIGHT = aMgr.GetImageThrow("IMAGE_BLUE_LIGHT");
		IMAGE_BLUE_SLOW = aMgr.GetImageThrow("IMAGE_BLUE_SLOW");
		IMAGE_COIN = aMgr.GetImageThrow("IMAGE_COIN");
		IMAGE_DIALOG_CHECKBOX = aMgr.GetImageThrow("IMAGE_DIALOG_CHECKBOX");
		IMAGE_DIALOG_CHECKBOXCAP = aMgr.GetImageThrow("IMAGE_DIALOG_CHECKBOXCAP");
		IMAGE_DIALOG_CHECKBOXLINE = aMgr.GetImageThrow("IMAGE_DIALOG_CHECKBOXLINE");
		IMAGE_EXPLOSION = aMgr.GetImageThrow("IMAGE_EXPLOSION");
		IMAGE_EYE_BLINK = aMgr.GetImageThrow("IMAGE_EYE_BLINK");
		IMAGE_FROG_LIVES = aMgr.GetImageThrow("IMAGE_FROG_LIVES");
		IMAGE_GOD_HEAD = aMgr.GetImageThrow("IMAGE_GOD_HEAD");
		IMAGE_GRAY_EXPLOSION = aMgr.GetImageThrow("IMAGE_GRAY_EXPLOSION");
		IMAGE_GREEN_ACCURACY = aMgr.GetImageThrow("IMAGE_GREEN_ACCURACY");
		IMAGE_GREEN_BACKWARDS = aMgr.GetImageThrow("IMAGE_GREEN_BACKWARDS");
		IMAGE_GREEN_BALL = aMgr.GetImageThrow("IMAGE_GREEN_BALL");
		IMAGE_GREEN_BOMB = aMgr.GetImageThrow("IMAGE_GREEN_BOMB");
		IMAGE_GREEN_LIGHT = aMgr.GetImageThrow("IMAGE_GREEN_LIGHT");
		IMAGE_GREEN_SLOW = aMgr.GetImageThrow("IMAGE_GREEN_SLOW");
		IMAGE_HOLE = aMgr.GetImageThrow("IMAGE_HOLE");
		IMAGE_HOLE_COVER = aMgr.GetImageThrow("IMAGE_HOLE_COVER");
		IMAGE_MENU_BAR = aMgr.GetImageThrow("IMAGE_MENU_BAR");
		IMAGE_NEBULA = aMgr.GetImageThrow("IMAGE_NEBULA");
		IMAGE_NEXT_BALL = aMgr.GetImageThrow("IMAGE_NEXT_BALL");
		IMAGE_PURPLE_ACCURACY = aMgr.GetImageThrow("IMAGE_PURPLE_ACCURACY");
		IMAGE_PURPLE_BACKWARDS = aMgr.GetImageThrow("IMAGE_PURPLE_BACKWARDS");
		IMAGE_PURPLE_BALL = aMgr.GetImageThrow("IMAGE_PURPLE_BALL");
		IMAGE_PURPLE_BOMB = aMgr.GetImageThrow("IMAGE_PURPLE_BOMB");
		IMAGE_PURPLE_LIGHT = aMgr.GetImageThrow("IMAGE_PURPLE_LIGHT");
		IMAGE_PURPLE_SLOW = aMgr.GetImageThrow("IMAGE_PURPLE_SLOW");
		IMAGE_RED_ACCURACY = aMgr.GetImageThrow("IMAGE_RED_ACCURACY");
		IMAGE_RED_BACKWARDS = aMgr.GetImageThrow("IMAGE_RED_BACKWARDS");
		IMAGE_RED_BALL = aMgr.GetImageThrow("IMAGE_RED_BALL");
		IMAGE_RED_BOMB = aMgr.GetImageThrow("IMAGE_RED_BOMB");
		IMAGE_RED_LIGHT = aMgr.GetImageThrow("IMAGE_RED_LIGHT");
		IMAGE_RED_SLOW = aMgr.GetImageThrow("IMAGE_RED_SLOW");
		IMAGE_RIGHT_MOUSE = aMgr.GetImageThrow("IMAGE_RIGHT_MOUSE");
		IMAGE_SHOOTER_BOTTOM = aMgr.GetImageThrow("IMAGE_SHOOTER_BOTTOM");
		IMAGE_SHOOTER_TONGUE = aMgr.GetImageThrow("IMAGE_SHOOTER_TONGUE");
		IMAGE_SHOOTER_TOP = aMgr.GetImageThrow("IMAGE_SHOOTER_TOP");
		IMAGE_SLIDER_THUMB = aMgr.GetImageThrow("IMAGE_SLIDER_THUMB");
		IMAGE_SLIDER_TRACK = aMgr.GetImageThrow("IMAGE_SLIDER_TRACK");
		IMAGE_SLOW_LIGHT = aMgr.GetImageThrow("IMAGE_SLOW_LIGHT");
		IMAGE_SPARKLE = aMgr.GetImageThrow("IMAGE_SPARKLE");
		IMAGE_SUNGLOW = aMgr.GetImageThrow("IMAGE_SUNGLOW");
		IMAGE_UFO = aMgr.GetImageThrow("IMAGE_UFO");
		IMAGE_UPDATE_BAR = aMgr.GetImageThrow("IMAGE_UPDATE_BAR");
		IMAGE_WHITE_ACCURACY = aMgr.GetImageThrow("IMAGE_WHITE_ACCURACY");
		IMAGE_WHITE_BACKWARDS = aMgr.GetImageThrow("IMAGE_WHITE_BACKWARDS");
		IMAGE_WHITE_BALL = aMgr.GetImageThrow("IMAGE_WHITE_BALL");
		IMAGE_WHITE_BOMB = aMgr.GetImageThrow("IMAGE_WHITE_BOMB");
		IMAGE_WHITE_LIGHT = aMgr.GetImageThrow("IMAGE_WHITE_LIGHT");
		IMAGE_WHITE_SLOW = aMgr.GetImageThrow("IMAGE_WHITE_SLOW");
		IMAGE_YELLOW_ACCURACY = aMgr.GetImageThrow("IMAGE_YELLOW_ACCURACY");
		IMAGE_YELLOW_BACKWARDS = aMgr.GetImageThrow("IMAGE_YELLOW_BACKWARDS");
		IMAGE_YELLOW_BALL = aMgr.GetImageThrow("IMAGE_YELLOW_BALL");
		IMAGE_YELLOW_BOMB = aMgr.GetImageThrow("IMAGE_YELLOW_BOMB");
		IMAGE_YELLOW_LIGHT = aMgr.GetImageThrow("IMAGE_YELLOW_LIGHT");
		IMAGE_YELLOW_SLOW = aMgr.GetImageThrow("IMAGE_YELLOW_SLOW");
		IMAGE_ZUMA_BAR = aMgr.GetImageThrow("IMAGE_ZUMA_BAR");
		IMAGE_ZUMA_BAR_DONE = aMgr.GetImageThrow("IMAGE_ZUMA_BAR_DONE");
		SOUND_ACCURACY_BALL = aMgr.GetSoundThrow("SOUND_ACCURACY_BALL");
		SOUND_BACKWARDS_BALL = aMgr.GetSoundThrow("SOUND_BACKWARDS_BALL");
		SOUND_BALLCLICK1 = aMgr.GetSoundThrow("SOUND_BALLCLICK1");
		SOUND_BALLCLICK2 = aMgr.GetSoundThrow("SOUND_BALLCLICK2");
		SOUND_BALLDESTROYED1 = aMgr.GetSoundThrow("SOUND_BALLDESTROYED1");
		SOUND_BALLDESTROYED2 = aMgr.GetSoundThrow("SOUND_BALLDESTROYED2");
		SOUND_BALLDESTROYED3 = aMgr.GetSoundThrow("SOUND_BALLDESTROYED3");
		SOUND_BALLDESTROYED4 = aMgr.GetSoundThrow("SOUND_BALLDESTROYED4");
		SOUND_BALLDESTROYED5 = aMgr.GetSoundThrow("SOUND_BALLDESTROYED5");
		SOUND_BALLFIRE = aMgr.GetSoundThrow("SOUND_BALLFIRE");
		SOUND_BAR_FULL = aMgr.GetSoundThrow("SOUND_BAR_FULL");
		SOUND_BONUS_EXPLOSION = aMgr.GetSoundThrow("SOUND_BONUS_EXPLOSION");
		SOUND_BUTTON2 = aMgr.GetSoundThrow("SOUND_BUTTON2");
		SOUND_CHAIN_BONUS = aMgr.GetSoundThrow("SOUND_CHAIN_BONUS");
		SOUND_CHORAL1 = aMgr.GetSoundThrow("SOUND_CHORAL1");
		SOUND_COMBO = aMgr.GetSoundThrow("SOUND_COMBO");
		SOUND_EARTHQUAKE = aMgr.GetSoundThrow("SOUND_EARTHQUAKE");
		SOUND_EXPLODE = aMgr.GetSoundThrow("SOUND_EXPLODE");
		SOUND_EXTRA_LIFE = aMgr.GetSoundThrow("SOUND_EXTRA_LIFE");
		SOUND_FROGLAND = aMgr.GetSoundThrow("SOUND_FROGLAND");
		SOUND_GAME_OVER = aMgr.GetSoundThrow("SOUND_GAME_OVER");
		SOUND_GAME_START = aMgr.GetSoundThrow("SOUND_GAME_START");
		SOUND_GAP_BONUS = aMgr.GetSoundThrow("SOUND_GAP_BONUS");
		SOUND_JEWEL_APPEAR = aMgr.GetSoundThrow("SOUND_JEWEL_APPEAR");
		SOUND_JEWEL_DISAPPEAR = aMgr.GetSoundThrow("SOUND_JEWEL_DISAPPEAR");
		SOUND_JEWEL_HIT = aMgr.GetSoundThrow("SOUND_JEWEL_HIT");
		SOUND_LEVEL_UP = aMgr.GetSoundThrow("SOUND_LEVEL_UP");
		SOUND_LOST_LIFE = aMgr.GetSoundThrow("SOUND_LOST_LIFE");
		SOUND_POP = aMgr.GetSoundThrow("SOUND_POP");
		SOUND_ROLLING = aMgr.GetSoundThrow("SOUND_ROLLING");
		SOUND_SLOWDOWN_BALL = aMgr.GetSoundThrow("SOUND_SLOWDOWN_BALL");
		SOUND_STAGE_COMPLETE = aMgr.GetSoundThrow("SOUND_STAGE_COMPLETE");
		SOUND_TEMPLE_COMPLETE = aMgr.GetSoundThrow("SOUND_TEMPLE_COMPLETE");
		SOUND_TRAIL_LIGHT = aMgr.GetSoundThrow("SOUND_TRAIL_LIGHT");
		SOUND_TRAIL_LIGHT_END = aMgr.GetSoundThrow("SOUND_TRAIL_LIGHT_END");
		SOUND_UFO = aMgr.GetSoundThrow("SOUND_UFO");
		SOUND_WARNING = aMgr.GetSoundThrow("SOUND_WARNING");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// MainMenu Resources
Image* Sexy::IMAGE_MM_ACHIEVEMENTS;
Image* Sexy::IMAGE_MM_ADVENTURE;
Image* Sexy::IMAGE_MM_BACK;
Image* Sexy::IMAGE_MM_EYELEFT;
Image* Sexy::IMAGE_MM_EYEMASK;
Image* Sexy::IMAGE_MM_EYERIGHT;
Image* Sexy::IMAGE_MM_GAUNTLET;
Image* Sexy::IMAGE_MM_HAT;
Image* Sexy::IMAGE_MM_LEADERBOARD;
Image* Sexy::IMAGE_MM_OPTIONS;
Image* Sexy::IMAGE_MM_QUIT;
Image* Sexy::IMAGE_MM_SKY;
Image* Sexy::IMAGE_MM_SUN;
Image* Sexy::IMAGE_MM_UNLOCK;

bool Sexy::ExtractMainMenuResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_MM_ACHIEVEMENTS = aMgr.GetImageThrow("IMAGE_MM_ACHIEVEMENTS");
		IMAGE_MM_ADVENTURE = aMgr.GetImageThrow("IMAGE_MM_ADVENTURE");
		IMAGE_MM_BACK = aMgr.GetImageThrow("IMAGE_MM_BACK");
		IMAGE_MM_EYELEFT = aMgr.GetImageThrow("IMAGE_MM_EYELEFT");
		IMAGE_MM_EYEMASK = aMgr.GetImageThrow("IMAGE_MM_EYEMASK");
		IMAGE_MM_EYERIGHT = aMgr.GetImageThrow("IMAGE_MM_EYERIGHT");
		IMAGE_MM_GAUNTLET = aMgr.GetImageThrow("IMAGE_MM_GAUNTLET");
		IMAGE_MM_HAT = aMgr.GetImageThrow("IMAGE_MM_HAT");
		IMAGE_MM_LEADERBOARD = aMgr.GetImageThrow("IMAGE_MM_LEADERBOARD");
		IMAGE_MM_OPTIONS = aMgr.GetImageThrow("IMAGE_MM_OPTIONS");
		IMAGE_MM_QUIT = aMgr.GetImageThrow("IMAGE_MM_QUIT");
		IMAGE_MM_SKY = aMgr.GetImageThrow("IMAGE_MM_SKY");
		IMAGE_MM_SUN = aMgr.GetImageThrow("IMAGE_MM_SUN");
		IMAGE_MM_UNLOCK = aMgr.GetImageThrow("IMAGE_MM_UNLOCK");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// MoreGames Resources
Image* Sexy::IMAGE_MOREGAMES_SCREEN;

bool Sexy::ExtractMoreGamesResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_MOREGAMES_SCREEN = aMgr.GetImageThrow("IMAGE_MOREGAMES_SCREEN");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Register Resources
Font* Sexy::FONT_PLAIN;
Font* Sexy::FONT_TITLE;
Image* Sexy::IMAGE_DIALOG_BACK;
Image* Sexy::IMAGE_DIALOG_BUTTON;
int Sexy::SOUND_BUTTON1;

bool Sexy::ExtractRegisterResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		FONT_PLAIN = aMgr.GetFontThrow("FONT_PLAIN");
		FONT_TITLE = aMgr.GetFontThrow("FONT_TITLE");
		IMAGE_DIALOG_BACK = aMgr.GetImageThrow("IMAGE_DIALOG_BACK");
		IMAGE_DIALOG_BUTTON = aMgr.GetImageThrow("IMAGE_DIALOG_BUTTON");
		SOUND_BUTTON1 = aMgr.GetSoundThrow("SOUND_BUTTON1");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// XRON Resources
Image* Sexy::IMAGE_ACHIEVEMENT1;
Image* Sexy::IMAGE_ACHIEVEMENT10;
Image* Sexy::IMAGE_ACHIEVEMENT11;
Image* Sexy::IMAGE_ACHIEVEMENT12;
Image* Sexy::IMAGE_ACHIEVEMENT2;
Image* Sexy::IMAGE_ACHIEVEMENT3;
Image* Sexy::IMAGE_ACHIEVEMENT4;
Image* Sexy::IMAGE_ACHIEVEMENT5;
Image* Sexy::IMAGE_ACHIEVEMENT6;
Image* Sexy::IMAGE_ACHIEVEMENT7;
Image* Sexy::IMAGE_ACHIEVEMENT8;
Image* Sexy::IMAGE_ACHIEVEMENT9;
Image* Sexy::IMAGE_A_BUTTON;
Image* Sexy::IMAGE_B_BUTTON;
Image* Sexy::IMAGE_DPAD_DOWN;
Image* Sexy::IMAGE_DPAD_LEFT;
Image* Sexy::IMAGE_DPAD_RIGHT;
Image* Sexy::IMAGE_DPAD_UP;
Image* Sexy::IMAGE_HAPPYENDING;
Image* Sexy::IMAGE_JOYSTICK;
Image* Sexy::IMAGE_RANDOM;
Image* Sexy::IMAGE_UPSELL1;
Image* Sexy::IMAGE_UPSELL2;
Image* Sexy::IMAGE_X_BUTTON;
Image* Sexy::IMAGE_Y_BUTTON;

bool Sexy::ExtractXRONResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_ACHIEVEMENT1 = aMgr.GetImageThrow("IMAGE_ACHIEVEMENT1");
		IMAGE_ACHIEVEMENT10 = aMgr.GetImageThrow("IMAGE_ACHIEVEMENT10");
		IMAGE_ACHIEVEMENT11 = aMgr.GetImageThrow("IMAGE_ACHIEVEMENT11");
		IMAGE_ACHIEVEMENT12 = aMgr.GetImageThrow("IMAGE_ACHIEVEMENT12");
		IMAGE_ACHIEVEMENT2 = aMgr.GetImageThrow("IMAGE_ACHIEVEMENT2");
		IMAGE_ACHIEVEMENT3 = aMgr.GetImageThrow("IMAGE_ACHIEVEMENT3");
		IMAGE_ACHIEVEMENT4 = aMgr.GetImageThrow("IMAGE_ACHIEVEMENT4");
		IMAGE_ACHIEVEMENT5 = aMgr.GetImageThrow("IMAGE_ACHIEVEMENT5");
		IMAGE_ACHIEVEMENT6 = aMgr.GetImageThrow("IMAGE_ACHIEVEMENT6");
		IMAGE_ACHIEVEMENT7 = aMgr.GetImageThrow("IMAGE_ACHIEVEMENT7");
		IMAGE_ACHIEVEMENT8 = aMgr.GetImageThrow("IMAGE_ACHIEVEMENT8");
		IMAGE_ACHIEVEMENT9 = aMgr.GetImageThrow("IMAGE_ACHIEVEMENT9");
		IMAGE_A_BUTTON = aMgr.GetImageThrow("IMAGE_A_BUTTON");
		IMAGE_B_BUTTON = aMgr.GetImageThrow("IMAGE_B_BUTTON");
		IMAGE_DPAD_DOWN = aMgr.GetImageThrow("IMAGE_DPAD_DOWN");
		IMAGE_DPAD_LEFT = aMgr.GetImageThrow("IMAGE_DPAD_LEFT");
		IMAGE_DPAD_RIGHT = aMgr.GetImageThrow("IMAGE_DPAD_RIGHT");
		IMAGE_DPAD_UP = aMgr.GetImageThrow("IMAGE_DPAD_UP");
		IMAGE_HAPPYENDING = aMgr.GetImageThrow("IMAGE_HAPPYENDING");
		IMAGE_JOYSTICK = aMgr.GetImageThrow("IMAGE_JOYSTICK");
		IMAGE_RANDOM = aMgr.GetImageThrow("IMAGE_RANDOM");
		IMAGE_UPSELL1 = aMgr.GetImageThrow("IMAGE_UPSELL1");
		IMAGE_UPSELL2 = aMgr.GetImageThrow("IMAGE_UPSELL2");
		IMAGE_X_BUTTON = aMgr.GetImageThrow("IMAGE_X_BUTTON");
		IMAGE_Y_BUTTON = aMgr.GetImageThrow("IMAGE_Y_BUTTON");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

static void* gResources[] =
{
	&IMAGE_LOADING_SCREEN,
	&IMAGE_LOADERBAR,
	&IMAGE_CURSOR_POINTER,
	&IMAGE_CURSOR_HAND,
	&IMAGE_CURSOR_DRAGGING,
	&IMAGE_CURSOR_TEXT,
	&IMAGE_COMMON_BG1,
	&IMAGE_COMMON_BORDER1,
	&FONT_MAIN10,
	&FONT_DIALOG,
	&FONT_MAIN10OUTLINE,
	&FONT_MAIN10OUTLINE2,
	&FONT_MAIN10OUTLINE3,
	&FONT_FLOAT,
	&IMAGE_DIALOG_BUTTON,
	&IMAGE_DIALOG_BACK,
	&FONT_TITLE,
	&FONT_PLAIN,
	&SOUND_BUTTON1,
	&IMAGE_MOREGAMES_SCREEN,
	&IMAGE_HELP_BACK,
	&IMAGE_MM_BACK,
	&IMAGE_MM_ADVENTURE,
	&IMAGE_MM_GAUNTLET,
	&IMAGE_MM_LEADERBOARD,
	&IMAGE_MM_ACHIEVEMENTS,
	&IMAGE_MM_OPTIONS,
	&IMAGE_MM_UNLOCK,
	&IMAGE_MM_QUIT,
	&IMAGE_MM_EYELEFT,
	&IMAGE_MM_EYERIGHT,
	&IMAGE_MM_EYEMASK,
	&IMAGE_MM_SUN,
	&IMAGE_MM_SKY,
	&IMAGE_MM_HAT,
	&IMAGE_ADVSKY,
	&IMAGE_ADVBACK,
	&IMAGE_ADVMIDDLE,
	&IMAGE_ADVTEMPLE1,
	&IMAGE_ADVTEMPLE2,
	&IMAGE_ADVTEMPLE3,
	&IMAGE_ADVTEMPLE4,
	&IMAGE_ADVTEMPLE2V,
	&IMAGE_ADVTEMPLE3V,
	&IMAGE_ADVDOOR1A,
	&IMAGE_ADVDOOR1B,
	&IMAGE_ADVDOOR1C,
	&IMAGE_ADVDOOR2A,
	&IMAGE_ADVDOOR2B,
	&IMAGE_ADVDOOR2C,
	&IMAGE_ADVDOOR3A,
	&IMAGE_ADVDOOR3B,
	&IMAGE_ADVDOOR3C,
	&IMAGE_ADVDOOR4A,
	&IMAGE_ADVDOOR4B,
	&IMAGE_ADVDOOR4C,
	&IMAGE_ADVMAINMENUBUTTON,
	&IMAGE_ADVPLAYBUTTON,
	&IMAGE_ADVMAINMENUBUTTON_ALT,
	&IMAGE_ADVPLAYBUTTON_ALT,
	&IMAGE_ADVTITLE,
	&IMAGE_ADVHIGHSCORE,
	&IMAGE_GAUNTSCREEN,
	&IMAGE_GAUNTSKY,
	&IMAGE_GAUNTDOOR1,
	&IMAGE_GAUNTDOOR2,
	&IMAGE_GAUNTDOOR3,
	&IMAGE_GAUNTDOOR4,
	&IMAGE_GAUNTMAINMENUBUTTON,
	&IMAGE_GAUNTPLAYBUTTON,
	&IMAGE_GAUNTMAINMENUBUTTON_ALT,
	&IMAGE_GAUNTPLAYBUTTON_ALT,
	&IMAGE_GAUNTEAGLEGEM,
	&IMAGE_GAUNTJAGUARGEM,
	&IMAGE_GAUNTSUNGEM,
	&IMAGE_GAUNTTITLE,
	&IMAGE_GAUNTHIGHSCORE,
	&IMAGE_GAUNTPRACTICEBUTTON,
	&IMAGE_GAUNTSURVIVALBUTTON,
	&IMAGE_SUNGLOW,
	&IMAGE_BLUE_BALL,
	&IMAGE_YELLOW_BALL,
	&IMAGE_RED_BALL,
	&IMAGE_GREEN_BALL,
	&IMAGE_PURPLE_BALL,
	&IMAGE_WHITE_BALL,
	&IMAGE_NEXT_BALL,
	&IMAGE_BALL_ALPHA,
	&IMAGE_BALL_SHADOW,
	&IMAGE_BLUE_ACCURACY,
	&IMAGE_YELLOW_ACCURACY,
	&IMAGE_RED_ACCURACY,
	&IMAGE_GREEN_ACCURACY,
	&IMAGE_PURPLE_ACCURACY,
	&IMAGE_WHITE_ACCURACY,
	&IMAGE_BLUE_BACKWARDS,
	&IMAGE_YELLOW_BACKWARDS,
	&IMAGE_RED_BACKWARDS,
	&IMAGE_GREEN_BACKWARDS,
	&IMAGE_PURPLE_BACKWARDS,
	&IMAGE_WHITE_BACKWARDS,
	&IMAGE_BLUE_SLOW,
	&IMAGE_YELLOW_SLOW,
	&IMAGE_RED_SLOW,
	&IMAGE_GREEN_SLOW,
	&IMAGE_PURPLE_SLOW,
	&IMAGE_WHITE_SLOW,
	&IMAGE_GRAY_EXPLOSION,
	&IMAGE_EXPLOSION,
	&IMAGE_BLUE_BOMB,
	&IMAGE_YELLOW_BOMB,
	&IMAGE_RED_BOMB,
	&IMAGE_GREEN_BOMB,
	&IMAGE_PURPLE_BOMB,
	&IMAGE_WHITE_BOMB,
	&IMAGE_BLUE_LIGHT,
	&IMAGE_YELLOW_LIGHT,
	&IMAGE_RED_LIGHT,
	&IMAGE_GREEN_LIGHT,
	&IMAGE_PURPLE_LIGHT,
	&IMAGE_WHITE_LIGHT,
	&IMAGE_BACKWARDS_LIGHT,
	&IMAGE_ACCURACY_LIGHT,
	&IMAGE_SLOW_LIGHT,
	&IMAGE_SPARKLE,
	&IMAGE_SHOOTER_BOTTOM,
	&IMAGE_SHOOTER_TOP,
	&IMAGE_SHOOTER_TONGUE,
	&IMAGE_EYE_BLINK,
	&IMAGE_DIALOG_CHECKBOX,
	&IMAGE_DIALOG_CHECKBOXCAP,
	&IMAGE_DIALOG_CHECKBOXLINE,
	&IMAGE_SLIDER_TRACK,
	&IMAGE_SLIDER_THUMB,
	&IMAGE_UPDATE_BAR,
	&IMAGE_GOD_HEAD,
	&IMAGE_HOLE,
	&IMAGE_HOLE_COVER,
	&IMAGE_COIN,
	&IMAGE_RIGHT_MOUSE,
	&IMAGE_MENU_BAR,
	&IMAGE_ZUMA_BAR,
	&IMAGE_ZUMA_BAR_DONE,
	&IMAGE_FROG_LIVES,
	&IMAGE_NEBULA,
	&IMAGE_UFO,
	&SOUND_BALLCLICK1,
	&SOUND_BALLCLICK2,
	&SOUND_BALLFIRE,
	&SOUND_WARNING,
	&SOUND_EXPLODE,
	&SOUND_EARTHQUAKE,
	&SOUND_FROGLAND,
	&SOUND_JEWEL_APPEAR,
	&SOUND_JEWEL_DISAPPEAR,
	&SOUND_JEWEL_HIT,
	&SOUND_CHAIN_BONUS,
	&SOUND_GAP_BONUS,
	&SOUND_ROLLING,
	&SOUND_EXTRA_LIFE,
	&SOUND_SLOWDOWN_BALL,
	&SOUND_BACKWARDS_BALL,
	&SOUND_ACCURACY_BALL,
	&SOUND_TRAIL_LIGHT,
	&SOUND_TRAIL_LIGHT_END,
	&SOUND_GAME_START,
	&SOUND_LEVEL_UP,
	&SOUND_BAR_FULL,
	&SOUND_LOST_LIFE,
	&SOUND_GAME_OVER,
	&SOUND_STAGE_COMPLETE,
	&SOUND_TEMPLE_COMPLETE,
	&SOUND_BONUS_EXPLOSION,
	&SOUND_BALLDESTROYED1,
	&SOUND_BALLDESTROYED2,
	&SOUND_BALLDESTROYED3,
	&SOUND_BALLDESTROYED4,
	&SOUND_BALLDESTROYED5,
	&SOUND_COMBO,
	&SOUND_BUTTON2,
	&SOUND_CHORAL1,
	&SOUND_POP,
	&SOUND_UFO,
	&FONT_HUGE,
	&FONT_MONODIGIT,
	&FONT_BROWNTITLE,
	&FONT_MAIN12,
	&FONT_MAIN8,
	&FONT_MAIN8OUTLINE,
	&IMAGE_levels\blackswirley\blackswirley,
	&IMAGE_levels\claw\claw,
	&IMAGE_levels\coaster\coaster,
	&IMAGE_levels\groovefest\groovefest,
	&IMAGE_levels\inversespiral\inversespiral,
	&IMAGE_levels\longrange\longrange,
	&IMAGE_levels\loopy\loopy,
	&IMAGE_levels\overunder\overunder,
	&IMAGE_levels\riverbed\riverbed,
	&IMAGE_levels\serpents\serpents,
	&IMAGE_levels\snakepit\snakepit,
	&IMAGE_levels\spaceinvaders\spaceinvaders,
	&IMAGE_levels\spiral\spiral,
	&IMAGE_levels\squaresville\squaresville,
	&IMAGE_levels\targetglyph\targetglyph,
	&IMAGE_levels\tiltspiral\tiltspiral,
	&IMAGE_levels\triangle\triangle,
	&IMAGE_levels\tunnellevel\tunnellevel,
	&IMAGE_levels\turnaround\turnaround,
	&IMAGE_levels\underover\underover,
	&IMAGE_levels\warshak\warshak,
	&IMAGE_levels\serpents\quake01,
	&IMAGE_levels\serpents\quake02,
	&IMAGE_levels\serpents\quake03,
	&IMAGE_levels\serpents\quake04,
	&IMAGE_levels\riverbed\riverbed01,
	&IMAGE_levels\riverbed\riverbed02,
	&IMAGE_levels\riverbed\riverbed03,
	&IMAGE_levels\riverbed\riverbed04,
	&IMAGE_levels\riverbed\riverbed05,
	&IMAGE_levels\underover\left,
	&IMAGE_levels\underover\right,
	&IMAGE_levels\coaster\tunnel01,
	&IMAGE_levels\coaster\tunnel02,
	&IMAGE_levels\groovefest\groovefest01,
	&IMAGE_levels\groovefest\groovefest02,
	&IMAGE_levels\groovefest\groovefest03,
	&IMAGE_levels\inversespiral\tunnel,
	&IMAGE_levels\loopy\tunnel,
	&IMAGE_levels\overunder\tunnel01,
	&IMAGE_levels\overunder\tunnel02,
	&IMAGE_levels\serpents\serpentsB,
	&IMAGE_levels\serpents\serpentsM,
	&IMAGE_levels\serpents\serpentsT,
	&IMAGE_levels\spaceinvaders\tunnel,
	&IMAGE_levels\tunnellevel\tunnel1,
	&IMAGE_levels\tunnellevel\tunnel2,
	&IMAGE_A_BUTTON,
	&IMAGE_B_BUTTON,
	&IMAGE_X_BUTTON,
	&IMAGE_Y_BUTTON,
	&IMAGE_ACHIEVEMENT1,
	&IMAGE_ACHIEVEMENT2,
	&IMAGE_ACHIEVEMENT3,
	&IMAGE_ACHIEVEMENT4,
	&IMAGE_ACHIEVEMENT5,
	&IMAGE_ACHIEVEMENT6,
	&IMAGE_ACHIEVEMENT7,
	&IMAGE_ACHIEVEMENT8,
	&IMAGE_ACHIEVEMENT9,
	&IMAGE_ACHIEVEMENT10,
	&IMAGE_ACHIEVEMENT11,
	&IMAGE_ACHIEVEMENT12,
	&IMAGE_JOYSTICK,
	&IMAGE_DPAD_LEFT,
	&IMAGE_DPAD_RIGHT,
	&IMAGE_DPAD_UP,
	&IMAGE_DPAD_DOWN,
	&IMAGE_UPSELL1,
	&IMAGE_UPSELL2,
	&IMAGE_RANDOM,
	&IMAGE_HAPPYENDING,
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
		case IMAGE_LOADING_SCREEN_ID: return "IMAGE_LOADING_SCREEN";
		case IMAGE_LOADERBAR_ID: return "IMAGE_LOADERBAR";
		case IMAGE_CURSOR_POINTER_ID: return "IMAGE_CURSOR_POINTER";
		case IMAGE_CURSOR_HAND_ID: return "IMAGE_CURSOR_HAND";
		case IMAGE_CURSOR_DRAGGING_ID: return "IMAGE_CURSOR_DRAGGING";
		case IMAGE_CURSOR_TEXT_ID: return "IMAGE_CURSOR_TEXT";
		case IMAGE_COMMON_BG1_ID: return "IMAGE_COMMON_BG1";
		case IMAGE_COMMON_BORDER1_ID: return "IMAGE_COMMON_BORDER1";
		case FONT_MAIN10_ID: return "FONT_MAIN10";
		case FONT_DIALOG_ID: return "FONT_DIALOG";
		case FONT_MAIN10OUTLINE_ID: return "FONT_MAIN10OUTLINE";
		case FONT_MAIN10OUTLINE2_ID: return "FONT_MAIN10OUTLINE2";
		case FONT_MAIN10OUTLINE3_ID: return "FONT_MAIN10OUTLINE3";
		case FONT_FLOAT_ID: return "FONT_FLOAT";
		case IMAGE_DIALOG_BUTTON_ID: return "IMAGE_DIALOG_BUTTON";
		case IMAGE_DIALOG_BACK_ID: return "IMAGE_DIALOG_BACK";
		case FONT_TITLE_ID: return "FONT_TITLE";
		case FONT_PLAIN_ID: return "FONT_PLAIN";
		case SOUND_BUTTON1_ID: return "SOUND_BUTTON1";
		case IMAGE_MOREGAMES_SCREEN_ID: return "IMAGE_MOREGAMES_SCREEN";
		case IMAGE_HELP_BACK_ID: return "IMAGE_HELP_BACK";
		case IMAGE_MM_BACK_ID: return "IMAGE_MM_BACK";
		case IMAGE_MM_ADVENTURE_ID: return "IMAGE_MM_ADVENTURE";
		case IMAGE_MM_GAUNTLET_ID: return "IMAGE_MM_GAUNTLET";
		case IMAGE_MM_LEADERBOARD_ID: return "IMAGE_MM_LEADERBOARD";
		case IMAGE_MM_ACHIEVEMENTS_ID: return "IMAGE_MM_ACHIEVEMENTS";
		case IMAGE_MM_OPTIONS_ID: return "IMAGE_MM_OPTIONS";
		case IMAGE_MM_UNLOCK_ID: return "IMAGE_MM_UNLOCK";
		case IMAGE_MM_QUIT_ID: return "IMAGE_MM_QUIT";
		case IMAGE_MM_EYELEFT_ID: return "IMAGE_MM_EYELEFT";
		case IMAGE_MM_EYERIGHT_ID: return "IMAGE_MM_EYERIGHT";
		case IMAGE_MM_EYEMASK_ID: return "IMAGE_MM_EYEMASK";
		case IMAGE_MM_SUN_ID: return "IMAGE_MM_SUN";
		case IMAGE_MM_SKY_ID: return "IMAGE_MM_SKY";
		case IMAGE_MM_HAT_ID: return "IMAGE_MM_HAT";
		case IMAGE_ADVSKY_ID: return "IMAGE_ADVSKY";
		case IMAGE_ADVBACK_ID: return "IMAGE_ADVBACK";
		case IMAGE_ADVMIDDLE_ID: return "IMAGE_ADVMIDDLE";
		case IMAGE_ADVTEMPLE1_ID: return "IMAGE_ADVTEMPLE1";
		case IMAGE_ADVTEMPLE2_ID: return "IMAGE_ADVTEMPLE2";
		case IMAGE_ADVTEMPLE3_ID: return "IMAGE_ADVTEMPLE3";
		case IMAGE_ADVTEMPLE4_ID: return "IMAGE_ADVTEMPLE4";
		case IMAGE_ADVTEMPLE2V_ID: return "IMAGE_ADVTEMPLE2V";
		case IMAGE_ADVTEMPLE3V_ID: return "IMAGE_ADVTEMPLE3V";
		case IMAGE_ADVDOOR1A_ID: return "IMAGE_ADVDOOR1A";
		case IMAGE_ADVDOOR1B_ID: return "IMAGE_ADVDOOR1B";
		case IMAGE_ADVDOOR1C_ID: return "IMAGE_ADVDOOR1C";
		case IMAGE_ADVDOOR2A_ID: return "IMAGE_ADVDOOR2A";
		case IMAGE_ADVDOOR2B_ID: return "IMAGE_ADVDOOR2B";
		case IMAGE_ADVDOOR2C_ID: return "IMAGE_ADVDOOR2C";
		case IMAGE_ADVDOOR3A_ID: return "IMAGE_ADVDOOR3A";
		case IMAGE_ADVDOOR3B_ID: return "IMAGE_ADVDOOR3B";
		case IMAGE_ADVDOOR3C_ID: return "IMAGE_ADVDOOR3C";
		case IMAGE_ADVDOOR4A_ID: return "IMAGE_ADVDOOR4A";
		case IMAGE_ADVDOOR4B_ID: return "IMAGE_ADVDOOR4B";
		case IMAGE_ADVDOOR4C_ID: return "IMAGE_ADVDOOR4C";
		case IMAGE_ADVMAINMENUBUTTON_ID: return "IMAGE_ADVMAINMENUBUTTON";
		case IMAGE_ADVPLAYBUTTON_ID: return "IMAGE_ADVPLAYBUTTON";
		case IMAGE_ADVMAINMENUBUTTON_ALT_ID: return "IMAGE_ADVMAINMENUBUTTON_ALT";
		case IMAGE_ADVPLAYBUTTON_ALT_ID: return "IMAGE_ADVPLAYBUTTON_ALT";
		case IMAGE_ADVTITLE_ID: return "IMAGE_ADVTITLE";
		case IMAGE_ADVHIGHSCORE_ID: return "IMAGE_ADVHIGHSCORE";
		case IMAGE_GAUNTSCREEN_ID: return "IMAGE_GAUNTSCREEN";
		case IMAGE_GAUNTSKY_ID: return "IMAGE_GAUNTSKY";
		case IMAGE_GAUNTDOOR1_ID: return "IMAGE_GAUNTDOOR1";
		case IMAGE_GAUNTDOOR2_ID: return "IMAGE_GAUNTDOOR2";
		case IMAGE_GAUNTDOOR3_ID: return "IMAGE_GAUNTDOOR3";
		case IMAGE_GAUNTDOOR4_ID: return "IMAGE_GAUNTDOOR4";
		case IMAGE_GAUNTMAINMENUBUTTON_ID: return "IMAGE_GAUNTMAINMENUBUTTON";
		case IMAGE_GAUNTPLAYBUTTON_ID: return "IMAGE_GAUNTPLAYBUTTON";
		case IMAGE_GAUNTMAINMENUBUTTON_ALT_ID: return "IMAGE_GAUNTMAINMENUBUTTON_ALT";
		case IMAGE_GAUNTPLAYBUTTON_ALT_ID: return "IMAGE_GAUNTPLAYBUTTON_ALT";
		case IMAGE_GAUNTEAGLEGEM_ID: return "IMAGE_GAUNTEAGLEGEM";
		case IMAGE_GAUNTJAGUARGEM_ID: return "IMAGE_GAUNTJAGUARGEM";
		case IMAGE_GAUNTSUNGEM_ID: return "IMAGE_GAUNTSUNGEM";
		case IMAGE_GAUNTTITLE_ID: return "IMAGE_GAUNTTITLE";
		case IMAGE_GAUNTHIGHSCORE_ID: return "IMAGE_GAUNTHIGHSCORE";
		case IMAGE_GAUNTPRACTICEBUTTON_ID: return "IMAGE_GAUNTPRACTICEBUTTON";
		case IMAGE_GAUNTSURVIVALBUTTON_ID: return "IMAGE_GAUNTSURVIVALBUTTON";
		case IMAGE_SUNGLOW_ID: return "IMAGE_SUNGLOW";
		case IMAGE_BLUE_BALL_ID: return "IMAGE_BLUE_BALL";
		case IMAGE_YELLOW_BALL_ID: return "IMAGE_YELLOW_BALL";
		case IMAGE_RED_BALL_ID: return "IMAGE_RED_BALL";
		case IMAGE_GREEN_BALL_ID: return "IMAGE_GREEN_BALL";
		case IMAGE_PURPLE_BALL_ID: return "IMAGE_PURPLE_BALL";
		case IMAGE_WHITE_BALL_ID: return "IMAGE_WHITE_BALL";
		case IMAGE_NEXT_BALL_ID: return "IMAGE_NEXT_BALL";
		case IMAGE_BALL_ALPHA_ID: return "IMAGE_BALL_ALPHA";
		case IMAGE_BALL_SHADOW_ID: return "IMAGE_BALL_SHADOW";
		case IMAGE_BLUE_ACCURACY_ID: return "IMAGE_BLUE_ACCURACY";
		case IMAGE_YELLOW_ACCURACY_ID: return "IMAGE_YELLOW_ACCURACY";
		case IMAGE_RED_ACCURACY_ID: return "IMAGE_RED_ACCURACY";
		case IMAGE_GREEN_ACCURACY_ID: return "IMAGE_GREEN_ACCURACY";
		case IMAGE_PURPLE_ACCURACY_ID: return "IMAGE_PURPLE_ACCURACY";
		case IMAGE_WHITE_ACCURACY_ID: return "IMAGE_WHITE_ACCURACY";
		case IMAGE_BLUE_BACKWARDS_ID: return "IMAGE_BLUE_BACKWARDS";
		case IMAGE_YELLOW_BACKWARDS_ID: return "IMAGE_YELLOW_BACKWARDS";
		case IMAGE_RED_BACKWARDS_ID: return "IMAGE_RED_BACKWARDS";
		case IMAGE_GREEN_BACKWARDS_ID: return "IMAGE_GREEN_BACKWARDS";
		case IMAGE_PURPLE_BACKWARDS_ID: return "IMAGE_PURPLE_BACKWARDS";
		case IMAGE_WHITE_BACKWARDS_ID: return "IMAGE_WHITE_BACKWARDS";
		case IMAGE_BLUE_SLOW_ID: return "IMAGE_BLUE_SLOW";
		case IMAGE_YELLOW_SLOW_ID: return "IMAGE_YELLOW_SLOW";
		case IMAGE_RED_SLOW_ID: return "IMAGE_RED_SLOW";
		case IMAGE_GREEN_SLOW_ID: return "IMAGE_GREEN_SLOW";
		case IMAGE_PURPLE_SLOW_ID: return "IMAGE_PURPLE_SLOW";
		case IMAGE_WHITE_SLOW_ID: return "IMAGE_WHITE_SLOW";
		case IMAGE_GRAY_EXPLOSION_ID: return "IMAGE_GRAY_EXPLOSION";
		case IMAGE_EXPLOSION_ID: return "IMAGE_EXPLOSION";
		case IMAGE_BLUE_BOMB_ID: return "IMAGE_BLUE_BOMB";
		case IMAGE_YELLOW_BOMB_ID: return "IMAGE_YELLOW_BOMB";
		case IMAGE_RED_BOMB_ID: return "IMAGE_RED_BOMB";
		case IMAGE_GREEN_BOMB_ID: return "IMAGE_GREEN_BOMB";
		case IMAGE_PURPLE_BOMB_ID: return "IMAGE_PURPLE_BOMB";
		case IMAGE_WHITE_BOMB_ID: return "IMAGE_WHITE_BOMB";
		case IMAGE_BLUE_LIGHT_ID: return "IMAGE_BLUE_LIGHT";
		case IMAGE_YELLOW_LIGHT_ID: return "IMAGE_YELLOW_LIGHT";
		case IMAGE_RED_LIGHT_ID: return "IMAGE_RED_LIGHT";
		case IMAGE_GREEN_LIGHT_ID: return "IMAGE_GREEN_LIGHT";
		case IMAGE_PURPLE_LIGHT_ID: return "IMAGE_PURPLE_LIGHT";
		case IMAGE_WHITE_LIGHT_ID: return "IMAGE_WHITE_LIGHT";
		case IMAGE_BACKWARDS_LIGHT_ID: return "IMAGE_BACKWARDS_LIGHT";
		case IMAGE_ACCURACY_LIGHT_ID: return "IMAGE_ACCURACY_LIGHT";
		case IMAGE_SLOW_LIGHT_ID: return "IMAGE_SLOW_LIGHT";
		case IMAGE_SPARKLE_ID: return "IMAGE_SPARKLE";
		case IMAGE_SHOOTER_BOTTOM_ID: return "IMAGE_SHOOTER_BOTTOM";
		case IMAGE_SHOOTER_TOP_ID: return "IMAGE_SHOOTER_TOP";
		case IMAGE_SHOOTER_TONGUE_ID: return "IMAGE_SHOOTER_TONGUE";
		case IMAGE_EYE_BLINK_ID: return "IMAGE_EYE_BLINK";
		case IMAGE_DIALOG_CHECKBOX_ID: return "IMAGE_DIALOG_CHECKBOX";
		case IMAGE_DIALOG_CHECKBOXCAP_ID: return "IMAGE_DIALOG_CHECKBOXCAP";
		case IMAGE_DIALOG_CHECKBOXLINE_ID: return "IMAGE_DIALOG_CHECKBOXLINE";
		case IMAGE_SLIDER_TRACK_ID: return "IMAGE_SLIDER_TRACK";
		case IMAGE_SLIDER_THUMB_ID: return "IMAGE_SLIDER_THUMB";
		case IMAGE_UPDATE_BAR_ID: return "IMAGE_UPDATE_BAR";
		case IMAGE_GOD_HEAD_ID: return "IMAGE_GOD_HEAD";
		case IMAGE_HOLE_ID: return "IMAGE_HOLE";
		case IMAGE_HOLE_COVER_ID: return "IMAGE_HOLE_COVER";
		case IMAGE_COIN_ID: return "IMAGE_COIN";
		case IMAGE_RIGHT_MOUSE_ID: return "IMAGE_RIGHT_MOUSE";
		case IMAGE_MENU_BAR_ID: return "IMAGE_MENU_BAR";
		case IMAGE_ZUMA_BAR_ID: return "IMAGE_ZUMA_BAR";
		case IMAGE_ZUMA_BAR_DONE_ID: return "IMAGE_ZUMA_BAR_DONE";
		case IMAGE_FROG_LIVES_ID: return "IMAGE_FROG_LIVES";
		case IMAGE_NEBULA_ID: return "IMAGE_NEBULA";
		case IMAGE_UFO_ID: return "IMAGE_UFO";
		case SOUND_BALLCLICK1_ID: return "SOUND_BALLCLICK1";
		case SOUND_BALLCLICK2_ID: return "SOUND_BALLCLICK2";
		case SOUND_BALLFIRE_ID: return "SOUND_BALLFIRE";
		case SOUND_WARNING_ID: return "SOUND_WARNING";
		case SOUND_EXPLODE_ID: return "SOUND_EXPLODE";
		case SOUND_EARTHQUAKE_ID: return "SOUND_EARTHQUAKE";
		case SOUND_FROGLAND_ID: return "SOUND_FROGLAND";
		case SOUND_JEWEL_APPEAR_ID: return "SOUND_JEWEL_APPEAR";
		case SOUND_JEWEL_DISAPPEAR_ID: return "SOUND_JEWEL_DISAPPEAR";
		case SOUND_JEWEL_HIT_ID: return "SOUND_JEWEL_HIT";
		case SOUND_CHAIN_BONUS_ID: return "SOUND_CHAIN_BONUS";
		case SOUND_GAP_BONUS_ID: return "SOUND_GAP_BONUS";
		case SOUND_ROLLING_ID: return "SOUND_ROLLING";
		case SOUND_EXTRA_LIFE_ID: return "SOUND_EXTRA_LIFE";
		case SOUND_SLOWDOWN_BALL_ID: return "SOUND_SLOWDOWN_BALL";
		case SOUND_BACKWARDS_BALL_ID: return "SOUND_BACKWARDS_BALL";
		case SOUND_ACCURACY_BALL_ID: return "SOUND_ACCURACY_BALL";
		case SOUND_TRAIL_LIGHT_ID: return "SOUND_TRAIL_LIGHT";
		case SOUND_TRAIL_LIGHT_END_ID: return "SOUND_TRAIL_LIGHT_END";
		case SOUND_GAME_START_ID: return "SOUND_GAME_START";
		case SOUND_LEVEL_UP_ID: return "SOUND_LEVEL_UP";
		case SOUND_BAR_FULL_ID: return "SOUND_BAR_FULL";
		case SOUND_LOST_LIFE_ID: return "SOUND_LOST_LIFE";
		case SOUND_GAME_OVER_ID: return "SOUND_GAME_OVER";
		case SOUND_STAGE_COMPLETE_ID: return "SOUND_STAGE_COMPLETE";
		case SOUND_TEMPLE_COMPLETE_ID: return "SOUND_TEMPLE_COMPLETE";
		case SOUND_BONUS_EXPLOSION_ID: return "SOUND_BONUS_EXPLOSION";
		case SOUND_BALLDESTROYED1_ID: return "SOUND_BALLDESTROYED1";
		case SOUND_BALLDESTROYED2_ID: return "SOUND_BALLDESTROYED2";
		case SOUND_BALLDESTROYED3_ID: return "SOUND_BALLDESTROYED3";
		case SOUND_BALLDESTROYED4_ID: return "SOUND_BALLDESTROYED4";
		case SOUND_BALLDESTROYED5_ID: return "SOUND_BALLDESTROYED5";
		case SOUND_COMBO_ID: return "SOUND_COMBO";
		case SOUND_BUTTON2_ID: return "SOUND_BUTTON2";
		case SOUND_CHORAL1_ID: return "SOUND_CHORAL1";
		case SOUND_POP_ID: return "SOUND_POP";
		case SOUND_UFO_ID: return "SOUND_UFO";
		case FONT_HUGE_ID: return "FONT_HUGE";
		case FONT_MONODIGIT_ID: return "FONT_MONODIGIT";
		case FONT_BROWNTITLE_ID: return "FONT_BROWNTITLE";
		case FONT_MAIN12_ID: return "FONT_MAIN12";
		case FONT_MAIN8_ID: return "FONT_MAIN8";
		case FONT_MAIN8OUTLINE_ID: return "FONT_MAIN8OUTLINE";
		case IMAGE_levels\blackswirley\blackswirley_ID: return "IMAGE_levels\blackswirley\blackswirley";
		case IMAGE_levels\claw\claw_ID: return "IMAGE_levels\claw\claw";
		case IMAGE_levels\coaster\coaster_ID: return "IMAGE_levels\coaster\coaster";
		case IMAGE_levels\groovefest\groovefest_ID: return "IMAGE_levels\groovefest\groovefest";
		case IMAGE_levels\inversespiral\inversespiral_ID: return "IMAGE_levels\inversespiral\inversespiral";
		case IMAGE_levels\longrange\longrange_ID: return "IMAGE_levels\longrange\longrange";
		case IMAGE_levels\loopy\loopy_ID: return "IMAGE_levels\loopy\loopy";
		case IMAGE_levels\overunder\overunder_ID: return "IMAGE_levels\overunder\overunder";
		case IMAGE_levels\riverbed\riverbed_ID: return "IMAGE_levels\riverbed\riverbed";
		case IMAGE_levels\serpents\serpents_ID: return "IMAGE_levels\serpents\serpents";
		case IMAGE_levels\snakepit\snakepit_ID: return "IMAGE_levels\snakepit\snakepit";
		case IMAGE_levels\spaceinvaders\spaceinvaders_ID: return "IMAGE_levels\spaceinvaders\spaceinvaders";
		case IMAGE_levels\spiral\spiral_ID: return "IMAGE_levels\spiral\spiral";
		case IMAGE_levels\squaresville\squaresville_ID: return "IMAGE_levels\squaresville\squaresville";
		case IMAGE_levels\targetglyph\targetglyph_ID: return "IMAGE_levels\targetglyph\targetglyph";
		case IMAGE_levels\tiltspiral\tiltspiral_ID: return "IMAGE_levels\tiltspiral\tiltspiral";
		case IMAGE_levels\triangle\triangle_ID: return "IMAGE_levels\triangle\triangle";
		case IMAGE_levels\tunnellevel\tunnellevel_ID: return "IMAGE_levels\tunnellevel\tunnellevel";
		case IMAGE_levels\turnaround\turnaround_ID: return "IMAGE_levels\turnaround\turnaround";
		case IMAGE_levels\underover\underover_ID: return "IMAGE_levels\underover\underover";
		case IMAGE_levels\warshak\warshak_ID: return "IMAGE_levels\warshak\warshak";
		case IMAGE_levels\serpents\quake01_ID: return "IMAGE_levels\serpents\quake01";
		case IMAGE_levels\serpents\quake02_ID: return "IMAGE_levels\serpents\quake02";
		case IMAGE_levels\serpents\quake03_ID: return "IMAGE_levels\serpents\quake03";
		case IMAGE_levels\serpents\quake04_ID: return "IMAGE_levels\serpents\quake04";
		case IMAGE_levels\riverbed\riverbed01_ID: return "IMAGE_levels\riverbed\riverbed01";
		case IMAGE_levels\riverbed\riverbed02_ID: return "IMAGE_levels\riverbed\riverbed02";
		case IMAGE_levels\riverbed\riverbed03_ID: return "IMAGE_levels\riverbed\riverbed03";
		case IMAGE_levels\riverbed\riverbed04_ID: return "IMAGE_levels\riverbed\riverbed04";
		case IMAGE_levels\riverbed\riverbed05_ID: return "IMAGE_levels\riverbed\riverbed05";
		case IMAGE_levels\underover\left_ID: return "IMAGE_levels\underover\left";
		case IMAGE_levels\underover\right_ID: return "IMAGE_levels\underover\right";
		case IMAGE_levels\coaster\tunnel01_ID: return "IMAGE_levels\coaster\tunnel01";
		case IMAGE_levels\coaster\tunnel02_ID: return "IMAGE_levels\coaster\tunnel02";
		case IMAGE_levels\groovefest\groovefest01_ID: return "IMAGE_levels\groovefest\groovefest01";
		case IMAGE_levels\groovefest\groovefest02_ID: return "IMAGE_levels\groovefest\groovefest02";
		case IMAGE_levels\groovefest\groovefest03_ID: return "IMAGE_levels\groovefest\groovefest03";
		case IMAGE_levels\inversespiral\tunnel_ID: return "IMAGE_levels\inversespiral\tunnel";
		case IMAGE_levels\loopy\tunnel_ID: return "IMAGE_levels\loopy\tunnel";
		case IMAGE_levels\overunder\tunnel01_ID: return "IMAGE_levels\overunder\tunnel01";
		case IMAGE_levels\overunder\tunnel02_ID: return "IMAGE_levels\overunder\tunnel02";
		case IMAGE_levels\serpents\serpentsB_ID: return "IMAGE_levels\serpents\serpentsB";
		case IMAGE_levels\serpents\serpentsM_ID: return "IMAGE_levels\serpents\serpentsM";
		case IMAGE_levels\serpents\serpentsT_ID: return "IMAGE_levels\serpents\serpentsT";
		case IMAGE_levels\spaceinvaders\tunnel_ID: return "IMAGE_levels\spaceinvaders\tunnel";
		case IMAGE_levels\tunnellevel\tunnel1_ID: return "IMAGE_levels\tunnellevel\tunnel1";
		case IMAGE_levels\tunnellevel\tunnel2_ID: return "IMAGE_levels\tunnellevel\tunnel2";
		case IMAGE_A_BUTTON_ID: return "IMAGE_A_BUTTON";
		case IMAGE_B_BUTTON_ID: return "IMAGE_B_BUTTON";
		case IMAGE_X_BUTTON_ID: return "IMAGE_X_BUTTON";
		case IMAGE_Y_BUTTON_ID: return "IMAGE_Y_BUTTON";
		case IMAGE_ACHIEVEMENT1_ID: return "IMAGE_ACHIEVEMENT1";
		case IMAGE_ACHIEVEMENT2_ID: return "IMAGE_ACHIEVEMENT2";
		case IMAGE_ACHIEVEMENT3_ID: return "IMAGE_ACHIEVEMENT3";
		case IMAGE_ACHIEVEMENT4_ID: return "IMAGE_ACHIEVEMENT4";
		case IMAGE_ACHIEVEMENT5_ID: return "IMAGE_ACHIEVEMENT5";
		case IMAGE_ACHIEVEMENT6_ID: return "IMAGE_ACHIEVEMENT6";
		case IMAGE_ACHIEVEMENT7_ID: return "IMAGE_ACHIEVEMENT7";
		case IMAGE_ACHIEVEMENT8_ID: return "IMAGE_ACHIEVEMENT8";
		case IMAGE_ACHIEVEMENT9_ID: return "IMAGE_ACHIEVEMENT9";
		case IMAGE_ACHIEVEMENT10_ID: return "IMAGE_ACHIEVEMENT10";
		case IMAGE_ACHIEVEMENT11_ID: return "IMAGE_ACHIEVEMENT11";
		case IMAGE_ACHIEVEMENT12_ID: return "IMAGE_ACHIEVEMENT12";
		case IMAGE_JOYSTICK_ID: return "IMAGE_JOYSTICK";
		case IMAGE_DPAD_LEFT_ID: return "IMAGE_DPAD_LEFT";
		case IMAGE_DPAD_RIGHT_ID: return "IMAGE_DPAD_RIGHT";
		case IMAGE_DPAD_UP_ID: return "IMAGE_DPAD_UP";
		case IMAGE_DPAD_DOWN_ID: return "IMAGE_DPAD_DOWN";
		case IMAGE_UPSELL1_ID: return "IMAGE_UPSELL1";
		case IMAGE_UPSELL2_ID: return "IMAGE_UPSELL2";
		case IMAGE_RANDOM_ID: return "IMAGE_RANDOM";
		case IMAGE_HAPPYENDING_ID: return "IMAGE_HAPPYENDING";
		default: return "";
	}
}

