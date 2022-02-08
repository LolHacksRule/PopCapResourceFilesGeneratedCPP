#include "Tiles.h"
#include "SexyAppFramework/ResourceManager.h"

using namespace Sexy;

#pragma warning(disable:4311 4312)

static bool gNeedRecalcVariableToIdMap = false;

bool Sexy::ExtractResourcesByName(ResourceManager *theManager, const char *theName)
{
	if (strcmp(theName,"Init_DefaultTiles")==0) return ExtractInit_DefaultTilesResources(theManager);
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

// Init_DefaultTiles Resources
Image* Sexy::IMAGE_TILE_AMETHYST;
Image* Sexy::IMAGE_TILE_AMETHYST_GLOW;
Image* Sexy::IMAGE_TILE_AMETHYST_MO;
Image* Sexy::IMAGE_TILE_CRYSTAL;
Image* Sexy::IMAGE_TILE_CRYSTAL_GLOW;
Image* Sexy::IMAGE_TILE_CRYSTAL_MO;
Image* Sexy::IMAGE_TILE_DESTROYED;
Image* Sexy::IMAGE_TILE_DIAMOND;
Image* Sexy::IMAGE_TILE_DIAMOND_GLOW;
Image* Sexy::IMAGE_TILE_DIAMOND_MO;
Image* Sexy::IMAGE_TILE_EMERALD;
Image* Sexy::IMAGE_TILE_EMERALD_GLOW;
Image* Sexy::IMAGE_TILE_EMERALD_MO;
Image* Sexy::IMAGE_TILE_FIRE;
Image* Sexy::IMAGE_TILE_FIRE_CHARRED;
Image* Sexy::IMAGE_TILE_FIRE_GLOW;
Image* Sexy::IMAGE_TILE_GARNET;
Image* Sexy::IMAGE_TILE_GARNET_GLOW;
Image* Sexy::IMAGE_TILE_GARNET_MO;
Image* Sexy::IMAGE_TILE_LOCKED;
Image* Sexy::IMAGE_TILE_PLAGUED;
Image* Sexy::IMAGE_TILE_RUBY;
Image* Sexy::IMAGE_TILE_RUBY_GLOW;
Image* Sexy::IMAGE_TILE_RUBY_MO;
Image* Sexy::IMAGE_TILE_SAPPHIRE;
Image* Sexy::IMAGE_TILE_SAPPHIRE_GLOW;
Image* Sexy::IMAGE_TILE_SAPPHIRE_MO;
Image* Sexy::IMAGE_TILE_TOPAZ;
Image* Sexy::IMAGE_TILE_TOPAZ_GLOW;
Image* Sexy::IMAGE_TILE_TOPAZ_MO;

bool Sexy::ExtractInit_DefaultTilesResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_TILE_AMETHYST = aMgr.GetImageThrow("IMAGE_TILE_AMETHYST");
		IMAGE_TILE_AMETHYST_GLOW = aMgr.GetImageThrow("IMAGE_TILE_AMETHYST_GLOW");
		IMAGE_TILE_AMETHYST_MO = aMgr.GetImageThrow("IMAGE_TILE_AMETHYST_MO");
		IMAGE_TILE_CRYSTAL = aMgr.GetImageThrow("IMAGE_TILE_CRYSTAL");
		IMAGE_TILE_CRYSTAL_GLOW = aMgr.GetImageThrow("IMAGE_TILE_CRYSTAL_GLOW");
		IMAGE_TILE_CRYSTAL_MO = aMgr.GetImageThrow("IMAGE_TILE_CRYSTAL_MO");
		IMAGE_TILE_DESTROYED = aMgr.GetImageThrow("IMAGE_TILE_DESTROYED");
		IMAGE_TILE_DIAMOND = aMgr.GetImageThrow("IMAGE_TILE_DIAMOND");
		IMAGE_TILE_DIAMOND_GLOW = aMgr.GetImageThrow("IMAGE_TILE_DIAMOND_GLOW");
		IMAGE_TILE_DIAMOND_MO = aMgr.GetImageThrow("IMAGE_TILE_DIAMOND_MO");
		IMAGE_TILE_EMERALD = aMgr.GetImageThrow("IMAGE_TILE_EMERALD");
		IMAGE_TILE_EMERALD_GLOW = aMgr.GetImageThrow("IMAGE_TILE_EMERALD_GLOW");
		IMAGE_TILE_EMERALD_MO = aMgr.GetImageThrow("IMAGE_TILE_EMERALD_MO");
		IMAGE_TILE_FIRE = aMgr.GetImageThrow("IMAGE_TILE_FIRE");
		IMAGE_TILE_FIRE_CHARRED = aMgr.GetImageThrow("IMAGE_TILE_FIRE_CHARRED");
		IMAGE_TILE_FIRE_GLOW = aMgr.GetImageThrow("IMAGE_TILE_FIRE_GLOW");
		IMAGE_TILE_GARNET = aMgr.GetImageThrow("IMAGE_TILE_GARNET");
		IMAGE_TILE_GARNET_GLOW = aMgr.GetImageThrow("IMAGE_TILE_GARNET_GLOW");
		IMAGE_TILE_GARNET_MO = aMgr.GetImageThrow("IMAGE_TILE_GARNET_MO");
		IMAGE_TILE_LOCKED = aMgr.GetImageThrow("IMAGE_TILE_LOCKED");
		IMAGE_TILE_PLAGUED = aMgr.GetImageThrow("IMAGE_TILE_PLAGUED");
		IMAGE_TILE_RUBY = aMgr.GetImageThrow("IMAGE_TILE_RUBY");
		IMAGE_TILE_RUBY_GLOW = aMgr.GetImageThrow("IMAGE_TILE_RUBY_GLOW");
		IMAGE_TILE_RUBY_MO = aMgr.GetImageThrow("IMAGE_TILE_RUBY_MO");
		IMAGE_TILE_SAPPHIRE = aMgr.GetImageThrow("IMAGE_TILE_SAPPHIRE");
		IMAGE_TILE_SAPPHIRE_GLOW = aMgr.GetImageThrow("IMAGE_TILE_SAPPHIRE_GLOW");
		IMAGE_TILE_SAPPHIRE_MO = aMgr.GetImageThrow("IMAGE_TILE_SAPPHIRE_MO");
		IMAGE_TILE_TOPAZ = aMgr.GetImageThrow("IMAGE_TILE_TOPAZ");
		IMAGE_TILE_TOPAZ_GLOW = aMgr.GetImageThrow("IMAGE_TILE_TOPAZ_GLOW");
		IMAGE_TILE_TOPAZ_MO = aMgr.GetImageThrow("IMAGE_TILE_TOPAZ_MO");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

static void* gResources[] =
{
	&IMAGE_TILE_AMETHYST,
	&IMAGE_TILE_AMETHYST_MO,
	&IMAGE_TILE_AMETHYST_GLOW,
	&IMAGE_TILE_CRYSTAL,
	&IMAGE_TILE_CRYSTAL_MO,
	&IMAGE_TILE_CRYSTAL_GLOW,
	&IMAGE_TILE_DESTROYED,
	&IMAGE_TILE_PLAGUED,
	&IMAGE_TILE_DIAMOND,
	&IMAGE_TILE_DIAMOND_MO,
	&IMAGE_TILE_DIAMOND_GLOW,
	&IMAGE_TILE_EMERALD,
	&IMAGE_TILE_EMERALD_MO,
	&IMAGE_TILE_EMERALD_GLOW,
	&IMAGE_TILE_FIRE,
	&IMAGE_TILE_FIRE_CHARRED,
	&IMAGE_TILE_FIRE_GLOW,
	&IMAGE_TILE_GARNET,
	&IMAGE_TILE_GARNET_MO,
	&IMAGE_TILE_GARNET_GLOW,
	&IMAGE_TILE_LOCKED,
	&IMAGE_TILE_RUBY,
	&IMAGE_TILE_RUBY_MO,
	&IMAGE_TILE_RUBY_GLOW,
	&IMAGE_TILE_SAPPHIRE,
	&IMAGE_TILE_SAPPHIRE_MO,
	&IMAGE_TILE_SAPPHIRE_GLOW,
	&IMAGE_TILE_TOPAZ,
	&IMAGE_TILE_TOPAZ_MO,
	&IMAGE_TILE_TOPAZ_GLOW,
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
		case IMAGE_TILE_AMETHYST_ID: return "IMAGE_TILE_AMETHYST";
		case IMAGE_TILE_AMETHYST_MO_ID: return "IMAGE_TILE_AMETHYST_MO";
		case IMAGE_TILE_AMETHYST_GLOW_ID: return "IMAGE_TILE_AMETHYST_GLOW";
		case IMAGE_TILE_CRYSTAL_ID: return "IMAGE_TILE_CRYSTAL";
		case IMAGE_TILE_CRYSTAL_MO_ID: return "IMAGE_TILE_CRYSTAL_MO";
		case IMAGE_TILE_CRYSTAL_GLOW_ID: return "IMAGE_TILE_CRYSTAL_GLOW";
		case IMAGE_TILE_DESTROYED_ID: return "IMAGE_TILE_DESTROYED";
		case IMAGE_TILE_PLAGUED_ID: return "IMAGE_TILE_PLAGUED";
		case IMAGE_TILE_DIAMOND_ID: return "IMAGE_TILE_DIAMOND";
		case IMAGE_TILE_DIAMOND_MO_ID: return "IMAGE_TILE_DIAMOND_MO";
		case IMAGE_TILE_DIAMOND_GLOW_ID: return "IMAGE_TILE_DIAMOND_GLOW";
		case IMAGE_TILE_EMERALD_ID: return "IMAGE_TILE_EMERALD";
		case IMAGE_TILE_EMERALD_MO_ID: return "IMAGE_TILE_EMERALD_MO";
		case IMAGE_TILE_EMERALD_GLOW_ID: return "IMAGE_TILE_EMERALD_GLOW";
		case IMAGE_TILE_FIRE_ID: return "IMAGE_TILE_FIRE";
		case IMAGE_TILE_FIRE_CHARRED_ID: return "IMAGE_TILE_FIRE_CHARRED";
		case IMAGE_TILE_FIRE_GLOW_ID: return "IMAGE_TILE_FIRE_GLOW";
		case IMAGE_TILE_GARNET_ID: return "IMAGE_TILE_GARNET";
		case IMAGE_TILE_GARNET_MO_ID: return "IMAGE_TILE_GARNET_MO";
		case IMAGE_TILE_GARNET_GLOW_ID: return "IMAGE_TILE_GARNET_GLOW";
		case IMAGE_TILE_LOCKED_ID: return "IMAGE_TILE_LOCKED";
		case IMAGE_TILE_RUBY_ID: return "IMAGE_TILE_RUBY";
		case IMAGE_TILE_RUBY_MO_ID: return "IMAGE_TILE_RUBY_MO";
		case IMAGE_TILE_RUBY_GLOW_ID: return "IMAGE_TILE_RUBY_GLOW";
		case IMAGE_TILE_SAPPHIRE_ID: return "IMAGE_TILE_SAPPHIRE";
		case IMAGE_TILE_SAPPHIRE_MO_ID: return "IMAGE_TILE_SAPPHIRE_MO";
		case IMAGE_TILE_SAPPHIRE_GLOW_ID: return "IMAGE_TILE_SAPPHIRE_GLOW";
		case IMAGE_TILE_TOPAZ_ID: return "IMAGE_TILE_TOPAZ";
		case IMAGE_TILE_TOPAZ_MO_ID: return "IMAGE_TILE_TOPAZ_MO";
		case IMAGE_TILE_TOPAZ_GLOW_ID: return "IMAGE_TILE_TOPAZ_GLOW";
		default: return "";
	}
}

