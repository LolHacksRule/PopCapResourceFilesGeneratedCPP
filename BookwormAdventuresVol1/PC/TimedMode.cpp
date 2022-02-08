#include "TimedMode.h"
#include "SexyAppFramework/ResourceManager.h"

using namespace Sexy;

#pragma warning(disable:4311 4312)

static bool gNeedRecalcVariableToIdMap = false;

bool Sexy::ExtractResourcesByName(ResourceManager *theManager, const char *theName)
{
	if (strcmp(theName,"TimedModeCommon")==0) return ExtractTimedModeCommonResources(theManager);
	return false;
}

Sexy::ResourceId Sexy::GetIdByStringId(const char *theStringId)
{
	typedef std::map<std::string,int> MyMap;
	static MyMap aMap;
	if(aMap.empty())
	{
		for(int i=0; i<RESOURCE_ID_MAX; i++)
			aMap[GetStringIdById(i)] = i;
	}

	MyMap::iterator anItr = aMap.find(theStringId);
	if (anItr == aMap.end())
		return RESOURCE_ID_MAX;
	else
		return (ResourceId) anItr->second;
}

// TimedModeCommon Resources
Image* Sexy::IMAGE_TMA_BG;
Image* Sexy::IMAGE_TMA_CHECKPOINT;
Image* Sexy::IMAGE_TMA_COUNTDOWN;
Image* Sexy::IMAGE_TMA_ENEMY_ATTACKING;
Image* Sexy::IMAGE_TMA_TIMERBAR;
Image* Sexy::IMAGE_TMA_TIMERBAR_FILL;
int Sexy::SOUND_11_TM;
int Sexy::SOUND_12_TM;
int Sexy::SOUND_13_TM;
int Sexy::SOUND_14_TM;
int Sexy::SOUND_15_TM;
int Sexy::SOUND_16_TM;
int Sexy::SOUND_17_TM;
int Sexy::SOUND_18_TM;
int Sexy::SOUND_19_TM;
int Sexy::SOUND_1_TM;
int Sexy::SOUND_20_TM;
int Sexy::SOUND_21_TM;
int Sexy::SOUND_22_TM;
int Sexy::SOUND_23_TM;
int Sexy::SOUND_24_TM;
int Sexy::SOUND_25_TM;
int Sexy::SOUND_29_TM;
int Sexy::SOUND_2_TM;
int Sexy::SOUND_30_TM;
int Sexy::SOUND_31_TM;
int Sexy::SOUND_34_TM;
int Sexy::SOUND_35_TM;
int Sexy::SOUND_37_TM;
int Sexy::SOUND_39_TM;
int Sexy::SOUND_3_TM;
int Sexy::SOUND_40_TM;
int Sexy::SOUND_41_TM;
int Sexy::SOUND_42_TM;
int Sexy::SOUND_43_TM;
int Sexy::SOUND_44_TM;
int Sexy::SOUND_45_TM;
int Sexy::SOUND_46_TM;
int Sexy::SOUND_47_TM;
int Sexy::SOUND_48_TM;
int Sexy::SOUND_49_TM;
int Sexy::SOUND_4_TM;
int Sexy::SOUND_50_TM;
int Sexy::SOUND_5_TM;
int Sexy::SOUND_7_TM;
int Sexy::SOUND_8_TM;
int Sexy::SOUND_9_TM;

bool Sexy::ExtractTimedModeCommonResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_TMA_BG = aMgr.GetImageThrow("IMAGE_TMA_BG");
		IMAGE_TMA_CHECKPOINT = aMgr.GetImageThrow("IMAGE_TMA_CHECKPOINT");
		IMAGE_TMA_COUNTDOWN = aMgr.GetImageThrow("IMAGE_TMA_COUNTDOWN");
		IMAGE_TMA_ENEMY_ATTACKING = aMgr.GetImageThrow("IMAGE_TMA_ENEMY_ATTACKING");
		IMAGE_TMA_TIMERBAR = aMgr.GetImageThrow("IMAGE_TMA_TIMERBAR");
		IMAGE_TMA_TIMERBAR_FILL = aMgr.GetImageThrow("IMAGE_TMA_TIMERBAR_FILL");
		SOUND_11_TM = aMgr.GetSoundThrow("SOUND_11_TM");
		SOUND_12_TM = aMgr.GetSoundThrow("SOUND_12_TM");
		SOUND_13_TM = aMgr.GetSoundThrow("SOUND_13_TM");
		SOUND_14_TM = aMgr.GetSoundThrow("SOUND_14_TM");
		SOUND_15_TM = aMgr.GetSoundThrow("SOUND_15_TM");
		SOUND_16_TM = aMgr.GetSoundThrow("SOUND_16_TM");
		SOUND_17_TM = aMgr.GetSoundThrow("SOUND_17_TM");
		SOUND_18_TM = aMgr.GetSoundThrow("SOUND_18_TM");
		SOUND_19_TM = aMgr.GetSoundThrow("SOUND_19_TM");
		SOUND_1_TM = aMgr.GetSoundThrow("SOUND_1_TM");
		SOUND_20_TM = aMgr.GetSoundThrow("SOUND_20_TM");
		SOUND_21_TM = aMgr.GetSoundThrow("SOUND_21_TM");
		SOUND_22_TM = aMgr.GetSoundThrow("SOUND_22_TM");
		SOUND_23_TM = aMgr.GetSoundThrow("SOUND_23_TM");
		SOUND_24_TM = aMgr.GetSoundThrow("SOUND_24_TM");
		SOUND_25_TM = aMgr.GetSoundThrow("SOUND_25_TM");
		SOUND_29_TM = aMgr.GetSoundThrow("SOUND_29_TM");
		SOUND_2_TM = aMgr.GetSoundThrow("SOUND_2_TM");
		SOUND_30_TM = aMgr.GetSoundThrow("SOUND_30_TM");
		SOUND_31_TM = aMgr.GetSoundThrow("SOUND_31_TM");
		SOUND_34_TM = aMgr.GetSoundThrow("SOUND_34_TM");
		SOUND_35_TM = aMgr.GetSoundThrow("SOUND_35_TM");
		SOUND_37_TM = aMgr.GetSoundThrow("SOUND_37_TM");
		SOUND_39_TM = aMgr.GetSoundThrow("SOUND_39_TM");
		SOUND_3_TM = aMgr.GetSoundThrow("SOUND_3_TM");
		SOUND_40_TM = aMgr.GetSoundThrow("SOUND_40_TM");
		SOUND_41_TM = aMgr.GetSoundThrow("SOUND_41_TM");
		SOUND_42_TM = aMgr.GetSoundThrow("SOUND_42_TM");
		SOUND_43_TM = aMgr.GetSoundThrow("SOUND_43_TM");
		SOUND_44_TM = aMgr.GetSoundThrow("SOUND_44_TM");
		SOUND_45_TM = aMgr.GetSoundThrow("SOUND_45_TM");
		SOUND_46_TM = aMgr.GetSoundThrow("SOUND_46_TM");
		SOUND_47_TM = aMgr.GetSoundThrow("SOUND_47_TM");
		SOUND_48_TM = aMgr.GetSoundThrow("SOUND_48_TM");
		SOUND_49_TM = aMgr.GetSoundThrow("SOUND_49_TM");
		SOUND_4_TM = aMgr.GetSoundThrow("SOUND_4_TM");
		SOUND_50_TM = aMgr.GetSoundThrow("SOUND_50_TM");
		SOUND_5_TM = aMgr.GetSoundThrow("SOUND_5_TM");
		SOUND_7_TM = aMgr.GetSoundThrow("SOUND_7_TM");
		SOUND_8_TM = aMgr.GetSoundThrow("SOUND_8_TM");
		SOUND_9_TM = aMgr.GetSoundThrow("SOUND_9_TM");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

static void* gResources[] =
{
	&IMAGE_TMA_BG,
	&IMAGE_TMA_ENEMY_ATTACKING,
	&IMAGE_TMA_TIMERBAR,
	&IMAGE_TMA_TIMERBAR_FILL,
	&IMAGE_TMA_CHECKPOINT,
	&IMAGE_TMA_COUNTDOWN,
	&SOUND_1_TM,
	&SOUND_2_TM,
	&SOUND_3_TM,
	&SOUND_4_TM,
	&SOUND_5_TM,
	&SOUND_7_TM,
	&SOUND_8_TM,
	&SOUND_9_TM,
	&SOUND_11_TM,
	&SOUND_12_TM,
	&SOUND_13_TM,
	&SOUND_14_TM,
	&SOUND_15_TM,
	&SOUND_16_TM,
	&SOUND_17_TM,
	&SOUND_18_TM,
	&SOUND_19_TM,
	&SOUND_20_TM,
	&SOUND_21_TM,
	&SOUND_22_TM,
	&SOUND_23_TM,
	&SOUND_24_TM,
	&SOUND_25_TM,
	&SOUND_29_TM,
	&SOUND_30_TM,
	&SOUND_31_TM,
	&SOUND_34_TM,
	&SOUND_35_TM,
	&SOUND_37_TM,
	&SOUND_39_TM,
	&SOUND_40_TM,
	&SOUND_41_TM,
	&SOUND_42_TM,
	&SOUND_43_TM,
	&SOUND_44_TM,
	&SOUND_45_TM,
	&SOUND_46_TM,
	&SOUND_47_TM,
	&SOUND_48_TM,
	&SOUND_49_TM,
	&SOUND_50_TM,
	NULL
};

Image* Sexy::LoadImageById(ResourceManager *theManager, int theId)
{
	return (*((Image**)gResources[theId]) = theManager->LoadImage(GetStringIdById(theId)));
}

void Sexy::ReplaceImageById(ResourceManager *theManager, int theId, Image *theImage)
{
	theManager->ReplaceImage(GetStringIdById(theId),theImage);
	*(Image**)gResources[theId] = theImage;
}

Image* Sexy::GetImageById(int theId)
{
	return *(Image**)gResources[theId];
}

Font* Sexy::GetFontById(int theId)
{
	return *(Font**)gResources[theId];
}

