#ifndef __Book3Treasures_H__
#define __Book3Treasures_H__

namespace Sexy
{
	class ResourceManager;
	class Image;
	class Font;

	Image* LoadImageById(ResourceManager *theManager, int theId);
	void ReplaceImageById(ResourceManager *theManager, int theId, Image *theImage);
	bool ExtractResourcesByName(ResourceManager *theManager, const char *theName);

	// Book3Treasures Resources
	bool ExtractBook3TreasuresResources(ResourceManager *theMgr);
	extern Image* IMAGE_TREASURE_3_10_SML;
	extern Image* IMAGE_TREASURE_3_1_SML;
	extern Image* IMAGE_TREASURE_3_2_SML;
	extern Image* IMAGE_TREASURE_3_3_SML;
	extern Image* IMAGE_TREASURE_3_4_SML;
	extern Image* IMAGE_TREASURE_3_5_SML;
	extern Image* IMAGE_TREASURE_3_6_SML;
	extern Image* IMAGE_TREASURE_3_7_SML;
	extern Image* IMAGE_TREASURE_3_8_SML;
	extern Image* IMAGE_TREASURE_3_9_SML;
	extern Image* IMAGE_TREASURE_TITLES_B3;

	enum ResourceId
	{
		IMAGE_TREASURE_3_1_SML_ID,
		IMAGE_TREASURE_3_2_SML_ID,
		IMAGE_TREASURE_3_3_SML_ID,
		IMAGE_TREASURE_3_4_SML_ID,
		IMAGE_TREASURE_3_5_SML_ID,
		IMAGE_TREASURE_3_6_SML_ID,
		IMAGE_TREASURE_3_7_SML_ID,
		IMAGE_TREASURE_3_8_SML_ID,
		IMAGE_TREASURE_3_9_SML_ID,
		IMAGE_TREASURE_3_10_SML_ID,
		IMAGE_TREASURE_TITLES_B3_ID,
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
