#ifndef __Resources_H__
#define __Resources_H__

namespace Sexy
{
	class ResourceManager;
	class Image;
	class Font;

	Image* LoadImageById(ResourceManager *theManager, int theId);
	void ReplaceImageById(ResourceManager *theManager, int theId, Image *theImage);
	bool ExtractResourcesByName(ResourceManager *theManager, const char *theName);

	// LoadingThread Resources
	bool ExtractLoadingThreadResources(ResourceManager *theMgr);
	extern Font* FONT_BOMB;
	extern Font* FONT_BUTTON;
	extern Font* FONT_FLOAT_POINTS;
	extern Font* FONT_HUGE;
	extern Font* FONT_LEVEL;
	extern Font* FONT_SCORE;
	extern Font* FONT_TEXT;
	extern Font* FONT_TEXT_OUTLINED;
	extern Image* IMAGE_ARROW_UP;
	extern Image* IMAGE_BAR_LEFT;
	extern Image* IMAGE_BAR_MID;
	extern Image* IMAGE_BAR_RIGHT;
	extern Image* IMAGE_BIGSTAR;
	extern Image* IMAGE_BOARD_BORDER;
	extern Image* IMAGE_BOARD_RED_LIGHT;
	extern Image* IMAGE_BOMB;
	extern Image* IMAGE_BUTTON_HILITE;
	extern Image* IMAGE_CONTROLS_CLASSIC;
	extern Image* IMAGE_CONTROLS_PUZZLE;
	extern Image* IMAGE_CONTROLS_SCORE;
	extern Image* IMAGE_DIALOG;
	extern Image* IMAGE_DIALOG_BUTTON;
	extern Image* IMAGE_DIALOG_HEADER;
	extern Image* IMAGE_EXPLOSION;
	extern Image* IMAGE_GAME_OVER;
	extern Image* IMAGE_GEM0;
	extern Image* IMAGE_GEM1;
	extern Image* IMAGE_GEM2;
	extern Image* IMAGE_GEM3;
	extern Image* IMAGE_GEM4;
	extern Image* IMAGE_GEM5;
	extern Image* IMAGE_GEM6;
	extern Image* IMAGE_GEM_ADD;
	extern Image* IMAGE_GEM_ADD_WHITE;
	extern Image* IMAGE_GEM_LIGHTING;
	extern Image* IMAGE_HELP_ARROW;
	extern Image* IMAGE_HELP_FRAME;
	extern Image* IMAGE_HELP_HORZ;
	extern Image* IMAGE_HELP_INDICATOR;
	extern Image* IMAGE_HELP_INDICATOR_ARROW;
	extern Image* IMAGE_HELP_VERT;
	extern Image* IMAGE_MAINMENU_BUTTONS;
	extern Image* IMAGE_MAINMENU_FRONT;
	extern Image* IMAGE_POWER_GLOW;
	extern Image* IMAGE_PUZZLE_FRAME;
	extern Image* IMAGE_PUZZLE_GLOW;
	extern Image* IMAGE_PUZZLE_WIDGET;
	extern Image* IMAGE_RING_DUDE;
	extern Image* IMAGE_ROCK;
	extern Image* IMAGE_ROCK_CHUNK;
	extern Image* IMAGE_SELECT;
	extern Image* IMAGE_SHARD;
	extern Image* IMAGE_SIDEBAR_HINT_BUTTON;
	extern Image* IMAGE_SIDEBAR_MENU_BUTTON;
	extern Image* IMAGE_SPARKLE;
	extern Image* IMAGE_UI_BIG_ROLLOVER;
	extern Image* IMAGE_UI_BUTTON_HINT;
	extern Image* IMAGE_UI_BUTTON_MENU;
	extern Image* IMAGE_UI_BUTTON_PAUSE;
	extern Image* IMAGE_UI_BUTTON_UNDO;
	extern Image* IMAGE_UI_SMALL_ROLLOVER;
	extern Image* IMAGE_WARP_BOTTOM_GLOW;
	extern Image* IMAGE_WARP_TOP_GLOW;
	extern Image* IMAGE_WILDCARD_DESTROYER;

	// MainMenuBkg Resources
	bool ExtractMainMenuBkgResources(ResourceManager *theMgr);
	extern Image* IMAGE_MAINMENU_BKG;