int Sexy::GetSoundById(int theId)
{
	return *(int*)gResources[theId];
}

Image*& Sexy::GetImageRefById(int theId)
{
	return *(Image**)gResources[theId];
}

Font*& Sexy::GetFontRefById(int theId)
{
	return *(Font**)gResources[theId];
}

int& Sexy::GetSoundRefById(int theId)
{
	return *(int*)gResources[theId];
}

static Sexy::ResourceId GetIdByVariable(const void *theVariable)
{
	typedef std::map<int,int> MyMap;
	static MyMap aMap;
	if(gNeedRecalcVariableToIdMap)
	{
		gNeedRecalcVariableToIdMap = false;
		aMap.clear();
		for(int i=0; i<RESOURCE_ID_MAX; i++)
			aMap[*(int*)gResources[i]] = i;
	}

	MyMap::iterator anItr = aMap.find((int)theVariable);
	if (anItr == aMap.end())
		return RESOURCE_ID_MAX;
	else
		return (ResourceId) anItr->second;
}

Sexy::ResourceId Sexy::GetIdByImage(Image *theImage)
{
	return GetIdByVariable(theImage);
}

Sexy::ResourceId Sexy::GetIdByFont(Font *theFont)
{
	return GetIdByVariable(theFont);
}

Sexy::ResourceId Sexy::GetIdBySound(int theSound)
{
	return GetIdByVariable((void*)theSound);
}

const char* Sexy::GetStringIdById(int theId)
{
	switch(theId)
	{
		case IMAGE_TMA_BG_ID: return "IMAGE_TMA_BG";
		case IMAGE_TMA_ENEMY_ATTACKING_ID: return "IMAGE_TMA_ENEMY_ATTACKING";
		case IMAGE_TMA_TIMERBAR_ID: return "IMAGE_TMA_TIMERBAR";
		case IMAGE_TMA_TIMERBAR_FILL_ID: return "IMAGE_TMA_TIMERBAR_FILL";
		case IMAGE_TMA_CHECKPOINT_ID: return "IMAGE_TMA_CHECKPOINT";
		case IMAGE_TMA_COUNTDOWN_ID: return "IMAGE_TMA_COUNTDOWN";
		case SOUND_1_TM_ID: return "SOUND_1_TM";
		case SOUND_2_TM_ID: return "SOUND_2_TM";
		case SOUND_3_TM_ID: return "SOUND_3_TM";
		case SOUND_4_TM_ID: return "SOUND_4_TM";
		case SOUND_5_TM_ID: return "SOUND_5_TM";
		case SOUND_7_TM_ID: return "SOUND_7_TM";
		case SOUND_8_TM_ID: return "SOUND_8_TM";
		case SOUND_9_TM_ID: return "SOUND_9_TM";
		case SOUND_11_TM_ID: return "SOUND_11_TM";
		case SOUND_12_TM_ID: return "SOUND_12_TM";
		case SOUND_13_TM_ID: return "SOUND_13_TM";
		case SOUND_14_TM_ID: return "SOUND_14_TM";
		case SOUND_15_TM_ID: return "SOUND_15_TM";
		case SOUND_16_TM_ID: return "SOUND_16_TM";
		case SOUND_17_TM_ID: return "SOUND_17_TM";
		case SOUND_18_TM_ID: return "SOUND_18_TM";
		case SOUND_19_TM_ID: return "SOUND_19_TM";
		case SOUND_20_TM_ID: return "SOUND_20_TM";
		case SOUND_21_TM_ID: return "SOUND_21_TM";
		case SOUND_22_TM_ID: return "SOUND_22_TM";
		case SOUND_23_TM_ID: return "SOUND_23_TM";
		case SOUND_24_TM_ID: return "SOUND_24_TM";
		case SOUND_25_TM_ID: return "SOUND_25_TM";
		case SOUND_29_TM_ID: return "SOUND_29_TM";
		case SOUND_30_TM_ID: return "SOUND_30_TM";
		case SOUND_31_TM_ID: return "SOUND_31_TM";
		case SOUND_34_TM_ID: return "SOUND_34_TM";
		case SOUND_35_TM_ID: return "SOUND_35_TM";
		case SOUND_37_TM_ID: return "SOUND_37_TM";
		case SOUND_39_TM_ID: return "SOUND_39_TM";
		case SOUND_40_TM_ID: return "SOUND_40_TM";
		case SOUND_41_TM_ID: return "SOUND_41_TM";
		case SOUND_42_TM_ID: return "SOUND_42_TM";
		case SOUND_43_TM_ID: return "SOUND_43_TM";
		case SOUND_44_TM_ID: return "SOUND_44_TM";
		case SOUND_45_TM_ID: return "SOUND_45_TM";
		case SOUND_46_TM_ID: return "SOUND_46_TM";
		case SOUND_47_TM_ID: return "SOUND_47_TM";
		case SOUND_48_TM_ID: return "SOUND_48_TM";
		case SOUND_49_TM_ID: return "SOUND_49_TM";
		case SOUND_50_TM_ID: return "SOUND_50_TM";
		default: return "";
	}
}

