#include "DefaultTreasures.h"
#include "SexyAppFramework/ResourceManager.h"

using namespace Sexy;

#pragma warning(disable:4311 4312)

static bool gNeedRecalcVariableToIdMap = false;

bool Sexy::ExtractResourcesByName(ResourceManager *theManager, const char *theName)
{
	if (strcmp(theName,"Init_DefaultTreasures")==0) return ExtractInit_DefaultTreasuresResources(theManager);
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

// Init_DefaultTreasures Resources
Image* Sexy::IMAGE_NEW_TREASURE_TITLE;
Image* Sexy::IMAGE_SELECT_TREASURES;
Image* Sexy::IMAGE_TREASURES_SELECTED;
Image* Sexy::IMAGE_TREASURE_1_10_SML;
Image* Sexy::IMAGE_TREASURE_1_1_SML;
Image* Sexy::IMAGE_TREASURE_1_2_SML;
Image* Sexy::IMAGE_TREASURE_1_3_SML;
Image* Sexy::IMAGE_TREASURE_1_4_SML;
Image* Sexy::IMAGE_TREASURE_1_5_SML;
Image* Sexy::IMAGE_TREASURE_1_6_SML;
Image* Sexy::IMAGE_TREASURE_1_7_SML;
Image* Sexy::IMAGE_TREASURE_1_8_SML;
Image* Sexy::IMAGE_TREASURE_1_9_SML;
Image* Sexy::IMAGE_TREASURE_TITLES_B1;

bool Sexy::ExtractInit_DefaultTreasuresResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_NEW_TREASURE_TITLE = aMgr.GetImageThrow("IMAGE_NEW_TREASURE_TITLE");
		IMAGE_SELECT_TREASURES = aMgr.GetImageThrow("IMAGE_SELECT_TREASURES");
		IMAGE_TREASURES_SELECTED = aMgr.GetImageThrow("IMAGE_TREASURES_SELECTED");
		IMAGE_TREASURE_1_10_SML = aMgr.GetImageThrow("IMAGE_TREASURE_1_10_SML");
		IMAGE_TREASURE_1_1_SML = aMgr.GetImageThrow("IMAGE_TREASURE_1_1_SML");
		IMAGE_TREASURE_1_2_SML = aMgr.GetImageThrow("IMAGE_TREASURE_1_2_SML");
		IMAGE_TREASURE_1_3_SML = aMgr.GetImageThrow("IMAGE_TREASURE_1_3_SML");
		IMAGE_TREASURE_1_4_SML = aMgr.GetImageThrow("IMAGE_TREASURE_1_4_SML");
		IMAGE_TREASURE_1_5_SML = aMgr.GetImageThrow("IMAGE_TREASURE_1_5_SML");
		IMAGE_TREASURE_1_6_SML = aMgr.GetImageThrow("IMAGE_TREASURE_1_6_SML");
		IMAGE_TREASURE_1_7_SML = aMgr.GetImageThrow("IMAGE_TREASURE_1_7_SML");
		IMAGE_TREASURE_1_8_SML = aMgr.GetImageThrow("IMAGE_TREASURE_1_8_SML");
		IMAGE_TREASURE_1_9_SML = aMgr.GetImageThrow("IMAGE_TREASURE_1_9_SML");
		IMAGE_TREASURE_TITLES_B1 = aMgr.GetImageThrow("IMAGE_TREASURE_TITLES_B1");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

static void* gResources[] =
{
	&IMAGE_TREASURE_1_1_SML,
	&IMAGE_TREASURE_1_2_SML,
	&IMAGE_TREASURE_1_3_SML,
	&IMAGE_TREASURE_1_4_SML,
	&IMAGE_TREASURE_1_5_SML,
	&IMAGE_TREASURE_1_6_SML,
	&IMAGE_TREASURE_1_7_SML,
	&IMAGE_TREASURE_1_8_SML,
	&IMAGE_TREASURE_1_9_SML,
	&IMAGE_TREASURE_1_10_SML,
	&IMAGE_SELECT_TREASURES,
	&IMAGE_TREASURES_SELECTED,
	&IMAGE_TREASURE_TITLES_B1,
	&IMAGE_NEW_TREASURE_TITLE,
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
		case IMAGE_TREASURE_1_1_SML_ID: return "IMAGE_TREASURE_1_1_SML";
		case IMAGE_TREASURE_1_2_SML_ID: return "IMAGE_TREASURE_1_2_SML";
		case IMAGE_TREASURE_1_3_SML_ID: return "IMAGE_TREASURE_1_3_SML";
		case IMAGE_TREASURE_1_4_SML_ID: return "IMAGE_TREASURE_1_4_SML";
		case IMAGE_TREASURE_1_5_SML_ID: return "IMAGE_TREASURE_1_5_SML";
		case IMAGE_TREASURE_1_6_SML_ID: return "IMAGE_TREASURE_1_6_SML";
		case IMAGE_TREASURE_1_7_SML_ID: return "IMAGE_TREASURE_1_7_SML";
		case IMAGE_TREASURE_1_8_SML_ID: return "IMAGE_TREASURE_1_8_SML";
		case IMAGE_TREASURE_1_9_SML_ID: return "IMAGE_TREASURE_1_9_SML";
		case IMAGE_TREASURE_1_10_SML_ID: return "IMAGE_TREASURE_1_10_SML";
		case IMAGE_SELECT_TREASURES_ID: return "IMAGE_SELECT_TREASURES";
		case IMAGE_TREASURES_SELECTED_ID: return "IMAGE_TREASURES_SELECTED";
		case IMAGE_TREASURE_TITLES_B1_ID: return "IMAGE_TREASURE_TITLES_B1";
		case IMAGE_NEW_TREASURE_TITLE_ID: return "IMAGE_NEW_TREASURE_TITLE";
		default: return "";
	}
}

