#ifndef __InitialMiniGames_H__
#define __InitialMiniGames_H__

namespace Sexy
{
	class ResourceManager;
	class Image;
	class Font;

	Image* LoadImageById(ResourceManager *theManager, int theId);
	void ReplaceImageById(ResourceManager *theManager, int theId, Image *theImage);
	bool ExtractResourcesByName(ResourceManager *theManager, const char *theName);

	// InitialMiniGames Resources
	bool ExtractInitialMiniGamesResources(ResourceManager *theMgr);
	extern Image* IMAGE_MINIMENU_LETTER_RIP_BTN;
	extern Image* IMAGE_MINIMENU_LINKNSPELL_BTN;
	extern Image* IMAGE_MINIMENU_WORDMASTER_BTN;

	// MiniGame1 Resources
	bool ExtractMiniGame1Resources(ResourceManager *theMgr);
	extern Image* IMAGE_MINIGAME1_BRACKET;
	extern Image* IMAGE_MINIGAME1_ENTRY_BOXES;
	extern Image* IMAGE_MINIGAME1_LABEL_TURNS;
	extern Image* IMAGE_MINIGAME1_LEGEND;
	extern Image* IMAGE_MINIGAME1_TAB_LEFT_DARK;
	extern Image* IMAGE_MINIGAME1_TAB_LEFT_LIT;
	extern Image* IMAGE_MINIGAME1_TILE_GOLD;
	extern Image* IMAGE_MINIGAME1_TILE_RED;
	extern Image* IMAGE_MINIGAME1_TILE_SILVER;
	extern Image* IMAGE_MINIGAME1_TITLE_WORDMASTER;
	extern Image* IMAGE_MINIGAME1_TURN_NUMBERS;
	extern Image* IMAGE_MINIGAME1_X_CHECK;

	// MiniGame2 Resources
	bool ExtractMiniGame2Resources(ResourceManager *theMgr);
	extern Image* IMAGE_MINIGAME2_GOLD_FILL;
	extern Image* IMAGE_MINIGAME2_LABEL_TIME;
	extern Image* IMAGE_MINIGAME2_SPELLING_BOX;
	extern Image* IMAGE_MINIGAME2_TIMER_FILLBAR;
	extern Image* IMAGE_MINIGAME2_TIMER_LEFT;
	extern Image* IMAGE_MINIGAME2_TITLE;

	// MiniGame3 Resources
	bool ExtractMiniGame3Resources(ResourceManager *theMgr);
	extern Image* IMAGE_MINIGAME3_BRACKET;
	extern Image* IMAGE_MINIGAME3_ENTRY_BOXES;
	extern Image* IMAGE_MINIGAME3_LABEL_TIME;
	extern Image* IMAGE_MINIGAME3_TILE_GOLD;
	extern Image* IMAGE_MINIGAME3_TILE_SILVER;
	extern Image* IMAGE_MINIGAME3_TIMER_FILLBAR;
	extern Image* IMAGE_MINIGAME3_TIMER_LEFT;
	extern Image* IMAGE_MINIGAME3_TITLE;
	extern Image* IMAGE_MINIGAME3_X_CHECK;

	enum ResourceId
	{
		IMAGE_MINIMENU_LETTER_RIP_BTN_ID,
		IMAGE_MINIMENU_LINKNSPELL_BTN_ID,
		IMAGE_MINIMENU_WORDMASTER_BTN_ID,
		IMAGE_MINIGAME1_BRACKET_ID,
		IMAGE_MINIGAME1_ENTRY_BOXES_ID,
		IMAGE_MINIGAME1_LABEL_TURNS_ID,
		IMAGE_MINIGAME1_X_CHECK_ID,
		IMAGE_MINIGAME1_TAB_LEFT_DARK_ID,
		IMAGE_MINIGAME1_TAB_LEFT_LIT_ID,
		IMAGE_MINIGAME1_TILE_GOLD_ID,
		IMAGE_MINIGAME1_TILE_SILVER_ID,
		IMAGE_MINIGAME1_TILE_RED_ID,
		IMAGE_MINIGAME1_TITLE_WORDMASTER_ID,
		IMAGE_MINIGAME1_TURN_NUMBERS_ID,
		IMAGE_MINIGAME1_LEGEND_ID,
		IMAGE_MINIGAME2_TITLE_ID,
		IMAGE_MINIGAME2_GOLD_FILL_ID,
		IMAGE_MINIGAME2_LABEL_TIME_ID,
		IMAGE_MINIGAME2_SPELLING_BOX_ID,
		IMAGE_MINIGAME2_TIMER_FILLBAR_ID,
		IMAGE_MINIGAME2_TIMER_LEFT_ID,
		IMAGE_MINIGAME3_TITLE_ID,
		IMAGE_MINIGAME3_ENTRY_BOXES_ID,
		IMAGE_MINIGAME3_TIMER_FILLBAR_ID,
		IMAGE_MINIGAME3_TIMER_LEFT_ID,
		IMAGE_MINIGAME3_LABEL_TIME_ID,
		IMAGE_MINIGAME3_TILE_GOLD_ID,
		IMAGE_MINIGAME3_TILE_SILVER_ID,
		IMAGE_MINIGAME3_BRACKET_ID,
		IMAGE_MINIGAME3_X_CHECK_ID,
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
