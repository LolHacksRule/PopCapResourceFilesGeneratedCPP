#ifndef __Res_H__
#define __Res_H__

namespace Sexy
{
	class ResourceManager;
	class Image;
	class Font;

	Image* LoadImageById(ResourceManager *theManager, int theId);
	void ReplaceImageById(ResourceManager *theManager, int theId, Image *theImage);
	bool ExtractResourcesByName(ResourceManager *theManager, const char *theName);

	// CommonGame Resources
	bool ExtractCommonGameResources(ResourceManager *theMgr);
	extern Image* IMAGE_ALTAR;
	extern Image* IMAGE_ALTAR_BUBBLE;
	extern Image* IMAGE_ALTAR_GLOW1;
	extern Image* IMAGE_ALTAR_GLOW2;
	extern Image* IMAGE_ALTAR_GLOW3;
	extern Image* IMAGE_BANNER_LARGE;
	extern Image* IMAGE_BANNER_SMALL;
	extern Image* IMAGE_BLUE_SPARKLE;
	extern Image* IMAGE_BOOKSHELF_LEFT;
	extern Image* IMAGE_BOOKSHELF_RIGHT;
	extern Image* IMAGE_BOSS_BANNER;
	extern Image* IMAGE_BOSS_TEXT;
	extern Image* IMAGE_BURNING_RESISTED;
	extern Image* IMAGE_BUTTON_ATTACK;
	extern Image* IMAGE_BUTTON_MENU;
	extern Image* IMAGE_BUTTON_SCRAMBLE;
	extern Image* IMAGE_BUTTON_SCRAMBLE_SHADOW;
	extern Image* IMAGE_COMBAT_UI_BOTTOM1;
	extern Image* IMAGE_COMBAT_UI_BOTTOM2;
	extern Image* IMAGE_COMBAT_UI_TOP;
	extern Image* IMAGE_CUTSCENE_BOTTOM;
	extern Image* IMAGE_CUTSCENE_TOP;
	extern Image* IMAGE_GRAVESTONE;
	extern Image* IMAGE_GRAVESTONE_GLOW;
	extern Image* IMAGE_GRAVESTONE_SMOKE;
	extern Image* IMAGE_GRAYBAR_BG;
	extern Image* IMAGE_GS_GO;
	extern Image* IMAGE_GS_SHIP1;
	extern Image* IMAGE_GS_SHIP1_WARPJET;
	extern Image* IMAGE_GS_SHIP2;
	extern Image* IMAGE_GS_SHIP3;
	extern Image* IMAGE_GS_SHIP4;
	extern Image* IMAGE_HEARTBLINK;
	extern Image* IMAGE_HEARTBLINK_CC;
	extern Image* IMAGE_HEARTS;
	extern Image* IMAGE_HEARTS_BG;
	extern Image* IMAGE_HEARTS_CC;
	extern Image* IMAGE_HEART_BITS;
	extern Image* IMAGE_HEART_MASK;
	extern Image* IMAGE_HEART_MASK_CC;
	extern Image* IMAGE_HINT_ARROW_BOX;
	extern Image* IMAGE_HINT_ARROW_DOWN;
	extern Image* IMAGE_HINT_ARROW_DOWNX;
	extern Image* IMAGE_HINT_ARROW_GLOW_ADD;
	extern Image* IMAGE_HINT_ARROW_LEFT;
	extern Image* IMAGE_HINT_ARROW_LEFTX;
	extern Image* IMAGE_HINT_ARROW_RIGHT;
	extern Image* IMAGE_HINT_ARROW_RIGHTX;
	extern Image* IMAGE_HINT_ARROW_TITLE;
	extern Image* IMAGE_HINT_ARROW_UP;
	extern Image* IMAGE_HINT_ARROW_UPX;
	extern Image* IMAGE_IMPACT_LARGE;
	extern Image* IMAGE_IMPACT_SMALL;
	extern Image* IMAGE_ITEM_ATTACK;
	extern Image* IMAGE_ITEM_ATTACK_NB;
	extern Image* IMAGE_ITEM_HEALTH;
	extern Image* IMAGE_ITEM_HEALTH_NB;
	extern Image* IMAGE_ITEM_PURIFY;
	extern Image* IMAGE_ITEM_PURIFY_NB;
	extern Image* IMAGE_LEVELUP_BANNER;
	extern Image* IMAGE_LEVELUP_ICONS;
	extern Image* IMAGE_LEVELUP_SPARKLE;
	extern Image* IMAGE_LEVELUP_STAR;
	extern Image* IMAGE_LEVELUP_TEXT;
	extern Image* IMAGE_LEVELUP_TROPHY;
	extern Image* IMAGE_LEVELUP_TROPHY_GLOW;
	extern Image* IMAGE_LEVELUP_TROPHY_PARTICLES;
	extern Image* IMAGE_LEVELUP_WATERMARK;
	extern Image* IMAGE_LEX_ICON;
	extern Image* IMAGE_LIBRARY_TITLE;
	extern Image* IMAGE_LORE_PLATE;
	extern Image* IMAGE_LORE_PLATE_LIT;
	extern Image* IMAGE_LORE_PLATE_TILABLE;
	extern Image* IMAGE_LOW_HEALTH_OUTLINE;
	extern Image* IMAGE_MAP_BOOK2;
	extern Image* IMAGE_MAP_CHECK;
	extern Image* IMAGE_MAP_LEX_WARP;
	extern Image* IMAGE_MAP_MINIGAME_ANIM;
	extern Image* IMAGE_MINIGAME_ICON;
	extern Image* IMAGE_OVERKILL_ANNIHILATED;
	extern Image* IMAGE_OVERKILL_CRUSHED;
	extern Image* IMAGE_OVERKILL_DECIMATED;
	extern Image* IMAGE_OVERKILL_DESTROYED;
	extern Image* IMAGE_OVERKILL_OBLITERATED;
	extern Image* IMAGE_OVERKILL_ROUTED;
	extern Image* IMAGE_OVERKILL_VANQUISHED;
	extern Image* IMAGE_OVERKILL_WHOMPED;
	extern Image* IMAGE_PAUSED_BANNER;
	extern Image* IMAGE_PETRIFY_RESISTED;
	extern Image* IMAGE_POISON_RESISTED;
	extern Image* IMAGE_POTION_PEDESTAL;
	extern Image* IMAGE_POWER_DOWN;
	extern Image* IMAGE_PROGRESS_METER;
	extern Image* IMAGE_RED_SPARKLE;
	extern Image* IMAGE_STATS_BOX;
	extern Image* IMAGE_STATUE_CODEX;
	extern Image* IMAGE_STATUE_LEX;
	extern Image* IMAGE_STATUSTEXT_BLEEDING;
	extern Image* IMAGE_STATUSTEXT_BONUS_WORD;
	extern Image* IMAGE_STATUSTEXT_BURNING;
	extern Image* IMAGE_STATUSTEXT_FROZEN;
	extern Image* IMAGE_STATUSTEXT_PETRIFIED;
	extern Image* IMAGE_STATUSTEXT_POISONED;
	extern Image* IMAGE_STATUSTEXT_POWERDOWN;
	extern Image* IMAGE_STATUSTEXT_POWERUP;
	extern Image* IMAGE_STATUSTEXT_SHIELDED;
	extern Image* IMAGE_STATUSTEXT_STUNNED;
	extern Image* IMAGE_STATUS_ICONS;
	extern Image* IMAGE_STUN_RESISTED;
	extern Image* IMAGE_TILE_BASIC;
	extern Image* IMAGE_TILE_PIPS;
	extern Image* IMAGE_TMA_UI_TOP;
	extern Image* IMAGE_TM_BONUS_TEXT;
	extern Image* IMAGE_TM_INTRO_TITLE;
	extern Image* IMAGE_TM_LEVELUP_TOKEN;
	extern Image* IMAGE_TM_LEVELUP_TOKEN_GOLD;
	extern Image* IMAGE_TM_SPOTLIGHT;
	extern Image* IMAGE_TREASURE_BANNER;
	extern Image* IMAGE_TREASURE_BG;
	extern Image* IMAGE_TREASURE_BOX;
	extern Image* IMAGE_TREASURE_BULB;
	extern Image* IMAGE_TREASURE_HILIGHT;
	extern Image* IMAGE_TREASURE_HINT;
	extern Image* IMAGE_TREASURE_TEXTBOX;
	extern Image* IMAGE_TUT_ARROW;
	extern Image* IMAGE_TUT_CURTAIN_LEFT;
	extern Image* IMAGE_TUT_CURTAIN_RIGHT;
	extern Image* IMAGE_TUT_GRID_BOX;
	extern Image* IMAGE_TUT_MG_BUTTON;
	extern Image* IMAGE_TUT_PIC_CASS;
	extern Image* IMAGE_TUT_PIC_CASS_WORRY;
	extern Image* IMAGE_TUT_PIC_CIRCE;
	extern Image* IMAGE_TUT_PIC_CODEX;
	extern Image* IMAGE_TUT_PIC_HEPH;
	extern Image* IMAGE_TUT_PIC_LEX;
	extern Image* IMAGE_TUT_PIC_LEX_WORRY;
	extern Image* IMAGE_TUT_PIC_MOXIE;
	extern Image* IMAGE_TUT_PIC_NEMESIS;
	extern Image* IMAGE_TUT_PLAY_BLUR;
	extern Image* IMAGE_TUT_PLAY_DIAGRAM;
	extern Image* IMAGE_TUT_SCRAMBLE_BOX;
	extern Image* IMAGE_TUT_TITLE;
	extern Image* IMAGE_TUT_TREASURE_BLUR_BOX;
	extern Image* IMAGE_UI_BOOK_AVAILABLE;
	extern Image* IMAGE_UI_BOOK_BACK_BUTTON;
	extern Image* IMAGE_UI_BOOK_DOTS;
	extern Image* IMAGE_UI_BOOK_END_STATS_BOX;
	extern Image* IMAGE_UI_BOOK_END_STATS_TITLE;
	extern Image* IMAGE_UI_BOOK_ENTER_BUTTON;
	extern Image* IMAGE_UI_BOOK_HILIGHT;
	extern Image* IMAGE_UI_BOOK_OPTIONS_BUTTON;
	extern Image* IMAGE_UI_BOOK_TS_CONTINUE_BUTTON;
	extern Image* IMAGE_UI_BOTTOM;
	extern Image* IMAGE_UI_DESCRIPTION_BOX;
	extern Image* IMAGE_UI_LEFT;
	extern Image* IMAGE_UI_RIGHT;
	extern Image* IMAGE_UI_TOP;
	extern Image* IMAGE_WORDPOWER_GLOW_INNER_LEFT;
	extern Image* IMAGE_WORDPOWER_GLOW_INNER_MID;
	extern Image* IMAGE_WORDPOWER_GLOW_INNER_RIGHT;
	extern Image* IMAGE_WORDPOWER_GLOW_LEFT;
	extern Image* IMAGE_WORDPOWER_GLOW_LEFT_SMALL;
	extern Image* IMAGE_WORDPOWER_GLOW_MIDDLE;
	extern Image* IMAGE_WORDPOWER_GLOW_MIDDLE_SMALL;
	extern Image* IMAGE_WORDPOWER_GLOW_RIGHT;
	extern Image* IMAGE_WORDPOWER_GLOW_RIGHT_SMALL;
	extern Image* IMAGE_WORD_BUBBLE;
	extern Image* IMAGE_WORD_BUBBLE_DOWN_ARROW;
	extern Image* IMAGE_WORD_BUBBLE_LEFT;
	extern Image* IMAGE_WORD_BUBBLE_RIGHT;
	extern Image* IMAGE_WORD_BUBBLE_TEX;
	extern Image* IMAGE_WP_SPARKLE_MEDIUM;
	extern Image* IMAGE_WP_SPARKLE_SMALL;
	extern Image* IMAGE_WS_BESTWORD_TITLE;
	extern Image* IMAGE_WS_PAPER;
	extern Image* IMAGE_WS_SCROLL;
	extern Image* IMAGE_XPBAR_GLOW;
	extern Image* IMAGE_XP_BAR_EFFECT;
	extern Image* IMAGE_XP_BAR_EFFECT_WHITE;
	extern Image* IMAGE_XP_BAR_EMPTY;
	extern Image* IMAGE_XP_BAR_FULL;
	extern int SOUND_1;
	extern int SOUND_2;
	extern int SOUND_3;
	extern int SOUND_CHACHING;
	extern int SOUND_CLICK1;
	extern int SOUND_CLICK2;
	extern int SOUND_COUNT;
	extern int SOUND_CROWD_CHEER;
	extern int SOUND_EFFECT_FIRE;
	extern int SOUND_EFFECT_FROZEN;
	extern int SOUND_EFFECT_PETRIFY;
	extern int SOUND_EFFECT_POISON;
	extern int SOUND_EFFECT_WEAKEN;
	extern int SOUND_FIREWORK1;
	extern int SOUND_FIREWORK2;
	extern int SOUND_FREEZE;
	extern int SOUND_GEMSPAWN;
	extern int SOUND_GO;
	extern int SOUND_HEAL;
	extern int SOUND_IMPACT_LARGE;
	extern int SOUND_IMPACT_SMALL;
	extern int SOUND_LEX_ASTONISHING;
	extern int SOUND_LEX_ATTACK1;
	extern int SOUND_LEX_ATTACK4;
	extern int SOUND_LEX_ATTACK5;
	extern int SOUND_LEX_ATTACK6;
	extern int SOUND_LEX_ATTACK7;
	extern int SOUND_LEX_AUTOLOGICAL;
	extern int SOUND_LEX_AWESOME;
	extern int SOUND_LEX_BITE;
	extern int SOUND_LEX_BOSS_BATTLE;
	extern int SOUND_LEX_BURP;
	extern int SOUND_LEX_CASHMONEY;
	extern int SOUND_LEX_EXCELLENT;
	extern int SOUND_LEX_FANTASTIC;
	extern int SOUND_LEX_GIGGLE1;
	extern int SOUND_LEX_GIGGLE2;
	extern int SOUND_LEX_GOOD;
	extern int SOUND_LEX_ILOVEYOU;
	extern int SOUND_LEX_INCREDIBLE;
	extern int SOUND_LEX_LEVELUP;
	extern int SOUND_LEX_NICE;
	extern int SOUND_LEX_SHEEPBLEAT;
	extern int SOUND_LEX_SNEEZE;
	extern int SOUND_LEX_VERYGOOD;
	extern int SOUND_LEX_WARPIN;
	extern int SOUND_LEX_WARPOUT;
	extern int SOUND_LEX_WATCHOUT;
	extern int SOUND_LEX_WOW;
	extern int SOUND_LIGHTNING;
	extern int SOUND_LOW_HEALTH;
	extern int SOUND_MM_ADVENTURE;
	extern int SOUND_MM_ARENA;
	extern int SOUND_MM_BUY_NOW;
	extern int SOUND_MM_CNG;
	extern int SOUND_MM_DONTLEAVE;
	extern int SOUND_MM_HS;
	extern int SOUND_MM_MINIGAMES;
	extern int SOUND_MM_OPTIONS;
	extern int SOUND_MM_QUIT;
	extern int SOUND_MM_TOK;
	extern int SOUND_NEW_MINIGAME;
	extern int SOUND_NEW_TREASURE;
	extern int SOUND_OVERKILL_ANNIHILATED;
	extern int SOUND_OVERKILL_CRUSHED;
	extern int SOUND_OVERKILL_DECIMATED;
	extern int SOUND_OVERKILL_DESTROYED;
	extern int SOUND_OVERKILL_OBLITERATED;
	extern int SOUND_OVERKILL_ROUTED;
	extern int SOUND_OVERKILL_VANQUISHED;
	extern int SOUND_OVERKILL_WHOMPED;
	extern int SOUND_PETRIFY;
	extern int SOUND_PLAGUE;
	extern int SOUND_POISON;
	extern int SOUND_POTION_HEAL;
	extern int SOUND_POTION_PICKUP;
	extern int SOUND_POTION_POWERUP;
	extern int SOUND_POTION_PURIFY;
	extern int SOUND_POWERDOWN;
	extern int SOUND_POWERUP;
	extern int SOUND_SCRAMBLE;
	extern int SOUND_SLOWDOWN;
	extern int SOUND_STUN;
	extern int SOUND_SUBMIT_FAILED;
	extern int SOUND_TEXT_BLIP;
	extern int SOUND_TILELOCK;
	extern int SOUND_TILESMASH;
	extern int SOUND_TILE_SELECT;
	extern int SOUND_WELCOME;
	extern int SOUND_WORD_POWER;
	extern int SOUND_XP_STREAM;

