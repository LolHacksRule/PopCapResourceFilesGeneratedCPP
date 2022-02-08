#ifndef __TimedMode_H__
#define __TimedMode_H__

namespace Sexy
{
	class ResourceManager;
	class Image;
	class Font;

	Image* LoadImageById(ResourceManager *theManager, int theId);
	void ReplaceImageById(ResourceManager *theManager, int theId, Image *theImage);
	bool ExtractResourcesByName(ResourceManager *theManager, const char *theName);

	// TimedModeCommon Resources
	bool ExtractTimedModeCommonResources(ResourceManager *theMgr);
	extern Image* IMAGE_TMA_BG;
	extern Image* IMAGE_TMA_CHECKPOINT;
	extern Image* IMAGE_TMA_COUNTDOWN;
	extern Image* IMAGE_TMA_ENEMY_ATTACKING;
	extern Image* IMAGE_TMA_TIMERBAR;
	extern Image* IMAGE_TMA_TIMERBAR_FILL;
	extern int SOUND_11_TM;
	extern int SOUND_12_TM;
	extern int SOUND_13_TM;
	extern int SOUND_14_TM;
	extern int SOUND_15_TM;
	extern int SOUND_16_TM;
	extern int SOUND_17_TM;
	extern int SOUND_18_TM;
	extern int SOUND_19_TM;
	extern int SOUND_1_TM;
	extern int SOUND_20_TM;
	extern int SOUND_21_TM;
	extern int SOUND_22_TM;
	extern int SOUND_23_TM;
	extern int SOUND_24_TM;
	extern int SOUND_25_TM;
	extern int SOUND_29_TM;
	extern int SOUND_2_TM;
	extern int SOUND_30_TM;
	extern int SOUND_31_TM;
	extern int SOUND_34_TM;
	extern int SOUND_35_TM;
	extern int SOUND_37_TM;
	extern int SOUND_39_TM;
	extern int SOUND_3_TM;
	extern int SOUND_40_TM;
	extern int SOUND_41_TM;
	extern int SOUND_42_TM;
	extern int SOUND_43_TM;
	extern int SOUND_44_TM;
	extern int SOUND_45_TM;
	extern int SOUND_46_TM;
	extern int SOUND_47_TM;
	extern int SOUND_48_TM;
	extern int SOUND_49_TM;
	extern int SOUND_4_TM;
	extern int SOUND_50_TM;
	extern int SOUND_5_TM;
	extern int SOUND_7_TM;
	extern int SOUND_8_TM;
	extern int SOUND_9_TM;

	enum ResourceId
	{
		IMAGE_TMA_BG_ID,
		IMAGE_TMA_ENEMY_ATTACKING_ID,
		IMAGE_TMA_TIMERBAR_ID,
		IMAGE_TMA_TIMERBAR_FILL_ID,
		IMAGE_TMA_CHECKPOINT_ID,
		IMAGE_TMA_COUNTDOWN_ID,
		SOUND_1_TM_ID,
		SOUND_2_TM_ID,
		SOUND_3_TM_ID,
		SOUND_4_TM_ID,
		SOUND_5_TM_ID,
		SOUND_7_TM_ID,
		SOUND_8_TM_ID,
		SOUND_9_TM_ID,
		SOUND_11_TM_ID,
		SOUND_12_TM_ID,
		SOUND_13_TM_ID,
		SOUND_14_TM_ID,
		SOUND_15_TM_ID,
		SOUND_16_TM_ID,
		SOUND_17_TM_ID,
		SOUND_18_TM_ID,
		SOUND_19_TM_ID,
		SOUND_20_TM_ID,
		SOUND_21_TM_ID,
		SOUND_22_TM_ID,
		SOUND_23_TM_ID,
		SOUND_24_TM_ID,
		SOUND_25_TM_ID,
		SOUND_29_TM_ID,
		SOUND_30_TM_ID,
		SOUND_31_TM_ID,
		SOUND_34_TM_ID,
		SOUND_35_TM_ID,
		SOUND_37_TM_ID,
		SOUND_39_TM_ID,
		SOUND_40_TM_ID,
		SOUND_41_TM_ID,
		SOUND_42_TM_ID,
		SOUND_43_TM_ID,
		SOUND_44_TM_ID,
		SOUND_45_TM_ID,
		SOUND_46_TM_ID,
		SOUND_47_TM_ID,
		SOUND_48_TM_ID,
		SOUND_49_TM_ID,
		SOUND_50_TM_ID,
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
