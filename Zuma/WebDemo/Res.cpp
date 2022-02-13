#include "Res.h"
#include "SexyAppFramework/ResourceManager.h"

using namespace Sexy;

#pragma warning(disable:4311 4312)

static bool gNeedRecalcVariableToIdMap = false;

bool Sexy::ExtractResourcesByName(ResourceManager *theManager, const char *theName)
{
	if (strcmp(theName,"LoadingThread")==0) return ExtractLoadingThreadResources(theManager);
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
Font* Sexy::FONT_DIALOG;
Font* Sexy::FONT_FLOAT;
Font* Sexy::FONT_MAIN10;
Font* Sexy::FONT_MONODIGIT;
Font* Sexy::FONT_TITLE;
Image* Sexy::IMAGE_BLUE_BALL;
Image* Sexy::IMAGE_BLUE_BOMB;
Image* Sexy::IMAGE_BLUE_LIGHT;
Image* Sexy::IMAGE_BLUE_SLOW;
Image* Sexy::IMAGE_COIN;
Image* Sexy::IMAGE_CURSOR_POINTER;
Image* Sexy::IMAGE_DIALOG_BACK;
Image* Sexy::IMAGE_DIALOG_BUTTON;
Image* Sexy::IMAGE_EXPLOSION;
Image* Sexy::IMAGE_EYE_BLINK;
Image* Sexy::IMAGE_FROG_LIVES;
Image* Sexy::IMAGE_GREEN_BALL;
Image* Sexy::IMAGE_GREEN_BOMB;
Image* Sexy::IMAGE_GREEN_LIGHT;
Image* Sexy::IMAGE_GREEN_SLOW;
Image* Sexy::IMAGE_HELP_SCREEN;
Image* Sexy::IMAGE_HOLE;
Image* Sexy::IMAGE_HOLEANIM;
Image* Sexy::IMAGE_HOLEMASK;
Image* Sexy::IMAGE_MENU_BAR;
Image* Sexy::IMAGE_MENU_BUTTON;
Image* Sexy::IMAGE_NEXT_BALL;
Image* Sexy::IMAGE_PLAY_BUTTON;
Image* Sexy::IMAGE_PURPLE_BALL;
Image* Sexy::IMAGE_PURPLE_BOMB;
Image* Sexy::IMAGE_PURPLE_LIGHT;
Image* Sexy::IMAGE_PURPLE_SLOW;
Image* Sexy::IMAGE_RED_BALL;
Image* Sexy::IMAGE_RED_BOMB;
Image* Sexy::IMAGE_RED_LIGHT;
Image* Sexy::IMAGE_RED_SLOW;
Image* Sexy::IMAGE_SHOOTER_BOTTOM;
Image* Sexy::IMAGE_SHOOTER_TONGUE;
Image* Sexy::IMAGE_SHOOTER_TOP;
Image* Sexy::IMAGE_SKULLCAP;
Image* Sexy::IMAGE_SKULLJAW;
Image* Sexy::IMAGE_SLOW_LIGHT;
Image* Sexy::IMAGE_SMALL_TEXTURE;
Image* Sexy::IMAGE_SPARKLE;
Image* Sexy::IMAGE_WHITE_BALL;
Image* Sexy::IMAGE_WHITE_BOMB;
Image* Sexy::IMAGE_WHITE_LIGHT;
Image* Sexy::IMAGE_WHITE_SLOW;
Image* Sexy::IMAGE_YELLOW_BALL;
Image* Sexy::IMAGE_YELLOW_BOMB;
Image* Sexy::IMAGE_YELLOW_LIGHT;
Image* Sexy::IMAGE_YELLOW_SLOW;
Image* Sexy::IMAGE_ZUMA_BAR;
Image* Sexy::IMAGE_ZUMA_BAR_DONE;
int Sexy::SOUND_BALLCLICK1;
int Sexy::SOUND_BALLCLICK2;
int Sexy::SOUND_BALLDESTROYED1;
int Sexy::SOUND_BALLDESTROYED2;
int Sexy::SOUND_BALLDESTROYED3;
int Sexy::SOUND_BALLFIRE;
int Sexy::SOUND_BAR_FULL;
int Sexy::SOUND_BONUS_EXPLOSION;
int Sexy::SOUND_BUTTON1;
int Sexy::SOUND_CHAIN_BONUS;
int Sexy::SOUND_COMBO;
int Sexy::SOUND_EXPLODE;
int Sexy::SOUND_GAP_BONUS;
int Sexy::SOUND_JEWEL_APPEAR;
int Sexy::SOUND_JEWEL_DISAPPEAR;
int Sexy::SOUND_JEWEL_HIT;
int Sexy::SOUND_POP;
int Sexy::SOUND_ROLLING;
int Sexy::SOUND_SLOWDOWN_BALL;
int Sexy::SOUND_TRAIL_LIGHT;
int Sexy::SOUND_TRAIL_LIGHT_END;
int Sexy::SOUND_WARNING;

bool Sexy::ExtractLoadingThreadResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		FONT_DIALOG = aMgr.GetFontThrow("FONT_DIALOG");
		FONT_FLOAT = aMgr.GetFontThrow("FONT_FLOAT");
		FONT_MAIN10 = aMgr.GetFontThrow("FONT_MAIN10");
		FONT_MONODIGIT = aMgr.GetFontThrow("FONT_MONODIGIT");
		FONT_TITLE = aMgr.GetFontThrow("FONT_TITLE");
		IMAGE_BLUE_BALL = aMgr.GetImageThrow("IMAGE_BLUE_BALL");
		IMAGE_BLUE_BOMB = aMgr.GetImageThrow("IMAGE_BLUE_BOMB");
		IMAGE_BLUE_LIGHT = aMgr.GetImageThrow("IMAGE_BLUE_LIGHT");
		IMAGE_BLUE_SLOW = aMgr.GetImageThrow("IMAGE_BLUE_SLOW");
		IMAGE_COIN = aMgr.GetImageThrow("IMAGE_COIN");
		IMAGE_CURSOR_POINTER = aMgr.GetImageThrow("IMAGE_CURSOR_POINTER");
		IMAGE_DIALOG_BACK = aMgr.GetImageThrow("IMAGE_DIALOG_BACK");
		IMAGE_DIALOG_BUTTON = aMgr.GetImageThrow("IMAGE_DIALOG_BUTTON");
		IMAGE_EXPLOSION = aMgr.GetImageThrow("IMAGE_EXPLOSION");
		IMAGE_EYE_BLINK = aMgr.GetImageThrow("IMAGE_EYE_BLINK");
		IMAGE_FROG_LIVES = aMgr.GetImageThrow("IMAGE_FROG_LIVES");
		IMAGE_GREEN_BALL = aMgr.GetImageThrow("IMAGE_GREEN_BALL");
		IMAGE_GREEN_BOMB = aMgr.GetImageThrow("IMAGE_GREEN_BOMB");
		IMAGE_GREEN_LIGHT = aMgr.GetImageThrow("IMAGE_GREEN_LIGHT");
		IMAGE_GREEN_SLOW = aMgr.GetImageThrow("IMAGE_GREEN_SLOW");
		IMAGE_HELP_SCREEN = aMgr.GetImageThrow("IMAGE_HELP_SCREEN");
		IMAGE_HOLE = aMgr.GetImageThrow("IMAGE_HOLE");
		IMAGE_HOLEANIM = aMgr.GetImageThrow("IMAGE_HOLEANIM");
		IMAGE_HOLEMASK = aMgr.GetImageThrow("IMAGE_HOLEMASK");
		IMAGE_MENU_BAR = aMgr.GetImageThrow("IMAGE_MENU_BAR");
		IMAGE_MENU_BUTTON = aMgr.GetImageThrow("IMAGE_MENU_BUTTON");
		IMAGE_NEXT_BALL = aMgr.GetImageThrow("IMAGE_NEXT_BALL");
		IMAGE_PLAY_BUTTON = aMgr.GetImageThrow("IMAGE_PLAY_BUTTON");
		IMAGE_PURPLE_BALL = aMgr.GetImageThrow("IMAGE_PURPLE_BALL");
		IMAGE_PURPLE_BOMB = aMgr.GetImageThrow("IMAGE_PURPLE_BOMB");
		IMAGE_PURPLE_LIGHT = aMgr.GetImageThrow("IMAGE_PURPLE_LIGHT");
		IMAGE_PURPLE_SLOW = aMgr.GetImageThrow("IMAGE_PURPLE_SLOW");
		IMAGE_RED_BALL = aMgr.GetImageThrow("IMAGE_RED_BALL");
		IMAGE_RED_BOMB = aMgr.GetImageThrow("IMAGE_RED_BOMB");
		IMAGE_RED_LIGHT = aMgr.GetImageThrow("IMAGE_RED_LIGHT");
		IMAGE_RED_SLOW = aMgr.GetImageThrow("IMAGE_RED_SLOW");
		IMAGE_SHOOTER_BOTTOM = aMgr.GetImageThrow("IMAGE_SHOOTER_BOTTOM");
		IMAGE_SHOOTER_TONGUE = aMgr.GetImageThrow("IMAGE_SHOOTER_TONGUE");
		IMAGE_SHOOTER_TOP = aMgr.GetImageThrow("IMAGE_SHOOTER_TOP");
		IMAGE_SKULLCAP = aMgr.GetImageThrow("IMAGE_SKULLCAP");
		IMAGE_SKULLJAW = aMgr.GetImageThrow("IMAGE_SKULLJAW");
		IMAGE_SLOW_LIGHT = aMgr.GetImageThrow("IMAGE_SLOW_LIGHT");
		IMAGE_SMALL_TEXTURE = aMgr.GetImageThrow("IMAGE_SMALL_TEXTURE");
		IMAGE_SPARKLE = aMgr.GetImageThrow("IMAGE_SPARKLE");
		IMAGE_WHITE_BALL = aMgr.GetImageThrow("IMAGE_WHITE_BALL");
		IMAGE_WHITE_BOMB = aMgr.GetImageThrow("IMAGE_WHITE_BOMB");
		IMAGE_WHITE_LIGHT = aMgr.GetImageThrow("IMAGE_WHITE_LIGHT");
		IMAGE_WHITE_SLOW = aMgr.GetImageThrow("IMAGE_WHITE_SLOW");
		IMAGE_YELLOW_BALL = aMgr.GetImageThrow("IMAGE_YELLOW_BALL");
		IMAGE_YELLOW_BOMB = aMgr.GetImageThrow("IMAGE_YELLOW_BOMB");
		IMAGE_YELLOW_LIGHT = aMgr.GetImageThrow("IMAGE_YELLOW_LIGHT");
		IMAGE_YELLOW_SLOW = aMgr.GetImageThrow("IMAGE_YELLOW_SLOW");
		IMAGE_ZUMA_BAR = aMgr.GetImageThrow("IMAGE_ZUMA_BAR");
		IMAGE_ZUMA_BAR_DONE = aMgr.GetImageThrow("IMAGE_ZUMA_BAR_DONE");
		SOUND_BALLCLICK1 = aMgr.GetSoundThrow("SOUND_BALLCLICK1");
		SOUND_BALLCLICK2 = aMgr.GetSoundThrow("SOUND_BALLCLICK2");
		SOUND_BALLDESTROYED1 = aMgr.GetSoundThrow("SOUND_BALLDESTROYED1");
		SOUND_BALLDESTROYED2 = aMgr.GetSoundThrow("SOUND_BALLDESTROYED2");
		SOUND_BALLDESTROYED3 = aMgr.GetSoundThrow("SOUND_BALLDESTROYED3");
		SOUND_BALLFIRE = aMgr.GetSoundThrow("SOUND_BALLFIRE");
		SOUND_BAR_FULL = aMgr.GetSoundThrow("SOUND_BAR_FULL");
		SOUND_BONUS_EXPLOSION = aMgr.GetSoundThrow("SOUND_BONUS_EXPLOSION");
		SOUND_BUTTON1 = aMgr.GetSoundThrow("SOUND_BUTTON1");
		SOUND_CHAIN_BONUS = aMgr.GetSoundThrow("SOUND_CHAIN_BONUS");
		SOUND_COMBO = aMgr.GetSoundThrow("SOUND_COMBO");
		SOUND_EXPLODE = aMgr.GetSoundThrow("SOUND_EXPLODE");
		SOUND_GAP_BONUS = aMgr.GetSoundThrow("SOUND_GAP_BONUS");
		SOUND_JEWEL_APPEAR = aMgr.GetSoundThrow("SOUND_JEWEL_APPEAR");
		SOUND_JEWEL_DISAPPEAR = aMgr.GetSoundThrow("SOUND_JEWEL_DISAPPEAR");
		SOUND_JEWEL_HIT = aMgr.GetSoundThrow("SOUND_JEWEL_HIT");
		SOUND_POP = aMgr.GetSoundThrow("SOUND_POP");
		SOUND_ROLLING = aMgr.GetSoundThrow("SOUND_ROLLING");
		SOUND_SLOWDOWN_BALL = aMgr.GetSoundThrow("SOUND_SLOWDOWN_BALL");
		SOUND_TRAIL_LIGHT = aMgr.GetSoundThrow("SOUND_TRAIL_LIGHT");
		SOUND_TRAIL_LIGHT_END = aMgr.GetSoundThrow("SOUND_TRAIL_LIGHT_END");
		SOUND_WARNING = aMgr.GetSoundThrow("SOUND_WARNING");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// UpsellScreen Resources
Image* Sexy::IMAGE_CONTINUE_BUTTON;
Image* Sexy::IMAGE_DOWNLOAD_BUTTON;
Image* Sexy::IMAGE_UPSELL1;
Image* Sexy::IMAGE_UPSELL2;
Image* Sexy::IMAGE_UPSELL3;
Image* Sexy::IMAGE_UPSELL4;
Image* Sexy::IMAGE_UPSELL5;
Image* Sexy::IMAGE_UPSELL6;
Image* Sexy::IMAGE_UPSELL7;
Image* Sexy::IMAGE_UPSELL_SCREEN;

bool Sexy::ExtractUpsellScreenResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_CONTINUE_BUTTON = aMgr.GetImageThrow("IMAGE_CONTINUE_BUTTON");
		IMAGE_DOWNLOAD_BUTTON = aMgr.GetImageThrow("IMAGE_DOWNLOAD_BUTTON");
		IMAGE_UPSELL1 = aMgr.GetImageThrow("IMAGE_UPSELL1");
		IMAGE_UPSELL2 = aMgr.GetImageThrow("IMAGE_UPSELL2");
		IMAGE_UPSELL3 = aMgr.GetImageThrow("IMAGE_UPSELL3");
		IMAGE_UPSELL4 = aMgr.GetImageThrow("IMAGE_UPSELL4");
		IMAGE_UPSELL5 = aMgr.GetImageThrow("IMAGE_UPSELL5");
		IMAGE_UPSELL6 = aMgr.GetImageThrow("IMAGE_UPSELL6");
		IMAGE_UPSELL7 = aMgr.GetImageThrow("IMAGE_UPSELL7");
		IMAGE_UPSELL_SCREEN = aMgr.GetImageThrow("IMAGE_UPSELL_SCREEN");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

static void* gResources[] =
{
	&IMAGE_HELP_SCREEN,
	&IMAGE_CURSOR_POINTER,
	&IMAGE_BLUE_BALL,
	&IMAGE_YELLOW_BALL,
	&IMAGE_RED_BALL,
	&IMAGE_GREEN_BALL,
	&IMAGE_PURPLE_BALL,
	&IMAGE_WHITE_BALL,
	&IMAGE_NEXT_BALL,
	&IMAGE_BLUE_SLOW,
	&IMAGE_YELLOW_SLOW,
	&IMAGE_RED_SLOW,
	&IMAGE_GREEN_SLOW,
	&IMAGE_PURPLE_SLOW,
	&IMAGE_WHITE_SLOW,
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
	&IMAGE_SLOW_LIGHT,
	&IMAGE_EXPLOSION,
	&IMAGE_SPARKLE,
	&IMAGE_SHOOTER_BOTTOM,
	&IMAGE_SHOOTER_TOP,
	&IMAGE_SHOOTER_TONGUE,
	&IMAGE_EYE_BLINK,
	&IMAGE_DIALOG_BUTTON,
	&IMAGE_MENU_BUTTON,
	&IMAGE_PLAY_BUTTON,
	&IMAGE_SMALL_TEXTURE,
	&IMAGE_DIALOG_BACK,
	&IMAGE_HOLE,
	&IMAGE_HOLEMASK,
	&IMAGE_SKULLCAP,
	&IMAGE_SKULLJAW,
	&IMAGE_HOLEANIM,
	&IMAGE_COIN,
	&IMAGE_MENU_BAR,
	&IMAGE_ZUMA_BAR,
	&IMAGE_ZUMA_BAR_DONE,
	&IMAGE_FROG_LIVES,
	&SOUND_BALLCLICK1,
	&SOUND_BALLCLICK2,
	&SOUND_BALLFIRE,
	&SOUND_WARNING,
	&SOUND_EXPLODE,
	&SOUND_JEWEL_APPEAR,
	&SOUND_JEWEL_DISAPPEAR,
	&SOUND_JEWEL_HIT,
	&SOUND_CHAIN_BONUS,
	&SOUND_GAP_BONUS,
	&SOUND_ROLLING,
	&SOUND_SLOWDOWN_BALL,
	&SOUND_TRAIL_LIGHT,
	&SOUND_TRAIL_LIGHT_END,
	&SOUND_BAR_FULL,
	&SOUND_BONUS_EXPLOSION,
	&SOUND_BALLDESTROYED1,
	&SOUND_BALLDESTROYED2,
	&SOUND_BALLDESTROYED3,
	&SOUND_COMBO,
	&SOUND_BUTTON1,
	&SOUND_POP,
	&FONT_MAIN10,
	&FONT_DIALOG,
	&FONT_FLOAT,
	&FONT_TITLE,
	&FONT_MONODIGIT,
	&IMAGE_UPSELL_SCREEN,
	&IMAGE_UPSELL1,
	&IMAGE_UPSELL2,
	&IMAGE_UPSELL3,
	&IMAGE_UPSELL4,
	&IMAGE_UPSELL5,
	&IMAGE_UPSELL6,
	&IMAGE_UPSELL7,
	&IMAGE_DOWNLOAD_BUTTON,
	&IMAGE_CONTINUE_BUTTON,
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
		case IMAGE_HELP_SCREEN_ID: return "IMAGE_HELP_SCREEN";
		case IMAGE_CURSOR_POINTER_ID: return "IMAGE_CURSOR_POINTER";
		case IMAGE_BLUE_BALL_ID: return "IMAGE_BLUE_BALL";
		case IMAGE_YELLOW_BALL_ID: return "IMAGE_YELLOW_BALL";
		case IMAGE_RED_BALL_ID: return "IMAGE_RED_BALL";
		case IMAGE_GREEN_BALL_ID: return "IMAGE_GREEN_BALL";
		case IMAGE_PURPLE_BALL_ID: return "IMAGE_PURPLE_BALL";
		case IMAGE_WHITE_BALL_ID: return "IMAGE_WHITE_BALL";
		case IMAGE_NEXT_BALL_ID: return "IMAGE_NEXT_BALL";
		case IMAGE_BLUE_SLOW_ID: return "IMAGE_BLUE_SLOW";
		case IMAGE_YELLOW_SLOW_ID: return "IMAGE_YELLOW_SLOW";
		case IMAGE_RED_SLOW_ID: return "IMAGE_RED_SLOW";
		case IMAGE_GREEN_SLOW_ID: return "IMAGE_GREEN_SLOW";
		case IMAGE_PURPLE_SLOW_ID: return "IMAGE_PURPLE_SLOW";
		case IMAGE_WHITE_SLOW_ID: return "IMAGE_WHITE_SLOW";
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
		case IMAGE_SLOW_LIGHT_ID: return "IMAGE_SLOW_LIGHT";
		case IMAGE_EXPLOSION_ID: return "IMAGE_EXPLOSION";
		case IMAGE_SPARKLE_ID: return "IMAGE_SPARKLE";
		case IMAGE_SHOOTER_BOTTOM_ID: return "IMAGE_SHOOTER_BOTTOM";
		case IMAGE_SHOOTER_TOP_ID: return "IMAGE_SHOOTER_TOP";
		case IMAGE_SHOOTER_TONGUE_ID: return "IMAGE_SHOOTER_TONGUE";
		case IMAGE_EYE_BLINK_ID: return "IMAGE_EYE_BLINK";
		case IMAGE_DIALOG_BUTTON_ID: return "IMAGE_DIALOG_BUTTON";
		case IMAGE_MENU_BUTTON_ID: return "IMAGE_MENU_BUTTON";
		case IMAGE_PLAY_BUTTON_ID: return "IMAGE_PLAY_BUTTON";
		case IMAGE_SMALL_TEXTURE_ID: return "IMAGE_SMALL_TEXTURE";
		case IMAGE_DIALOG_BACK_ID: return "IMAGE_DIALOG_BACK";
		case IMAGE_HOLE_ID: return "IMAGE_HOLE";
		case IMAGE_HOLEMASK_ID: return "IMAGE_HOLEMASK";
		case IMAGE_SKULLCAP_ID: return "IMAGE_SKULLCAP";
		case IMAGE_SKULLJAW_ID: return "IMAGE_SKULLJAW";
		case IMAGE_HOLEANIM_ID: return "IMAGE_HOLEANIM";
		case IMAGE_COIN_ID: return "IMAGE_COIN";
		case IMAGE_MENU_BAR_ID: return "IMAGE_MENU_BAR";
		case IMAGE_ZUMA_BAR_ID: return "IMAGE_ZUMA_BAR";
		case IMAGE_ZUMA_BAR_DONE_ID: return "IMAGE_ZUMA_BAR_DONE";
		case IMAGE_FROG_LIVES_ID: return "IMAGE_FROG_LIVES";
		case SOUND_BALLCLICK1_ID: return "SOUND_BALLCLICK1";
		case SOUND_BALLCLICK2_ID: return "SOUND_BALLCLICK2";
		case SOUND_BALLFIRE_ID: return "SOUND_BALLFIRE";
		case SOUND_WARNING_ID: return "SOUND_WARNING";
		case SOUND_EXPLODE_ID: return "SOUND_EXPLODE";
		case SOUND_JEWEL_APPEAR_ID: return "SOUND_JEWEL_APPEAR";
		case SOUND_JEWEL_DISAPPEAR_ID: return "SOUND_JEWEL_DISAPPEAR";
		case SOUND_JEWEL_HIT_ID: return "SOUND_JEWEL_HIT";
		case SOUND_CHAIN_BONUS_ID: return "SOUND_CHAIN_BONUS";
		case SOUND_GAP_BONUS_ID: return "SOUND_GAP_BONUS";
		case SOUND_ROLLING_ID: return "SOUND_ROLLING";
		case SOUND_SLOWDOWN_BALL_ID: return "SOUND_SLOWDOWN_BALL";
		case SOUND_TRAIL_LIGHT_ID: return "SOUND_TRAIL_LIGHT";
		case SOUND_TRAIL_LIGHT_END_ID: return "SOUND_TRAIL_LIGHT_END";
		case SOUND_BAR_FULL_ID: return "SOUND_BAR_FULL";
		case SOUND_BONUS_EXPLOSION_ID: return "SOUND_BONUS_EXPLOSION";
		case SOUND_BALLDESTROYED1_ID: return "SOUND_BALLDESTROYED1";
		case SOUND_BALLDESTROYED2_ID: return "SOUND_BALLDESTROYED2";
		case SOUND_BALLDESTROYED3_ID: return "SOUND_BALLDESTROYED3";
		case SOUND_COMBO_ID: return "SOUND_COMBO";
		case SOUND_BUTTON1_ID: return "SOUND_BUTTON1";
		case SOUND_POP_ID: return "SOUND_POP";
		case FONT_MAIN10_ID: return "FONT_MAIN10";
		case FONT_DIALOG_ID: return "FONT_DIALOG";
		case FONT_FLOAT_ID: return "FONT_FLOAT";
		case FONT_TITLE_ID: return "FONT_TITLE";
		case FONT_MONODIGIT_ID: return "FONT_MONODIGIT";
		case IMAGE_UPSELL_SCREEN_ID: return "IMAGE_UPSELL_SCREEN";
		case IMAGE_UPSELL1_ID: return "IMAGE_UPSELL1";
		case IMAGE_UPSELL2_ID: return "IMAGE_UPSELL2";
		case IMAGE_UPSELL3_ID: return "IMAGE_UPSELL3";
		case IMAGE_UPSELL4_ID: return "IMAGE_UPSELL4";
		case IMAGE_UPSELL5_ID: return "IMAGE_UPSELL5";
		case IMAGE_UPSELL6_ID: return "IMAGE_UPSELL6";
		case IMAGE_UPSELL7_ID: return "IMAGE_UPSELL7";
		case IMAGE_DOWNLOAD_BUTTON_ID: return "IMAGE_DOWNLOAD_BUTTON";
		case IMAGE_CONTINUE_BUTTON_ID: return "IMAGE_CONTINUE_BUTTON";
		default: return "";
	}
}

