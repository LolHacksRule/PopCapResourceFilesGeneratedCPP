#ifndef __Book0_H__
#define __Book0_H__

namespace Sexy
{
	class ResourceManager;
	class Image;
	class Font;

	Image* LoadImageById(ResourceManager *theManager, int theId);
	void ReplaceImageById(ResourceManager *theManager, int theId, Image *theImage);
	bool ExtractResourcesByName(ResourceManager *theManager, const char *theName);

	// BOOK5Common Resources
	bool ExtractBOOK5CommonResources(ResourceManager *theMgr);
	extern Image* IMAGE_B0_LEFT_FACING_ARROW;

	// book0Chapter1 Resources
	bool Extractbook0Chapter1Resources(ResourceManager *theMgr);
	extern Image* IMAGE_B0A_BG1;
	extern Image* IMAGE_B0A_STUFFY_BOSS_BATTLE;
	extern int SOUND_BOOK0_CH1_MALE_LAUGH2;
	extern int SOUND_BOOK0_CH1_MALE_LAUGH;
	extern int SOUND_BOOK0_CH1_SMOKE_ATTACK2;
	extern int SOUND_BOOK0_CH1_SMOKE_ATTACK;
	extern int SOUND_BOOK0_CH1_SMOKE_IMPACT;
	extern int SOUND_BOOK0_CH1_WARMUP;
	extern int SOUND_CYMBALCRASH;

	// book0Init Resources
	bool Extractbook0InitResources(ResourceManager *theMgr);
	extern Image* IMAGE_B0_ICONANIM10;
	extern Image* IMAGE_B0_ICONANIM1;
	extern Image* IMAGE_B0_ICONANIM2;
	extern Image* IMAGE_B0_ICONANIM3;
	extern Image* IMAGE_B0_ICONANIM4;
	extern Image* IMAGE_B0_ICONANIM5;
	extern Image* IMAGE_B0_ICONANIM6;
	extern Image* IMAGE_B0_ICONANIM7;
	extern Image* IMAGE_B0_ICONANIM8;
	extern Image* IMAGE_B0_ICONANIM9;
	extern Image* IMAGE_B0_ICONMASK10;
	extern Image* IMAGE_B0_ICONMASK1;
	extern Image* IMAGE_B0_ICONMASK2;
	extern Image* IMAGE_B0_ICONMASK3;
	extern Image* IMAGE_B0_ICONMASK4;
	extern Image* IMAGE_B0_ICONMASK5;
	extern Image* IMAGE_B0_ICONMASK6;
	extern Image* IMAGE_B0_ICONMASK7;
	extern Image* IMAGE_B0_ICONMASK8;
	extern Image* IMAGE_B0_ICONMASK9;
	extern Image* IMAGE_B0_MAP;
	extern Image* IMAGE_B0_MAPSCREEN_BANNER;
	extern Image* IMAGE_B0_MINIMAP_ICONS;
	extern Image* IMAGE_TUT_PIC_STUFFY;

	enum ResourceId
	{
		IMAGE_B0_MINIMAP_ICONS_ID,
		IMAGE_B0_MAPSCREEN_BANNER_ID,
		IMAGE_B0_ICONANIM1_ID,
		IMAGE_B0_ICONANIM2_ID,
		IMAGE_B0_ICONANIM3_ID,
		IMAGE_B0_ICONANIM4_ID,
		IMAGE_B0_ICONANIM5_ID,
		IMAGE_B0_ICONANIM6_ID,
		IMAGE_B0_ICONANIM7_ID,
		IMAGE_B0_ICONANIM8_ID,
		IMAGE_B0_ICONANIM9_ID,
		IMAGE_B0_ICONANIM10_ID,
		IMAGE_B0_ICONMASK1_ID,
		IMAGE_B0_ICONMASK2_ID,
		IMAGE_B0_ICONMASK3_ID,
		IMAGE_B0_ICONMASK4_ID,
		IMAGE_B0_ICONMASK5_ID,
		IMAGE_B0_ICONMASK6_ID,
		IMAGE_B0_ICONMASK7_ID,
		IMAGE_B0_ICONMASK8_ID,
		IMAGE_B0_ICONMASK9_ID,
		IMAGE_B0_ICONMASK10_ID,
		IMAGE_B0_MAP_ID,
		IMAGE_TUT_PIC_STUFFY_ID,
		IMAGE_B0_LEFT_FACING_ARROW_ID,
		IMAGE_B0A_BG1_ID,
		IMAGE_B0A_STUFFY_BOSS_BATTLE_ID,
		SOUND_BOOK0_CH1_SMOKE_ATTACK_ID,
		SOUND_BOOK0_CH1_SMOKE_ATTACK2_ID,
		SOUND_BOOK0_CH1_SMOKE_IMPACT_ID,
		SOUND_BOOK0_CH1_MALE_LAUGH_ID,
		SOUND_BOOK0_CH1_MALE_LAUGH2_ID,
		SOUND_BOOK0_CH1_WARMUP_ID,
		SOUND_CYMBALCRASH_ID,
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
