#include "Book4Treasures.h"
#include "SexyAppFramework/ResourceManager.h"

using namespace Sexy;

#pragma warning(disable:4311 4312)

static bool gNeedRecalcVariableToIdMap = false;

bool Sexy::ExtractResourcesByName(ResourceManager *theManager, const char *theName)
{
	if (strcmp(theName,"Book4Treasures")==0) return ExtractBook4TreasuresResources(theManager);
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

// Book4Treasures Resources
Image* Sexy::IMAGE_TREASURE_4_10_SML;
Image* Sexy::IMAGE_TREASURE_4_1_SML;
Image* Sexy::IMAGE_TREASURE_4_2_SML;
Image* Sexy::IMAGE_TREASURE_4_3_EQUIP;
Image* Sexy::IMAGE_TREASURE_4_3_SML;
Image* Sexy::IMAGE_TREASURE_4_3_UI;
Image* Sexy::IMAGE_TREASURE_4_4_SML;
Image* Sexy::IMAGE_TREASURE_4_5_SML;
Image* Sexy::IMAGE_TREASURE_4_6_SML;
Image* Sexy::IMAGE_TREASURE_4_7_EQUIP;
Image* Sexy::IMAGE_TREASURE_4_7_SML;
Image* Sexy::IMAGE_TREASURE_4_7_UI;
Image* Sexy::IMAGE_TREASURE_4_8_SML;
Image* Sexy::IMAGE_TREASURE_4_9_SML;
Image* Sexy::IMAGE_TREASURE_TITLES_B4;

bool Sexy::ExtractBook4TreasuresResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_TREASURE_4_10_SML = aMgr.GetImageThrow("IMAGE_TREASURE_4_10_SML");
		IMAGE_TREASURE_4_1_SML = aMgr.GetImageThrow("IMAGE_TREASURE_4_1_SML");
		IMAGE_TREASURE_4_2_SML = aMgr.GetImageThrow("IMAGE_TREASURE_4_2_SML");
		IMAGE_TREASURE_4_3_EQUIP = aMgr.GetImageThrow("IMAGE_TREASURE_4_3_EQUIP");
		IMAGE_TREASURE_4_3_SML = aMgr.GetImageThrow("IMAGE_TREASURE_4_3_SML");
		IMAGE_TREASURE_4_3_UI = aMgr.GetImageThrow("IMAGE_TREASURE_4_3_UI");
		IMAGE_TREASURE_4_4_SML = aMgr.GetImageThrow("IMAGE_TREASURE_4_4_SML");
		IMAGE_TREASURE_4_5_SML = aMgr.GetImageThrow("IMAGE_TREASURE_4_5_SML");
		IMAGE_TREASURE_4_6_SML = aMgr.GetImageThrow("IMAGE_TREASURE_4_6_SML");
		IMAGE_TREASURE_4_7_EQUIP = aMgr.GetImageThrow("IMAGE_TREASURE_4_7_EQUIP");
		IMAGE_TREASURE_4_7_SML = aMgr.GetImageThrow("IMAGE_TREASURE_4_7_SML");
		IMAGE_TREASURE_4_7_UI = aMgr.GetImageThrow("IMAGE_TREASURE_4_7_UI");
		IMAGE_TREASURE_4_8_SML = aMgr.GetImageThrow("IMAGE_TREASURE_4_8_SML");
		IMAGE_TREASURE_4_9_SML = aMgr.GetImageThrow("IMAGE_TREASURE_4_9_SML");
		IMAGE_TREASURE_TITLES_B4 = aMgr.GetImageThrow("IMAGE_TREASURE_TITLES_B4");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

static void* gResources[] =
{
	&IMAGE_TREASURE_4_1_SML,
	&IMAGE_TREASURE_4_2_SML,
	&IMAGE_TREASURE_4_3_SML,
	&IMAGE_TREASURE_4_4_SML,
	&IMAGE_TREASURE_4_5_SML,
	&IMAGE_TREASURE_4_6_SML,
	&IMAGE_TREASURE_4_7_SML,
	&IMAGE_TREASURE_4_8_SML,
	&IMAGE_TREASURE_4_9_SML,
	&IMAGE_TREASURE_4_10_SML,
	&IMAGE_TREASURE_4_3_UI,
	&IMAGE_TREASURE_4_7_UI,
	&IMAGE_TREASURE_4_3_EQUIP,
	&IMAGE_TREASURE_4_7_EQUIP,
	&IMAGE_TREASURE_TITLES_B4,
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
		case IMAGE_TREASURE_4_1_SML_ID: return "IMAGE_TREASURE_4_1_SML";
		case IMAGE_TREASURE_4_2_SML_ID: return "IMAGE_TREASURE_4_2_SML";
		case IMAGE_TREASURE_4_3_SML_ID: return "IMAGE_TREASURE_4_3_SML";
		case IMAGE_TREASURE_4_4_SML_ID: return "IMAGE_TREASURE_4_4_SML";
		case IMAGE_TREASURE_4_5_SML_ID: return "IMAGE_TREASURE_4_5_SML";
		case IMAGE_TREASURE_4_6_SML_ID: return "IMAGE_TREASURE_4_6_SML";
		case IMAGE_TREASURE_4_7_SML_ID: return "IMAGE_TREASURE_4_7_SML";
		case IMAGE_TREASURE_4_8_SML_ID: return "IMAGE_TREASURE_4_8_SML";
		case IMAGE_TREASURE_4_9_SML_ID: return "IMAGE_TREASURE_4_9_SML";
		case IMAGE_TREASURE_4_10_SML_ID: return "IMAGE_TREASURE_4_10_SML";
		case IMAGE_TREASURE_4_3_UI_ID: return "IMAGE_TREASURE_4_3_UI";
		case IMAGE_TREASURE_4_7_UI_ID: return "IMAGE_TREASURE_4_7_UI";
		case IMAGE_TREASURE_4_3_EQUIP_ID: return "IMAGE_TREASURE_4_3_EQUIP";
		case IMAGE_TREASURE_4_7_EQUIP_ID: return "IMAGE_TREASURE_4_7_EQUIP";
		case IMAGE_TREASURE_TITLES_B4_ID: return "IMAGE_TREASURE_TITLES_B4";
		default: return "";
	}
}

