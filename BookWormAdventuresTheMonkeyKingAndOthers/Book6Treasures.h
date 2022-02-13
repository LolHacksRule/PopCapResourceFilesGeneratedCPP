#ifndef __Book6Treasures_H__
#define __Book6Treasures_H__

namespace Sexy
{
	class ResourceManager;
	class Image;
	class Font;

	Image* LoadImageById(ResourceManager *theManager, int theId);
	void ReplaceImageById(ResourceManager *theManager, int theId, Image *theImage);
	bool ExtractResourcesByName(ResourceManager *theManager, const char *theName);

	// Book6Treasures Resources
	bool ExtractBook6TreasuresResources(ResourceManager *theMgr);
	extern Image* IMAGE_TREASURE_6_10_SML;
	extern Image* IMAGE_TREASURE_6_1_SML;
	extern Image* IMAGE_TREASURE_6_2_SML;
	extern Image* IMAGE_TREASURE_6_3_EQUIP;
	extern Image* IMAGE_TREASURE_6_3_SML;
	extern Image* IMAGE_TREASURE_6_3_UI;
	extern Image* IMAGE_TREASURE_6_4_SML;
	extern Image* IMAGE_TREASURE_6_5_SML;
	extern Image* IMAGE_TREASURE_6_6_SML;
	extern Image* IMAGE_TREASURE_6_7_EQUIP;
	extern Image* IMAGE_TREASURE_6_7_SML;
	extern Image* IMAGE_TREASURE_6_7_UI;
	extern Image* IMAGE_TREASURE_6_8_SML;
	extern Image* IMAGE_TREASURE_6_9_SML;
	extern Image* IMAGE_TREASURE_TITLES_B6;

	enum ResourceId
	{
		IMAGE_TREASURE_6_1_SML_ID,
		IMAGE_TREASURE_6_2_SML_ID,
		IMAGE_TREASURE_6_3_SML_ID,
		IMAGE_TREASURE_6_4_SML_ID,
		IMAGE_TREASURE_6_5_SML_ID,
		IMAGE_TREASURE_6_6_SML_ID,
		IMAGE_TREASURE_6_7_SML_ID,
		IMAGE_TREASURE_6_8_SML_ID,
		IMAGE_TREASURE_6_9_SML_ID,
		IMAGE_TREASURE_6_10_SML_ID,
		IMAGE_TREASURE_6_3_UI_ID,
		IMAGE_TREASURE_6_7_UI_ID,
		IMAGE_TREASURE_6_3_EQUIP_ID,
		IMAGE_TREASURE_6_7_EQUIP_ID,
		IMAGE_TREASURE_TITLES_B6_ID,
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