	// Credits Resources
	bool ExtractCreditsResources(ResourceManager *theMgr);
	extern Image* IMAGE_CREDITS_GRASS;

	// HallOfFame Resources
	bool ExtractHallOfFameResources(ResourceManager *theMgr);
	extern Image* IMAGE_HOF_BANNER_BOSS;
	extern Image* IMAGE_HOF_BANNER_LEX_POWER;
	extern Image* IMAGE_HOF_BANNER_LEX_SKILL;
	extern Image* IMAGE_HOF_BANNER_LNS;
	extern Image* IMAGE_HOF_BANNER_LR;
	extern Image* IMAGE_HOF_BANNER_TOP_10;
	extern Image* IMAGE_HOF_BANNER_WM;
	extern Image* IMAGE_HOF_BG;
	extern Image* IMAGE_HOF_BTN_MAINMENU;
	extern Image* IMAGE_HOF_BTN_MG_NEXT;
	extern Image* IMAGE_HOF_BTN_MG_PREV;
	extern Image* IMAGE_HOF_BTN_PLAYAGAIN;
	extern Image* IMAGE_HOF_PANEL_2;
	extern Image* IMAGE_HOF_PANEL_3;
	extern Image* IMAGE_HOF_POWER_RATING;
	extern Image* IMAGE_HOF_TAB_ADVENTURE;
	extern Image* IMAGE_HOF_TAB_ARENA;
	extern Image* IMAGE_HOF_TAB_MINIGAMES;