	// Sounds Resources
	bool ExtractSoundsResources(ResourceManager *theMgr);
	extern int SOUND_BAD;
	extern int SOUND_BOMB_EXPLODE;
	extern int SOUND_CLICK;
	extern int SOUND_COMBO_1;
	extern int SOUND_COMBO_2;
	extern int SOUND_COMBO_3;
	extern int SOUND_GEM_HIT;
	extern int SOUND_GO;
	extern int SOUND_MAIN_GAME_START;
	extern int SOUND_MAIN_MOUSEOVER;
	extern int SOUND_MULTISHOT;
	extern int SOUND_SELECT;
	extern int SOUND_TRANSFER;

	// StreamSounds Resources
	bool ExtractStreamSoundsResources(ResourceManager *theMgr);
	extern int SOUND_COMBO_4;
	extern int SOUND_COMBO_5;
	extern int SOUND_COMBO_6;
	extern int SOUND_ELECTRO_EXPLODE;
	extern int SOUND_ELECTRO_PATH;
	extern int SOUND_ELECTRO_START;
	extern int SOUND_EXCELLENT;
	extern int SOUND_EXPLODE;
	extern int SOUND_GAME_OVER;
	extern int SOUND_GET_READY;
	extern int SOUND_GOOD;
	extern int SOUND_HYPERGEM_CREATE;
	extern int SOUND_HYPERGEM_DESTROYED;
	extern int SOUND_INCREDIBLE;
	extern int SOUND_LEVEL_COMPLETE;
	extern int SOUND_LEVEL_UP;
	extern int SOUND_NO_MORE_MOVES;
	extern int SOUND_PUZZLE_SOLVED;
	extern int SOUND_TIME_UP;
	extern int SOUND_TRANSFER_BIG;
	extern int SOUND_WARNING;
	extern int SOUND_WHIRLPOOL;

	// UpsellScreen Resources
	bool ExtractUpsellScreenResources(ResourceManager *theMgr);
	extern Image* IMAGE_UPSELL_BACK;
	extern Image* IMAGE_UPSELL_BUTTONS;
	extern Image* IMAGE_UPSELL_CENTER_1;
	extern Image* IMAGE_UPSELL_CENTER_2;
	extern Image* IMAGE_UPSELL_CENTER_3;
	extern Image* IMAGE_UPSELL_CENTER_4;
	extern Image* IMAGE_UPSELL_CENTER_5;
	extern Image* IMAGE_UPSELL_CENTER_6;
	extern Image* IMAGE_UPSELL_CENTER_7;
	extern Image* IMAGE_UPSELL_DELUXE;
	extern Image* IMAGE_UPSELL_DELUXE_GLOW;
	extern Image* IMAGE_UPSELL_LOGO;
	extern Image* IMAGE_UPSELL_TELL_MORE;

