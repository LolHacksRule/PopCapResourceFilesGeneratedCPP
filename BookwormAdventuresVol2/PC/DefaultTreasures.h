#ifndef __DefaultTreasures_H__
#define __DefaultTreasures_H__

namespace Sexy
{
	class ResourceManager;
	class Image;
	class Font;

	Image* LoadImageById(ResourceManager *theManager, int theId);
	void ReplaceImageById(ResourceManager *theManager, int theId, Image *theImage);
	bool ExtractResourcesByName(ResourceManager *theManager, const char *theName);

	// Init_DefaultTreasures Resources
	bool ExtractInit_DefaultTreasuresResources(ResourceManager *theMgr);
	extern Image* IMAGE_NEW_COMPANION_TITLE;
	extern Image* IMAGE_NEW_TREASURE_TITLE;
	extern Image* IMAGE_SELECT_TREASURES;
	extern Image* IMAGE_TREASURES_SELECTED;

	enum ResourceId
	{
		IMAGE_SELECT_TREASURES_ID,
		IMAGE_TREASURES_SELECTED_ID,
		IMAGE_NEW_TREASURE_TITLE_ID,
		IMAGE_NEW_COMPANION_TITLE_ID,
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
