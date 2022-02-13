#include "Resources.h"
#include "SexyAppFramework/ResourceManager.h"

using namespace Sexy;

#pragma warning(disable:4311 4312)

static bool gNeedRecalcVariableToIdMap = false;

bool Sexy::ExtractResourcesByName(ResourceManager *theManager, const char *theName)
{
	if (strcmp(theName,"LoadingThread")==0) return ExtractLoadingThreadResources(theManager);
	if (strcmp(theName,"MainMenuBkg")==0) return ExtractMainMenuBkgResources(theManager);
	if (strcmp(theName,"Sounds")==0) return ExtractSoundsResources(theManager);
	if (strcmp(theName,"StreamSounds")==0) return ExtractStreamSoundsResources(theManager);
	if (strcmp(theName,"UpsellScreen")==0) return ExtractUpsellScreenResources(theManager);
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

// LoadingThread Resources
Font* Sexy::FONT_BOMB;
Font* Sexy::FONT_BUTTON;
Font* Sexy::FONT_FLOAT_POINTS;
Font* Sexy::FONT_HUGE;
Font* Sexy::FONT_LEVEL;
Font* Sexy::FONT_SCORE;
Font* Sexy::FONT_TEXT;
Font* Sexy::FONT_TEXT_OUTLINED;
Image* Sexy::IMAGE_ARROW_UP;
Image* Sexy::IMAGE_BAR_LEFT;
Image* Sexy::IMAGE_BAR_MID;
Image* Sexy::IMAGE_BAR_RIGHT;
Image* Sexy::IMAGE_BIGSTAR;
Image* Sexy::IMAGE_BOARD_BORDER;
Image* Sexy::IMAGE_BOARD_RED_LIGHT;
Image* Sexy::IMAGE_BOMB;
Image* Sexy::IMAGE_BUTTON_HILITE;
Image* Sexy::IMAGE_CONTROLS_CLASSIC;
Image* Sexy::IMAGE_CONTROLS_PUZZLE;
Image* Sexy::IMAGE_CONTROLS_SCORE;
Image* Sexy::IMAGE_DIALOG;
Image* Sexy::IMAGE_DIALOG_BUTTON;
Image* Sexy::IMAGE_DIALOG_HEADER;
Image* Sexy::IMAGE_EXPLOSION;
Image* Sexy::IMAGE_GAME_OVER;
Image* Sexy::IMAGE_GEM0;
Image* Sexy::IMAGE_GEM1;
Image* Sexy::IMAGE_GEM2;
Image* Sexy::IMAGE_GEM3;
Image* Sexy::IMAGE_GEM4;
Image* Sexy::IMAGE_GEM5;
Image* Sexy::IMAGE_GEM6;
Image* Sexy::IMAGE_GEM_ADD;
Image* Sexy::IMAGE_GEM_ADD_WHITE;
Image* Sexy::IMAGE_GEM_LIGHTING;
Image* Sexy::IMAGE_HELP_ARROW;
Image* Sexy::IMAGE_HELP_FRAME;
Image* Sexy::IMAGE_HELP_HORZ;
Image* Sexy::IMAGE_HELP_INDICATOR;
Image* Sexy::IMAGE_HELP_INDICATOR_ARROW;
Image* Sexy::IMAGE_HELP_VERT;
Image* Sexy::IMAGE_MAINMENU_BUTTONS;
Image* Sexy::IMAGE_MAINMENU_FRONT;
Image* Sexy::IMAGE_POWER_GLOW;
Image* Sexy::IMAGE_PUZZLE_FRAME;
Image* Sexy::IMAGE_PUZZLE_GLOW;
Image* Sexy::IMAGE_PUZZLE_WIDGET;
Image* Sexy::IMAGE_RING_DUDE;
Image* Sexy::IMAGE_ROCK;
Image* Sexy::IMAGE_ROCK_CHUNK;
Image* Sexy::IMAGE_SELECT;
Image* Sexy::IMAGE_SHARD;
Image* Sexy::IMAGE_SIDEBAR_HINT_BUTTON;
Image* Sexy::IMAGE_SIDEBAR_MENU_BUTTON;
Image* Sexy::IMAGE_SPARKLE;
Image* Sexy::IMAGE_UI_BIG_ROLLOVER;
Image* Sexy::IMAGE_UI_BUTTON_HINT;
Image* Sexy::IMAGE_UI_BUTTON_MENU;
Image* Sexy::IMAGE_UI_BUTTON_PAUSE;
Image* Sexy::IMAGE_UI_BUTTON_UNDO;
Image* Sexy::IMAGE_UI_SMALL_ROLLOVER;
Image* Sexy::IMAGE_WARP_BOTTOM_GLOW;
Image* Sexy::IMAGE_WARP_TOP_GLOW;
Image* Sexy::IMAGE_WILDCARD_DESTROYER;

bool Sexy::ExtractLoadingThreadResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		FONT_BOMB = aMgr.GetFontThrow("FONT_BOMB");
		FONT_BUTTON = aMgr.GetFontThrow("FONT_BUTTON");
		FONT_FLOAT_POINTS = aMgr.GetFontThrow("FONT_FLOAT_POINTS");
		FONT_HUGE = aMgr.GetFontThrow("FONT_HUGE");
		FONT_LEVEL = aMgr.GetFontThrow("FONT_LEVEL");
		FONT_SCORE = aMgr.GetFontThrow("FONT_SCORE");
		FONT_TEXT = aMgr.GetFontThrow("FONT_TEXT");
		FONT_TEXT_OUTLINED = aMgr.GetFontThrow("FONT_TEXT_OUTLINED");
		IMAGE_ARROW_UP = aMgr.GetImageThrow("IMAGE_ARROW_UP");
		IMAGE_BAR_LEFT = aMgr.GetImageThrow("IMAGE_BAR_LEFT");
		IMAGE_BAR_MID = aMgr.GetImageThrow("IMAGE_BAR_MID");
		IMAGE_BAR_RIGHT = aMgr.GetImageThrow("IMAGE_BAR_RIGHT");
		IMAGE_BIGSTAR = aMgr.GetImageThrow("IMAGE_BIGSTAR");
		IMAGE_BOARD_BORDER = aMgr.GetImageThrow("IMAGE_BOARD_BORDER");
		IMAGE_BOARD_RED_LIGHT = aMgr.GetImageThrow("IMAGE_BOARD_RED_LIGHT");
		IMAGE_BOMB = aMgr.GetImageThrow("IMAGE_BOMB");
		IMAGE_BUTTON_HILITE = aMgr.GetImageThrow("IMAGE_BUTTON_HILITE");
		IMAGE_CONTROLS_CLASSIC = aMgr.GetImageThrow("IMAGE_CONTROLS_CLASSIC");
		IMAGE_CONTROLS_PUZZLE = aMgr.GetImageThrow("IMAGE_CONTROLS_PUZZLE");
		IMAGE_CONTROLS_SCORE = aMgr.GetImageThrow("IMAGE_CONTROLS_SCORE");
		IMAGE_DIALOG = aMgr.GetImageThrow("IMAGE_DIALOG");
		IMAGE_DIALOG_BUTTON = aMgr.GetImageThrow("IMAGE_DIALOG_BUTTON");
		IMAGE_DIALOG_HEADER = aMgr.GetImageThrow("IMAGE_DIALOG_HEADER");
		IMAGE_EXPLOSION = aMgr.GetImageThrow("IMAGE_EXPLOSION");
		IMAGE_GAME_OVER = aMgr.GetImageThrow("IMAGE_GAME_OVER");
		IMAGE_GEM0 = aMgr.GetImageThrow("IMAGE_GEM0");
		IMAGE_GEM1 = aMgr.GetImageThrow("IMAGE_GEM1");
		IMAGE_GEM2 = aMgr.GetImageThrow("IMAGE_GEM2");
		IMAGE_GEM3 = aMgr.GetImageThrow("IMAGE_GEM3");
		IMAGE_GEM4 = aMgr.GetImageThrow("IMAGE_GEM4");
		IMAGE_GEM5 = aMgr.GetImageThrow("IMAGE_GEM5");
		IMAGE_GEM6 = aMgr.GetImageThrow("IMAGE_GEM6");
		IMAGE_GEM_ADD = aMgr.GetImageThrow("IMAGE_GEM_ADD");
		IMAGE_GEM_ADD_WHITE = aMgr.GetImageThrow("IMAGE_GEM_ADD_WHITE");
		IMAGE_GEM_LIGHTING = aMgr.GetImageThrow("IMAGE_GEM_LIGHTING");
		IMAGE_HELP_ARROW = aMgr.GetImageThrow("IMAGE_HELP_ARROW");
		IMAGE_HELP_FRAME = aMgr.GetImageThrow("IMAGE_HELP_FRAME");
		IMAGE_HELP_HORZ = aMgr.GetImageThrow("IMAGE_HELP_HORZ");
		IMAGE_HELP_INDICATOR = aMgr.GetImageThrow("IMAGE_HELP_INDICATOR");
		IMAGE_HELP_INDICATOR_ARROW = aMgr.GetImageThrow("IMAGE_HELP_INDICATOR_ARROW");
		IMAGE_HELP_VERT = aMgr.GetImageThrow("IMAGE_HELP_VERT");
		IMAGE_MAINMENU_BUTTONS = aMgr.GetImageThrow("IMAGE_MAINMENU_BUTTONS");
		IMAGE_MAINMENU_FRONT = aMgr.GetImageThrow("IMAGE_MAINMENU_FRONT");
		IMAGE_POWER_GLOW = aMgr.GetImageThrow("IMAGE_POWER_GLOW");
		IMAGE_PUZZLE_FRAME = aMgr.GetImageThrow("IMAGE_PUZZLE_FRAME");
		IMAGE_PUZZLE_GLOW = aMgr.GetImageThrow("IMAGE_PUZZLE_GLOW");
		IMAGE_PUZZLE_WIDGET = aMgr.GetImageThrow("IMAGE_PUZZLE_WIDGET");
		IMAGE_RING_DUDE = aMgr.GetImageThrow("IMAGE_RING_DUDE");
		IMAGE_ROCK = aMgr.GetImageThrow("IMAGE_ROCK");
		IMAGE_ROCK_CHUNK = aMgr.GetImageThrow("IMAGE_ROCK_CHUNK");
		IMAGE_SELECT = aMgr.GetImageThrow("IMAGE_SELECT");
		IMAGE_SHARD = aMgr.GetImageThrow("IMAGE_SHARD");
		IMAGE_SIDEBAR_HINT_BUTTON = aMgr.GetImageThrow("IMAGE_SIDEBAR_HINT_BUTTON");
		IMAGE_SIDEBAR_MENU_BUTTON = aMgr.GetImageThrow("IMAGE_SIDEBAR_MENU_BUTTON");
		IMAGE_SPARKLE = aMgr.GetImageThrow("IMAGE_SPARKLE");
		IMAGE_UI_BIG_ROLLOVER = aMgr.GetImageThrow("IMAGE_UI_BIG_ROLLOVER");
		IMAGE_UI_BUTTON_HINT = aMgr.GetImageThrow("IMAGE_UI_BUTTON_HINT");
		IMAGE_UI_BUTTON_MENU = aMgr.GetImageThrow("IMAGE_UI_BUTTON_MENU");
		IMAGE_UI_BUTTON_PAUSE = aMgr.GetImageThrow("IMAGE_UI_BUTTON_PAUSE");
		IMAGE_UI_BUTTON_UNDO = aMgr.GetImageThrow("IMAGE_UI_BUTTON_UNDO");
		IMAGE_UI_SMALL_ROLLOVER = aMgr.GetImageThrow("IMAGE_UI_SMALL_ROLLOVER");
		IMAGE_WARP_BOTTOM_GLOW = aMgr.GetImageThrow("IMAGE_WARP_BOTTOM_GLOW");
		IMAGE_WARP_TOP_GLOW = aMgr.GetImageThrow("IMAGE_WARP_TOP_GLOW");
		IMAGE_WILDCARD_DESTROYER = aMgr.GetImageThrow("IMAGE_WILDCARD_DESTROYER");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// MainMenuBkg Resources
Image* Sexy::IMAGE_MAINMENU_BKG;

bool Sexy::ExtractMainMenuBkgResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_MAINMENU_BKG = aMgr.GetImageThrow("IMAGE_MAINMENU_BKG");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Sounds Resources
int Sexy::SOUND_BAD;
int Sexy::SOUND_BOMB_EXPLODE;
int Sexy::SOUND_CLICK;
int Sexy::SOUND_COMBO_1;
int Sexy::SOUND_COMBO_2;
int Sexy::SOUND_COMBO_3;
int Sexy::SOUND_GEM_HIT;
int Sexy::SOUND_GO;
int Sexy::SOUND_MAIN_GAME_START;
int Sexy::SOUND_MAIN_MOUSEOVER;
int Sexy::SOUND_MULTISHOT;
int Sexy::SOUND_SELECT;
int Sexy::SOUND_TRANSFER;

bool Sexy::ExtractSoundsResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		SOUND_BAD = aMgr.GetSoundThrow("SOUND_BAD");
		SOUND_BOMB_EXPLODE = aMgr.GetSoundThrow("SOUND_BOMB_EXPLODE");
		SOUND_CLICK = aMgr.GetSoundThrow("SOUND_CLICK");
		SOUND_COMBO_1 = aMgr.GetSoundThrow("SOUND_COMBO_1");
		SOUND_COMBO_2 = aMgr.GetSoundThrow("SOUND_COMBO_2");
		SOUND_COMBO_3 = aMgr.GetSoundThrow("SOUND_COMBO_3");
		SOUND_GEM_HIT = aMgr.GetSoundThrow("SOUND_GEM_HIT");
		SOUND_GO = aMgr.GetSoundThrow("SOUND_GO");
		SOUND_MAIN_GAME_START = aMgr.GetSoundThrow("SOUND_MAIN_GAME_START");
		SOUND_MAIN_MOUSEOVER = aMgr.GetSoundThrow("SOUND_MAIN_MOUSEOVER");
		SOUND_MULTISHOT = aMgr.GetSoundThrow("SOUND_MULTISHOT");
		SOUND_SELECT = aMgr.GetSoundThrow("SOUND_SELECT");
		SOUND_TRANSFER = aMgr.GetSoundThrow("SOUND_TRANSFER");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// StreamSounds Resources
int Sexy::SOUND_COMBO_4;
int Sexy::SOUND_COMBO_5;
int Sexy::SOUND_COMBO_6;
int Sexy::SOUND_ELECTRO_EXPLODE;
int Sexy::SOUND_ELECTRO_PATH;
int Sexy::SOUND_ELECTRO_START;
int Sexy::SOUND_EXCELLENT;
int Sexy::SOUND_EXPLODE;
int Sexy::SOUND_GAME_OVER;
int Sexy::SOUND_GET_READY;
int Sexy::SOUND_GOOD;
int Sexy::SOUND_HYPERGEM_CREATE;
int Sexy::SOUND_HYPERGEM_DESTROYED;
int Sexy::SOUND_INCREDIBLE;
int Sexy::SOUND_LEVEL_COMPLETE;
int Sexy::SOUND_LEVEL_UP;
int Sexy::SOUND_NO_MORE_MOVES;
int Sexy::SOUND_PUZZLE_SOLVED;
int Sexy::SOUND_TIME_UP;
int Sexy::SOUND_TRANSFER_BIG;
int Sexy::SOUND_WARNING;
int Sexy::SOUND_WHIRLPOOL;

bool Sexy::ExtractStreamSoundsResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		SOUND_COMBO_4 = aMgr.GetSoundThrow("SOUND_COMBO_4");
		SOUND_COMBO_5 = aMgr.GetSoundThrow("SOUND_COMBO_5");
		SOUND_COMBO_6 = aMgr.GetSoundThrow("SOUND_COMBO_6");
		SOUND_ELECTRO_EXPLODE = aMgr.GetSoundThrow("SOUND_ELECTRO_EXPLODE");
		SOUND_ELECTRO_PATH = aMgr.GetSoundThrow("SOUND_ELECTRO_PATH");
		SOUND_ELECTRO_START = aMgr.GetSoundThrow("SOUND_ELECTRO_START");
		SOUND_EXCELLENT = aMgr.GetSoundThrow("SOUND_EXCELLENT");
		SOUND_EXPLODE = aMgr.GetSoundThrow("SOUND_EXPLODE");
		SOUND_GAME_OVER = aMgr.GetSoundThrow("SOUND_GAME_OVER");
		SOUND_GET_READY = aMgr.GetSoundThrow("SOUND_GET_READY");
		SOUND_GOOD = aMgr.GetSoundThrow("SOUND_GOOD");
		SOUND_HYPERGEM_CREATE = aMgr.GetSoundThrow("SOUND_HYPERGEM_CREATE");
		SOUND_HYPERGEM_DESTROYED = aMgr.GetSoundThrow("SOUND_HYPERGEM_DESTROYED");
		SOUND_INCREDIBLE = aMgr.GetSoundThrow("SOUND_INCREDIBLE");
		SOUND_LEVEL_COMPLETE = aMgr.GetSoundThrow("SOUND_LEVEL_COMPLETE");
		SOUND_LEVEL_UP = aMgr.GetSoundThrow("SOUND_LEVEL_UP");
		SOUND_NO_MORE_MOVES = aMgr.GetSoundThrow("SOUND_NO_MORE_MOVES");
		SOUND_PUZZLE_SOLVED = aMgr.GetSoundThrow("SOUND_PUZZLE_SOLVED");
		SOUND_TIME_UP = aMgr.GetSoundThrow("SOUND_TIME_UP");
		SOUND_TRANSFER_BIG = aMgr.GetSoundThrow("SOUND_TRANSFER_BIG");
		SOUND_WARNING = aMgr.GetSoundThrow("SOUND_WARNING");
		SOUND_WHIRLPOOL = aMgr.GetSoundThrow("SOUND_WHIRLPOOL");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// UpsellScreen Resources
Image* Sexy::IMAGE_UPSELL_BACK;
Image* Sexy::IMAGE_UPSELL_BUTTONS;
Image* Sexy::IMAGE_UPSELL_CENTER_1;
Image* Sexy::IMAGE_UPSELL_CENTER_2;
Image* Sexy::IMAGE_UPSELL_CENTER_3;
Image* Sexy::IMAGE_UPSELL_CENTER_4;
Image* Sexy::IMAGE_UPSELL_CENTER_5;
Image* Sexy::IMAGE_UPSELL_CENTER_6;
Image* Sexy::IMAGE_UPSELL_CENTER_7;
Image* Sexy::IMAGE_UPSELL_DELUXE;
Image* Sexy::IMAGE_UPSELL_DELUXE_GLOW;
Image* Sexy::IMAGE_UPSELL_LOGO;
Image* Sexy::IMAGE_UPSELL_TELL_MORE;

bool Sexy::ExtractUpsellScreenResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_UPSELL_BACK = aMgr.GetImageThrow("IMAGE_UPSELL_BACK");
		IMAGE_UPSELL_BUTTONS = aMgr.GetImageThrow("IMAGE_UPSELL_BUTTONS");
		IMAGE_UPSELL_CENTER_1 = aMgr.GetImageThrow("IMAGE_UPSELL_CENTER_1");
		IMAGE_UPSELL_CENTER_2 = aMgr.GetImageThrow("IMAGE_UPSELL_CENTER_2");
		IMAGE_UPSELL_CENTER_3 = aMgr.GetImageThrow("IMAGE_UPSELL_CENTER_3");
		IMAGE_UPSELL_CENTER_4 = aMgr.GetImageThrow("IMAGE_UPSELL_CENTER_4");
		IMAGE_UPSELL_CENTER_5 = aMgr.GetImageThrow("IMAGE_UPSELL_CENTER_5");
		IMAGE_UPSELL_CENTER_6 = aMgr.GetImageThrow("IMAGE_UPSELL_CENTER_6");
		IMAGE_UPSELL_CENTER_7 = aMgr.GetImageThrow("IMAGE_UPSELL_CENTER_7");
		IMAGE_UPSELL_DELUXE = aMgr.GetImageThrow("IMAGE_UPSELL_DELUXE");
		IMAGE_UPSELL_DELUXE_GLOW = aMgr.GetImageThrow("IMAGE_UPSELL_DELUXE_GLOW");
		IMAGE_UPSELL_LOGO = aMgr.GetImageThrow("IMAGE_UPSELL_LOGO");
		IMAGE_UPSELL_TELL_MORE = aMgr.GetImageThrow("IMAGE_UPSELL_TELL_MORE");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

static void* gResources[] =
{
	&SOUND_TRANSFER,
	&SOUND_COMBO_1,
	&SOUND_COMBO_2,
	&SOUND_COMBO_3,
	&SOUND_BAD,
	&SOUND_GEM_HIT,
	&SOUND_CLICK,
	&SOUND_SELECT,
	&SOUND_MULTISHOT,
	&SOUND_GO,
	&SOUND_MAIN_GAME_START,
	&SOUND_MAIN_MOUSEOVER,
	&SOUND_BOMB_EXPLODE,
	&SOUND_TRANSFER_BIG,
	&SOUND_COMBO_4,
	&SOUND_COMBO_5,
	&SOUND_COMBO_6,
	&SOUND_HYPERGEM_CREATE,
	&SOUND_HYPERGEM_DESTROYED,
	&SOUND_EXPLODE,
	&SOUND_LEVEL_UP,
	&SOUND_TIME_UP,
	&SOUND_WARNING,
	&SOUND_WHIRLPOOL,
	&SOUND_GOOD,
	&SOUND_EXCELLENT,
	&SOUND_INCREDIBLE,
	&SOUND_ELECTRO_START,
	&SOUND_ELECTRO_PATH,
	&SOUND_ELECTRO_EXPLODE,
	&SOUND_GET_READY,
	&SOUND_NO_MORE_MOVES,
	&SOUND_GAME_OVER,
	&SOUND_PUZZLE_SOLVED,
	&SOUND_LEVEL_COMPLETE,
	&IMAGE_MAINMENU_FRONT,
	&IMAGE_MAINMENU_BUTTONS,
	&IMAGE_WILDCARD_DESTROYER,
	&IMAGE_HELP_INDICATOR,
	&IMAGE_HELP_INDICATOR_ARROW,
	&IMAGE_HELP_ARROW,
	&IMAGE_GEM0,
	&IMAGE_GEM1,
	&IMAGE_GEM2,
	&IMAGE_GEM3,
	&IMAGE_GEM4,
	&IMAGE_GEM5,
	&IMAGE_GEM6,
	&IMAGE_GEM_ADD,
	&IMAGE_GEM_ADD_WHITE,
	&IMAGE_SELECT,
	&IMAGE_SPARKLE,
	&IMAGE_BOARD_BORDER,
	&IMAGE_BOARD_RED_LIGHT,
	&IMAGE_PUZZLE_FRAME,
	&IMAGE_SIDEBAR_HINT_BUTTON,
	&IMAGE_SIDEBAR_MENU_BUTTON,
	&IMAGE_BOMB,
	&IMAGE_EXPLOSION,
	&IMAGE_SHARD,
	&IMAGE_BIGSTAR,
	&IMAGE_ROCK,
	&IMAGE_ROCK_CHUNK,
	&IMAGE_BAR_LEFT,
	&IMAGE_BAR_RIGHT,
	&IMAGE_BAR_MID,
	&IMAGE_CONTROLS_SCORE,
	&IMAGE_CONTROLS_CLASSIC,
	&IMAGE_CONTROLS_PUZZLE,
	&IMAGE_BUTTON_HILITE,
	&IMAGE_RING_DUDE,
	&IMAGE_GEM_LIGHTING,
	&IMAGE_POWER_GLOW,
	&IMAGE_WARP_TOP_GLOW,
	&IMAGE_WARP_BOTTOM_GLOW,
	&IMAGE_HELP_FRAME,
	&IMAGE_HELP_HORZ,
	&IMAGE_HELP_VERT,
	&IMAGE_ARROW_UP,
	&IMAGE_DIALOG,
	&IMAGE_DIALOG_HEADER,
	&IMAGE_DIALOG_BUTTON,
	&IMAGE_UI_BIG_ROLLOVER,
	&IMAGE_UI_SMALL_ROLLOVER,
	&IMAGE_UI_BUTTON_HINT,
	&IMAGE_UI_BUTTON_MENU,
	&IMAGE_UI_BUTTON_UNDO,
	&IMAGE_UI_BUTTON_PAUSE,
	&IMAGE_PUZZLE_WIDGET,
	&IMAGE_PUZZLE_GLOW,
	&IMAGE_GAME_OVER,
	&FONT_BUTTON,
	&FONT_TEXT,
	&FONT_TEXT_OUTLINED,
	&FONT_LEVEL,
	&FONT_FLOAT_POINTS,
	&FONT_SCORE,
	&FONT_BOMB,
	&FONT_HUGE,
	&IMAGE_UPSELL_BACK,
	&IMAGE_UPSELL_LOGO,
	&IMAGE_UPSELL_DELUXE,
	&IMAGE_UPSELL_DELUXE_GLOW,
	&IMAGE_UPSELL_BUTTONS,
	&IMAGE_UPSELL_TELL_MORE,
	&IMAGE_UPSELL_CENTER_1,
	&IMAGE_UPSELL_CENTER_2,
	&IMAGE_UPSELL_CENTER_3,
	&IMAGE_UPSELL_CENTER_4,
	&IMAGE_UPSELL_CENTER_5,
	&IMAGE_UPSELL_CENTER_6,
	&IMAGE_UPSELL_CENTER_7,
	&IMAGE_MAINMENU_BKG,
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
		case SOUND_TRANSFER_ID: return "SOUND_TRANSFER";
		case SOUND_COMBO_1_ID: return "SOUND_COMBO_1";
		case SOUND_COMBO_2_ID: return "SOUND_COMBO_2";
		case SOUND_COMBO_3_ID: return "SOUND_COMBO_3";
		case SOUND_BAD_ID: return "SOUND_BAD";
		case SOUND_GEM_HIT_ID: return "SOUND_GEM_HIT";
		case SOUND_CLICK_ID: return "SOUND_CLICK";
		case SOUND_SELECT_ID: return "SOUND_SELECT";
		case SOUND_MULTISHOT_ID: return "SOUND_MULTISHOT";
		case SOUND_GO_ID: return "SOUND_GO";
		case SOUND_MAIN_GAME_START_ID: return "SOUND_MAIN_GAME_START";
		case SOUND_MAIN_MOUSEOVER_ID: return "SOUND_MAIN_MOUSEOVER";
		case SOUND_BOMB_EXPLODE_ID: return "SOUND_BOMB_EXPLODE";
		case SOUND_TRANSFER_BIG_ID: return "SOUND_TRANSFER_BIG";
		case SOUND_COMBO_4_ID: return "SOUND_COMBO_4";
		case SOUND_COMBO_5_ID: return "SOUND_COMBO_5";
		case SOUND_COMBO_6_ID: return "SOUND_COMBO_6";
		case SOUND_HYPERGEM_CREATE_ID: return "SOUND_HYPERGEM_CREATE";
		case SOUND_HYPERGEM_DESTROYED_ID: return "SOUND_HYPERGEM_DESTROYED";
		case SOUND_EXPLODE_ID: return "SOUND_EXPLODE";
		case SOUND_LEVEL_UP_ID: return "SOUND_LEVEL_UP";
		case SOUND_TIME_UP_ID: return "SOUND_TIME_UP";
		case SOUND_WARNING_ID: return "SOUND_WARNING";
		case SOUND_WHIRLPOOL_ID: return "SOUND_WHIRLPOOL";
		case SOUND_GOOD_ID: return "SOUND_GOOD";
		case SOUND_EXCELLENT_ID: return "SOUND_EXCELLENT";
		case SOUND_INCREDIBLE_ID: return "SOUND_INCREDIBLE";
		case SOUND_ELECTRO_START_ID: return "SOUND_ELECTRO_START";
		case SOUND_ELECTRO_PATH_ID: return "SOUND_ELECTRO_PATH";
		case SOUND_ELECTRO_EXPLODE_ID: return "SOUND_ELECTRO_EXPLODE";
		case SOUND_GET_READY_ID: return "SOUND_GET_READY";
		case SOUND_NO_MORE_MOVES_ID: return "SOUND_NO_MORE_MOVES";
		case SOUND_GAME_OVER_ID: return "SOUND_GAME_OVER";
		case SOUND_PUZZLE_SOLVED_ID: return "SOUND_PUZZLE_SOLVED";
		case SOUND_LEVEL_COMPLETE_ID: return "SOUND_LEVEL_COMPLETE";
		case IMAGE_MAINMENU_FRONT_ID: return "IMAGE_MAINMENU_FRONT";
		case IMAGE_MAINMENU_BUTTONS_ID: return "IMAGE_MAINMENU_BUTTONS";
		case IMAGE_WILDCARD_DESTROYER_ID: return "IMAGE_WILDCARD_DESTROYER";
		case IMAGE_HELP_INDICATOR_ID: return "IMAGE_HELP_INDICATOR";
		case IMAGE_HELP_INDICATOR_ARROW_ID: return "IMAGE_HELP_INDICATOR_ARROW";
		case IMAGE_HELP_ARROW_ID: return "IMAGE_HELP_ARROW";
		case IMAGE_GEM0_ID: return "IMAGE_GEM0";
		case IMAGE_GEM1_ID: return "IMAGE_GEM1";
		case IMAGE_GEM2_ID: return "IMAGE_GEM2";
		case IMAGE_GEM3_ID: return "IMAGE_GEM3";
		case IMAGE_GEM4_ID: return "IMAGE_GEM4";
		case IMAGE_GEM5_ID: return "IMAGE_GEM5";
		case IMAGE_GEM6_ID: return "IMAGE_GEM6";
		case IMAGE_GEM_ADD_ID: return "IMAGE_GEM_ADD";
		case IMAGE_GEM_ADD_WHITE_ID: return "IMAGE_GEM_ADD_WHITE";
		case IMAGE_SELECT_ID: return "IMAGE_SELECT";
		case IMAGE_SPARKLE_ID: return "IMAGE_SPARKLE";
		case IMAGE_BOARD_BORDER_ID: return "IMAGE_BOARD_BORDER";
		case IMAGE_BOARD_RED_LIGHT_ID: return "IMAGE_BOARD_RED_LIGHT";
		case IMAGE_PUZZLE_FRAME_ID: return "IMAGE_PUZZLE_FRAME";
		case IMAGE_SIDEBAR_HINT_BUTTON_ID: return "IMAGE_SIDEBAR_HINT_BUTTON";
		case IMAGE_SIDEBAR_MENU_BUTTON_ID: return "IMAGE_SIDEBAR_MENU_BUTTON";
		case IMAGE_BOMB_ID: return "IMAGE_BOMB";
		case IMAGE_EXPLOSION_ID: return "IMAGE_EXPLOSION";
		case IMAGE_SHARD_ID: return "IMAGE_SHARD";
		case IMAGE_BIGSTAR_ID: return "IMAGE_BIGSTAR";
		case IMAGE_ROCK_ID: return "IMAGE_ROCK";
		case IMAGE_ROCK_CHUNK_ID: return "IMAGE_ROCK_CHUNK";
		case IMAGE_BAR_LEFT_ID: return "IMAGE_BAR_LEFT";
		case IMAGE_BAR_RIGHT_ID: return "IMAGE_BAR_RIGHT";
		case IMAGE_BAR_MID_ID: return "IMAGE_BAR_MID";
		case IMAGE_CONTROLS_SCORE_ID: return "IMAGE_CONTROLS_SCORE";
		case IMAGE_CONTROLS_CLASSIC_ID: return "IMAGE_CONTROLS_CLASSIC";
		case IMAGE_CONTROLS_PUZZLE_ID: return "IMAGE_CONTROLS_PUZZLE";
		case IMAGE_BUTTON_HILITE_ID: return "IMAGE_BUTTON_HILITE";
		case IMAGE_RING_DUDE_ID: return "IMAGE_RING_DUDE";
		case IMAGE_GEM_LIGHTING_ID: return "IMAGE_GEM_LIGHTING";
		case IMAGE_POWER_GLOW_ID: return "IMAGE_POWER_GLOW";
		case IMAGE_WARP_TOP_GLOW_ID: return "IMAGE_WARP_TOP_GLOW";
		case IMAGE_WARP_BOTTOM_GLOW_ID: return "IMAGE_WARP_BOTTOM_GLOW";
		case IMAGE_HELP_FRAME_ID: return "IMAGE_HELP_FRAME";
		case IMAGE_HELP_HORZ_ID: return "IMAGE_HELP_HORZ";
		case IMAGE_HELP_VERT_ID: return "IMAGE_HELP_VERT";
		case IMAGE_ARROW_UP_ID: return "IMAGE_ARROW_UP";
		case IMAGE_DIALOG_ID: return "IMAGE_DIALOG";
		case IMAGE_DIALOG_HEADER_ID: return "IMAGE_DIALOG_HEADER";
		case IMAGE_DIALOG_BUTTON_ID: return "IMAGE_DIALOG_BUTTON";
		case IMAGE_UI_BIG_ROLLOVER_ID: return "IMAGE_UI_BIG_ROLLOVER";
		case IMAGE_UI_SMALL_ROLLOVER_ID: return "IMAGE_UI_SMALL_ROLLOVER";
		case IMAGE_UI_BUTTON_HINT_ID: return "IMAGE_UI_BUTTON_HINT";
		case IMAGE_UI_BUTTON_MENU_ID: return "IMAGE_UI_BUTTON_MENU";
		case IMAGE_UI_BUTTON_UNDO_ID: return "IMAGE_UI_BUTTON_UNDO";
		case IMAGE_UI_BUTTON_PAUSE_ID: return "IMAGE_UI_BUTTON_PAUSE";
		case IMAGE_PUZZLE_WIDGET_ID: return "IMAGE_PUZZLE_WIDGET";
		case IMAGE_PUZZLE_GLOW_ID: return "IMAGE_PUZZLE_GLOW";
		case IMAGE_GAME_OVER_ID: return "IMAGE_GAME_OVER";
		case FONT_BUTTON_ID: return "FONT_BUTTON";
		case FONT_TEXT_ID: return "FONT_TEXT";
		case FONT_TEXT_OUTLINED_ID: return "FONT_TEXT_OUTLINED";
		case FONT_LEVEL_ID: return "FONT_LEVEL";
		case FONT_FLOAT_POINTS_ID: return "FONT_FLOAT_POINTS";
		case FONT_SCORE_ID: return "FONT_SCORE";
		case FONT_BOMB_ID: return "FONT_BOMB";
		case FONT_HUGE_ID: return "FONT_HUGE";
		case IMAGE_UPSELL_BACK_ID: return "IMAGE_UPSELL_BACK";
		case IMAGE_UPSELL_LOGO_ID: return "IMAGE_UPSELL_LOGO";
		case IMAGE_UPSELL_DELUXE_ID: return "IMAGE_UPSELL_DELUXE";
		case IMAGE_UPSELL_DELUXE_GLOW_ID: return "IMAGE_UPSELL_DELUXE_GLOW";
		case IMAGE_UPSELL_BUTTONS_ID: return "IMAGE_UPSELL_BUTTONS";
		case IMAGE_UPSELL_TELL_MORE_ID: return "IMAGE_UPSELL_TELL_MORE";
		case IMAGE_UPSELL_CENTER_1_ID: return "IMAGE_UPSELL_CENTER_1";
		case IMAGE_UPSELL_CENTER_2_ID: return "IMAGE_UPSELL_CENTER_2";
		case IMAGE_UPSELL_CENTER_3_ID: return "IMAGE_UPSELL_CENTER_3";
		case IMAGE_UPSELL_CENTER_4_ID: return "IMAGE_UPSELL_CENTER_4";
		case IMAGE_UPSELL_CENTER_5_ID: return "IMAGE_UPSELL_CENTER_5";
		case IMAGE_UPSELL_CENTER_6_ID: return "IMAGE_UPSELL_CENTER_6";
		case IMAGE_UPSELL_CENTER_7_ID: return "IMAGE_UPSELL_CENTER_7";
		case IMAGE_MAINMENU_BKG_ID: return "IMAGE_MAINMENU_BKG";
		default: return "";
	}
}