	// Init Resources
	bool ExtractInitResources(ResourceManager *theMgr);
	extern Font* FONT_BANTER;
	extern Font* FONT_HUGE;
	extern Font* FONT_LARGE;
	extern Font* FONT_LARGER;
	extern Font* FONT_LARGE_OUTLINE;
	extern Font* FONT_MEDIUM;
	extern Font* FONT_MEDIUM_BOLD;
	extern Font* FONT_SMALL;
	extern Font* FONT_TILE;
	extern Font* FONT_TILE_STATUS;
	extern Image* IMAGE_ARENA_WIN_BANNER;
	extern Image* IMAGE_BANNER_CREDITS;
	extern Image* IMAGE_CURTAIN_ANIM;
	extern Image* IMAGE_CURTAIN_CORD;
	extern Image* IMAGE_CURTAIN_TOP;
	extern Image* IMAGE_CUSTOM_DRAGGING;
	extern Image* IMAGE_CUSTOM_HAND;
	extern Image* IMAGE_CUSTOM_POINTER;
	extern Image* IMAGE_CUSTOM_TEXT;
	extern Image* IMAGE_DIALOG;
	extern Image* IMAGE_DIALOG_BANNER_HOWTOPLAY;
	extern Image* IMAGE_DIALOG_BANNER_LOADING;
	extern Image* IMAGE_DIALOG_BANNER_MENU;
	extern Image* IMAGE_DIALOG_BANNER_NEWUSER;
	extern Image* IMAGE_DIALOG_BANNER_OPTIONS;
	extern Image* IMAGE_DIALOG_BANNER_RUSURE;
	extern Image* IMAGE_DIALOG_BANNER_WELCOME;
	extern Image* IMAGE_DIALOG_BUTTON;
	extern Image* IMAGE_DIALOG_CHECKBOX;
	extern Image* IMAGE_DIALOG_DIVIDER_BOT;
	extern Image* IMAGE_DIALOG_DIVIDER_TOP;
	extern Image* IMAGE_DIALOG_USER_ENTRY;
	extern Image* IMAGE_FILM_REEL;
	extern Image* IMAGE_ORANGE_STAR;
	extern Image* IMAGE_RED_STAR;
	extern Image* IMAGE_SLIDER_THUMB;
	extern Image* IMAGE_SLIDER_TRACK;
	extern Image* IMAGE_SLIDER_TRACK_VERT;
	extern Image* IMAGE_WAIT_BAR;
	extern Image* IMAGE_YELLOW_STAR;
	extern int SOUND_CHOMP;

	// MiniGameCommon Resources
	bool ExtractMiniGameCommonResources(ResourceManager *theMgr);
	extern Image* IMAGE_MINICOMMON_BANNER_NICE_TRY;
	extern Image* IMAGE_MINICOMMON_BANNER_WELL_DONE;
	extern Image* IMAGE_MINICOMMON_BANNER_WINNINGS;
	extern Image* IMAGE_MINICOMMON_BTN_CLICK_ANYWHERE;
	extern Image* IMAGE_MINICOMMON_BTN_SUBMIT;
	extern Image* IMAGE_MINICOMMON_COUNTDOWN;
	extern Image* IMAGE_MINICOMMON_GAMEOVER;
	extern Image* IMAGE_MINICOMMON_LABEL_BONUS;
	extern Image* IMAGE_MINICOMMON_ORANGE_STAR;
	extern Image* IMAGE_MINICOMMON_ORANGE_STAR_SAT;
	extern Image* IMAGE_MINICOMMON_RED_STAR;
	extern Image* IMAGE_MINICOMMON_RED_STAR_SAT;
	extern Image* IMAGE_MINICOMMON_SCOREBOX;
	extern Image* IMAGE_MINICOMMON_TAB_RIGHT_DARK;
	extern Image* IMAGE_MINICOMMON_TAB_RIGHT_LIT;
	extern Image* IMAGE_MINICOMMON_TENT_BG;
	extern Image* IMAGE_MINICOMMON_TITLE_BONUSROUND;
	extern Image* IMAGE_MINICOMMON_TITLE_TOOBAD;
	extern Image* IMAGE_MINICOMMON_TITLE_WELLDONE;
	extern Image* IMAGE_MINICOMMON_WHITE_BG;
	extern Image* IMAGE_MINICOMMON_YELLOW_STAR;
	extern Image* IMAGE_MINICOMMON_YELLOW_STAR_SAT;

