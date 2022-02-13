#ifndef __Book0Treasures_H__
#define __Book0Treasures_H__

namespace Sexy
{
	class ResourceManager;
	class Image;
	class Font;

	Image* LoadImageById(ResourceManager *theManager, int theId);
	void ReplaceImageById(ResourceManager *theManager, int theId, Image *theImage);
	bool ExtractResourcesByName(ResourceManager *theManager, const char *theName);

	// Book0Treasures Resources
	bool ExtractBook0TreasuresResources(ResourceManager *theMgr);
	extern Image* IMAGE_TREASURE_0_1_SML;
	extern Image* IMAGE_TREASURE_TITLES_B0;

	enum ResourceId
	{
		IMAGE_TREASURE_0_1_SML_ID,
		IMAGE_TREASURE_TITLES_B0_ID,
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