	enum ResourceId
	{
		SOUND_TRANSFER_ID,
		SOUND_COMBO_1_ID,
		SOUND_COMBO_2_ID,
		SOUND_COMBO_3_ID,
		SOUND_BAD_ID,
		SOUND_GEM_HIT_ID,
		SOUND_CLICK_ID,
		SOUND_SELECT_ID,
		SOUND_MULTISHOT_ID,
		SOUND_GO_ID,
		SOUND_MAIN_GAME_START_ID,
		SOUND_MAIN_MOUSEOVER_ID,
		SOUND_BOMB_EXPLODE_ID,
		SOUND_TRANSFER_BIG_ID,
		SOUND_COMBO_4_ID,
		SOUND_COMBO_5_ID,
		SOUND_COMBO_6_ID,
		SOUND_HYPERGEM_CREATE_ID,
		SOUND_HYPERGEM_DESTROYED_ID,
		SOUND_EXPLODE_ID,
		SOUND_LEVEL_UP_ID,
		SOUND_TIME_UP_ID,
		SOUND_WARNING_ID,
		SOUND_WHIRLPOOL_ID,
		SOUND_GOOD_ID,
		SOUND_EXCELLENT_ID,
		SOUND_INCREDIBLE_ID,
		SOUND_ELECTRO_START_ID,
		SOUND_ELECTRO_PATH_ID,
		SOUND_ELECTRO_EXPLODE_ID,
		SOUND_GET_READY_ID,
		SOUND_NO_MORE_MOVES_ID,
		SOUND_GAME_OVER_ID,
		SOUND_PUZZLE_SOLVED_ID,
		SOUND_LEVEL_COMPLETE_ID,
		IMAGE_MAINMENU_FRONT_ID,
		IMAGE_MAINMENU_BUTTONS_ID,
		IMAGE_WILDCARD_DESTROYER_ID,
		IMAGE_HELP_INDICATOR_ID,
		IMAGE_HELP_INDICATOR_ARROW_ID,
		IMAGE_HELP_ARROW_ID,
		IMAGE_GEM0_ID,
		IMAGE_GEM1_ID,
		IMAGE_GEM2_ID,
		IMAGE_GEM3_ID,
		IMAGE_GEM4_ID,
		IMAGE_GEM5_ID,
		IMAGE_GEM6_ID,
		IMAGE_GEM_ADD_ID,
		IMAGE_GEM_ADD_WHITE_ID,
		IMAGE_SELECT_ID,
		IMAGE_SPARKLE_ID,
		IMAGE_BOARD_BORDER_ID,
		IMAGE_BOARD_RED_LIGHT_ID,
		IMAGE_PUZZLE_FRAME_ID,
		IMAGE_SIDEBAR_HINT_BUTTON_ID,
		IMAGE_SIDEBAR_MENU_BUTTON_ID,
		IMAGE_BOMB_ID,
		IMAGE_EXPLOSION_ID,
		IMAGE_SHARD_ID,
		IMAGE_BIGSTAR_ID,
		IMAGE_ROCK_ID,
		IMAGE_ROCK_CHUNK_ID,
		IMAGE_BAR_LEFT_ID,
		IMAGE_BAR_RIGHT_ID,
		IMAGE_BAR_MID_ID,
		IMAGE_CONTROLS_SCORE_ID,
		IMAGE_CONTROLS_CLASSIC_ID,
		IMAGE_CONTROLS_PUZZLE_ID,
		IMAGE_BUTTON_HILITE_ID,
		IMAGE_RING_DUDE_ID,
		IMAGE_GEM_LIGHTING_ID,
		IMAGE_POWER_GLOW_ID,
		IMAGE_WARP_TOP_GLOW_ID,
		IMAGE_WARP_BOTTOM_GLOW_ID,
		IMAGE_HELP_FRAME_ID,
		IMAGE_HELP_HORZ_ID,
		IMAGE_HELP_VERT_ID,
		IMAGE_ARROW_UP_ID,
		IMAGE_DIALOG_ID,
		IMAGE_DIALOG_HEADER_ID,
		IMAGE_DIALOG_BUTTON_ID,
		IMAGE_UI_BIG_ROLLOVER_ID,
		IMAGE_UI_SMALL_ROLLOVER_ID,
		IMAGE_UI_BUTTON_HINT_ID,
		IMAGE_UI_BUTTON_MENU_ID,
		IMAGE_UI_BUTTON_UNDO_ID,
		IMAGE_UI_BUTTON_PAUSE_ID,
		IMAGE_PUZZLE_WIDGET_ID,
		IMAGE_PUZZLE_GLOW_ID,
		IMAGE_GAME_OVER_ID,
		FONT_BUTTON_ID,
		FONT_TEXT_ID,
		FONT_TEXT_OUTLINED_ID,
		FONT_LEVEL_ID,
		FONT_FLOAT_POINTS_ID,
		FONT_SCORE_ID,
		FONT_BOMB_ID,
		FONT_HUGE_ID,
		IMAGE_UPSELL_BACK_ID,
		IMAGE_UPSELL_LOGO_ID,
		IMAGE_UPSELL_DELUXE_ID,
		IMAGE_UPSELL_DELUXE_GLOW_ID,
		IMAGE_UPSELL_BUTTONS_ID,
		IMAGE_UPSELL_TELL_MORE_ID,
		IMAGE_UPSELL_CENTER_1_ID,
		IMAGE_UPSELL_CENTER_2_ID,
		IMAGE_UPSELL_CENTER_3_ID,
		IMAGE_UPSELL_CENTER_4_ID,
		IMAGE_UPSELL_CENTER_5_ID,
		IMAGE_UPSELL_CENTER_6_ID,
		IMAGE_UPSELL_CENTER_7_ID,
		IMAGE_MAINMENU_BKG_ID,
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