	// MiniGameMenu Resources
	bool ExtractMiniGameMenuResources(ResourceManager *theMgr);
	extern Image* IMAGE_MINIMENU_BTN_MAINMENU;
	extern Image* IMAGE_MINIMENU_PLAIN_BG;
	extern Image* IMAGE_MINIMENU_TENT_BG;
	extern Image* IMAGE_MINIMENU_TITLE;

	// StatsBook Resources
	bool ExtractStatsBookResources(ResourceManager *theMgr);
	extern Image* IMAGE_MP_CLIPS;
	extern Image* IMAGE_MP_FRAME;
	extern Image* IMAGE_MP_PLAY;
	extern Image* IMAGE_MP_TITLE;
	extern Image* IMAGE_SB_AREA;
	extern Image* IMAGE_SB_BESTWORDS;
	extern Image* IMAGE_SB_BGX;
	extern Image* IMAGE_SB_BUTTON_MENU;
	extern Image* IMAGE_SB_CHARACTER;
	extern Image* IMAGE_SB_CHARS_SEEN;
	extern Image* IMAGE_SB_CLOCK;
	extern Image* IMAGE_SB_ENEMY;
	extern Image* IMAGE_SB_GAMEOVER;
	extern Image* IMAGE_SB_GEMS;
	extern Image* IMAGE_SB_HEART_PLATE;
	extern Image* IMAGE_SB_HILIGHT_BAR;
	extern Image* IMAGE_SB_SCROLL_DOWN;
	extern Image* IMAGE_SB_SCROLL_UP;
	extern Image* IMAGE_SB_SECRETS;
	extern Image* IMAGE_SB_STAGE;
	extern Image* IMAGE_SB_STAGEBG;
	extern Image* IMAGE_SB_TIME;
	extern Image* IMAGE_SB_TOTAL_TIME;
	extern Image* IMAGE_SB_TREASURES;
	extern Image* IMAGE_TOK_TITLE;

	// TitleAndMM Resources
	bool ExtractTitleAndMMResources(ResourceManager *theMgr);
	extern Image* IMAGE_MM_ADVENTURE;
	extern Image* IMAGE_MM_ADVENTURE_OVER;
	extern Image* IMAGE_MM_ADV_COMPLETE;
	extern Image* IMAGE_MM_ARENA;
	extern Image* IMAGE_MM_ARENA_OVER;
	extern Image* IMAGE_MM_BG;
	extern Image* IMAGE_MM_CLICKHERE;
	extern Image* IMAGE_MM_CNG_TITLE;
	extern Image* IMAGE_MM_EXP_PACK_AVAILABLE;
	extern Image* IMAGE_MM_FILM_REEL_DOWN;
	extern Image* IMAGE_MM_FILM_REEL_OVER;
	extern Image* IMAGE_MM_HIGHSCORES;
	extern Image* IMAGE_MM_HS_OVER;
	extern Image* IMAGE_MM_LOCKED_LEFT;
	extern Image* IMAGE_MM_LOCKED_RIGHT;
	extern Image* IMAGE_MM_LOGO;
	extern Image* IMAGE_MM_MINIGAMES;
	extern Image* IMAGE_MM_MINI_OVER;
	extern Image* IMAGE_MM_OPTIONS;
	extern Image* IMAGE_MM_OPTIONS_OVER;
	extern Image* IMAGE_MM_QUITGAME;
	extern Image* IMAGE_MM_QUIT_OVER;
	extern Image* IMAGE_MM_REALLY_QUIT_BANNER;
	extern Image* IMAGE_MM_REALLY_QUIT_WEEPY;
	extern Image* IMAGE_MM_SCROLL;
	extern Image* IMAGE_MM_SCROLLBACK;
	extern Image* IMAGE_MM_TOME;
	extern Image* IMAGE_MM_TOME_OVER;
	extern Image* IMAGE_MM_TOME_TEXT;
	extern Image* IMAGE_TS_DELUXE;
	extern Image* IMAGE_TS_POPCAP;
	extern Image* IMAGE_TS_TILE;

	// UpsellTrailer Resources
	bool ExtractUpsellTrailerResources(ResourceManager *theMgr);
	extern Image* IMAGE_UT_ALTAR;
	extern Image* IMAGE_UT_ALTAR_GLOW1;
	extern Image* IMAGE_UT_ALTAR_GLOW2;
	extern Image* IMAGE_UT_ALTAR_GLOW3;
	extern Image* IMAGE_UT_ARENA_BG;
	extern Image* IMAGE_UT_ARENA_TEXT;
	extern Image* IMAGE_UT_BUY_BUTTON;
	extern Image* IMAGE_UT_BUY_NOW;
	extern Image* IMAGE_UT_GRASS;
	extern Image* IMAGE_UT_MONSTER_BG;
	extern Image* IMAGE_UT_NECRO_BG;
	extern Image* IMAGE_UT_NO_BUTTON;
	extern Image* IMAGE_UT_TEXT_BG;
	extern Image* IMAGE_UT_TILE_CRYSTAL;
	extern Image* IMAGE_UT_TILE_CRYSTAL_GLOW;
	extern Image* IMAGE_UT_TILE_DIAMOND;
	extern Image* IMAGE_UT_TILE_DIAMOND_GLOW;
	extern Image* IMAGE_UT_TILE_GARNET;
	extern Image* IMAGE_UT_TILE_GARNET_GLOW;
	extern Image* IMAGE_UT_TILE_GLINT_CRYSTAL;
	extern Image* IMAGE_UT_TILE_GLINT_DIAMOND;
	extern Image* IMAGE_UT_TILE_GLINT_GARNET;
	extern Image* IMAGE_UT_TILE_NORMAL;
	extern Image* IMAGE_UT_TREASURE10;
	extern Image* IMAGE_UT_TREASURE11;
	extern Image* IMAGE_UT_TREASURE12;
	extern Image* IMAGE_UT_TREASURE13;
	extern Image* IMAGE_UT_TREASURE14;
	extern Image* IMAGE_UT_TREASURE15;
	extern Image* IMAGE_UT_TREASURE16;
	extern Image* IMAGE_UT_TREASURE17;
	extern Image* IMAGE_UT_TREASURE18;
	extern Image* IMAGE_UT_TREASURE19;
	extern Image* IMAGE_UT_TREASURE1;
	extern Image* IMAGE_UT_TREASURE20;
	extern Image* IMAGE_UT_TREASURE21;
	extern Image* IMAGE_UT_TREASURE22;
	extern Image* IMAGE_UT_TREASURE23;
	extern Image* IMAGE_UT_TREASURE24;
	extern Image* IMAGE_UT_TREASURE25;
	extern Image* IMAGE_UT_TREASURE26;
	extern Image* IMAGE_UT_TREASURE27;
	extern Image* IMAGE_UT_TREASURE28;
	extern Image* IMAGE_UT_TREASURE29;
	extern Image* IMAGE_UT_TREASURE2;
	extern Image* IMAGE_UT_TREASURE30;
	extern Image* IMAGE_UT_TREASURE3;
	extern Image* IMAGE_UT_TREASURE4;
	extern Image* IMAGE_UT_TREASURE5;
	extern Image* IMAGE_UT_TREASURE6;
	extern Image* IMAGE_UT_TREASURE7;
	extern Image* IMAGE_UT_TREASURE8;
	extern Image* IMAGE_UT_TREASURE9;
	extern Image* IMAGE_UT_TREASURES_BG;
	extern Image* IMAGE_UT_TREASURE_BULB;
	extern Image* IMAGE_UT_TREASURE_BULB_HL;
	extern Image* IMAGE_UT_TRIAL_EXPIRED;
	extern int SOUND_UT_ATTACK_02;
	extern int SOUND_UT_BUY_NOW;
	extern int SOUND_UT_CHOMP;
	extern int SOUND_UT_GEMSPAWN;
	extern int SOUND_UT_LEX_ATTACK1;
	extern int SOUND_UT_LEX_ATTACK4;
	extern int SOUND_UT_LEX_ATTACK5;
	extern int SOUND_UT_NEW_TREASURE;
	extern int SOUND_UT_PETRIFY;
	extern int SOUND_UT_SLUMP;
	extern int SOUND_UT_WAIL_01;
	extern int SOUND_UT_WAIL_02;
	extern int SOUND_UT_WAIL_03;

