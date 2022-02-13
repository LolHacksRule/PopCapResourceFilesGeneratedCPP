#include "Res.h"
#include "SexyAppFramework/ResourceManager.h"

using namespace Sexy;

#pragma warning(disable:4311 4312)

static bool gNeedRecalcVariableToIdMap = false;

bool Sexy::ExtractResourcesByName(ResourceManager *theManager, const char *theName)
{
	if (strcmp(theName,"CommonGame")==0) return ExtractCommonGameResources(theManager);
	if (strcmp(theName,"Init")==0) return ExtractInitResources(theManager);
	if (strcmp(theName,"TitleAndMM")==0) return ExtractTitleAndMMResources(theManager);
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

// CommonGame Resources
Image* Sexy::IMAGE_B1A_BG1;
Image* Sexy::IMAGE_B1A_BG2;
Image* Sexy::IMAGE_B1A_BG3;
Image* Sexy::IMAGE_B1A_BG4;
Image* Sexy::IMAGE_BANNER_LARGE;
Image* Sexy::IMAGE_BANNER_SMALL;
Image* Sexy::IMAGE_BLUE_SPARKLE;
Image* Sexy::IMAGE_BUTTON_ATTACK;
Image* Sexy::IMAGE_BUTTON_MENU;
Image* Sexy::IMAGE_BUTTON_SCRAMBLE;
Image* Sexy::IMAGE_BUTTON_SCRAMBLE_SHADOW;
Image* Sexy::IMAGE_COMBAT_UI_BOTTOM;
Image* Sexy::IMAGE_COMBAT_UI_TOP;
Image* Sexy::IMAGE_CP_SKIP;
Image* Sexy::IMAGE_GRAYBAR_BG;
Image* Sexy::IMAGE_HEARTBLINK;
Image* Sexy::IMAGE_HEARTBLINK_CC;
Image* Sexy::IMAGE_HEARTS;
Image* Sexy::IMAGE_HEARTS_BG;
Image* Sexy::IMAGE_HEARTS_CC;
Image* Sexy::IMAGE_HEART_BITS;
Image* Sexy::IMAGE_HEART_MASK;
Image* Sexy::IMAGE_HEART_MASK_CC;
Image* Sexy::IMAGE_IMPACT_LARGE;
Image* Sexy::IMAGE_IMPACT_SMALL;
Image* Sexy::IMAGE_ITEM_ATTACK;
Image* Sexy::IMAGE_ITEM_ATTACK_NB;
Image* Sexy::IMAGE_ITEM_HEALTH;
Image* Sexy::IMAGE_ITEM_HEALTH_NB;
Image* Sexy::IMAGE_ITEM_PURIFY;
Image* Sexy::IMAGE_ITEM_PURIFY_NB;
Image* Sexy::IMAGE_LEX_ICON;
Image* Sexy::IMAGE_LOW_HEALTH_OUTLINE;
Image* Sexy::IMAGE_MAP_CHECK;
Image* Sexy::IMAGE_MAP_LEX_WARP;
Image* Sexy::IMAGE_MAP_MINIGAME_ANIM;
Image* Sexy::IMAGE_MINIGAME_ICON;
Image* Sexy::IMAGE_PAUSED_BANNER;
Image* Sexy::IMAGE_PORTRAIT_CODEX;
Image* Sexy::IMAGE_PORTRAIT_HAMLET;
Image* Sexy::IMAGE_PORTRAIT_LEX;
Image* Sexy::IMAGE_PORTRAIT_LIBRARIAN;
Image* Sexy::IMAGE_PORTRAIT_ODIN;
Image* Sexy::IMAGE_PORTRAIT_RATKING;
Image* Sexy::IMAGE_RED_SPARKLE;
Image* Sexy::IMAGE_STATS_BOX;
Image* Sexy::IMAGE_STATUSTEXT_FROZEN;
Image* Sexy::IMAGE_STATUSTEXT_POISONED;
Image* Sexy::IMAGE_STATUSTEXT_POWERDOWN;
Image* Sexy::IMAGE_STATUSTEXT_POWERUP;
Image* Sexy::IMAGE_STATUS_ICONS;
Image* Sexy::IMAGE_TILE_BASIC;
Image* Sexy::IMAGE_TILE_PIPS;
Image* Sexy::IMAGE_WORDPOWER_GLOW_INNER_LEFT;
Image* Sexy::IMAGE_WORDPOWER_GLOW_INNER_MID;
Image* Sexy::IMAGE_WORDPOWER_GLOW_INNER_RIGHT;
Image* Sexy::IMAGE_WORDPOWER_GLOW_LEFT;
Image* Sexy::IMAGE_WORDPOWER_GLOW_LEFT_SMALL;
Image* Sexy::IMAGE_WORDPOWER_GLOW_MIDDLE;
Image* Sexy::IMAGE_WORDPOWER_GLOW_MIDDLE_SMALL;
Image* Sexy::IMAGE_WORDPOWER_GLOW_RIGHT;
Image* Sexy::IMAGE_WORDPOWER_GLOW_RIGHT_SMALL;
Image* Sexy::IMAGE_WP_SPARKLE_MEDIUM;
Image* Sexy::IMAGE_WP_SPARKLE_SMALL;
int Sexy::SOUND_CLICK1;
int Sexy::SOUND_CLICK2;
int Sexy::SOUND_CROWD_CHEER;
int Sexy::SOUND_EFFECT_FROZEN;
int Sexy::SOUND_EFFECT_POISON;
int Sexy::SOUND_FREEZE;
int Sexy::SOUND_GEMSPAWN;
int Sexy::SOUND_HEAL;
int Sexy::SOUND_IMPACT_LARGE;
int Sexy::SOUND_IMPACT_SMALL;
int Sexy::SOUND_LEX_ASTONISHING;
int Sexy::SOUND_LEX_ATTACK1;
int Sexy::SOUND_LEX_AWESOME;
int Sexy::SOUND_LEX_EXCELLENT;
int Sexy::SOUND_LEX_FANTASTIC;
int Sexy::SOUND_LEX_GOOD;
int Sexy::SOUND_LEX_INCREDIBLE;
int Sexy::SOUND_LEX_NICE;
int Sexy::SOUND_LEX_VERYGOOD;
int Sexy::SOUND_LEX_WOW;
int Sexy::SOUND_LOW_HEALTH;
int Sexy::SOUND_POISON;
int Sexy::SOUND_POTION_HEAL;
int Sexy::SOUND_SCRAMBLE;
int Sexy::SOUND_TILELOCK;
int Sexy::SOUND_TILE_SELECT;
int Sexy::SOUND_WORD_POWER;

bool Sexy::ExtractCommonGameResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_B1A_BG1 = aMgr.GetImageThrow("IMAGE_B1A_BG1");
		IMAGE_B1A_BG2 = aMgr.GetImageThrow("IMAGE_B1A_BG2");
		IMAGE_B1A_BG3 = aMgr.GetImageThrow("IMAGE_B1A_BG3");
		IMAGE_B1A_BG4 = aMgr.GetImageThrow("IMAGE_B1A_BG4");
		IMAGE_BANNER_LARGE = aMgr.GetImageThrow("IMAGE_BANNER_LARGE");
		IMAGE_BANNER_SMALL = aMgr.GetImageThrow("IMAGE_BANNER_SMALL");
		IMAGE_BLUE_SPARKLE = aMgr.GetImageThrow("IMAGE_BLUE_SPARKLE");
		IMAGE_BUTTON_ATTACK = aMgr.GetImageThrow("IMAGE_BUTTON_ATTACK");
		IMAGE_BUTTON_MENU = aMgr.GetImageThrow("IMAGE_BUTTON_MENU");
		IMAGE_BUTTON_SCRAMBLE = aMgr.GetImageThrow("IMAGE_BUTTON_SCRAMBLE");
		IMAGE_BUTTON_SCRAMBLE_SHADOW = aMgr.GetImageThrow("IMAGE_BUTTON_SCRAMBLE_SHADOW");
		IMAGE_COMBAT_UI_BOTTOM = aMgr.GetImageThrow("IMAGE_COMBAT_UI_BOTTOM");
		IMAGE_COMBAT_UI_TOP = aMgr.GetImageThrow("IMAGE_COMBAT_UI_TOP");
		IMAGE_CP_SKIP = aMgr.GetImageThrow("IMAGE_CP_SKIP");
		IMAGE_GRAYBAR_BG = aMgr.GetImageThrow("IMAGE_GRAYBAR_BG");
		IMAGE_HEARTBLINK = aMgr.GetImageThrow("IMAGE_HEARTBLINK");
		IMAGE_HEARTBLINK_CC = aMgr.GetImageThrow("IMAGE_HEARTBLINK_CC");
		IMAGE_HEARTS = aMgr.GetImageThrow("IMAGE_HEARTS");
		IMAGE_HEARTS_BG = aMgr.GetImageThrow("IMAGE_HEARTS_BG");
		IMAGE_HEARTS_CC = aMgr.GetImageThrow("IMAGE_HEARTS_CC");
		IMAGE_HEART_BITS = aMgr.GetImageThrow("IMAGE_HEART_BITS");
		IMAGE_HEART_MASK = aMgr.GetImageThrow("IMAGE_HEART_MASK");
		IMAGE_HEART_MASK_CC = aMgr.GetImageThrow("IMAGE_HEART_MASK_CC");
		IMAGE_IMPACT_LARGE = aMgr.GetImageThrow("IMAGE_IMPACT_LARGE");
		IMAGE_IMPACT_SMALL = aMgr.GetImageThrow("IMAGE_IMPACT_SMALL");
		IMAGE_ITEM_ATTACK = aMgr.GetImageThrow("IMAGE_ITEM_ATTACK");
		IMAGE_ITEM_ATTACK_NB = aMgr.GetImageThrow("IMAGE_ITEM_ATTACK_NB");
		IMAGE_ITEM_HEALTH = aMgr.GetImageThrow("IMAGE_ITEM_HEALTH");
		IMAGE_ITEM_HEALTH_NB = aMgr.GetImageThrow("IMAGE_ITEM_HEALTH_NB");
		IMAGE_ITEM_PURIFY = aMgr.GetImageThrow("IMAGE_ITEM_PURIFY");
		IMAGE_ITEM_PURIFY_NB = aMgr.GetImageThrow("IMAGE_ITEM_PURIFY_NB");
		IMAGE_LEX_ICON = aMgr.GetImageThrow("IMAGE_LEX_ICON");
		IMAGE_LOW_HEALTH_OUTLINE = aMgr.GetImageThrow("IMAGE_LOW_HEALTH_OUTLINE");
		IMAGE_MAP_CHECK = aMgr.GetImageThrow("IMAGE_MAP_CHECK");
		IMAGE_MAP_LEX_WARP = aMgr.GetImageThrow("IMAGE_MAP_LEX_WARP");
		IMAGE_MAP_MINIGAME_ANIM = aMgr.GetImageThrow("IMAGE_MAP_MINIGAME_ANIM");
		IMAGE_MINIGAME_ICON = aMgr.GetImageThrow("IMAGE_MINIGAME_ICON");
		IMAGE_PAUSED_BANNER = aMgr.GetImageThrow("IMAGE_PAUSED_BANNER");
		IMAGE_PORTRAIT_CODEX = aMgr.GetImageThrow("IMAGE_PORTRAIT_CODEX");
		IMAGE_PORTRAIT_HAMLET = aMgr.GetImageThrow("IMAGE_PORTRAIT_HAMLET");
		IMAGE_PORTRAIT_LEX = aMgr.GetImageThrow("IMAGE_PORTRAIT_LEX");
		IMAGE_PORTRAIT_LIBRARIAN = aMgr.GetImageThrow("IMAGE_PORTRAIT_LIBRARIAN");
		IMAGE_PORTRAIT_ODIN = aMgr.GetImageThrow("IMAGE_PORTRAIT_ODIN");
		IMAGE_PORTRAIT_RATKING = aMgr.GetImageThrow("IMAGE_PORTRAIT_RATKING");
		IMAGE_RED_SPARKLE = aMgr.GetImageThrow("IMAGE_RED_SPARKLE");
		IMAGE_STATS_BOX = aMgr.GetImageThrow("IMAGE_STATS_BOX");
		IMAGE_STATUSTEXT_FROZEN = aMgr.GetImageThrow("IMAGE_STATUSTEXT_FROZEN");
		IMAGE_STATUSTEXT_POISONED = aMgr.GetImageThrow("IMAGE_STATUSTEXT_POISONED");
		IMAGE_STATUSTEXT_POWERDOWN = aMgr.GetImageThrow("IMAGE_STATUSTEXT_POWERDOWN");
		IMAGE_STATUSTEXT_POWERUP = aMgr.GetImageThrow("IMAGE_STATUSTEXT_POWERUP");
		IMAGE_STATUS_ICONS = aMgr.GetImageThrow("IMAGE_STATUS_ICONS");
		IMAGE_TILE_BASIC = aMgr.GetImageThrow("IMAGE_TILE_BASIC");
		IMAGE_TILE_PIPS = aMgr.GetImageThrow("IMAGE_TILE_PIPS");
		IMAGE_WORDPOWER_GLOW_INNER_LEFT = aMgr.GetImageThrow("IMAGE_WORDPOWER_GLOW_INNER_LEFT");
		IMAGE_WORDPOWER_GLOW_INNER_MID = aMgr.GetImageThrow("IMAGE_WORDPOWER_GLOW_INNER_MID");
		IMAGE_WORDPOWER_GLOW_INNER_RIGHT = aMgr.GetImageThrow("IMAGE_WORDPOWER_GLOW_INNER_RIGHT");
		IMAGE_WORDPOWER_GLOW_LEFT = aMgr.GetImageThrow("IMAGE_WORDPOWER_GLOW_LEFT");
		IMAGE_WORDPOWER_GLOW_LEFT_SMALL = aMgr.GetImageThrow("IMAGE_WORDPOWER_GLOW_LEFT_SMALL");
		IMAGE_WORDPOWER_GLOW_MIDDLE = aMgr.GetImageThrow("IMAGE_WORDPOWER_GLOW_MIDDLE");
		IMAGE_WORDPOWER_GLOW_MIDDLE_SMALL = aMgr.GetImageThrow("IMAGE_WORDPOWER_GLOW_MIDDLE_SMALL");
		IMAGE_WORDPOWER_GLOW_RIGHT = aMgr.GetImageThrow("IMAGE_WORDPOWER_GLOW_RIGHT");
		IMAGE_WORDPOWER_GLOW_RIGHT_SMALL = aMgr.GetImageThrow("IMAGE_WORDPOWER_GLOW_RIGHT_SMALL");
		IMAGE_WP_SPARKLE_MEDIUM = aMgr.GetImageThrow("IMAGE_WP_SPARKLE_MEDIUM");
		IMAGE_WP_SPARKLE_SMALL = aMgr.GetImageThrow("IMAGE_WP_SPARKLE_SMALL");
		SOUND_CLICK1 = aMgr.GetSoundThrow("SOUND_CLICK1");
		SOUND_CLICK2 = aMgr.GetSoundThrow("SOUND_CLICK2");
		SOUND_CROWD_CHEER = aMgr.GetSoundThrow("SOUND_CROWD_CHEER");
		SOUND_EFFECT_FROZEN = aMgr.GetSoundThrow("SOUND_EFFECT_FROZEN");
		SOUND_EFFECT_POISON = aMgr.GetSoundThrow("SOUND_EFFECT_POISON");
		SOUND_FREEZE = aMgr.GetSoundThrow("SOUND_FREEZE");
		SOUND_GEMSPAWN = aMgr.GetSoundThrow("SOUND_GEMSPAWN");
		SOUND_HEAL = aMgr.GetSoundThrow("SOUND_HEAL");
		SOUND_IMPACT_LARGE = aMgr.GetSoundThrow("SOUND_IMPACT_LARGE");
		SOUND_IMPACT_SMALL = aMgr.GetSoundThrow("SOUND_IMPACT_SMALL");
		SOUND_LEX_ASTONISHING = aMgr.GetSoundThrow("SOUND_LEX_ASTONISHING");
		SOUND_LEX_ATTACK1 = aMgr.GetSoundThrow("SOUND_LEX_ATTACK1");
		SOUND_LEX_AWESOME = aMgr.GetSoundThrow("SOUND_LEX_AWESOME");
		SOUND_LEX_EXCELLENT = aMgr.GetSoundThrow("SOUND_LEX_EXCELLENT");
		SOUND_LEX_FANTASTIC = aMgr.GetSoundThrow("SOUND_LEX_FANTASTIC");
		SOUND_LEX_GOOD = aMgr.GetSoundThrow("SOUND_LEX_GOOD");
		SOUND_LEX_INCREDIBLE = aMgr.GetSoundThrow("SOUND_LEX_INCREDIBLE");
		SOUND_LEX_NICE = aMgr.GetSoundThrow("SOUND_LEX_NICE");
		SOUND_LEX_VERYGOOD = aMgr.GetSoundThrow("SOUND_LEX_VERYGOOD");
		SOUND_LEX_WOW = aMgr.GetSoundThrow("SOUND_LEX_WOW");
		SOUND_LOW_HEALTH = aMgr.GetSoundThrow("SOUND_LOW_HEALTH");
		SOUND_POISON = aMgr.GetSoundThrow("SOUND_POISON");
		SOUND_POTION_HEAL = aMgr.GetSoundThrow("SOUND_POTION_HEAL");
		SOUND_SCRAMBLE = aMgr.GetSoundThrow("SOUND_SCRAMBLE");
		SOUND_TILELOCK = aMgr.GetSoundThrow("SOUND_TILELOCK");
		SOUND_TILE_SELECT = aMgr.GetSoundThrow("SOUND_TILE_SELECT");
		SOUND_WORD_POWER = aMgr.GetSoundThrow("SOUND_WORD_POWER");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Init Resources
Font* Sexy::FONT_LARGE;
Font* Sexy::FONT_LARGER;
Font* Sexy::FONT_LARGE_OUTLINE;
Font* Sexy::FONT_MEDIUM;
Font* Sexy::FONT_MEDIUM_BOLD;
Font* Sexy::FONT_OPTIMA_MEDIUM;
Font* Sexy::FONT_OPTIMA_SMALL;
Font* Sexy::FONT_SCORE;
Font* Sexy::FONT_SMALL;
Font* Sexy::FONT_TILE;
Font* Sexy::FONT_TILE_STATUS;
Image* Sexy::IMAGE_CURTAIN_ANIM;
Image* Sexy::IMAGE_CURTAIN_TOP;
Image* Sexy::IMAGE_DIALOG;
Image* Sexy::IMAGE_DIALOG_BANNER_CODE;
Image* Sexy::IMAGE_DIALOG_BANNER_GAMEOVER;
Image* Sexy::IMAGE_DIALOG_BANNER_HOWTOPLAY;
Image* Sexy::IMAGE_DIALOG_BANNER_LOADING;
Image* Sexy::IMAGE_DIALOG_BANNER_MENU;
Image* Sexy::IMAGE_DIALOG_BANNER_OPTIONS;
Image* Sexy::IMAGE_DIALOG_BANNER_RUSURE;
Image* Sexy::IMAGE_DIALOG_BANNER_UNLOCK;
Image* Sexy::IMAGE_DIALOG_BANNER_VICTORY;
Image* Sexy::IMAGE_DIALOG_BUTTON;
Image* Sexy::IMAGE_DIALOG_CHECKBOX;
Image* Sexy::IMAGE_DIALOG_DIVIDER_BOT;
Image* Sexy::IMAGE_DIALOG_DIVIDER_TOP;
Image* Sexy::IMAGE_DIALOG_USER_ENTRY;
Image* Sexy::IMAGE_ORANGE_STAR;
Image* Sexy::IMAGE_RED_STAR;
Image* Sexy::IMAGE_SLIDER_THUMB;
Image* Sexy::IMAGE_SLIDER_TRACK;
Image* Sexy::IMAGE_SLIDER_TRACK_VERT;
Image* Sexy::IMAGE_WAIT_BAR;
Image* Sexy::IMAGE_YELLOW_STAR;

bool Sexy::ExtractInitResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		FONT_LARGE = aMgr.GetFontThrow("FONT_LARGE");
		FONT_LARGER = aMgr.GetFontThrow("FONT_LARGER");
		FONT_LARGE_OUTLINE = aMgr.GetFontThrow("FONT_LARGE_OUTLINE");
		FONT_MEDIUM = aMgr.GetFontThrow("FONT_MEDIUM");
		FONT_MEDIUM_BOLD = aMgr.GetFontThrow("FONT_MEDIUM_BOLD");
		FONT_OPTIMA_MEDIUM = aMgr.GetFontThrow("FONT_OPTIMA_MEDIUM");
		FONT_OPTIMA_SMALL = aMgr.GetFontThrow("FONT_OPTIMA_SMALL");
		FONT_SCORE = aMgr.GetFontThrow("FONT_SCORE");
		FONT_SMALL = aMgr.GetFontThrow("FONT_SMALL");
		FONT_TILE = aMgr.GetFontThrow("FONT_TILE");
		FONT_TILE_STATUS = aMgr.GetFontThrow("FONT_TILE_STATUS");
		IMAGE_CURTAIN_ANIM = aMgr.GetImageThrow("IMAGE_CURTAIN_ANIM");
		IMAGE_CURTAIN_TOP = aMgr.GetImageThrow("IMAGE_CURTAIN_TOP");
		IMAGE_DIALOG = aMgr.GetImageThrow("IMAGE_DIALOG");
		IMAGE_DIALOG_BANNER_CODE = aMgr.GetImageThrow("IMAGE_DIALOG_BANNER_CODE");
		IMAGE_DIALOG_BANNER_GAMEOVER = aMgr.GetImageThrow("IMAGE_DIALOG_BANNER_GAMEOVER");
		IMAGE_DIALOG_BANNER_HOWTOPLAY = aMgr.GetImageThrow("IMAGE_DIALOG_BANNER_HOWTOPLAY");
		IMAGE_DIALOG_BANNER_LOADING = aMgr.GetImageThrow("IMAGE_DIALOG_BANNER_LOADING");
		IMAGE_DIALOG_BANNER_MENU = aMgr.GetImageThrow("IMAGE_DIALOG_BANNER_MENU");
		IMAGE_DIALOG_BANNER_OPTIONS = aMgr.GetImageThrow("IMAGE_DIALOG_BANNER_OPTIONS");
		IMAGE_DIALOG_BANNER_RUSURE = aMgr.GetImageThrow("IMAGE_DIALOG_BANNER_RUSURE");
		IMAGE_DIALOG_BANNER_UNLOCK = aMgr.GetImageThrow("IMAGE_DIALOG_BANNER_UNLOCK");
		IMAGE_DIALOG_BANNER_VICTORY = aMgr.GetImageThrow("IMAGE_DIALOG_BANNER_VICTORY");
		IMAGE_DIALOG_BUTTON = aMgr.GetImageThrow("IMAGE_DIALOG_BUTTON");
		IMAGE_DIALOG_CHECKBOX = aMgr.GetImageThrow("IMAGE_DIALOG_CHECKBOX");
		IMAGE_DIALOG_DIVIDER_BOT = aMgr.GetImageThrow("IMAGE_DIALOG_DIVIDER_BOT");
		IMAGE_DIALOG_DIVIDER_TOP = aMgr.GetImageThrow("IMAGE_DIALOG_DIVIDER_TOP");
		IMAGE_DIALOG_USER_ENTRY = aMgr.GetImageThrow("IMAGE_DIALOG_USER_ENTRY");
		IMAGE_ORANGE_STAR = aMgr.GetImageThrow("IMAGE_ORANGE_STAR");
		IMAGE_RED_STAR = aMgr.GetImageThrow("IMAGE_RED_STAR");
		IMAGE_SLIDER_THUMB = aMgr.GetImageThrow("IMAGE_SLIDER_THUMB");
		IMAGE_SLIDER_TRACK = aMgr.GetImageThrow("IMAGE_SLIDER_TRACK");
		IMAGE_SLIDER_TRACK_VERT = aMgr.GetImageThrow("IMAGE_SLIDER_TRACK_VERT");
		IMAGE_WAIT_BAR = aMgr.GetImageThrow("IMAGE_WAIT_BAR");
		IMAGE_YELLOW_STAR = aMgr.GetImageThrow("IMAGE_YELLOW_STAR");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// TitleAndMM Resources
Image* Sexy::IMAGE_AX_MM_BG;
Image* Sexy::IMAGE_AX_MM_BSHADOWS1;
Image* Sexy::IMAGE_AX_MM_BSHADOWS2;
Image* Sexy::IMAGE_AX_MM_CASUAL;
Image* Sexy::IMAGE_AX_MM_CHALLENGE;
Image* Sexy::IMAGE_AX_MM_DELUXE;
Image* Sexy::IMAGE_AX_MM_DIFF_BANNER;
Image* Sexy::IMAGE_AX_MM_EASY;
Image* Sexy::IMAGE_AX_MM_EXTREME;
Image* Sexy::IMAGE_AX_MM_GLOW;
Image* Sexy::IMAGE_AX_MM_HOWTOPLAY;
Image* Sexy::IMAGE_AX_MM_LEX;
Image* Sexy::IMAGE_AX_MM_LOCK;
Image* Sexy::IMAGE_AX_MM_LOGO;
Image* Sexy::IMAGE_AX_MM_MASTER;
Image* Sexy::IMAGE_AX_MM_PLAYNOW;
Image* Sexy::IMAGE_AX_MM_WORDBUBBLE;
Image* Sexy::IMAGE_HTP_BG;
Image* Sexy::IMAGE_HTP_CONTINUE;
Image* Sexy::IMAGE_UP_0;
Image* Sexy::IMAGE_UP_1;
Image* Sexy::IMAGE_UP_2;
Image* Sexy::IMAGE_UP_3;
Image* Sexy::IMAGE_UP_4;
Image* Sexy::IMAGE_UP_BG;
Image* Sexy::IMAGE_UP_DOWNLOAD;
Image* Sexy::IMAGE_UP_NOTHANKS;

bool Sexy::ExtractTitleAndMMResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_AX_MM_BG = aMgr.GetImageThrow("IMAGE_AX_MM_BG");
		IMAGE_AX_MM_BSHADOWS1 = aMgr.GetImageThrow("IMAGE_AX_MM_BSHADOWS1");
		IMAGE_AX_MM_BSHADOWS2 = aMgr.GetImageThrow("IMAGE_AX_MM_BSHADOWS2");
		IMAGE_AX_MM_CASUAL = aMgr.GetImageThrow("IMAGE_AX_MM_CASUAL");
		IMAGE_AX_MM_CHALLENGE = aMgr.GetImageThrow("IMAGE_AX_MM_CHALLENGE");
		IMAGE_AX_MM_DELUXE = aMgr.GetImageThrow("IMAGE_AX_MM_DELUXE");
		IMAGE_AX_MM_DIFF_BANNER = aMgr.GetImageThrow("IMAGE_AX_MM_DIFF_BANNER");
		IMAGE_AX_MM_EASY = aMgr.GetImageThrow("IMAGE_AX_MM_EASY");
		IMAGE_AX_MM_EXTREME = aMgr.GetImageThrow("IMAGE_AX_MM_EXTREME");
		IMAGE_AX_MM_GLOW = aMgr.GetImageThrow("IMAGE_AX_MM_GLOW");
		IMAGE_AX_MM_HOWTOPLAY = aMgr.GetImageThrow("IMAGE_AX_MM_HOWTOPLAY");
		IMAGE_AX_MM_LEX = aMgr.GetImageThrow("IMAGE_AX_MM_LEX");
		IMAGE_AX_MM_LOCK = aMgr.GetImageThrow("IMAGE_AX_MM_LOCK");
		IMAGE_AX_MM_LOGO = aMgr.GetImageThrow("IMAGE_AX_MM_LOGO");
		IMAGE_AX_MM_MASTER = aMgr.GetImageThrow("IMAGE_AX_MM_MASTER");
		IMAGE_AX_MM_PLAYNOW = aMgr.GetImageThrow("IMAGE_AX_MM_PLAYNOW");
		IMAGE_AX_MM_WORDBUBBLE = aMgr.GetImageThrow("IMAGE_AX_MM_WORDBUBBLE");
		IMAGE_HTP_BG = aMgr.GetImageThrow("IMAGE_HTP_BG");
		IMAGE_HTP_CONTINUE = aMgr.GetImageThrow("IMAGE_HTP_CONTINUE");
		IMAGE_UP_0 = aMgr.GetImageThrow("IMAGE_UP_0");
		IMAGE_UP_1 = aMgr.GetImageThrow("IMAGE_UP_1");
		IMAGE_UP_2 = aMgr.GetImageThrow("IMAGE_UP_2");
		IMAGE_UP_3 = aMgr.GetImageThrow("IMAGE_UP_3");
		IMAGE_UP_4 = aMgr.GetImageThrow("IMAGE_UP_4");
		IMAGE_UP_BG = aMgr.GetImageThrow("IMAGE_UP_BG");
		IMAGE_UP_DOWNLOAD = aMgr.GetImageThrow("IMAGE_UP_DOWNLOAD");
		IMAGE_UP_NOTHANKS = aMgr.GetImageThrow("IMAGE_UP_NOTHANKS");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

static void* gResources[] =
{
	&FONT_SMALL,
	&FONT_MEDIUM,
	&FONT_MEDIUM_BOLD,
	&FONT_LARGE,
	&FONT_LARGE_OUTLINE,
	&FONT_TILE,
	&FONT_TILE_STATUS,
	&FONT_LARGER,
	&FONT_OPTIMA_SMALL,
	&FONT_OPTIMA_MEDIUM,
	&FONT_SCORE,
	&IMAGE_WAIT_BAR,
	&IMAGE_DIALOG_BANNER_MENU,
	&IMAGE_DIALOG_BANNER_UNLOCK,
	&IMAGE_DIALOG_BANNER_OPTIONS,
	&IMAGE_DIALOG_BANNER_RUSURE,
	&IMAGE_DIALOG_BANNER_HOWTOPLAY,
	&IMAGE_DIALOG_BANNER_LOADING,
	&IMAGE_DIALOG_BANNER_VICTORY,
	&IMAGE_DIALOG_BANNER_GAMEOVER,
	&IMAGE_DIALOG_BANNER_CODE,
	&IMAGE_DIALOG_DIVIDER_BOT,
	&IMAGE_DIALOG_DIVIDER_TOP,
	&IMAGE_DIALOG,
	&IMAGE_DIALOG_BUTTON,
	&IMAGE_DIALOG_CHECKBOX,
	&IMAGE_DIALOG_USER_ENTRY,
	&IMAGE_YELLOW_STAR,
	&IMAGE_ORANGE_STAR,
	&IMAGE_RED_STAR,
	&IMAGE_SLIDER_THUMB,
	&IMAGE_SLIDER_TRACK,
	&IMAGE_SLIDER_TRACK_VERT,
	&IMAGE_CURTAIN_ANIM,
	&IMAGE_CURTAIN_TOP,
	&IMAGE_AX_MM_BG,
	&IMAGE_AX_MM_BSHADOWS1,
	&IMAGE_AX_MM_BSHADOWS2,
	&IMAGE_AX_MM_CASUAL,
	&IMAGE_AX_MM_CHALLENGE,
	&IMAGE_AX_MM_DIFF_BANNER,
	&IMAGE_AX_MM_EASY,
	&IMAGE_AX_MM_EXTREME,
	&IMAGE_AX_MM_DELUXE,
	&IMAGE_AX_MM_HOWTOPLAY,
	&IMAGE_AX_MM_LEX,
	&IMAGE_AX_MM_LOCK,
	&IMAGE_AX_MM_LOGO,
	&IMAGE_AX_MM_GLOW,
	&IMAGE_AX_MM_MASTER,
	&IMAGE_AX_MM_PLAYNOW,
	&IMAGE_AX_MM_WORDBUBBLE,
	&IMAGE_HTP_BG,
	&IMAGE_HTP_CONTINUE,
	&IMAGE_UP_BG,
	&IMAGE_UP_DOWNLOAD,
	&IMAGE_UP_NOTHANKS,
	&IMAGE_UP_0,
	&IMAGE_UP_1,
	&IMAGE_UP_2,
	&IMAGE_UP_3,
	&IMAGE_UP_4,
	&IMAGE_B1A_BG1,
	&IMAGE_B1A_BG2,
	&IMAGE_B1A_BG3,
	&IMAGE_B1A_BG4,
	&IMAGE_GRAYBAR_BG,
	&IMAGE_HEARTS,
	&IMAGE_HEART_MASK,
	&IMAGE_HEART_MASK_CC,
	&IMAGE_HEARTBLINK,
	&IMAGE_HEARTBLINK_CC,
	&IMAGE_HEARTS_BG,
	&IMAGE_HEARTS_CC,
	&IMAGE_STATS_BOX,
	&IMAGE_MAP_LEX_WARP,
	&IMAGE_MAP_MINIGAME_ANIM,
	&IMAGE_MINIGAME_ICON,
	&IMAGE_BANNER_LARGE,
	&IMAGE_BANNER_SMALL,
	&IMAGE_LEX_ICON,
	&IMAGE_MAP_CHECK,
	&IMAGE_RED_SPARKLE,
	&IMAGE_BLUE_SPARKLE,
	&IMAGE_WP_SPARKLE_SMALL,
	&IMAGE_WP_SPARKLE_MEDIUM,
	&IMAGE_TILE_PIPS,
	&IMAGE_TILE_BASIC,
	&IMAGE_WORDPOWER_GLOW_LEFT,
	&IMAGE_WORDPOWER_GLOW_RIGHT,
	&IMAGE_WORDPOWER_GLOW_MIDDLE,
	&IMAGE_WORDPOWER_GLOW_LEFT_SMALL,
	&IMAGE_WORDPOWER_GLOW_MIDDLE_SMALL,
	&IMAGE_WORDPOWER_GLOW_RIGHT_SMALL,
	&IMAGE_WORDPOWER_GLOW_INNER_LEFT,
	&IMAGE_WORDPOWER_GLOW_INNER_MID,
	&IMAGE_WORDPOWER_GLOW_INNER_RIGHT,
	&IMAGE_CP_SKIP,
	&IMAGE_PORTRAIT_CODEX,
	&IMAGE_PORTRAIT_HAMLET,
	&IMAGE_PORTRAIT_LEX,
	&IMAGE_PORTRAIT_LIBRARIAN,
	&IMAGE_PORTRAIT_ODIN,
	&IMAGE_PORTRAIT_RATKING,
	&IMAGE_ITEM_ATTACK,
	&IMAGE_ITEM_ATTACK_NB,
	&IMAGE_ITEM_HEALTH,
	&IMAGE_ITEM_HEALTH_NB,
	&IMAGE_ITEM_PURIFY,
	&IMAGE_ITEM_PURIFY_NB,
	&IMAGE_STATUSTEXT_FROZEN,
	&IMAGE_STATUSTEXT_POISONED,
	&IMAGE_STATUSTEXT_POWERDOWN,
	&IMAGE_STATUSTEXT_POWERUP,
	&IMAGE_HEART_BITS,
	&IMAGE_IMPACT_LARGE,
	&IMAGE_IMPACT_SMALL,
	&IMAGE_STATUS_ICONS,
	&IMAGE_LOW_HEALTH_OUTLINE,
	&IMAGE_PAUSED_BANNER,
	&IMAGE_BUTTON_ATTACK,
	&IMAGE_BUTTON_MENU,
	&IMAGE_BUTTON_SCRAMBLE,
	&IMAGE_BUTTON_SCRAMBLE_SHADOW,
	&IMAGE_COMBAT_UI_TOP,
	&IMAGE_COMBAT_UI_BOTTOM,
	&SOUND_TILE_SELECT,
	&SOUND_CLICK1,
	&SOUND_CLICK2,
	&SOUND_GEMSPAWN,
	&SOUND_CROWD_CHEER,
	&SOUND_LEX_ATTACK1,
	&SOUND_LEX_WOW,
	&SOUND_LEX_ASTONISHING,
	&SOUND_LEX_AWESOME,
	&SOUND_LEX_EXCELLENT,
	&SOUND_LEX_FANTASTIC,
	&SOUND_LEX_GOOD,
	&SOUND_LEX_VERYGOOD,
	&SOUND_LEX_NICE,
	&SOUND_LEX_INCREDIBLE,
	&SOUND_SCRAMBLE,
	&SOUND_EFFECT_POISON,
	&SOUND_EFFECT_FROZEN,
	&SOUND_POTION_HEAL,
	&SOUND_LOW_HEALTH,
	&SOUND_WORD_POWER,
	&SOUND_POISON,
	&SOUND_IMPACT_LARGE,
	&SOUND_IMPACT_SMALL,
	&SOUND_HEAL,
	&SOUND_FREEZE,
	&SOUND_TILELOCK,
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
		case FONT_SMALL_ID: return "FONT_SMALL";
		case FONT_MEDIUM_ID: return "FONT_MEDIUM";
		case FONT_MEDIUM_BOLD_ID: return "FONT_MEDIUM_BOLD";
		case FONT_LARGE_ID: return "FONT_LARGE";
		case FONT_LARGE_OUTLINE_ID: return "FONT_LARGE_OUTLINE";
		case FONT_TILE_ID: return "FONT_TILE";
		case FONT_TILE_STATUS_ID: return "FONT_TILE_STATUS";
		case FONT_LARGER_ID: return "FONT_LARGER";
		case FONT_OPTIMA_SMALL_ID: return "FONT_OPTIMA_SMALL";
		case FONT_OPTIMA_MEDIUM_ID: return "FONT_OPTIMA_MEDIUM";
		case FONT_SCORE_ID: return "FONT_SCORE";
		case IMAGE_WAIT_BAR_ID: return "IMAGE_WAIT_BAR";
		case IMAGE_DIALOG_BANNER_MENU_ID: return "IMAGE_DIALOG_BANNER_MENU";
		case IMAGE_DIALOG_BANNER_UNLOCK_ID: return "IMAGE_DIALOG_BANNER_UNLOCK";
		case IMAGE_DIALOG_BANNER_OPTIONS_ID: return "IMAGE_DIALOG_BANNER_OPTIONS";
		case IMAGE_DIALOG_BANNER_RUSURE_ID: return "IMAGE_DIALOG_BANNER_RUSURE";
		case IMAGE_DIALOG_BANNER_HOWTOPLAY_ID: return "IMAGE_DIALOG_BANNER_HOWTOPLAY";
		case IMAGE_DIALOG_BANNER_LOADING_ID: return "IMAGE_DIALOG_BANNER_LOADING";
		case IMAGE_DIALOG_BANNER_VICTORY_ID: return "IMAGE_DIALOG_BANNER_VICTORY";
		case IMAGE_DIALOG_BANNER_GAMEOVER_ID: return "IMAGE_DIALOG_BANNER_GAMEOVER";
		case IMAGE_DIALOG_BANNER_CODE_ID: return "IMAGE_DIALOG_BANNER_CODE";
		case IMAGE_DIALOG_DIVIDER_BOT_ID: return "IMAGE_DIALOG_DIVIDER_BOT";
		case IMAGE_DIALOG_DIVIDER_TOP_ID: return "IMAGE_DIALOG_DIVIDER_TOP";
		case IMAGE_DIALOG_ID: return "IMAGE_DIALOG";
		case IMAGE_DIALOG_BUTTON_ID: return "IMAGE_DIALOG_BUTTON";
		case IMAGE_DIALOG_CHECKBOX_ID: return "IMAGE_DIALOG_CHECKBOX";
		case IMAGE_DIALOG_USER_ENTRY_ID: return "IMAGE_DIALOG_USER_ENTRY";
		case IMAGE_YELLOW_STAR_ID: return "IMAGE_YELLOW_STAR";
		case IMAGE_ORANGE_STAR_ID: return "IMAGE_ORANGE_STAR";
		case IMAGE_RED_STAR_ID: return "IMAGE_RED_STAR";
		case IMAGE_SLIDER_THUMB_ID: return "IMAGE_SLIDER_THUMB";
		case IMAGE_SLIDER_TRACK_ID: return "IMAGE_SLIDER_TRACK";
		case IMAGE_SLIDER_TRACK_VERT_ID: return "IMAGE_SLIDER_TRACK_VERT";
		case IMAGE_CURTAIN_ANIM_ID: return "IMAGE_CURTAIN_ANIM";
		case IMAGE_CURTAIN_TOP_ID: return "IMAGE_CURTAIN_TOP";
		case IMAGE_AX_MM_BG_ID: return "IMAGE_AX_MM_BG";
		case IMAGE_AX_MM_BSHADOWS1_ID: return "IMAGE_AX_MM_BSHADOWS1";
		case IMAGE_AX_MM_BSHADOWS2_ID: return "IMAGE_AX_MM_BSHADOWS2";
		case IMAGE_AX_MM_CASUAL_ID: return "IMAGE_AX_MM_CASUAL";
		case IMAGE_AX_MM_CHALLENGE_ID: return "IMAGE_AX_MM_CHALLENGE";
		case IMAGE_AX_MM_DIFF_BANNER_ID: return "IMAGE_AX_MM_DIFF_BANNER";
		case IMAGE_AX_MM_EASY_ID: return "IMAGE_AX_MM_EASY";
		case IMAGE_AX_MM_EXTREME_ID: return "IMAGE_AX_MM_EXTREME";
		case IMAGE_AX_MM_DELUXE_ID: return "IMAGE_AX_MM_DELUXE";
		case IMAGE_AX_MM_HOWTOPLAY_ID: return "IMAGE_AX_MM_HOWTOPLAY";
		case IMAGE_AX_MM_LEX_ID: return "IMAGE_AX_MM_LEX";
		case IMAGE_AX_MM_LOCK_ID: return "IMAGE_AX_MM_LOCK";
		case IMAGE_AX_MM_LOGO_ID: return "IMAGE_AX_MM_LOGO";
		case IMAGE_AX_MM_GLOW_ID: return "IMAGE_AX_MM_GLOW";
		case IMAGE_AX_MM_MASTER_ID: return "IMAGE_AX_MM_MASTER";
		case IMAGE_AX_MM_PLAYNOW_ID: return "IMAGE_AX_MM_PLAYNOW";
		case IMAGE_AX_MM_WORDBUBBLE_ID: return "IMAGE_AX_MM_WORDBUBBLE";
		case IMAGE_HTP_BG_ID: return "IMAGE_HTP_BG";
		case IMAGE_HTP_CONTINUE_ID: return "IMAGE_HTP_CONTINUE";
		case IMAGE_UP_BG_ID: return "IMAGE_UP_BG";
		case IMAGE_UP_DOWNLOAD_ID: return "IMAGE_UP_DOWNLOAD";
		case IMAGE_UP_NOTHANKS_ID: return "IMAGE_UP_NOTHANKS";
		case IMAGE_UP_0_ID: return "IMAGE_UP_0";
		case IMAGE_UP_1_ID: return "IMAGE_UP_1";
		case IMAGE_UP_2_ID: return "IMAGE_UP_2";
		case IMAGE_UP_3_ID: return "IMAGE_UP_3";
		case IMAGE_UP_4_ID: return "IMAGE_UP_4";
		case IMAGE_B1A_BG1_ID: return "IMAGE_B1A_BG1";
		case IMAGE_B1A_BG2_ID: return "IMAGE_B1A_BG2";
		case IMAGE_B1A_BG3_ID: return "IMAGE_B1A_BG3";
		case IMAGE_B1A_BG4_ID: return "IMAGE_B1A_BG4";
		case IMAGE_GRAYBAR_BG_ID: return "IMAGE_GRAYBAR_BG";
		case IMAGE_HEARTS_ID: return "IMAGE_HEARTS";
		case IMAGE_HEART_MASK_ID: return "IMAGE_HEART_MASK";
		case IMAGE_HEART_MASK_CC_ID: return "IMAGE_HEART_MASK_CC";
		case IMAGE_HEARTBLINK_ID: return "IMAGE_HEARTBLINK";
		case IMAGE_HEARTBLINK_CC_ID: return "IMAGE_HEARTBLINK_CC";
		case IMAGE_HEARTS_BG_ID: return "IMAGE_HEARTS_BG";
		case IMAGE_HEARTS_CC_ID: return "IMAGE_HEARTS_CC";
		case IMAGE_STATS_BOX_ID: return "IMAGE_STATS_BOX";
		case IMAGE_MAP_LEX_WARP_ID: return "IMAGE_MAP_LEX_WARP";
		case IMAGE_MAP_MINIGAME_ANIM_ID: return "IMAGE_MAP_MINIGAME_ANIM";
		case IMAGE_MINIGAME_ICON_ID: return "IMAGE_MINIGAME_ICON";
		case IMAGE_BANNER_LARGE_ID: return "IMAGE_BANNER_LARGE";
		case IMAGE_BANNER_SMALL_ID: return "IMAGE_BANNER_SMALL";
		case IMAGE_LEX_ICON_ID: return "IMAGE_LEX_ICON";
		case IMAGE_MAP_CHECK_ID: return "IMAGE_MAP_CHECK";
		case IMAGE_RED_SPARKLE_ID: return "IMAGE_RED_SPARKLE";
		case IMAGE_BLUE_SPARKLE_ID: return "IMAGE_BLUE_SPARKLE";
		case IMAGE_WP_SPARKLE_SMALL_ID: return "IMAGE_WP_SPARKLE_SMALL";
		case IMAGE_WP_SPARKLE_MEDIUM_ID: return "IMAGE_WP_SPARKLE_MEDIUM";
		case IMAGE_TILE_PIPS_ID: return "IMAGE_TILE_PIPS";
		case IMAGE_TILE_BASIC_ID: return "IMAGE_TILE_BASIC";
		case IMAGE_WORDPOWER_GLOW_LEFT_ID: return "IMAGE_WORDPOWER_GLOW_LEFT";
		case IMAGE_WORDPOWER_GLOW_RIGHT_ID: return "IMAGE_WORDPOWER_GLOW_RIGHT";
		case IMAGE_WORDPOWER_GLOW_MIDDLE_ID: return "IMAGE_WORDPOWER_GLOW_MIDDLE";
		case IMAGE_WORDPOWER_GLOW_LEFT_SMALL_ID: return "IMAGE_WORDPOWER_GLOW_LEFT_SMALL";
		case IMAGE_WORDPOWER_GLOW_MIDDLE_SMALL_ID: return "IMAGE_WORDPOWER_GLOW_MIDDLE_SMALL";
		case IMAGE_WORDPOWER_GLOW_RIGHT_SMALL_ID: return "IMAGE_WORDPOWER_GLOW_RIGHT_SMALL";
		case IMAGE_WORDPOWER_GLOW_INNER_LEFT_ID: return "IMAGE_WORDPOWER_GLOW_INNER_LEFT";
		case IMAGE_WORDPOWER_GLOW_INNER_MID_ID: return "IMAGE_WORDPOWER_GLOW_INNER_MID";
		case IMAGE_WORDPOWER_GLOW_INNER_RIGHT_ID: return "IMAGE_WORDPOWER_GLOW_INNER_RIGHT";
		case IMAGE_CP_SKIP_ID: return "IMAGE_CP_SKIP";
		case IMAGE_PORTRAIT_CODEX_ID: return "IMAGE_PORTRAIT_CODEX";
		case IMAGE_PORTRAIT_HAMLET_ID: return "IMAGE_PORTRAIT_HAMLET";
		case IMAGE_PORTRAIT_LEX_ID: return "IMAGE_PORTRAIT_LEX";
		case IMAGE_PORTRAIT_LIBRARIAN_ID: return "IMAGE_PORTRAIT_LIBRARIAN";
		case IMAGE_PORTRAIT_ODIN_ID: return "IMAGE_PORTRAIT_ODIN";
		case IMAGE_PORTRAIT_RATKING_ID: return "IMAGE_PORTRAIT_RATKING";
		case IMAGE_ITEM_ATTACK_ID: return "IMAGE_ITEM_ATTACK";
		case IMAGE_ITEM_ATTACK_NB_ID: return "IMAGE_ITEM_ATTACK_NB";
		case IMAGE_ITEM_HEALTH_ID: return "IMAGE_ITEM_HEALTH";
		case IMAGE_ITEM_HEALTH_NB_ID: return "IMAGE_ITEM_HEALTH_NB";
		case IMAGE_ITEM_PURIFY_ID: return "IMAGE_ITEM_PURIFY";
		case IMAGE_ITEM_PURIFY_NB_ID: return "IMAGE_ITEM_PURIFY_NB";
		case IMAGE_STATUSTEXT_FROZEN_ID: return "IMAGE_STATUSTEXT_FROZEN";
		case IMAGE_STATUSTEXT_POISONED_ID: return "IMAGE_STATUSTEXT_POISONED";
		case IMAGE_STATUSTEXT_POWERDOWN_ID: return "IMAGE_STATUSTEXT_POWERDOWN";
		case IMAGE_STATUSTEXT_POWERUP_ID: return "IMAGE_STATUSTEXT_POWERUP";
		case IMAGE_HEART_BITS_ID: return "IMAGE_HEART_BITS";
		case IMAGE_IMPACT_LARGE_ID: return "IMAGE_IMPACT_LARGE";
		case IMAGE_IMPACT_SMALL_ID: return "IMAGE_IMPACT_SMALL";
		case IMAGE_STATUS_ICONS_ID: return "IMAGE_STATUS_ICONS";
		case IMAGE_LOW_HEALTH_OUTLINE_ID: return "IMAGE_LOW_HEALTH_OUTLINE";
		case IMAGE_PAUSED_BANNER_ID: return "IMAGE_PAUSED_BANNER";
		case IMAGE_BUTTON_ATTACK_ID: return "IMAGE_BUTTON_ATTACK";
		case IMAGE_BUTTON_MENU_ID: return "IMAGE_BUTTON_MENU";
		case IMAGE_BUTTON_SCRAMBLE_ID: return "IMAGE_BUTTON_SCRAMBLE";
		case IMAGE_BUTTON_SCRAMBLE_SHADOW_ID: return "IMAGE_BUTTON_SCRAMBLE_SHADOW";
		case IMAGE_COMBAT_UI_TOP_ID: return "IMAGE_COMBAT_UI_TOP";
		case IMAGE_COMBAT_UI_BOTTOM_ID: return "IMAGE_COMBAT_UI_BOTTOM";
		case SOUND_TILE_SELECT_ID: return "SOUND_TILE_SELECT";
		case SOUND_CLICK1_ID: return "SOUND_CLICK1";
		case SOUND_CLICK2_ID: return "SOUND_CLICK2";
		case SOUND_GEMSPAWN_ID: return "SOUND_GEMSPAWN";
		case SOUND_CROWD_CHEER_ID: return "SOUND_CROWD_CHEER";
		case SOUND_LEX_ATTACK1_ID: return "SOUND_LEX_ATTACK1";
		case SOUND_LEX_WOW_ID: return "SOUND_LEX_WOW";
		case SOUND_LEX_ASTONISHING_ID: return "SOUND_LEX_ASTONISHING";
		case SOUND_LEX_AWESOME_ID: return "SOUND_LEX_AWESOME";
		case SOUND_LEX_EXCELLENT_ID: return "SOUND_LEX_EXCELLENT";
		case SOUND_LEX_FANTASTIC_ID: return "SOUND_LEX_FANTASTIC";
		case SOUND_LEX_GOOD_ID: return "SOUND_LEX_GOOD";
		case SOUND_LEX_VERYGOOD_ID: return "SOUND_LEX_VERYGOOD";
		case SOUND_LEX_NICE_ID: return "SOUND_LEX_NICE";
		case SOUND_LEX_INCREDIBLE_ID: return "SOUND_LEX_INCREDIBLE";
		case SOUND_SCRAMBLE_ID: return "SOUND_SCRAMBLE";
		case SOUND_EFFECT_POISON_ID: return "SOUND_EFFECT_POISON";
		case SOUND_EFFECT_FROZEN_ID: return "SOUND_EFFECT_FROZEN";
		case SOUND_POTION_HEAL_ID: return "SOUND_POTION_HEAL";
		case SOUND_LOW_HEALTH_ID: return "SOUND_LOW_HEALTH";
		case SOUND_WORD_POWER_ID: return "SOUND_WORD_POWER";
		case SOUND_POISON_ID: return "SOUND_POISON";
		case SOUND_IMPACT_LARGE_ID: return "SOUND_IMPACT_LARGE";
		case SOUND_IMPACT_SMALL_ID: return "SOUND_IMPACT_SMALL";
		case SOUND_HEAL_ID: return "SOUND_HEAL";
		case SOUND_FREEZE_ID: return "SOUND_FREEZE";
		case SOUND_TILELOCK_ID: return "SOUND_TILELOCK";
		default: return "";
	}
}

