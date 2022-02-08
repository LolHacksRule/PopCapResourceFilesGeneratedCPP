#ifndef __Book5Treasures_H__
#define __Book5Treasures_H__

namespace Sexy
{
	class ResourceManager;
	class Image;
	class Font;

	Image* LoadImageById(ResourceManager *theManager, int theId);
	void ReplaceImageById(ResourceManager *theManager, int theId, Image *theImage);
	bool ExtractResourcesByName(ResourceManager *theManager, const char *theName);

	// Book5Treasures Resources
	bool ExtractBook5TreasuresResources(ResourceManager *theMgr);
	extern Image* IMAGE_TREASURE_5_10_SML;
	extern Image* IMAGE_TREASURE_5_1_SML;
	extern Image* IMAGE_TREASURE_5_2_SML;
	extern Image* IMAGE_TREASURE_5_3_EQUIP;
	extern Image* IMAGE_TREASURE_5_3_SML;
	extern Image* IMAGE_TREASURE_5_3_UI;
	extern Image* IMAGE_TREASURE_5_4_SML;
	extern Image* IMAGE_TREASURE_5_5_SML;
	extern Image* IMAGE_TREASURE_5_6_SML;
	extern Image* IMAGE_TREASURE_5_7_EQUIP;
	extern Image* IMAGE_TREASURE_5_7_SML;
	extern Image* IMAGE_TREASURE_5_7_UI;
	extern Image* IMAGE_TREASURE_5_8_SML;
	extern Image* IMAGE_TREASURE_5_9_SML;
	extern Image* IMAGE_TREASURE_TITLES_B5;

	enum ResourceId
	{
		IMAGE_TREASURE_5_1_SML_ID,
		IMAGE_TREASURE_5_2_SML_ID,
		IMAGE_TREASURE_5_3_SML_ID,
		IMAGE_TREASURE_5_4_SML_ID,
		IMAGE_TREASURE_5_5_SML_ID,
		IMAGE_TREASURE_5_6_SML_ID,
		IMAGE_TREASURE_5_7_SML_ID,
		IMAGE_TREASURE_5_8_SML_ID,
		IMAGE_TREASURE_5_9_SML_ID,
		IMAGE_TREASURE_5_10_SML_ID,
		IMAGE_TREASURE_5_3_UI_ID,
		IMAGE_TREASURE_5_7_UI_ID,
		IMAGE_TREASURE_5_3_EQUIP_ID,
		IMAGE_TREASURE_5_7_EQUIP_ID,
		IMAGE_TREASURE_TITLES_B5_ID,
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