	enum ResourceId
	{
		FONT_SMALL_ID,
		FONT_MEDIUM_ID,
		FONT_MEDIUM_BOLD_ID,
		FONT_LARGE_ID,
		FONT_LARGE_OUTLINE_ID,
		FONT_HUGE_ID,
		FONT_TILE_ID,
		FONT_TILE_STATUS_ID,
		FONT_LARGER_ID,
		FONT_BANTER_ID,
		SOUND_CHOMP_ID,
		IMAGE_WAIT_BAR_ID,
		IMAGE_DIALOG_BANNER_MENU_ID,
		IMAGE_DIALOG_BANNER_NEWUSER_ID,
		IMAGE_DIALOG_BANNER_OPTIONS_ID,
		IMAGE_DIALOG_BANNER_RUSURE_ID,
		IMAGE_DIALOG_BANNER_HOWTOPLAY_ID,
		IMAGE_DIALOG_BANNER_LOADING_ID,
		IMAGE_DIALOG_BANNER_WELCOME_ID,
		IMAGE_DIALOG_DIVIDER_BOT_ID,
		IMAGE_DIALOG_DIVIDER_TOP_ID,
		IMAGE_DIALOG_ID,
		IMAGE_DIALOG_BUTTON_ID,
		IMAGE_DIALOG_CHECKBOX_ID,
		IMAGE_DIALOG_USER_ENTRY_ID,
		IMAGE_ARENA_WIN_BANNER_ID,
		IMAGE_FILM_REEL_ID,
		IMAGE_BANNER_CREDITS_ID,
		IMAGE_YELLOW_STAR_ID,
		IMAGE_ORANGE_STAR_ID,
		IMAGE_RED_STAR_ID,
		IMAGE_SLIDER_THUMB_ID,
		IMAGE_SLIDER_TRACK_ID,
		IMAGE_SLIDER_TRACK_VERT_ID,
		IMAGE_CUSTOM_POINTER_ID,
		IMAGE_CUSTOM_HAND_ID,
		IMAGE_CUSTOM_DRAGGING_ID,
		IMAGE_CUSTOM_TEXT_ID,
		IMAGE_CURTAIN_ANIM_ID,
		IMAGE_CURTAIN_CORD_ID,
		IMAGE_CURTAIN_TOP_ID,
		IMAGE_CREDITS_GRASS_ID,
		IMAGE_HOF_BG_ID,
		IMAGE_HOF_BANNER_BOSS_ID,
		IMAGE_HOF_BANNER_LR_ID,
		IMAGE_HOF_BANNER_LEX_POWER_ID,
		IMAGE_HOF_BANNER_LNS_ID,
		IMAGE_HOF_BANNER_TOP_10_ID,
		IMAGE_HOF_BANNER_WM_ID,
		IMAGE_HOF_BANNER_LEX_SKILL_ID,
		IMAGE_HOF_BTN_MAINMENU_ID,
		IMAGE_HOF_BTN_PLAYAGAIN_ID,
		IMAGE_HOF_BTN_MG_PREV_ID,
		IMAGE_HOF_BTN_MG_NEXT_ID,
		IMAGE_HOF_PANEL_2_ID,
		IMAGE_HOF_PANEL_3_ID,
		IMAGE_HOF_TAB_ADVENTURE_ID,
		IMAGE_HOF_TAB_ARENA_ID,
		IMAGE_HOF_TAB_MINIGAMES_ID,
		IMAGE_HOF_POWER_RATING_ID,
		IMAGE_TS_TILE_ID,
		IMAGE_TS_DELUXE_ID,
		IMAGE_TS_POPCAP_ID,
		IMAGE_MM_QUITGAME_ID,
		IMAGE_MM_SCROLL_ID,
		IMAGE_MM_SCROLLBACK_ID,
		IMAGE_MM_ADVENTURE_ID,
		IMAGE_MM_ARENA_ID,
		IMAGE_MM_MINIGAMES_ID,
		IMAGE_MM_BG_ID,
		IMAGE_MM_CLICKHERE_ID,
		IMAGE_MM_HIGHSCORES_ID,
		IMAGE_MM_LOGO_ID,
		IMAGE_MM_OPTIONS_ID,
		IMAGE_MM_OPTIONS_OVER_ID,
		IMAGE_MM_QUIT_OVER_ID,
		IMAGE_MM_ADVENTURE_OVER_ID,
		IMAGE_MM_MINI_OVER_ID,
		IMAGE_MM_ARENA_OVER_ID,
		IMAGE_MM_HS_OVER_ID,
		IMAGE_MM_TOME_ID,
		IMAGE_MM_TOME_OVER_ID,
		IMAGE_MM_TOME_TEXT_ID,
		IMAGE_MM_LOCKED_LEFT_ID,
		IMAGE_MM_LOCKED_RIGHT_ID,
		IMAGE_MM_ADV_COMPLETE_ID,
		IMAGE_MM_REALLY_QUIT_BANNER_ID,
		IMAGE_MM_REALLY_QUIT_WEEPY_ID,
		IMAGE_MM_EXP_PACK_AVAILABLE_ID,
		IMAGE_MM_CNG_TITLE_ID,
		IMAGE_MM_FILM_REEL_OVER_ID,
		IMAGE_MM_FILM_REEL_DOWN_ID,
		IMAGE_GRAYBAR_BG_ID,
		IMAGE_XP_BAR_EMPTY_ID,
		IMAGE_XP_BAR_FULL_ID,
		IMAGE_XP_BAR_EFFECT_ID,
		IMAGE_XP_BAR_EFFECT_WHITE_ID,
		IMAGE_HEARTS_ID,
		IMAGE_HEART_MASK_ID,
		IMAGE_HEART_MASK_CC_ID,
		IMAGE_HEARTBLINK_ID,
		IMAGE_HEARTBLINK_CC_ID,
		IMAGE_HEARTS_BG_ID,
		IMAGE_HEARTS_CC_ID,
		IMAGE_BOSS_BANNER_ID,
		IMAGE_BOSS_TEXT_ID,
		IMAGE_STATS_BOX_ID,
		IMAGE_TM_BONUS_TEXT_ID,
		IMAGE_TM_LEVELUP_TOKEN_ID,
		IMAGE_TM_LEVELUP_TOKEN_GOLD_ID,
		IMAGE_TM_INTRO_TITLE_ID,
		IMAGE_TM_SPOTLIGHT_ID,
		IMAGE_MAP_LEX_WARP_ID,
		IMAGE_MAP_MINIGAME_ANIM_ID,
		IMAGE_MINIGAME_ICON_ID,
		IMAGE_GS_SHIP1_ID,
		IMAGE_GS_SHIP2_ID,
		IMAGE_GS_SHIP3_ID,
		IMAGE_GS_SHIP4_ID,
		IMAGE_GS_SHIP1_WARPJET_ID,
		IMAGE_GS_GO_ID,
		IMAGE_LIBRARY_TITLE_ID,
		IMAGE_TREASURE_HILIGHT_ID,
		IMAGE_TREASURE_BOX_ID,
		IMAGE_TREASURE_BULB_ID,
		IMAGE_TREASURE_BG_ID,
		IMAGE_TREASURE_HINT_ID,
		IMAGE_TREASURE_BANNER_ID,
		IMAGE_BOOKSHELF_LEFT_ID,
		IMAGE_BOOKSHELF_RIGHT_ID,
		IMAGE_UI_BOTTOM_ID,
		IMAGE_UI_DESCRIPTION_BOX_ID,
		IMAGE_UI_LEFT_ID,
		IMAGE_UI_RIGHT_ID,
		IMAGE_UI_TOP_ID,
		IMAGE_TREASURE_TEXTBOX_ID,
		IMAGE_BANNER_LARGE_ID,
		IMAGE_BANNER_SMALL_ID,
		IMAGE_MAP_BOOK2_ID,
		IMAGE_LEX_ICON_ID,
		IMAGE_STATUE_CODEX_ID,
		IMAGE_STATUE_LEX_ID,
		IMAGE_MAP_CHECK_ID,
		IMAGE_RED_SPARKLE_ID,
		IMAGE_BLUE_SPARKLE_ID,
		IMAGE_WP_SPARKLE_SMALL_ID,
		IMAGE_WP_SPARKLE_MEDIUM_ID,
		IMAGE_HINT_ARROW_BOX_ID,
		IMAGE_HINT_ARROW_DOWN_ID,
		IMAGE_HINT_ARROW_LEFT_ID,
		IMAGE_HINT_ARROW_RIGHT_ID,
		IMAGE_HINT_ARROW_TITLE_ID,
		IMAGE_HINT_ARROW_UP_ID,
		IMAGE_HINT_ARROW_DOWNX_ID,
		IMAGE_HINT_ARROW_LEFTX_ID,
		IMAGE_HINT_ARROW_RIGHTX_ID,
		IMAGE_HINT_ARROW_UPX_ID,
		IMAGE_HINT_ARROW_GLOW_ADD_ID,
		IMAGE_TILE_PIPS_ID,
		IMAGE_TILE_BASIC_ID,
		IMAGE_WORDPOWER_GLOW_LEFT_ID,
		IMAGE_WORDPOWER_GLOW_RIGHT_ID,
		IMAGE_WORDPOWER_GLOW_MIDDLE_ID,
		IMAGE_WORDPOWER_GLOW_LEFT_SMALL_ID,
		IMAGE_WORDPOWER_GLOW_MIDDLE_SMALL_ID,
		IMAGE_WORDPOWER_GLOW_RIGHT_SMALL_ID,
		IMAGE_WORDPOWER_GLOW_INNER_LEFT_ID,
		IMAGE_WORDPOWER_GLOW_INNER_MID_ID,
		IMAGE_WORDPOWER_GLOW_INNER_RIGHT_ID,
		IMAGE_CUTSCENE_TOP_ID,
		IMAGE_CUTSCENE_BOTTOM_ID,
		IMAGE_TUT_PIC_CASS_ID,
		IMAGE_TUT_PIC_CASS_WORRY_ID,
		IMAGE_TUT_PIC_LEX_ID,
		IMAGE_TUT_PIC_LEX_WORRY_ID,
		IMAGE_TUT_PIC_HEPH_ID,
		IMAGE_TUT_PIC_CIRCE_ID,
		IMAGE_TUT_PIC_NEMESIS_ID,
		IMAGE_TUT_PIC_MOXIE_ID,
		IMAGE_TUT_PIC_CODEX_ID,
		IMAGE_TUT_ARROW_ID,
		IMAGE_TUT_MG_BUTTON_ID,
		IMAGE_TUT_TITLE_ID,
		IMAGE_TUT_PLAY_BLUR_ID,
		IMAGE_TUT_PLAY_DIAGRAM_ID,
		IMAGE_TUT_TREASURE_BLUR_BOX_ID,
		IMAGE_TUT_GRID_BOX_ID,
		IMAGE_TUT_SCRAMBLE_BOX_ID,
		IMAGE_TUT_CURTAIN_LEFT_ID,
		IMAGE_TUT_CURTAIN_RIGHT_ID,
		IMAGE_ITEM_ATTACK_ID,
		IMAGE_ITEM_ATTACK_NB_ID,
		IMAGE_ITEM_HEALTH_ID,
		IMAGE_ITEM_HEALTH_NB_ID,
		IMAGE_ITEM_PURIFY_ID,
		IMAGE_ITEM_PURIFY_NB_ID,
		IMAGE_STATUSTEXT_BLEEDING_ID,
		IMAGE_STATUSTEXT_BURNING_ID,
		IMAGE_STATUSTEXT_FROZEN_ID,
		IMAGE_STATUSTEXT_PETRIFIED_ID,
		IMAGE_STATUSTEXT_POISONED_ID,
		IMAGE_STATUSTEXT_POWERDOWN_ID,
		IMAGE_STATUSTEXT_POWERUP_ID,
		IMAGE_STATUSTEXT_SHIELDED_ID,
		IMAGE_STATUSTEXT_STUNNED_ID,
		IMAGE_STATUSTEXT_BONUS_WORD_ID,
		IMAGE_HEART_BITS_ID,
		IMAGE_IMPACT_LARGE_ID,
		IMAGE_IMPACT_SMALL_ID,
		IMAGE_STATUS_ICONS_ID,
		IMAGE_STUN_RESISTED_ID,
		IMAGE_POISON_RESISTED_ID,
		IMAGE_PETRIFY_RESISTED_ID,
		IMAGE_BURNING_RESISTED_ID,
		IMAGE_POWER_DOWN_ID,
		IMAGE_WORD_BUBBLE_LEFT_ID,
		IMAGE_WORD_BUBBLE_RIGHT_ID,
		IMAGE_WORD_BUBBLE_ID,
		IMAGE_WORD_BUBBLE_TEX_ID,
		IMAGE_WORD_BUBBLE_DOWN_ARROW_ID,
		IMAGE_OVERKILL_ANNIHILATED_ID,
		IMAGE_OVERKILL_CRUSHED_ID,
		IMAGE_OVERKILL_DECIMATED_ID,
		IMAGE_OVERKILL_DESTROYED_ID,
		IMAGE_OVERKILL_OBLITERATED_ID,
		IMAGE_OVERKILL_ROUTED_ID,
		IMAGE_OVERKILL_VANQUISHED_ID,
		IMAGE_OVERKILL_WHOMPED_ID,
		IMAGE_LOW_HEALTH_OUTLINE_ID,
		IMAGE_PAUSED_BANNER_ID,
		IMAGE_XPBAR_GLOW_ID,
		IMAGE_BUTTON_ATTACK_ID,
		IMAGE_BUTTON_MENU_ID,
		IMAGE_BUTTON_SCRAMBLE_ID,
		IMAGE_BUTTON_SCRAMBLE_SHADOW_ID,
		IMAGE_GRAVESTONE_ID,
		IMAGE_GRAVESTONE_GLOW_ID,
		IMAGE_GRAVESTONE_SMOKE_ID,
		IMAGE_TMA_UI_TOP_ID,
		IMAGE_COMBAT_UI_TOP_ID,
		IMAGE_COMBAT_UI_BOTTOM1_ID,
		IMAGE_COMBAT_UI_BOTTOM2_ID,
		IMAGE_POTION_PEDESTAL_ID,
		IMAGE_LORE_PLATE_ID,
		IMAGE_LORE_PLATE_LIT_ID,
		IMAGE_LORE_PLATE_TILABLE_ID,
		IMAGE_PROGRESS_METER_ID,
		IMAGE_ALTAR_ID,
		IMAGE_ALTAR_BUBBLE_ID,
		IMAGE_ALTAR_GLOW1_ID,
		IMAGE_ALTAR_GLOW2_ID,
		IMAGE_ALTAR_GLOW3_ID,
		IMAGE_UI_BOOK_OPTIONS_BUTTON_ID,
		IMAGE_UI_BOOK_BACK_BUTTON_ID,
		IMAGE_UI_BOOK_ENTER_BUTTON_ID,
		IMAGE_UI_BOOK_TS_CONTINUE_BUTTON_ID,
		IMAGE_UI_BOOK_HILIGHT_ID,
		IMAGE_UI_BOOK_AVAILABLE_ID,
		IMAGE_UI_BOOK_DOTS_ID,
		IMAGE_UI_BOOK_END_STATS_BOX_ID,
		IMAGE_UI_BOOK_END_STATS_TITLE_ID,
		IMAGE_LEVELUP_BANNER_ID,
		IMAGE_LEVELUP_TEXT_ID,
		IMAGE_LEVELUP_TROPHY_ID,
		IMAGE_LEVELUP_WATERMARK_ID,
		IMAGE_LEVELUP_ICONS_ID,
		IMAGE_LEVELUP_SPARKLE_ID,
		IMAGE_LEVELUP_STAR_ID,
		IMAGE_LEVELUP_TROPHY_GLOW_ID,
		IMAGE_LEVELUP_TROPHY_PARTICLES_ID,
		IMAGE_WS_PAPER_ID,
		IMAGE_WS_SCROLL_ID,
		IMAGE_WS_BESTWORD_TITLE_ID,
		SOUND_TILE_SELECT_ID,
		SOUND_CLICK1_ID,
		SOUND_CLICK2_ID,
		SOUND_SUBMIT_FAILED_ID,
		SOUND_GEMSPAWN_ID,
		SOUND_MM_ADVENTURE_ID,
		SOUND_MM_ARENA_ID,
		SOUND_MM_HS_ID,
		SOUND_MM_MINIGAMES_ID,
		SOUND_MM_OPTIONS_ID,
		SOUND_MM_QUIT_ID,
		SOUND_MM_TOK_ID,
		SOUND_MM_DONTLEAVE_ID,
		SOUND_MM_CNG_ID,
		SOUND_MM_BUY_NOW_ID,
		SOUND_TEXT_BLIP_ID,
		SOUND_CHACHING_ID,
		SOUND_CROWD_CHEER_ID,
		SOUND_FIREWORK1_ID,
		SOUND_FIREWORK2_ID,
		SOUND_LEX_LEVELUP_ID,
		SOUND_NEW_TREASURE_ID,
		SOUND_LEX_ATTACK1_ID,
		SOUND_LEX_ATTACK4_ID,
		SOUND_LEX_ATTACK5_ID,
		SOUND_LEX_ATTACK6_ID,
		SOUND_LEX_ATTACK7_ID,
		SOUND_LEX_BOSS_BATTLE_ID,
		SOUND_LEX_WARPIN_ID,
		SOUND_LEX_WARPOUT_ID,
		SOUND_LEX_WOW_ID,
		SOUND_LEX_ASTONISHING_ID,
		SOUND_LEX_AWESOME_ID,
		SOUND_LEX_EXCELLENT_ID,
		SOUND_LEX_FANTASTIC_ID,
		SOUND_LEX_GOOD_ID,
		SOUND_LEX_AUTOLOGICAL_ID,
		SOUND_LEX_VERYGOOD_ID,
		SOUND_LEX_NICE_ID,
		SOUND_LEX_INCREDIBLE_ID,
		SOUND_LEX_WATCHOUT_ID,
		SOUND_LEX_GIGGLE1_ID,
		SOUND_LEX_GIGGLE2_ID,
		SOUND_LEX_SNEEZE_ID,
		SOUND_LEX_BURP_ID,
		SOUND_SCRAMBLE_ID,
		SOUND_SLOWDOWN_ID,
		SOUND_LEX_ILOVEYOU_ID,
		SOUND_LEX_CASHMONEY_ID,
		SOUND_LEX_SHEEPBLEAT_ID,
		SOUND_3_ID,
		SOUND_2_ID,
		SOUND_1_ID,
		SOUND_GO_ID,
		SOUND_NEW_MINIGAME_ID,
		SOUND_WELCOME_ID,
		SOUND_COUNT_ID,
		SOUND_XP_STREAM_ID,
		SOUND_EFFECT_FIRE_ID,
		SOUND_EFFECT_POISON_ID,
		SOUND_EFFECT_FROZEN_ID,
		SOUND_EFFECT_PETRIFY_ID,
		SOUND_EFFECT_WEAKEN_ID,
		SOUND_POTION_HEAL_ID,
		SOUND_POTION_PURIFY_ID,
		SOUND_POTION_POWERUP_ID,
		SOUND_POTION_PICKUP_ID,
		SOUND_LOW_HEALTH_ID,
		SOUND_WORD_POWER_ID,
		SOUND_OVERKILL_ANNIHILATED_ID,
		SOUND_OVERKILL_CRUSHED_ID,
		SOUND_OVERKILL_DECIMATED_ID,
		SOUND_OVERKILL_DESTROYED_ID,
		SOUND_OVERKILL_OBLITERATED_ID,
		SOUND_OVERKILL_ROUTED_ID,
		SOUND_OVERKILL_VANQUISHED_ID,
		SOUND_OVERKILL_WHOMPED_ID,
		SOUND_POISON_ID,
		SOUND_STUN_ID,
		SOUND_TILESMASH_ID,
		SOUND_IMPACT_LARGE_ID,
		SOUND_IMPACT_SMALL_ID,
		SOUND_HEAL_ID,
		SOUND_POWERUP_ID,
		SOUND_POWERDOWN_ID,
		SOUND_FREEZE_ID,
		SOUND_TILELOCK_ID,
		SOUND_LIGHTNING_ID,
		SOUND_PLAGUE_ID,
		SOUND_PETRIFY_ID,
		SOUND_LEX_BITE_ID,
		IMAGE_MINICOMMON_BTN_SUBMIT_ID,
		IMAGE_MINICOMMON_TAB_RIGHT_DARK_ID,
		IMAGE_MINICOMMON_TAB_RIGHT_LIT_ID,
		IMAGE_MINICOMMON_LABEL_BONUS_ID,
		IMAGE_MINICOMMON_TENT_BG_ID,
		IMAGE_MINICOMMON_TITLE_BONUSROUND_ID,
		IMAGE_MINICOMMON_TITLE_TOOBAD_ID,
		IMAGE_MINICOMMON_TITLE_WELLDONE_ID,
		IMAGE_MINICOMMON_BANNER_NICE_TRY_ID,
		IMAGE_MINICOMMON_BANNER_WELL_DONE_ID,
		IMAGE_MINICOMMON_BANNER_WINNINGS_ID,
		IMAGE_MINICOMMON_BTN_CLICK_ANYWHERE_ID,
		IMAGE_MINICOMMON_WHITE_BG_ID,
		IMAGE_MINICOMMON_YELLOW_STAR_ID,
		IMAGE_MINICOMMON_ORANGE_STAR_ID,
		IMAGE_MINICOMMON_RED_STAR_ID,
		IMAGE_MINICOMMON_YELLOW_STAR_SAT_ID,
		IMAGE_MINICOMMON_ORANGE_STAR_SAT_ID,
		IMAGE_MINICOMMON_RED_STAR_SAT_ID,
		IMAGE_MINICOMMON_COUNTDOWN_ID,
		IMAGE_MINICOMMON_SCOREBOX_ID,
		IMAGE_MINICOMMON_GAMEOVER_ID,
		IMAGE_MINIMENU_TENT_BG_ID,
		IMAGE_MINIMENU_TITLE_ID,
		IMAGE_MINIMENU_PLAIN_BG_ID,
		IMAGE_MINIMENU_BTN_MAINMENU_ID,
		IMAGE_UT_GRASS_ID,
		IMAGE_UT_BUY_BUTTON_ID,
		IMAGE_UT_NO_BUTTON_ID,
		IMAGE_UT_BUY_NOW_ID,
		IMAGE_UT_TRIAL_EXPIRED_ID,
		IMAGE_UT_TEXT_BG_ID,
		IMAGE_UT_ALTAR_ID,
		IMAGE_UT_ALTAR_GLOW1_ID,
		IMAGE_UT_ALTAR_GLOW2_ID,
		IMAGE_UT_ALTAR_GLOW3_ID,
		IMAGE_UT_ARENA_TEXT_ID,
		IMAGE_UT_MONSTER_BG_ID,
		IMAGE_UT_NECRO_BG_ID,
		IMAGE_UT_TREASURES_BG_ID,
		IMAGE_UT_TREASURE1_ID,
		IMAGE_UT_TREASURE2_ID,
		IMAGE_UT_TREASURE3_ID,
		IMAGE_UT_TREASURE4_ID,
		IMAGE_UT_TREASURE5_ID,
		IMAGE_UT_TREASURE6_ID,
		IMAGE_UT_TREASURE7_ID,
		IMAGE_UT_TREASURE8_ID,
		IMAGE_UT_TREASURE9_ID,
		IMAGE_UT_TREASURE10_ID,
		IMAGE_UT_TREASURE11_ID,
		IMAGE_UT_TREASURE12_ID,
		IMAGE_UT_TREASURE13_ID,
		IMAGE_UT_TREASURE14_ID,
		IMAGE_UT_TREASURE15_ID,
		IMAGE_UT_TREASURE16_ID,
		IMAGE_UT_TREASURE17_ID,
		IMAGE_UT_TREASURE18_ID,
		IMAGE_UT_TREASURE19_ID,
		IMAGE_UT_TREASURE20_ID,
		IMAGE_UT_TREASURE21_ID,
		IMAGE_UT_TREASURE22_ID,
		IMAGE_UT_TREASURE23_ID,
		IMAGE_UT_TREASURE24_ID,
		IMAGE_UT_TREASURE25_ID,
		IMAGE_UT_TREASURE26_ID,
		IMAGE_UT_TREASURE27_ID,
		IMAGE_UT_TREASURE28_ID,
		IMAGE_UT_TREASURE29_ID,
		IMAGE_UT_TREASURE30_ID,
		IMAGE_UT_TREASURE_BULB_ID,
		IMAGE_UT_TREASURE_BULB_HL_ID,
		IMAGE_UT_TILE_CRYSTAL_ID,
		IMAGE_UT_TILE_DIAMOND_ID,
		IMAGE_UT_TILE_GARNET_ID,
		IMAGE_UT_TILE_NORMAL_ID,
		IMAGE_UT_TILE_GLINT_CRYSTAL_ID,
		IMAGE_UT_TILE_GLINT_DIAMOND_ID,
		IMAGE_UT_TILE_GLINT_GARNET_ID,
		IMAGE_UT_TILE_CRYSTAL_GLOW_ID,
		IMAGE_UT_TILE_DIAMOND_GLOW_ID,
		IMAGE_UT_TILE_GARNET_GLOW_ID,
		IMAGE_UT_ARENA_BG_ID,
		SOUND_UT_WAIL_02_ID,
		SOUND_UT_WAIL_03_ID,
		SOUND_UT_WAIL_01_ID,
		SOUND_UT_NEW_TREASURE_ID,
		SOUND_UT_PETRIFY_ID,
		SOUND_UT_GEMSPAWN_ID,
		SOUND_UT_ATTACK_02_ID,
		SOUND_UT_SLUMP_ID,
		SOUND_UT_CHOMP_ID,
		SOUND_UT_BUY_NOW_ID,
		SOUND_UT_LEX_ATTACK1_ID,
		SOUND_UT_LEX_ATTACK4_ID,
		SOUND_UT_LEX_ATTACK5_ID,
		IMAGE_SB_TOTAL_TIME_ID,
		IMAGE_SB_BGX_ID,
		IMAGE_SB_ENEMY_ID,
		IMAGE_SB_GAMEOVER_ID,
		IMAGE_SB_STAGE_ID,
		IMAGE_SB_STAGEBG_ID,
		IMAGE_SB_TIME_ID,
		IMAGE_SB_HILIGHT_BAR_ID,
		IMAGE_SB_CLOCK_ID,
		IMAGE_SB_BESTWORDS_ID,
		IMAGE_SB_HEART_PLATE_ID,
		IMAGE_TOK_TITLE_ID,
		IMAGE_SB_BUTTON_MENU_ID,
		IMAGE_SB_AREA_ID,
		IMAGE_SB_CHARACTER_ID,
		IMAGE_SB_CHARS_SEEN_ID,
		IMAGE_SB_GEMS_ID,
		IMAGE_SB_SECRETS_ID,
		IMAGE_SB_TREASURES_ID,
		IMAGE_SB_SCROLL_UP_ID,
		IMAGE_SB_SCROLL_DOWN_ID,
		IMAGE_MP_TITLE_ID,
		IMAGE_MP_FRAME_ID,
		IMAGE_MP_CLIPS_ID,
		IMAGE_MP_PLAY_ID,
		RESOURCE_ID_MAX
	};

	Image* GetImageById(int theId);
	Font* GetFontById(int theId);
	int GetSoundById(int theId);

	Image*& GetImageRefById(int theId);
	Font*& GetFontRefById(int theId);
	int& GetSoundRefById(int theId);

	ResourceId GetIdByImage(Image *theImage);
	ResourceId GetIdByFont(Font *theFont);
	ResourceId GetIdBySound(int theSound);
	const char* GetStringIdById(int theId);
	ResourceId GetIdByStringId(const char *theStringId);

} // namespace Sexy


#endif
