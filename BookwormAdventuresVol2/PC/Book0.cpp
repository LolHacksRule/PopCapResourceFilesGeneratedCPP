#include "Book0.h"
#include "SexyAppFramework/ResourceManager.h"

using namespace Sexy;

#pragma warning(disable:4311 4312)

static bool gNeedRecalcVariableToIdMap = false;

bool Sexy::ExtractResourcesByName(ResourceManager *theManager, const char *theName)
{
	if (strcmp(theName,"BOOK5Common")==0) return ExtractBOOK5CommonResources(theManager);
	if (strcmp(theName,"book0Chapter1")==0) return Extractbook0Chapter1Resources(theManager);
	if (strcmp(theName,"book0Init")==0) return Extractbook0InitResources(theManager);
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

// BOOK5Common Resources
Image* Sexy::IMAGE_B0_LEFT_FACING_ARROW;

bool Sexy::ExtractBOOK5CommonResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_B0_LEFT_FACING_ARROW = aMgr.GetImageThrow("IMAGE_B0_LEFT_FACING_ARROW");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// book0Chapter1 Resources
Image* Sexy::IMAGE_B0A_BG1;
Image* Sexy::IMAGE_B0A_STUFFY_BOSS_BATTLE;
int Sexy::SOUND_BOOK0_CH1_MALE_LAUGH;
int Sexy::SOUND_BOOK0_CH1_MALE_LAUGH2;
int Sexy::SOUND_BOOK0_CH1_SMOKE_ATTACK;
int Sexy::SOUND_BOOK0_CH1_SMOKE_ATTACK2;
int Sexy::SOUND_BOOK0_CH1_SMOKE_IMPACT;
int Sexy::SOUND_BOOK0_CH1_WARMUP;
int Sexy::SOUND_CYMBALCRASH;

bool Sexy::Extractbook0Chapter1Resources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_B0A_BG1 = aMgr.GetImageThrow("IMAGE_B0A_BG1");
		IMAGE_B0A_STUFFY_BOSS_BATTLE = aMgr.GetImageThrow("IMAGE_B0A_STUFFY_BOSS_BATTLE");
		SOUND_BOOK0_CH1_MALE_LAUGH = aMgr.GetSoundThrow("SOUND_BOOK0_CH1_MALE_LAUGH");
		SOUND_BOOK0_CH1_MALE_LAUGH2 = aMgr.GetSoundThrow("SOUND_BOOK0_CH1_MALE_LAUGH2");
		SOUND_BOOK0_CH1_SMOKE_ATTACK = aMgr.GetSoundThrow("SOUND_BOOK0_CH1_SMOKE_ATTACK");
		SOUND_BOOK0_CH1_SMOKE_ATTACK2 = aMgr.GetSoundThrow("SOUND_BOOK0_CH1_SMOKE_ATTACK2");
		SOUND_BOOK0_CH1_SMOKE_IMPACT = aMgr.GetSoundThrow("SOUND_BOOK0_CH1_SMOKE_IMPACT");
		SOUND_BOOK0_CH1_WARMUP = aMgr.GetSoundThrow("SOUND_BOOK0_CH1_WARMUP");
		SOUND_CYMBALCRASH = aMgr.GetSoundThrow("SOUND_CYMBALCRASH");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// book0Init Resources
Image* Sexy::IMAGE_B0_ICONANIM1;
Image* Sexy::IMAGE_B0_ICONANIM10;
Image* Sexy::IMAGE_B0_ICONANIM2;
Image* Sexy::IMAGE_B0_ICONANIM3;
Image* Sexy::IMAGE_B0_ICONANIM4;
Image* Sexy::IMAGE_B0_ICONANIM5;
Image* Sexy::IMAGE_B0_ICONANIM6;
Image* Sexy::IMAGE_B0_ICONANIM7;
Image* Sexy::IMAGE_B0_ICONANIM8;
Image* Sexy::IMAGE_B0_ICONANIM9;
Image* Sexy::IMAGE_B0_ICONMASK1;
Image* Sexy::IMAGE_B0_ICONMASK10;
Image* Sexy::IMAGE_B0_ICONMASK2;
Image* Sexy::IMAGE_B0_ICONMASK3;
Image* Sexy::IMAGE_B0_ICONMASK4;
Image* Sexy::IMAGE_B0_ICONMASK5;
Image* Sexy::IMAGE_B0_ICONMASK6;
Image* Sexy::IMAGE_B0_ICONMASK7;
Image* Sexy::IMAGE_B0_ICONMASK8;
Image* Sexy::IMAGE_B0_ICONMASK9;
Image* Sexy::IMAGE_B0_MAP;
Image* Sexy::IMAGE_B0_MAPSCREEN_BANNER;
Image* Sexy::IMAGE_B0_MINIMAP_ICONS;
Image* Sexy::IMAGE_TUT_PIC_STUFFY;

bool Sexy::Extractbook0InitResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_B0_ICONANIM1 = aMgr.GetImageThrow("IMAGE_B0_ICONANIM1");
		IMAGE_B0_ICONANIM10 = aMgr.GetImageThrow("IMAGE_B0_ICONANIM10");
		IMAGE_B0_ICONANIM2 = aMgr.GetImageThrow("IMAGE_B0_ICONANIM2");
		IMAGE_B0_ICONANIM3 = aMgr.GetImageThrow("IMAGE_B0_ICONANIM3");
		IMAGE_B0_ICONANIM4 = aMgr.GetImageThrow("IMAGE_B0_ICONANIM4");
		IMAGE_B0_ICONANIM5 = aMgr.GetImageThrow("IMAGE_B0_ICONANIM5");
		IMAGE_B0_ICONANIM6 = aMgr.GetImageThrow("IMAGE_B0_ICONANIM6");
		IMAGE_B0_ICONANIM7 = aMgr.GetImageThrow("IMAGE_B0_ICONANIM7");
		IMAGE_B0_ICONANIM8 = aMgr.GetImageThrow("IMAGE_B0_ICONANIM8");
		IMAGE_B0_ICONANIM9 = aMgr.GetImageThrow("IMAGE_B0_ICONANIM9");
		IMAGE_B0_ICONMASK1 = aMgr.GetImageThrow("IMAGE_B0_ICONMASK1");
		IMAGE_B0_ICONMASK10 = aMgr.GetImageThrow("IMAGE_B0_ICONMASK10");
		IMAGE_B0_ICONMASK2 = aMgr.GetImageThrow("IMAGE_B0_ICONMASK2");
		IMAGE_B0_ICONMASK3 = aMgr.GetImageThrow("IMAGE_B0_ICONMASK3");
		IMAGE_B0_ICONMASK4 = aMgr.GetImageThrow("IMAGE_B0_ICONMASK4");
		IMAGE_B0_ICONMASK5 = aMgr.GetImageThrow("IMAGE_B0_ICONMASK5");
		IMAGE_B0_ICONMASK6 = aMgr.GetImageThrow("IMAGE_B0_ICONMASK6");
		IMAGE_B0_ICONMASK7 = aMgr.GetImageThrow("IMAGE_B0_ICONMASK7");
		IMAGE_B0_ICONMASK8 = aMgr.GetImageThrow("IMAGE_B0_ICONMASK8");
		IMAGE_B0_ICONMASK9 = aMgr.GetImageThrow("IMAGE_B0_ICONMASK9");
		IMAGE_B0_MAP = aMgr.GetImageThrow("IMAGE_B0_MAP");
		IMAGE_B0_MAPSCREEN_BANNER = aMgr.GetImageThrow("IMAGE_B0_MAPSCREEN_BANNER");
		IMAGE_B0_MINIMAP_ICONS = aMgr.GetImageThrow("IMAGE_B0_MINIMAP_ICONS");
		IMAGE_TUT_PIC_STUFFY = aMgr.GetImageThrow("IMAGE_TUT_PIC_STUFFY");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

static void* gResources[] =
{
	&IMAGE_B0_MINIMAP_ICONS,
	&IMAGE_B0_MAPSCREEN_BANNER,
	&IMAGE_B0_ICONANIM1,
	&IMAGE_B0_ICONANIM2,
	&IMAGE_B0_ICONANIM3,
	&IMAGE_B0_ICONANIM4,
	&IMAGE_B0_ICONANIM5,
	&IMAGE_B0_ICONANIM6,
	&IMAGE_B0_ICONANIM7,
	&IMAGE_B0_ICONANIM8,
	&IMAGE_B0_ICONANIM9,
	&IMAGE_B0_ICONANIM10,
	&IMAGE_B0_ICONMASK1,
	&IMAGE_B0_ICONMASK2,
	&IMAGE_B0_ICONMASK3,
	&IMAGE_B0_ICONMASK4,
	&IMAGE_B0_ICONMASK5,
	&IMAGE_B0_ICONMASK6,
	&IMAGE_B0_ICONMASK7,
	&IMAGE_B0_ICONMASK8,
	&IMAGE_B0_ICONMASK9,
	&IMAGE_B0_ICONMASK10,
	&IMAGE_B0_MAP,
	&IMAGE_TUT_PIC_STUFFY,
	&IMAGE_B0_LEFT_FACING_ARROW,
	&IMAGE_B0A_BG1,
	&IMAGE_B0A_STUFFY_BOSS_BATTLE,
	&SOUND_BOOK0_CH1_SMOKE_ATTACK,
	&SOUND_BOOK0_CH1_SMOKE_ATTACK2,
	&SOUND_BOOK0_CH1_SMOKE_IMPACT,
	&SOUND_BOOK0_CH1_MALE_LAUGH,
	&SOUND_BOOK0_CH1_MALE_LAUGH2,
	&SOUND_BOOK0_CH1_WARMUP,
	&SOUND_CYMBALCRASH,
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
		case IMAGE_B0_MINIMAP_ICONS_ID: return "IMAGE_B0_MINIMAP_ICONS";
		case IMAGE_B0_MAPSCREEN_BANNER_ID: return "IMAGE_B0_MAPSCREEN_BANNER";
		case IMAGE_B0_ICONANIM1_ID: return "IMAGE_B0_ICONANIM1";
		case IMAGE_B0_ICONANIM2_ID: return "IMAGE_B0_ICONANIM2";
		case IMAGE_B0_ICONANIM3_ID: return "IMAGE_B0_ICONANIM3";
		case IMAGE_B0_ICONANIM4_ID: return "IMAGE_B0_ICONANIM4";
		case IMAGE_B0_ICONANIM5_ID: return "IMAGE_B0_ICONANIM5";
		case IMAGE_B0_ICONANIM6_ID: return "IMAGE_B0_ICONANIM6";
		case IMAGE_B0_ICONANIM7_ID: return "IMAGE_B0_ICONANIM7";
		case IMAGE_B0_ICONANIM8_ID: return "IMAGE_B0_ICONANIM8";
		case IMAGE_B0_ICONANIM9_ID: return "IMAGE_B0_ICONANIM9";
		case IMAGE_B0_ICONANIM10_ID: return "IMAGE_B0_ICONANIM10";
		case IMAGE_B0_ICONMASK1_ID: return "IMAGE_B0_ICONMASK1";
		case IMAGE_B0_ICONMASK2_ID: return "IMAGE_B0_ICONMASK2";
		case IMAGE_B0_ICONMASK3_ID: return "IMAGE_B0_ICONMASK3";
		case IMAGE_B0_ICONMASK4_ID: return "IMAGE_B0_ICONMASK4";
		case IMAGE_B0_ICONMASK5_ID: return "IMAGE_B0_ICONMASK5";
		case IMAGE_B0_ICONMASK6_ID: return "IMAGE_B0_ICONMASK6";
		case IMAGE_B0_ICONMASK7_ID: return "IMAGE_B0_ICONMASK7";
		case IMAGE_B0_ICONMASK8_ID: return "IMAGE_B0_ICONMASK8";
		case IMAGE_B0_ICONMASK9_ID: return "IMAGE_B0_ICONMASK9";
		case IMAGE_B0_ICONMASK10_ID: return "IMAGE_B0_ICONMASK10";
		case IMAGE_B0_MAP_ID: return "IMAGE_B0_MAP";
		case IMAGE_TUT_PIC_STUFFY_ID: return "IMAGE_TUT_PIC_STUFFY";
		case IMAGE_B0_LEFT_FACING_ARROW_ID: return "IMAGE_B0_LEFT_FACING_ARROW";
		case IMAGE_B0A_BG1_ID: return "IMAGE_B0A_BG1";
		case IMAGE_B0A_STUFFY_BOSS_BATTLE_ID: return "IMAGE_B0A_STUFFY_BOSS_BATTLE";
		case SOUND_BOOK0_CH1_SMOKE_ATTACK_ID: return "SOUND_BOOK0_CH1_SMOKE_ATTACK";
		case SOUND_BOOK0_CH1_SMOKE_ATTACK2_ID: return "SOUND_BOOK0_CH1_SMOKE_ATTACK2";
		case SOUND_BOOK0_CH1_SMOKE_IMPACT_ID: return "SOUND_BOOK0_CH1_SMOKE_IMPACT";
		case SOUND_BOOK0_CH1_MALE_LAUGH_ID: return "SOUND_BOOK0_CH1_MALE_LAUGH";
		case SOUND_BOOK0_CH1_MALE_LAUGH2_ID: return "SOUND_BOOK0_CH1_MALE_LAUGH2";
		case SOUND_BOOK0_CH1_WARMUP_ID: return "SOUND_BOOK0_CH1_WARMUP";
		case SOUND_CYMBALCRASH_ID: return "SOUND_CYMBALCRASH";
		default: return "";
	}
}

