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

	// Adventure Resources
	bool ExtractAdventureResources(ResourceManager *theMgr);
	extern Image* IMAGE_ADV_ADVENTURE;
	extern Image* IMAGE_ADV_RESTART_COVER;

	// Character Resources
	bool ExtractCharacterResources(ResourceManager *theMgr);
	extern Image* IMAGE_CHR_CHARACTER12;
	extern Image* IMAGE_CHR_CHARACTER1;
	extern Image* IMAGE_CHR_CHARACTER2;
	extern Image* IMAGE_CHR_CHARACTER3;
	extern Image* IMAGE_CHR_CHARACTER4;
	extern Image* IMAGE_CHR_CHARACTERS;
	extern Image* IMAGE_CHR_CHARACTERSHADOWS;
	extern Image* IMAGE_CHR_CHARACTER_ADV1;
	extern Image* IMAGE_CHR_CHARACTER_ADV2;
	extern Image* IMAGE_CHR_CHARACTER_ADV3;
	extern Image* IMAGE_CHR_CHARACTER_ADV4;
	extern Image* IMAGE_CHR_YINYANGEYE;

	// Dialog Resources
	bool ExtractDialogResources(ResourceManager *theMgr);
	extern Image* IMAGE_DLG_BLUEFRAME;
	extern Image* IMAGE_DLG_BONUSBUTTON;
	extern Image* IMAGE_DLG_BOTTOMBAR;
	extern Image* IMAGE_DLG_BROWNBUTTON1;
	extern Image* IMAGE_DLG_BROWNBUTTON2;
	extern Image* IMAGE_DLG_BUTTON1;
	extern Image* IMAGE_DLG_BUTTON2;
	extern Image* IMAGE_DLG_BUTTON3;
	extern Image* IMAGE_DLG_BUTTONOVERLAY2;
	extern Image* IMAGE_DLG_CONNECTOR;
	extern Image* IMAGE_DLG_DIALOGBOX;
	extern Image* IMAGE_DLG_EDITBUTTON;
	extern Image* IMAGE_DLG_FRAME1;
	extern Image* IMAGE_DLG_FRAME2;
	extern Image* IMAGE_DLG_FRAME3;
	extern Image* IMAGE_DLG_GREENOK;
	extern Image* IMAGE_DLG_HORZBAR;
	extern Image* IMAGE_DLG_INSTANTREPLAY;
	extern Image* IMAGE_DLG_INSTRUCTIONS2;
	extern Image* IMAGE_DLG_INSTRUCTIONS3;
	extern Image* IMAGE_DLG_INSTRUCTIONS4;
	extern Image* IMAGE_DLG_INSTRUCTIONS;
	extern Image* IMAGE_DLG_LJOINT;
	extern Image* IMAGE_DLG_MASTERSTAGEPROGBAR;
	extern Image* IMAGE_DLG_MENU;
	extern Image* IMAGE_DLG_PLAYBUTTON1;
	extern Image* IMAGE_DLG_PLAYBUTTON2;
	extern Image* IMAGE_DLG_PLAYWIDGET1;
	extern Image* IMAGE_DLG_PLAYWIDGET2;
	extern Image* IMAGE_DLG_POPUP;
	extern Image* IMAGE_DLG_PURPLEBUTTON;
	extern Image* IMAGE_DLG_QUESTIONMARK;
	extern Image* IMAGE_DLG_RANDOM;
	extern Image* IMAGE_DLG_REPLAYSEGMENT;
	extern Image* IMAGE_DLG_REPLAYTOP;
	extern Image* IMAGE_DLG_SEGMENT;
	extern Image* IMAGE_DLG_SELECTORFRAME;
	extern Image* IMAGE_DLG_SLIDER;
	extern Image* IMAGE_DLG_SLIDERHILIGHT;
	extern Image* IMAGE_DLG_SLIDERORB;
	extern Image* IMAGE_DLG_STAGEBAR;
	extern Image* IMAGE_DLG_STAGEBULLET;
	extern Image* IMAGE_DLG_STAGEPROGRESS;
	extern Image* IMAGE_DLG_STAGEPROGRESSBAR;
	extern Image* IMAGE_DLG_STARBADGEICON;
	extern Image* IMAGE_DLG_TEXTBOX;
	extern Image* IMAGE_DLG_TEXTRECT;
	extern Image* IMAGE_DLG_TINYLOCKED;
	extern Image* IMAGE_DLG_TIP;

	// Game Resources
	bool ExtractGameResources(ResourceManager *theMgr);
	extern Image* IMAGE_ACEDRIBBON;
	extern Image* IMAGE_ALPHABALL;
	extern Image* IMAGE_BALL;
	extern Image* IMAGE_BALLPEG;
	extern Image* IMAGE_BALLPEGCB;
	extern Image* IMAGE_BALLSHADOW;
	extern Image* IMAGE_BALL_LIGHTNING;
	extern Image* IMAGE_BBUCKET;
	extern Image* IMAGE_BIGBALL;
	extern Image* IMAGE_BIGBALLSHADOW;
	extern Image* IMAGE_BLUERIBBON;
	extern Image* IMAGE_BONUS100000;
	extern Image* IMAGE_BONUS10000;
	extern Image* IMAGE_BONUS25000;
	extern Image* IMAGE_BONUS50000;
	extern Image* IMAGE_BONUS5000;
	extern Image* IMAGE_BONUSGLOW;
	extern Image* IMAGE_BONUSGLOW_BLUE;
	extern Image* IMAGE_BONUSGLOW_GREEN;
	extern Image* IMAGE_BONUSHALO;
	extern Image* IMAGE_BRICK;
	extern Image* IMAGE_BRICKCB;
	extern Image* IMAGE_BRICKGLOW;
	extern Image* IMAGE_BUBBLES;
	extern Image* IMAGE_CATCHERGLOW;
	extern Image* IMAGE_CIRCLE;
	extern Image* IMAGE_COINHEADS;
	extern Image* IMAGE_COINHILIGHT;
	extern Image* IMAGE_COINTAILS;
	extern Image* IMAGE_CURVE;
	extern Image* IMAGE_DEFINNERPEG;
	extern Image* IMAGE_DEFOUTERPEG;
	extern Image* IMAGE_EMBER;
	extern Image* IMAGE_FEVERCAM;
	extern Image* IMAGE_FEVERGLOWSTAR;
	extern Image* IMAGE_FEVERRAINBOW;
	extern Image* IMAGE_FEVERRAY;
	extern Image* IMAGE_FEVERSCORE;
	extern Image* IMAGE_FEVERSCORETOP;
	extern Image* IMAGE_FEVERSPARK;
	extern Image* IMAGE_FEVERSTAR_BLUE;
	extern Image* IMAGE_FEVERSTAR_GREEN;
	extern Image* IMAGE_FEVERSTAR_RED;
	extern Image* IMAGE_FEVERTRAIL;
	extern Image* IMAGE_FIREBALL;
	extern Image* IMAGE_FIREBALLFIRE;
	extern Image* IMAGE_FLAMETRAIL;
	extern Image* IMAGE_FLECK;
	extern Image* IMAGE_FLOWER;
	extern Image* IMAGE_GBUCKET;
	extern Image* IMAGE_GUIDEARROW;
	extern Image* IMAGE_GUIDEHIT;
	extern Image* IMAGE_GUIDEPOINT;
	extern Image* IMAGE_GUIDERECT2;
	extern Image* IMAGE_GUIDERECT;
	extern Image* IMAGE_HAT;
	extern Image* IMAGE_JIMMY;
	extern Image* IMAGE_JIMMYSPEECH;
	extern Image* IMAGE_LIGHTNING;
	extern Image* IMAGE_LIGHTNING_BACK;
	extern Image* IMAGE_LIGHTNING_BALLSPARK;
	extern Image* IMAGE_LIGHTNING_FRONT;
	extern Image* IMAGE_LIGHTNING_FRONT_SMALL;
	extern Image* IMAGE_LIGHTNING_ROD;
	extern Image* IMAGE_LIGHTNING_ROD_ON;
	extern Image* IMAGE_LIGHTNING_ROD_RING_BACK;
	extern Image* IMAGE_LIGHTNING_ROD_RING_FRONT;
	extern Image* IMAGE_LIGHTNING_ROD_ZAP;
	extern Image* IMAGE_LIGHTNING_SPARK;
	extern Image* IMAGE_MAGICHAT;
	extern Image* IMAGE_MASTERBADGE;
	extern Image* IMAGE_NUKESTREAK;
	extern Image* IMAGE_PAUSED;
	extern Image* IMAGE_PEGGLOW;
	extern Image* IMAGE_PEGSHADOW;
	extern Image* IMAGE_POWERUPICON;
	extern Image* IMAGE_PULSE2_POWERUP;
	extern Image* IMAGE_PULSE2_SCORE;
	extern Image* IMAGE_PULSE_GOAL;
	extern Image* IMAGE_PULSE_NORMAL;
	extern Image* IMAGE_PULSE_POWERUP;
	extern Image* IMAGE_PULSE_SCORE;
	extern Image* IMAGE_PYRAMIDBALL;
	extern Image* IMAGE_PYRAMIDRAY;
	extern Image* IMAGE_RBUCKET;
	extern Image* IMAGE_SCOREICON;
	extern Image* IMAGE_SMOKE;
	extern Image* IMAGE_SPACEBUBBLE;
	extern Image* IMAGE_SPACEBURST;
	extern Image* IMAGE_SPACEHALO;
	extern Image* IMAGE_SPACESTAR;
	extern Image* IMAGE_SPARKLE;
	extern Image* IMAGE_SPARKLE_FEVER;
	extern Image* IMAGE_SPOOKYEYES;
	extern Image* IMAGE_SPOOKYGHOST;
	extern Image* IMAGE_SPOOKYPOOF1;
	extern Image* IMAGE_SPOOKYPOOF2;
	extern Image* IMAGE_SPOOKYTRAIL;
	extern Image* IMAGE_STAR_STREAK;
	extern Image* IMAGE_STREAK;
	extern Image* IMAGE_SUPERSWIRL;
	extern Image* IMAGE_TINYACED;
	extern Image* IMAGE_TINYBLUERIBBON;
	extern Image* IMAGE_TIPARROW;
	extern Image* IMAGE_XFEVER;
	extern Image* IMAGE_XFEVERGLOW;
	extern Image* IMAGE_YINYANG;

	// Help Resources
	bool ExtractHelpResources(ResourceManager *theMgr);
	extern Image* IMAGE_HELP_BUTTONOVERLAY;
	extern Image* IMAGE_HELP_ICONS;
	extern Image* IMAGE_HELP_MODES;
	extern Image* IMAGE_HELP_SCREEN;

	// IP Resources
	bool ExtractIPResources(ResourceManager *theMgr);
	extern Image* IMAGE_IP_B;
	extern Image* IMAGE_IP_BALLOTRON;
	extern Image* IMAGE_IP_BLC;
	extern Image* IMAGE_IP_BRC;
	extern Image* IMAGE_IP_FEVERMETER;
	extern Image* IMAGE_IP_L1;
	extern Image* IMAGE_IP_L2;
	extern Image* IMAGE_IP_LWINDOW;
	extern Image* IMAGE_IP_ORBGLOW;
	extern Image* IMAGE_IP_POWERUPBANNER;
	extern Image* IMAGE_IP_R1;
	extern Image* IMAGE_IP_R2;
	extern Image* IMAGE_IP_RWINDOW;
	extern Image* IMAGE_IP_SEAMS;
	extern Image* IMAGE_IP_SHOOTER;
	extern Image* IMAGE_IP_SHOOTERBACK;
	extern Image* IMAGE_IP_SHOOTERORB;
	extern Image* IMAGE_IP_TL1;
	extern Image* IMAGE_IP_TL2;
	extern Image* IMAGE_IP_TLC;
	extern Image* IMAGE_IP_TR1;
	extern Image* IMAGE_IP_TR2;
	extern Image* IMAGE_IP_TRC;

	// Init Resources
	bool ExtractInitResources(ResourceManager *theMgr);
	extern Font* FONT_OVERLOAD16;
	extern Font* FONT_OVERLOAD16OUTLINE2;
	extern Font* FONT_OVERLOAD16OUTLINE;
	extern Image* IMAGE_CURSOR_DRAGGING;
	extern Image* IMAGE_CURSOR_HAND;
	extern Image* IMAGE_CURSOR_POINTER;
	extern Image* IMAGE_CURSOR_TEXT;
	extern Image* IMAGE_SCREENFRAMEBOTTOM;
	extern Image* IMAGE_SCREENFRAMELEFT;
	extern Image* IMAGE_SCREENFRAMERIGHT;
	extern Image* IMAGE_SCREENFRAMETOP;
	extern Image* IMAGE_SUNGLOW;
	extern Image* IMAGE_WIN_CLOSE;
	extern Image* IMAGE_WIN_MINIMIZE;
	extern Image* IMAGE_WIN_UNMAX;
	extern int SOUND_FIREBALLLOOP;
	extern int SOUND_MOONLIGHT;

	// Interface Resources
	bool ExtractInterfaceResources(ResourceManager *theMgr);
	extern Image* IMAGE_INT_BACKSHADOW;
	extern Image* IMAGE_INT_BALL;
	extern Image* IMAGE_INT_BALLBACK;
	extern Image* IMAGE_INT_BALLGLASS;
	extern Image* IMAGE_INT_BALLOMASKBL;
	extern Image* IMAGE_INT_BALLOMASKBR;
	extern Image* IMAGE_INT_BALLOMASKTL;
	extern Image* IMAGE_INT_BALLOMASKTR;
	extern Image* IMAGE_INT_BUTTONCOVER;
	extern Image* IMAGE_INT_CANNON;
	extern Image* IMAGE_INT_CANNONCOVER;
	extern Image* IMAGE_INT_COUNTER;
	extern Image* IMAGE_INT_FBCENTERDISC;
	extern Image* IMAGE_INT_FBFREEBALL;
	extern Image* IMAGE_INT_FBGLOW;
	extern Image* IMAGE_INT_FBLIGHTUP;
	extern Image* IMAGE_INT_FBPOINTS;
	extern Image* IMAGE_INT_FEVERBARLITES;
	extern Image* IMAGE_INT_FEVERBARS;
	extern Image* IMAGE_INT_FEVERGLOW1;
	extern Image* IMAGE_INT_FEVERGLOW2;
	extern Image* IMAGE_INT_FEVERGLOW3;
	extern Image* IMAGE_INT_FEVERGLOW;
	extern Image* IMAGE_INT_FEVERMETER;
	extern Image* IMAGE_INT_FEVERMETERBOTTOM;
	extern Image* IMAGE_INT_FEVERMETERTOP;
	extern Image* IMAGE_INT_FEVERRAILING;
	extern Image* IMAGE_INT_FREEBALLMETER;
	extern Image* IMAGE_INT_FREEBALLMETERTOP;
	extern Image* IMAGE_INT_PLUNGER;
	extern Image* IMAGE_INT_SCOREHILIGHT;

	// LevelSelect Resources
	bool ExtractLevelSelectResources(ResourceManager *theMgr);
	extern Image* IMAGE_LS_BACKBUTTON;
	extern Image* IMAGE_LS_CHALLENGEBADGE;
	extern Image* IMAGE_LS_LEVELSCREEN;
	extern Image* IMAGE_LS_LEVELSCREENLEFT;
	extern Image* IMAGE_LS_LEVELSCREENRIGHT;
	extern Image* IMAGE_LS_LEVELSELECTOR;
	extern Image* IMAGE_LS_LOCK;
	extern Image* IMAGE_LS_LOCK_SMALL;
	extern Image* IMAGE_LS_MAINMENUBUTTON;
	extern Image* IMAGE_LS_NEXTBUTTON;
	extern Image* IMAGE_LS_RANDOMBUTTON;
	extern Image* IMAGE_LS_RANDOMLEVEL;
	extern Image* IMAGE_LS_TINYACED;
	extern Image* IMAGE_LS_TINYBLUERIBBON;
	extern Image* IMAGE_LS_TINYCHALLENGE;

	// Load Resources
	bool ExtractLoadResources(ResourceManager *theMgr);
	extern Image* IMAGE_LOAD_BACK;
	extern Image* IMAGE_LOAD_BACKBRIGHT;
	extern Image* IMAGE_LOAD_BALL;
	extern Image* IMAGE_LOAD_BIG_STAR;
	extern Image* IMAGE_LOAD_BJORN;
	extern Image* IMAGE_LOAD_BJORN_EYES_CLOSED;
	extern Image* IMAGE_LOAD_BJORN_SCORCHED;
	extern Image* IMAGE_LOAD_DRAGON;
	extern Image* IMAGE_LOAD_DRAGON_HEAD;
	extern Image* IMAGE_LOAD_FLAME_PARTICLE;
	extern Image* IMAGE_LOAD_FLAME_STRIP;
	extern Image* IMAGE_LOAD_FLY0;
	extern Image* IMAGE_LOAD_FLY1;
	extern Image* IMAGE_LOAD_HILL2;
	extern Image* IMAGE_LOAD_HILL2BRIGHT;
	extern Image* IMAGE_LOAD_HILL3;
	extern Image* IMAGE_LOAD_HILL3BRIGHT;
	extern Image* IMAGE_LOAD_LIGHTS;
	extern Image* IMAGE_LOAD_LOGO;
	extern Image* IMAGE_LOAD_OVERLAY;
	extern Image* IMAGE_LOAD_PLAYNOW;
	extern Image* IMAGE_LOAD_POPCAP;
	extern Image* IMAGE_LOAD_SPARK;
	extern Image* IMAGE_LOAD_STAR;
	extern Image* IMAGE_LOAD_SUNHEAD;
	extern Image* IMAGE_LOAD_TM;
	extern Image* IMAGE_LOAD_WOWLOGO;
	extern Image* IMAGE_LOAD_WOW_EDITION_TEXT;
	extern Image* IMAGE_PARTNER;

	// LoadingThread Resources
	bool ExtractLoadingThreadResources(ResourceManager *theMgr);
	extern Font* FONT_ARCADE;
	extern Font* FONT_ARGON;
	extern Font* FONT_BALLSLEFT;
	extern Font* FONT_BONK;
	extern Font* FONT_BUTTON;
	extern Font* FONT_LEVEL_TITLE;
	extern Font* FONT_MINI76;
	extern Font* FONT_MINI7;
	extern Font* FONT_MINI7_BOLD;
	extern Font* FONT_NEWLEVELS;
	extern Font* FONT_OVERLOAD10;
	extern Font* FONT_OVERLOAD10OUTLINE;
	extern Font* FONT_OVERLOAD12;
	extern Font* FONT_OVERLOAD12OUTLINE;
	extern Font* FONT_OVERLOAD24;
	extern Font* FONT_OVERLOAD24GRAD1;
	extern Font* FONT_OVERLOAD24GRAD2;
	extern Font* FONT_OVERLOAD24OUTLINE;
	extern Font* FONT_OVERLOADMONO10;
	extern Font* FONT_OVERLOADMONO12;
	extern Font* FONT_PLAIN2;
	extern Font* FONT_PLAIN2BIG;
	extern Font* FONT_PLAIN2BIGOUTLINE;
	extern Font* FONT_PLAIN2OUTLINE;
	extern Font* FONT_PLAIN;
	extern Font* FONT_PLAINOUTLINE;
	extern Font* FONT_SCORE_DISP;
	extern Font* FONT_SILK7;
	extern Font* FONT_SILK;
	extern Font* FONT_SMALL;
	extern Font* FONT_SMALLMONO;
	extern Font* FONT_SMALL_DISP;
	extern Font* FONT_STAGE;
	extern int SOUND_AAH;
	extern int SOUND_ADD_BALL;
	extern int SOUND_APPLAUSE;
	extern int SOUND_APPLAUSE_LONG;
	extern int SOUND_AWARD;
	extern int SOUND_BUBBLES;
	extern int SOUND_BUCKETHIT;
	extern int SOUND_BUTTON1;
	extern int SOUND_BUTTON2;
	extern int SOUND_CANNONCOCK;
	extern int SOUND_CANNONSHOT;
	extern int SOUND_COINSPIN;
	extern int SOUND_COINSPIN_NO;
	extern int SOUND_CREDITS_SPOTLIGHT_ON;
	extern int SOUND_CYMBAL;
	extern int SOUND_DECAL_WIN;
	extern int SOUND_DIALOG_MOVE;
	extern int SOUND_DING;
	extern int SOUND_EASTER_EGG_ARTHAS_DROP;
	extern int SOUND_EXPLODE;
	extern int SOUND_EXTRABALL2;
	extern int SOUND_EXTRABALL3;
	extern int SOUND_EXTRABALL;
	extern int SOUND_FAIRY_POP;
	extern int SOUND_FEVERHIT;
	extern int SOUND_FIREBALLBOUNCE;
	extern int SOUND_FIREBALLSHOT;
	extern int SOUND_FIREWORKPOP;
	extern int SOUND_FIREWORKS1;
	extern int SOUND_FIREWORKS2;
	extern int SOUND_FLIP;
	extern int SOUND_FLIPPERBOUNCE;
	extern int SOUND_FLIPPERDOWN;
	extern int SOUND_FLIPPERUP;
	extern int SOUND_FREEBALL;
	extern int SOUND_GALLOP;
	extern int SOUND_GONG;
	extern int SOUND_LEVELDONE;
	extern int SOUND_LEVELLOST;
	extern int SOUND_LEVELWON;
	extern int SOUND_LOGO_BUZZ_ON;
	extern int SOUND_MISS;
	extern int SOUND_MOUSEOVER;
	extern int SOUND_MULTIBALL;
	extern int SOUND_NEIGH;
	extern int SOUND_PEGHIT2;
	extern int SOUND_PEGHIT3;
	extern int SOUND_PEGHIT;
	extern int SOUND_PEGHIT_LOW;
	extern int SOUND_PEGPOP;
	extern int SOUND_PEGSPARK;
	extern int SOUND_PENALTY;
	extern int SOUND_POINTBOOST;
	extern int SOUND_POWERUP;
	extern int SOUND_POWERUP_GUIDE;
	extern int SOUND_POWERUP_MULTIBALL;
	extern int SOUND_POWERUP_PLACEHOLDER2;
	extern int SOUND_POWERUP_PLACEHOLDER;
	extern int SOUND_POWERUP_SPACEBLAST;
	extern int SOUND_RAINBOW;
	extern int SOUND_RICHOCHET;
	extern int SOUND_SCORECOUNTER;
	extern int SOUND_SIGH;
	extern int SOUND_SKILLSHOT;
	extern int SOUND_SLOWMO;
	extern int SOUND_SPEECH_BUBBLE_POPUP;
	extern int SOUND_STAMP;
	extern int SOUND_TEXT_WOOSH;
	extern int SOUND_TING;
	extern int SOUND_TONE;
	extern int SOUND_TONEHI;
	extern int SOUND_TONELO;
	extern int SOUND_TONESUPERHI;
	extern int SOUND_TYPING;
	extern int SOUND_WHISTLE;
	extern int SOUND_WOOSH;

	// MainMenu Resources
	bool ExtractMainMenuResources(ResourceManager *theMgr);
	extern Image* IMAGE_MM_ADVENTURE;
	extern Image* IMAGE_MM_APPROVEDSTAMP;
	extern Image* IMAGE_MM_ARTHAS_EASTER_EGG;
	extern Image* IMAGE_MM_ARTHAS_EASTER_EGG_FRONT;
	extern Image* IMAGE_MM_ARTHAS_EASTER_EGG_SMALL;
	extern Image* IMAGE_MM_BACKGROUND;
	extern Image* IMAGE_MM_BICYCLE;
	extern Image* IMAGE_MM_BJORN;
	extern Image* IMAGE_MM_BJORN_HAIR;
	extern Image* IMAGE_MM_BJORN_MAGIC_RING;
	extern Image* IMAGE_MM_BJORN_PART1;
	extern Image* IMAGE_MM_BJORN_PART2;
	extern Image* IMAGE_MM_BJORN_SHADOW;
	extern Image* IMAGE_MM_BOTTOM;
	extern Image* IMAGE_MM_BUYIT;
	extern Image* IMAGE_MM_CERTIFICATE;
	extern Image* IMAGE_MM_CERTIFICATEOK;
	extern Image* IMAGE_MM_CHALLENGE;
	extern Image* IMAGE_MM_CLOUD_PART;
	extern Image* IMAGE_MM_DUEL;
	extern Image* IMAGE_MM_EASTER_EGG_PORTAL;
	extern Image* IMAGE_MM_FLAME_01;
	extern Image* IMAGE_MM_FLAME_02;
	extern Image* IMAGE_MM_FLAME_03;
	extern Image* IMAGE_MM_FLAME_04;
	extern Image* IMAGE_MM_FLAME_PARTICLE;
	extern Image* IMAGE_MM_FLAME_STRIP;
	extern Image* IMAGE_MM_LEFT;
	extern Image* IMAGE_MM_LIGHTNING;
	extern Image* IMAGE_MM_PORTAL_ART;
	extern Image* IMAGE_MM_QUEST_EMARK_BLUE;
	extern Image* IMAGE_MM_QUEST_EMARK_YELLOW;
	extern Image* IMAGE_MM_QUEST_QMARK_GRAY;
	extern Image* IMAGE_MM_QUEST_QMARK_YELLOW;
	extern Image* IMAGE_MM_RIGHT;
	extern Image* IMAGE_MM_SAD_BJORN;
	extern Image* IMAGE_MM_SMALL_SUN_GLOW;
	extern Image* IMAGE_MM_SMALL_SUN_HEAD;
	extern Image* IMAGE_MM_SOLO;
	extern Image* IMAGE_MM_SPLORK;
	extern Image* IMAGE_MM_STEAM;
	extern Image* IMAGE_MM_TABARD;
	extern Image* IMAGE_MM_TABARD_STRIP;
	extern Image* IMAGE_MM_TOP;
	extern Image* IMAGE_MM_TORCH_POT;
	extern Image* IMAGE_MM_TREE_MASK;
	extern Image* IMAGE_MM_TROPHY_ALL_ACE;
	extern Image* IMAGE_MM_TROPHY_ALL_CHALLENGE;
	extern Image* IMAGE_MM_TROPHY_ALL_CLEAR;
	extern Image* IMAGE_MM_WINDOW;

	// Story Resources
	bool ExtractStoryResources(ResourceManager *theMgr);
	extern Image* IMAGE_STORY_BIGSPARKLE;

	// Trophy Resources
	bool ExtractTrophyResources(ResourceManager *theMgr);
	extern Image* IMAGE_TROPHY_PARTICLE1;
	extern Image* IMAGE_TROPHY_PARTICLE2;
	extern Image* IMAGE_TROPHY_PARTICLE3;
	extern Image* IMAGE_TROPHY_PARTICLE4;
	extern Image* IMAGE_TROPHY_PARTICLE5;
	extern Image* IMAGE_TROPHY_PARTICLE6;
	extern Image* IMAGE_TROPHY_SPARKLE;
	extern Image* IMAGE_TROPHY_SPEECH_B;
	extern Image* IMAGE_TROPHY_SPEECH_BL;
	extern Image* IMAGE_TROPHY_SPEECH_BPL;
	extern Image* IMAGE_TROPHY_SPEECH_BPR;
	extern Image* IMAGE_TROPHY_SPEECH_BR;
	extern Image* IMAGE_TROPHY_SPEECH_C;
	extern Image* IMAGE_TROPHY_SPEECH_L;
	extern Image* IMAGE_TROPHY_SPEECH_LP;
	extern Image* IMAGE_TROPHY_SPEECH_R;
	extern Image* IMAGE_TROPHY_SPEECH_RP;
	extern Image* IMAGE_TROPHY_SPEECH_T;
	extern Image* IMAGE_TROPHY_SPEECH_TL;
	extern Image* IMAGE_TROPHY_SPEECH_TP;
	extern Image* IMAGE_TROPHY_SPEECH_TR;

	// Upsell Resources
	bool ExtractUpsellResources(ResourceManager *theMgr);
	extern Image* IMAGE_UPSELL_ARTHAS;
	extern Image* IMAGE_UPSELL_MAIN_MENU_BTN;
	extern Image* IMAGE_UPSELL_NIGHTS_DEMO_BTN;
	extern Image* IMAGE_UPSELL_QUIT_BTN;
	extern Image* IMAGE_UPSELL_SIGN;
	extern Image* IMAGE_UPSELL_WOW_DEMO_BTN;

	enum ResourceId
	{
		IMAGE_SCREENFRAMELEFT_ID,
		IMAGE_SCREENFRAMERIGHT_ID,
		IMAGE_SCREENFRAMETOP_ID,
		IMAGE_SCREENFRAMEBOTTOM_ID,
		IMAGE_SUNGLOW_ID,
		IMAGE_CURSOR_POINTER_ID,
		IMAGE_CURSOR_HAND_ID,
		IMAGE_CURSOR_DRAGGING_ID,
		IMAGE_CURSOR_TEXT_ID,
		IMAGE_WIN_MINIMIZE_ID,
		IMAGE_WIN_UNMAX_ID,
		IMAGE_WIN_CLOSE_ID,
		SOUND_MOONLIGHT_ID,
		SOUND_FIREBALLLOOP_ID,
		FONT_OVERLOAD16_ID,
		FONT_START1_ID = FONT_OVERLOAD16_ID,
		FONT_OVERLOAD16OUTLINE_ID,
		FONT_OVERLOAD16OUTLINE2_ID,
		FONT_END1_ID = FONT_OVERLOAD16OUTLINE2_ID,
		IMAGE_LOAD_HILL3_ID,
		IMAGE_LOAD_BACKBRIGHT_ID,
		IMAGE_LOAD_HILL3BRIGHT_ID,
		IMAGE_LOAD_HILL2_ID,
		IMAGE_LOAD_HILL2BRIGHT_ID,
		IMAGE_LOAD_BACK_ID,
		IMAGE_LOAD_OVERLAY_ID,
		IMAGE_LOAD_LIGHTS_ID,
		IMAGE_LOAD_SUNHEAD_ID,
		IMAGE_LOAD_PLAYNOW_ID,
		IMAGE_LOAD_BALL_ID,
		IMAGE_LOAD_TM_ID,
		IMAGE_LOAD_LOGO_ID,
		IMAGE_LOAD_STAR_ID,
		IMAGE_LOAD_BJORN_SCORCHED_ID,
		IMAGE_LOAD_BJORN_ID,
		IMAGE_LOAD_BJORN_EYES_CLOSED_ID,
		IMAGE_LOAD_DRAGON_ID,
		IMAGE_LOAD_DRAGON_HEAD_ID,
		IMAGE_LOAD_FLAME_PARTICLE_ID,
		IMAGE_LOAD_WOW_EDITION_TEXT_ID,
		IMAGE_LOAD_FLY0_ID,
		IMAGE_LOAD_FLY1_ID,
		IMAGE_LOAD_WOWLOGO_ID,
		IMAGE_LOAD_FLAME_STRIP_ID,
		IMAGE_LOAD_SPARK_ID,
		IMAGE_LOAD_POPCAP_ID,
		IMAGE_LOAD_BIG_STAR_ID,
		IMAGE_PARTNER_ID,
		FONT_PLAIN_ID,
		FONT_START2_ID = FONT_PLAIN_ID,
		FONT_PLAIN2BIG_ID,
		FONT_SMALL_ID,
		FONT_SMALLMONO_ID,
		FONT_SCORE_DISP_ID,
		FONT_SMALL_DISP_ID,
		FONT_BALLSLEFT_ID,
		FONT_BUTTON_ID,
		FONT_NEWLEVELS_ID,
		FONT_ARCADE_ID,
		FONT_STAGE_ID,
		FONT_BONK_ID,
		FONT_OVERLOAD10_ID,
		FONT_OVERLOAD12_ID,
		FONT_OVERLOAD24_ID,
		FONT_OVERLOADMONO10_ID,
		FONT_OVERLOADMONO12_ID,
		FONT_MINI7_BOLD_ID,
		FONT_LEVEL_TITLE_ID,
		FONT_OVERLOAD10OUTLINE_ID,
		FONT_OVERLOAD12OUTLINE_ID,
		FONT_OVERLOAD24OUTLINE_ID,
		FONT_OVERLOAD24GRAD1_ID,
		FONT_OVERLOAD24GRAD2_ID,
		FONT_PLAINOUTLINE_ID,
		FONT_PLAIN2_ID,
		FONT_PLAIN2OUTLINE_ID,
		FONT_PLAIN2BIGOUTLINE_ID,
		FONT_END2_ID = FONT_PLAIN2BIGOUTLINE_ID,
		FONT_MINI7_ID,
		FONT_SILK_ID,
		FONT_MINI76_ID,
		FONT_SILK7_ID,
		FONT_ARGON_ID,
		SOUND_EASTER_EGG_ARTHAS_DROP_ID,
		SOUND_FAIRY_POP_ID,
		SOUND_PEGHIT_LOW_ID,
		SOUND_START_ID = SOUND_PEGHIT_LOW_ID,
		SOUND_PEGHIT_ID,
		SOUND_PEGSPARK_ID,
		SOUND_PEGHIT2_ID,
		SOUND_PEGHIT3_ID,
		SOUND_EXTRABALL_ID,
		SOUND_EXTRABALL2_ID,
		SOUND_EXTRABALL3_ID,
		SOUND_GALLOP_ID,
		SOUND_NEIGH_ID,
		SOUND_MISS_ID,
		SOUND_COINSPIN_ID,
		SOUND_COINSPIN_NO_ID,
		SOUND_FREEBALL_ID,
		SOUND_PENALTY_ID,
		SOUND_LEVELWON_ID,
		SOUND_LEVELDONE_ID,
		SOUND_LEVELLOST_ID,
		SOUND_POWERUP_ID,
		SOUND_AAH_ID,
		SOUND_MULTIBALL_ID,
		SOUND_PEGPOP_ID,
		SOUND_EXPLODE_ID,
		SOUND_BUTTON1_ID,
		SOUND_BUTTON2_ID,
		SOUND_MOUSEOVER_ID,
		SOUND_DING_ID,
		SOUND_POINTBOOST_ID,
		SOUND_TING_ID,
		SOUND_AWARD_ID,
		SOUND_DECAL_WIN_ID,
		SOUND_APPLAUSE_ID,
		SOUND_SKILLSHOT_ID,
		SOUND_BUBBLES_ID,
		SOUND_FLIP_ID,
		SOUND_BUCKETHIT_ID,
		SOUND_CANNONCOCK_ID,
		SOUND_CANNONSHOT_ID,
		SOUND_SCORECOUNTER_ID,
		SOUND_FLIPPERUP_ID,
		SOUND_FLIPPERDOWN_ID,
		SOUND_FLIPPERBOUNCE_ID,
		SOUND_RAINBOW_ID,
		SOUND_FIREWORKS1_ID,
		SOUND_FIREWORKS2_ID,
		SOUND_RICHOCHET_ID,
		SOUND_CYMBAL_ID,
		SOUND_SIGH_ID,
		SOUND_WOOSH_ID,
		SOUND_TEXT_WOOSH_ID,
		SOUND_WHISTLE_ID,
		SOUND_FEVERHIT_ID,
		SOUND_FIREBALLSHOT_ID,
		SOUND_FIREBALLBOUNCE_ID,
		SOUND_POWERUP_GUIDE_ID,
		SOUND_POWERUP_PLACEHOLDER_ID,
		SOUND_POWERUP_PLACEHOLDER2_ID,
		SOUND_POWERUP_SPACEBLAST_ID,
		SOUND_POWERUP_MULTIBALL_ID,
		SOUND_GONG_ID,
		SOUND_TYPING_ID,
		SOUND_TONELO_ID,
		SOUND_TONE_ID,
		SOUND_TONEHI_ID,
		SOUND_TONESUPERHI_ID,
		SOUND_STAMP_ID,
		SOUND_ADD_BALL_ID,
		SOUND_DIALOG_MOVE_ID,
		SOUND_FIREWORKPOP_ID,
		SOUND_SLOWMO_ID,
		SOUND_END_ID = SOUND_SLOWMO_ID,
		SOUND_APPLAUSE_LONG_ID,
		SOUND_LOGO_BUZZ_ON_ID,
		SOUND_CREDITS_SPOTLIGHT_ON_ID,
		SOUND_SPEECH_BUBBLE_POPUP_ID,
		IMAGE_INT_BALL_ID,
		IMAGE_INT_BALLBACK_ID,
		IMAGE_INT_BUTTONCOVER_ID,
		IMAGE_INT_CANNON_ID,
		IMAGE_INT_CANNONCOVER_ID,
		IMAGE_INT_PLUNGER_ID,
		IMAGE_INT_BALLGLASS_ID,
		IMAGE_INT_FEVERMETER_ID,
		IMAGE_INT_FEVERMETERTOP_ID,
		IMAGE_INT_FEVERMETERBOTTOM_ID,
		IMAGE_INT_FEVERRAILING_ID,
		IMAGE_INT_FEVERBARS_ID,
		IMAGE_INT_FEVERBARLITES_ID,
		IMAGE_INT_COUNTER_ID,
		IMAGE_INT_FREEBALLMETER_ID,
		IMAGE_INT_FREEBALLMETERTOP_ID,
		IMAGE_INT_BACKSHADOW_ID,
		IMAGE_INT_FEVERGLOW_ID,
		IMAGE_INT_FEVERGLOW1_ID,
		IMAGE_INT_FEVERGLOW2_ID,
		IMAGE_INT_FEVERGLOW3_ID,
		IMAGE_INT_SCOREHILIGHT_ID,
		IMAGE_INT_BALLOMASKBL_ID,
		IMAGE_INT_BALLOMASKBR_ID,
		IMAGE_INT_BALLOMASKTL_ID,
		IMAGE_INT_BALLOMASKTR_ID,
		IMAGE_INT_FBCENTERDISC_ID,
		IMAGE_INT_FBGLOW_ID,
		IMAGE_INT_FBFREEBALL_ID,
		IMAGE_INT_FBLIGHTUP_ID,
		IMAGE_INT_FBPOINTS_ID,
		IMAGE_IP_B_ID,
		IMAGE_IP_BLC_ID,
		IMAGE_IP_BRC_ID,
		IMAGE_IP_L1_ID,
		IMAGE_IP_L2_ID,
		IMAGE_IP_R1_ID,
		IMAGE_IP_R2_ID,
		IMAGE_IP_TL1_ID,
		IMAGE_IP_TL2_ID,
		IMAGE_IP_TR1_ID,
		IMAGE_IP_TR2_ID,
		IMAGE_IP_TLC_ID,
		IMAGE_IP_TRC_ID,
		IMAGE_IP_SEAMS_ID,
		IMAGE_IP_SHOOTERBACK_ID,
		IMAGE_IP_SHOOTER_ID,
		IMAGE_IP_BALLOTRON_ID,
		IMAGE_IP_FEVERMETER_ID,
		IMAGE_IP_LWINDOW_ID,
		IMAGE_IP_RWINDOW_ID,
		IMAGE_IP_SHOOTERORB_ID,
		IMAGE_IP_POWERUPBANNER_ID,
		IMAGE_IP_ORBGLOW_ID,
		IMAGE_MM_FLAME_STRIP_ID,
		IMAGE_MM_BACKGROUND_ID,
		IMAGE_MM_RIGHT_ID,
		IMAGE_MM_TOP_ID,
		IMAGE_MM_LEFT_ID,
		IMAGE_MM_BOTTOM_ID,
		IMAGE_MM_LIGHTNING_ID,
		IMAGE_MM_TABARD_STRIP_ID,
		IMAGE_MM_FLAME_01_ID,
		IMAGE_MM_FLAME_02_ID,
		IMAGE_MM_FLAME_03_ID,
		IMAGE_MM_FLAME_04_ID,
		IMAGE_MM_STEAM_ID,
		IMAGE_MM_WINDOW_ID,
		IMAGE_MM_BICYCLE_ID,
		IMAGE_MM_CLOUD_PART_ID,
		IMAGE_MM_FLAME_PARTICLE_ID,
		IMAGE_MM_BJORN_ID,
		IMAGE_MM_BJORN_HAIR_ID,
		IMAGE_MM_SPLORK_ID,
		IMAGE_MM_TREE_MASK_ID,
		IMAGE_MM_TORCH_POT_ID,
		IMAGE_MM_ARTHAS_EASTER_EGG_ID,
		IMAGE_MM_ARTHAS_EASTER_EGG_FRONT_ID,
		IMAGE_MM_ARTHAS_EASTER_EGG_SMALL_ID,
		IMAGE_MM_BUYIT_ID,
		IMAGE_MM_CERTIFICATE_ID,
		IMAGE_MM_CERTIFICATEOK_ID,
		IMAGE_MM_APPROVEDSTAMP_ID,
		IMAGE_MM_TROPHY_ALL_CLEAR_ID,
		IMAGE_MM_TROPHY_ALL_ACE_ID,
		IMAGE_MM_TROPHY_ALL_CHALLENGE_ID,
		IMAGE_MM_BJORN_PART1_ID,
		IMAGE_MM_BJORN_PART2_ID,
		IMAGE_MM_BJORN_MAGIC_RING_ID,
		IMAGE_MM_SAD_BJORN_ID,
		IMAGE_MM_ADVENTURE_ID,
		IMAGE_MM_SOLO_ID,
		IMAGE_MM_DUEL_ID,
		IMAGE_MM_CHALLENGE_ID,
		IMAGE_MM_TABARD_ID,
		IMAGE_MM_BJORN_SHADOW_ID,
		IMAGE_MM_EASTER_EGG_PORTAL_ID,
		IMAGE_MM_PORTAL_ART_ID,
		IMAGE_MM_QUEST_QMARK_YELLOW_ID,
		IMAGE_MM_QUEST_QMARK_GRAY_ID,
		IMAGE_MM_QUEST_EMARK_BLUE_ID,
		IMAGE_MM_QUEST_EMARK_YELLOW_ID,
		IMAGE_MM_SMALL_SUN_HEAD_ID,
		IMAGE_MM_SMALL_SUN_GLOW_ID,
		IMAGE_LS_LEVELSCREEN_ID,
		IMAGE_LS_LEVELSCREENLEFT_ID,
		IMAGE_LS_LEVELSCREENRIGHT_ID,
		IMAGE_LS_LEVELSELECTOR_ID,
		IMAGE_LS_BACKBUTTON_ID,
		IMAGE_LS_NEXTBUTTON_ID,
		IMAGE_LS_MAINMENUBUTTON_ID,
		IMAGE_LS_RANDOMBUTTON_ID,
		IMAGE_LS_LOCK_ID,
		IMAGE_LS_LOCK_SMALL_ID,
		IMAGE_LS_CHALLENGEBADGE_ID,
		IMAGE_LS_RANDOMLEVEL_ID,
		IMAGE_LS_TINYBLUERIBBON_ID,
		IMAGE_LS_TINYCHALLENGE_ID,
		IMAGE_LS_TINYACED_ID,
		IMAGE_HELP_SCREEN_ID,
		IMAGE_HELP_MODES_ID,
		IMAGE_HELP_BUTTONOVERLAY_ID,
		IMAGE_HELP_ICONS_ID,
		IMAGE_HAT_ID,
		IMAGE_MAGICHAT_ID,
		IMAGE_SPARKLE_ID,
		IMAGE_SPARKLE_FEVER_ID,
		IMAGE_STREAK_ID,
		IMAGE_FLOWER_ID,
		IMAGE_POWERUPICON_ID,
		IMAGE_SCOREICON_ID,
		IMAGE_BONUSHALO_ID,
		IMAGE_BONUSGLOW_ID,
		IMAGE_BONUSGLOW_GREEN_ID,
		IMAGE_BONUSGLOW_BLUE_ID,
		IMAGE_BONUS5000_ID,
		IMAGE_BONUS10000_ID,
		IMAGE_BONUS25000_ID,
		IMAGE_BONUS50000_ID,
		IMAGE_BONUS100000_ID,
		IMAGE_BBUCKET_ID,
		IMAGE_GBUCKET_ID,
		IMAGE_RBUCKET_ID,
		IMAGE_BALL_ID,
		IMAGE_LIGHTNING_ROD_ID,
		IMAGE_LIGHTNING_ROD_ZAP_ID,
		IMAGE_LIGHTNING_ROD_ON_ID,
		IMAGE_LIGHTNING_ROD_RING_FRONT_ID,
		IMAGE_LIGHTNING_ROD_RING_BACK_ID,
		IMAGE_YINYANG_ID,
		IMAGE_GUIDERECT_ID,
		IMAGE_GUIDERECT2_ID,
		IMAGE_ALPHABALL_ID,
		IMAGE_GUIDEARROW_ID,
		IMAGE_GUIDEPOINT_ID,
		IMAGE_GUIDEHIT_ID,
		IMAGE_BRICK_ID,
		IMAGE_BRICKCB_ID,
		IMAGE_BALLPEG_ID,
		IMAGE_BALLPEGCB_ID,
		IMAGE_BALLSHADOW_ID,
		IMAGE_PEGSHADOW_ID,
		IMAGE_BIGBALLSHADOW_ID,
		IMAGE_BIGBALL_ID,
		IMAGE_DEFINNERPEG_ID,
		IMAGE_DEFOUTERPEG_ID,
		IMAGE_CIRCLE_ID,
		IMAGE_FIREBALLFIRE_ID,
		IMAGE_FIREBALL_ID,
		IMAGE_BALL_LIGHTNING_ID,
		IMAGE_SUPERSWIRL_ID,
		IMAGE_CURVE_ID,
		IMAGE_COINHEADS_ID,
		IMAGE_COINTAILS_ID,
		IMAGE_COINHILIGHT_ID,
		IMAGE_BUBBLES_ID,
		IMAGE_BRICKGLOW_ID,
		IMAGE_PEGGLOW_ID,
		IMAGE_PYRAMIDRAY_ID,
		IMAGE_FEVERRAY_ID,
		IMAGE_FEVERGLOWSTAR_ID,
		IMAGE_FEVERSTAR_RED_ID,
		IMAGE_FEVERSTAR_GREEN_ID,
		IMAGE_FEVERSTAR_BLUE_ID,
		IMAGE_FEVERSPARK_ID,
		IMAGE_FEVERTRAIL_ID,
		IMAGE_FEVERRAINBOW_ID,
		IMAGE_FEVERSCORE_ID,
		IMAGE_FEVERSCORETOP_ID,
		IMAGE_STAR_STREAK_ID,
		IMAGE_TIPARROW_ID,
		IMAGE_BLUERIBBON_ID,
		IMAGE_ACEDRIBBON_ID,
		IMAGE_TINYBLUERIBBON_ID,
		IMAGE_TINYACED_ID,
		IMAGE_MASTERBADGE_ID,
		IMAGE_PAUSED_ID,
		IMAGE_CATCHERGLOW_ID,
		IMAGE_PYRAMIDBALL_ID,
		IMAGE_JIMMY_ID,
		IMAGE_JIMMYSPEECH_ID,
		IMAGE_FEVERCAM_ID,
		IMAGE_XFEVER_ID,
		IMAGE_XFEVERGLOW_ID,
		IMAGE_PULSE_NORMAL_ID,
		IMAGE_PULSE_GOAL_ID,
		IMAGE_PULSE_SCORE_ID,
		IMAGE_PULSE_POWERUP_ID,
		IMAGE_PULSE2_SCORE_ID,
		IMAGE_PULSE2_POWERUP_ID,
		IMAGE_SPACEBURST_ID,
		IMAGE_SPACEBUBBLE_ID,
		IMAGE_SPACEHALO_ID,
		IMAGE_SPACESTAR_ID,
		IMAGE_SPOOKYPOOF1_ID,
		IMAGE_SPOOKYPOOF2_ID,
		IMAGE_SPOOKYGHOST_ID,
		IMAGE_SPOOKYTRAIL_ID,
		IMAGE_SPOOKYEYES_ID,
		IMAGE_EMBER_ID,
		IMAGE_SMOKE_ID,
		IMAGE_FLECK_ID,
		IMAGE_FLAMETRAIL_ID,
		IMAGE_NUKESTREAK_ID,
		IMAGE_LIGHTNING_FRONT_ID,
		IMAGE_LIGHTNING_FRONT_SMALL_ID,
		IMAGE_LIGHTNING_ID,
		IMAGE_LIGHTNING_BACK_ID,
		IMAGE_LIGHTNING_SPARK_ID,
		IMAGE_LIGHTNING_BALLSPARK_ID,
		IMAGE_DLG_BOTTOMBAR_ID,
		IMAGE_DLG_RANDOM_ID,
		IMAGE_DLG_BLUEFRAME_ID,
		IMAGE_DLG_SELECTORFRAME_ID,
		IMAGE_DLG_BUTTON1_ID,
		IMAGE_DLG_BUTTON2_ID,
		IMAGE_DLG_BUTTON3_ID,
		IMAGE_DLG_BONUSBUTTON_ID,
		IMAGE_DLG_BROWNBUTTON1_ID,
		IMAGE_DLG_BROWNBUTTON2_ID,
		IMAGE_DLG_GREENOK_ID,
		IMAGE_DLG_POPUP_ID,
		IMAGE_DLG_TEXTBOX_ID,
		IMAGE_DLG_HORZBAR_ID,
		IMAGE_DLG_LJOINT_ID,
		IMAGE_DLG_EDITBUTTON_ID,
		IMAGE_DLG_DIALOGBOX_ID,
		IMAGE_DLG_SLIDER_ID,
		IMAGE_DLG_SLIDERHILIGHT_ID,
		IMAGE_DLG_SLIDERORB_ID,
		IMAGE_DLG_FRAME1_ID,
		IMAGE_DLG_FRAME2_ID,
		IMAGE_DLG_FRAME3_ID,
		IMAGE_DLG_SEGMENT_ID,
		IMAGE_DLG_CONNECTOR_ID,
		IMAGE_DLG_REPLAYTOP_ID,
		IMAGE_DLG_REPLAYSEGMENT_ID,
		IMAGE_DLG_STAGEBULLET_ID,
		IMAGE_DLG_MASTERSTAGEPROGBAR_ID,
		IMAGE_DLG_PLAYWIDGET1_ID,
		IMAGE_DLG_PLAYWIDGET2_ID,
		IMAGE_DLG_PLAYBUTTON1_ID,
		IMAGE_DLG_PLAYBUTTON2_ID,
		IMAGE_DLG_STAGEBAR_ID,
		IMAGE_DLG_STAGEPROGRESSBAR_ID,
		IMAGE_DLG_STAGEPROGRESS_ID,
		IMAGE_DLG_TEXTRECT_ID,
		IMAGE_DLG_QUESTIONMARK_ID,
		IMAGE_DLG_TIP_ID,
		IMAGE_DLG_INSTRUCTIONS_ID,
		IMAGE_DLG_INSTRUCTIONS2_ID,
		IMAGE_DLG_INSTRUCTIONS3_ID,
		IMAGE_DLG_INSTRUCTIONS4_ID,
		IMAGE_DLG_BUTTONOVERLAY2_ID,
		IMAGE_DLG_STARBADGEICON_ID,
		IMAGE_DLG_TINYLOCKED_ID,
		IMAGE_DLG_PURPLEBUTTON_ID,
		IMAGE_DLG_MENU_ID,
		IMAGE_DLG_INSTANTREPLAY_ID,
		IMAGE_TROPHY_PARTICLE1_ID,
		IMAGE_TROPHY_PARTICLE2_ID,
		IMAGE_TROPHY_PARTICLE3_ID,
		IMAGE_TROPHY_PARTICLE4_ID,
		IMAGE_TROPHY_PARTICLE5_ID,
		IMAGE_TROPHY_PARTICLE6_ID,
		IMAGE_TROPHY_SPARKLE_ID,
		IMAGE_TROPHY_SPEECH_BR_ID,
		IMAGE_TROPHY_SPEECH_BL_ID,
		IMAGE_TROPHY_SPEECH_B_ID,
		IMAGE_TROPHY_SPEECH_BPL_ID,
		IMAGE_TROPHY_SPEECH_BPR_ID,
		IMAGE_TROPHY_SPEECH_C_ID,
		IMAGE_TROPHY_SPEECH_L_ID,
		IMAGE_TROPHY_SPEECH_R_ID,
		IMAGE_TROPHY_SPEECH_LP_ID,
		IMAGE_TROPHY_SPEECH_RP_ID,
		IMAGE_TROPHY_SPEECH_T_ID,
		IMAGE_TROPHY_SPEECH_TL_ID,
		IMAGE_TROPHY_SPEECH_TP_ID,
		IMAGE_TROPHY_SPEECH_TR_ID,
		IMAGE_CHR_CHARACTERS_ID,
		IMAGE_CHR_CHARACTERSHADOWS_ID,
		IMAGE_CHR_CHARACTER1_ID,
		IMAGE_CHR_CHARACTER2_ID,
		IMAGE_CHR_CHARACTER3_ID,
		IMAGE_CHR_CHARACTER4_ID,
		IMAGE_CHR_CHARACTER12_ID,
		IMAGE_CHR_CHARACTER_ADV1_ID,
		IMAGE_CHR_CHARACTER_ADV2_ID,
		IMAGE_CHR_CHARACTER_ADV3_ID,
		IMAGE_CHR_CHARACTER_ADV4_ID,
		IMAGE_CHR_YINYANGEYE_ID,
		IMAGE_STORY_BIGSPARKLE_ID,
		IMAGE_ADV_ADVENTURE_ID,
		IMAGE_ADV_RESTART_COVER_ID,
		IMAGE_UPSELL_QUIT_BTN_ID,
		IMAGE_UPSELL_MAIN_MENU_BTN_ID,
		IMAGE_UPSELL_WOW_DEMO_BTN_ID,
		IMAGE_UPSELL_NIGHTS_DEMO_BTN_ID,
		IMAGE_UPSELL_ARTHAS_ID,
		IMAGE_UPSELL_SIGN_ID,
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
