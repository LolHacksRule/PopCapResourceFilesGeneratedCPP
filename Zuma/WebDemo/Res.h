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

	// LoadingThread Resources
	bool ExtractLoadingThreadResources(ResourceManager *theMgr);
	extern Font* FONT_DIALOG;
	extern Font* FONT_FLOAT;
	extern Font* FONT_MAIN10;
	extern Font* FONT_MONODIGIT;
	extern Font* FONT_TITLE;
	extern Image* IMAGE_BLUE_BALL;
	extern Image* IMAGE_BLUE_BOMB;
	extern Image* IMAGE_BLUE_LIGHT;
	extern Image* IMAGE_BLUE_SLOW;
	extern Image* IMAGE_COIN;
	extern Image* IMAGE_CURSOR_POINTER;
	extern Image* IMAGE_DIALOG_BACK;
	extern Image* IMAGE_DIALOG_BUTTON;
	extern Image* IMAGE_EXPLOSION;
	extern Image* IMAGE_EYE_BLINK;
	extern Image* IMAGE_FROG_LIVES;
	extern Image* IMAGE_GREEN_BALL;
	extern Image* IMAGE_GREEN_BOMB;
	extern Image* IMAGE_GREEN_LIGHT;
	extern Image* IMAGE_GREEN_SLOW;
	extern Image* IMAGE_HELP_SCREEN;
	extern Image* IMAGE_HOLE;
	extern Image* IMAGE_HOLEANIM;
	extern Image* IMAGE_HOLEMASK;
	extern Image* IMAGE_MENU_BAR;
	extern Image* IMAGE_MENU_BUTTON;
	extern Image* IMAGE_NEXT_BALL;
	extern Image* IMAGE_PLAY_BUTTON;
	extern Image* IMAGE_PURPLE_BALL;
	extern Image* IMAGE_PURPLE_BOMB;
	extern Image* IMAGE_PURPLE_LIGHT;
	extern Image* IMAGE_PURPLE_SLOW;
	extern Image* IMAGE_RED_BALL;
	extern Image* IMAGE_RED_BOMB;
	extern Image* IMAGE_RED_LIGHT;
	extern Image* IMAGE_RED_SLOW;
	extern Image* IMAGE_SHOOTER_BOTTOM;
	extern Image* IMAGE_SHOOTER_TONGUE;
	extern Image* IMAGE_SHOOTER_TOP;
	extern Image* IMAGE_SKULLCAP;
	extern Image* IMAGE_SKULLJAW;
	extern Image* IMAGE_SLOW_LIGHT;
	extern Image* IMAGE_SMALL_TEXTURE;
	extern Image* IMAGE_SPARKLE;
	extern Image* IMAGE_WHITE_BALL;
	extern Image* IMAGE_WHITE_BOMB;
	extern Image* IMAGE_WHITE_LIGHT;
	extern Image* IMAGE_WHITE_SLOW;
	extern Image* IMAGE_YELLOW_BALL;
	extern Image* IMAGE_YELLOW_BOMB;
	extern Image* IMAGE_YELLOW_LIGHT;
	extern Image* IMAGE_YELLOW_SLOW;
	extern Image* IMAGE_ZUMA_BAR;
	extern Image* IMAGE_ZUMA_BAR_DONE;
	extern int SOUND_BALLCLICK1;
	extern int SOUND_BALLCLICK2;
	extern int SOUND_BALLDESTROYED1;
	extern int SOUND_BALLDESTROYED2;
	extern int SOUND_BALLDESTROYED3;
	extern int SOUND_BALLFIRE;
	extern int SOUND_BAR_FULL;
	extern int SOUND_BONUS_EXPLOSION;
	extern int SOUND_BUTTON1;
	extern int SOUND_CHAIN_BONUS;
	extern int SOUND_COMBO;
	extern int SOUND_EXPLODE;
	extern int SOUND_GAP_BONUS;
	extern int SOUND_JEWEL_APPEAR;
	extern int SOUND_JEWEL_DISAPPEAR;
	extern int SOUND_JEWEL_HIT;
	extern int SOUND_POP;
	extern int SOUND_ROLLING;
	extern int SOUND_SLOWDOWN_BALL;
	extern int SOUND_TRAIL_LIGHT;
	extern int SOUND_TRAIL_LIGHT_END;
	extern int SOUND_WARNING;

	// UpsellScreen Resources
	bool ExtractUpsellScreenResources(ResourceManager *theMgr);
	extern Image* IMAGE_CONTINUE_BUTTON;
	extern Image* IMAGE_DOWNLOAD_BUTTON;
	extern Image* IMAGE_UPSELL1;
	extern Image* IMAGE_UPSELL2;
	extern Image* IMAGE_UPSELL3;
	extern Image* IMAGE_UPSELL4;
	extern Image* IMAGE_UPSELL5;
	extern Image* IMAGE_UPSELL6;
	extern Image* IMAGE_UPSELL7;
	extern Image* IMAGE_UPSELL_SCREEN;

	enum ResourceId
	{
		IMAGE_HELP_SCREEN_ID,
		IMAGE_CURSOR_POINTER_ID,
		IMAGE_BLUE_BALL_ID,
		IMAGE_BALL_START_ID = IMAGE_BLUE_BALL_ID,
		IMAGE_YELLOW_BALL_ID,
		IMAGE_RED_BALL_ID,
		IMAGE_GREEN_BALL_ID,
		IMAGE_PURPLE_BALL_ID,
		IMAGE_WHITE_BALL_ID,
		IMAGE_BALL_END_ID = IMAGE_WHITE_BALL_ID,
		IMAGE_NEXT_BALL_ID,
		IMAGE_BLUE_SLOW_ID,
		IMAGE_YELLOW_SLOW_ID,
		IMAGE_RED_SLOW_ID,
		IMAGE_GREEN_SLOW_ID,
		IMAGE_PURPLE_SLOW_ID,
		IMAGE_WHITE_SLOW_ID,
		IMAGE_BLUE_BOMB_ID,
		IMAGE_BOMB_START_ID = IMAGE_BLUE_BOMB_ID,
		IMAGE_YELLOW_BOMB_ID,
		IMAGE_RED_BOMB_ID,
		IMAGE_GREEN_BOMB_ID,
		IMAGE_PURPLE_BOMB_ID,
		IMAGE_WHITE_BOMB_ID,
		IMAGE_BLUE_LIGHT_ID,
		IMAGE_LIGHT_START_ID = IMAGE_BLUE_LIGHT_ID,
		IMAGE_YELLOW_LIGHT_ID,
		IMAGE_RED_LIGHT_ID,
		IMAGE_GREEN_LIGHT_ID,
		IMAGE_PURPLE_LIGHT_ID,
		IMAGE_WHITE_LIGHT_ID,
		IMAGE_SLOW_LIGHT_ID,
		IMAGE_EXPLOSION_ID,
		IMAGE_SPARKLE_ID,
		IMAGE_SHOOTER_BOTTOM_ID,
		IMAGE_SHOOTER_TOP_ID,
		IMAGE_SHOOTER_TONGUE_ID,
		IMAGE_EYE_BLINK_ID,
		IMAGE_DIALOG_BUTTON_ID,
		IMAGE_MENU_BUTTON_ID,
		IMAGE_PLAY_BUTTON_ID,
		IMAGE_SMALL_TEXTURE_ID,
		IMAGE_DIALOG_BACK_ID,
		IMAGE_HOLE_ID,
		IMAGE_HOLEMASK_ID,
		IMAGE_SKULLCAP_ID,
		IMAGE_SKULLJAW_ID,
		IMAGE_HOLEANIM_ID,
		IMAGE_COIN_ID,
		IMAGE_MENU_BAR_ID,
		IMAGE_ZUMA_BAR_ID,
		IMAGE_ZUMA_BAR_DONE_ID,
		IMAGE_FROG_LIVES_ID,
		SOUND_BALLCLICK1_ID,
		SOUND_BALLCLICK2_ID,
		SOUND_BALLFIRE_ID,
		SOUND_WARNING_ID,
		SOUND_EXPLODE_ID,
		SOUND_JEWEL_APPEAR_ID,
		SOUND_JEWEL_DISAPPEAR_ID,
		SOUND_JEWEL_HIT_ID,
		SOUND_CHAIN_BONUS_ID,
		SOUND_GAP_BONUS_ID,
		SOUND_ROLLING_ID,
		SOUND_SLOWDOWN_BALL_ID,
		SOUND_TRAIL_LIGHT_ID,
		SOUND_TRAIL_LIGHT_END_ID,
		SOUND_BAR_FULL_ID,
		SOUND_BONUS_EXPLOSION_ID,
		SOUND_BALLDESTROYED1_ID,
		SOUND_BALLDESTROYED2_ID,
		SOUND_BALLDESTROYED3_ID,
		SOUND_COMBO_ID,
		SOUND_BUTTON1_ID,
		SOUND_POP_ID,
		FONT_MAIN10_ID,
		FONT_DIALOG_ID,
		FONT_FLOAT_ID,
		FONT_TITLE_ID,
		FONT_MONODIGIT_ID,
		IMAGE_UPSELL_SCREEN_ID,
		IMAGE_UPSELL1_ID,
		IMAGE_UPSELL2_ID,
		IMAGE_UPSELL3_ID,
		IMAGE_UPSELL4_ID,
		IMAGE_UPSELL5_ID,
		IMAGE_UPSELL6_ID,
		IMAGE_UPSELL7_ID,
		IMAGE_DOWNLOAD_BUTTON_ID,
		IMAGE_CONTINUE_BUTTON_ID,
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
