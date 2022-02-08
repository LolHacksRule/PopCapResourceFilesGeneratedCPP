#include "InitialMiniGames.h"
#include "SexyAppFramework/ResourceManager.h"

using namespace Sexy;

#pragma warning(disable:4311 4312)

static bool gNeedRecalcVariableToIdMap = false;

bool Sexy::ExtractResourcesByName(ResourceManager *theManager, const char *theName)
{
	if (strcmp(theName,"InitialMiniGames")==0) return ExtractInitialMiniGamesResources(theManager);
	if (strcmp(theName,"MiniGame1")==0) return ExtractMiniGame1Resources(theManager);
	if (strcmp(theName,"MiniGame2")==0) return ExtractMiniGame2Resources(theManager);
	if (strcmp(theName,"MiniGame3")==0) return ExtractMiniGame3Resources(theManager);
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

// InitialMiniGames Resources
Image* Sexy::IMAGE_MINIMENU_LETTER_RIP_BTN;
Image* Sexy::IMAGE_MINIMENU_LINKNSPELL_BTN;
Image* Sexy::IMAGE_MINIMENU_WORDMASTER_BTN;

bool Sexy::ExtractInitialMiniGamesResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_MINIMENU_LETTER_RIP_BTN = aMgr.GetImageThrow("IMAGE_MINIMENU_LETTER_RIP_BTN");
		IMAGE_MINIMENU_LINKNSPELL_BTN = aMgr.GetImageThrow("IMAGE_MINIMENU_LINKNSPELL_BTN");
		IMAGE_MINIMENU_WORDMASTER_BTN = aMgr.GetImageThrow("IMAGE_MINIMENU_WORDMASTER_BTN");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// MiniGame1 Resources
Image* Sexy::IMAGE_MINIGAME1_BRACKET;
Image* Sexy::IMAGE_MINIGAME1_ENTRY_BOXES;
Image* Sexy::IMAGE_MINIGAME1_LABEL_TURNS;
Image* Sexy::IMAGE_MINIGAME1_LEGEND;
Image* Sexy::IMAGE_MINIGAME1_TAB_LEFT_DARK;
Image* Sexy::IMAGE_MINIGAME1_TAB_LEFT_LIT;
Image* Sexy::IMAGE_MINIGAME1_TILE_GOLD;
Image* Sexy::IMAGE_MINIGAME1_TILE_RED;
Image* Sexy::IMAGE_MINIGAME1_TILE_SILVER;
Image* Sexy::IMAGE_MINIGAME1_TITLE_WORDMASTER;
Image* Sexy::IMAGE_MINIGAME1_TURN_NUMBERS;
Image* Sexy::IMAGE_MINIGAME1_X_CHECK;

bool Sexy::ExtractMiniGame1Resources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_MINIGAME1_BRACKET = aMgr.GetImageThrow("IMAGE_MINIGAME1_BRACKET");
		IMAGE_MINIGAME1_ENTRY_BOXES = aMgr.GetImageThrow("IMAGE_MINIGAME1_ENTRY_BOXES");
		IMAGE_MINIGAME1_LABEL_TURNS = aMgr.GetImageThrow("IMAGE_MINIGAME1_LABEL_TURNS");
		IMAGE_MINIGAME1_LEGEND = aMgr.GetImageThrow("IMAGE_MINIGAME1_LEGEND");
		IMAGE_MINIGAME1_TAB_LEFT_DARK = aMgr.GetImageThrow("IMAGE_MINIGAME1_TAB_LEFT_DARK");
		IMAGE_MINIGAME1_TAB_LEFT_LIT = aMgr.GetImageThrow("IMAGE_MINIGAME1_TAB_LEFT_LIT");
		IMAGE_MINIGAME1_TILE_GOLD = aMgr.GetImageThrow("IMAGE_MINIGAME1_TILE_GOLD");
		IMAGE_MINIGAME1_TILE_RED = aMgr.GetImageThrow("IMAGE_MINIGAME1_TILE_RED");
		IMAGE_MINIGAME1_TILE_SILVER = aMgr.GetImageThrow("IMAGE_MINIGAME1_TILE_SILVER");
		IMAGE_MINIGAME1_TITLE_WORDMASTER = aMgr.GetImageThrow("IMAGE_MINIGAME1_TITLE_WORDMASTER");
		IMAGE_MINIGAME1_TURN_NUMBERS = aMgr.GetImageThrow("IMAGE_MINIGAME1_TURN_NUMBERS");
		IMAGE_MINIGAME1_X_CHECK = aMgr.GetImageThrow("IMAGE_MINIGAME1_X_CHECK");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// MiniGame2 Resources
Image* Sexy::IMAGE_MINIGAME2_GOLD_FILL;
Image* Sexy::IMAGE_MINIGAME2_LABEL_TIME;
Image* Sexy::IMAGE_MINIGAME2_SPELLING_BOX;
Image* Sexy::IMAGE_MINIGAME2_TIMER_FILLBAR;
Image* Sexy::IMAGE_MINIGAME2_TIMER_LEFT;
Image* Sexy::IMAGE_MINIGAME2_TITLE;

bool Sexy::ExtractMiniGame2Resources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_MINIGAME2_GOLD_FILL = aMgr.GetImageThrow("IMAGE_MINIGAME2_GOLD_FILL");
		IMAGE_MINIGAME2_LABEL_TIME = aMgr.GetImageThrow("IMAGE_MINIGAME2_LABEL_TIME");
		IMAGE_MINIGAME2_SPELLING_BOX = aMgr.GetImageThrow("IMAGE_MINIGAME2_SPELLING_BOX");
		IMAGE_MINIGAME2_TIMER_FILLBAR = aMgr.GetImageThrow("IMAGE_MINIGAME2_TIMER_FILLBAR");
		IMAGE_MINIGAME2_TIMER_LEFT = aMgr.GetImageThrow("IMAGE_MINIGAME2_TIMER_LEFT");
		IMAGE_MINIGAME2_TITLE = aMgr.GetImageThrow("IMAGE_MINIGAME2_TITLE");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// MiniGame3 Resources
Image* Sexy::IMAGE_MINIGAME3_BRACKET;
Image* Sexy::IMAGE_MINIGAME3_ENTRY_BOXES;
Image* Sexy::IMAGE_MINIGAME3_LABEL_TIME;
Image* Sexy::IMAGE_MINIGAME3_TILE_GOLD;
Image* Sexy::IMAGE_MINIGAME3_TILE_SILVER;
Image* Sexy::IMAGE_MINIGAME3_TIMER_FILLBAR;
Image* Sexy::IMAGE_MINIGAME3_TIMER_LEFT;
Image* Sexy::IMAGE_MINIGAME3_TITLE;
Image* Sexy::IMAGE_MINIGAME3_X_CHECK;

bool Sexy::ExtractMiniGame3Resources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_MINIGAME3_BRACKET = aMgr.GetImageThrow("IMAGE_MINIGAME3_BRACKET");
		IMAGE_MINIGAME3_ENTRY_BOXES = aMgr.GetImageThrow("IMAGE_MINIGAME3_ENTRY_BOXES");
		IMAGE_MINIGAME3_LABEL_TIME = aMgr.GetImageThrow("IMAGE_MINIGAME3_LABEL_TIME");
		IMAGE_MINIGAME3_TILE_GOLD = aMgr.GetImageThrow("IMAGE_MINIGAME3_TILE_GOLD");
		IMAGE_MINIGAME3_TILE_SILVER = aMgr.GetImageThrow("IMAGE_MINIGAME3_TILE_SILVER");
		IMAGE_MINIGAME3_TIMER_FILLBAR = aMgr.GetImageThrow("IMAGE_MINIGAME3_TIMER_FILLBAR");
		IMAGE_MINIGAME3_TIMER_LEFT = aMgr.GetImageThrow("IMAGE_MINIGAME3_TIMER_LEFT");
		IMAGE_MINIGAME3_TITLE = aMgr.GetImageThrow("IMAGE_MINIGAME3_TITLE");
		IMAGE_MINIGAME3_X_CHECK = aMgr.GetImageThrow("IMAGE_MINIGAME3_X_CHECK");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

static void* gResources[] =
{
	&IMAGE_MINIMENU_LETTER_RIP_BTN,
	&IMAGE_MINIMENU_LINKNSPELL_BTN,
	&IMAGE_MINIMENU_WORDMASTER_BTN,
	&IMAGE_MINIGAME1_BRACKET,
	&IMAGE_MINIGAME1_ENTRY_BOXES,
	&IMAGE_MINIGAME1_LABEL_TURNS,
	&IMAGE_MINIGAME1_X_CHECK,
	&IMAGE_MINIGAME1_TAB_LEFT_DARK,
	&IMAGE_MINIGAME1_TAB_LEFT_LIT,
	&IMAGE_MINIGAME1_TILE_GOLD,
	&IMAGE_MINIGAME1_TILE_SILVER,
	&IMAGE_MINIGAME1_TILE_RED,
	&IMAGE_MINIGAME1_TITLE_WORDMASTER,
	&IMAGE_MINIGAME1_TURN_NUMBERS,
	&IMAGE_MINIGAME1_LEGEND,
	&IMAGE_MINIGAME2_TITLE,
	&IMAGE_MINIGAME2_GOLD_FILL,
	&IMAGE_MINIGAME2_LABEL_TIME,
	&IMAGE_MINIGAME2_SPELLING_BOX,
	&IMAGE_MINIGAME2_TIMER_FILLBAR,
	&IMAGE_MINIGAME2_TIMER_LEFT,
	&IMAGE_MINIGAME3_TITLE,
	&IMAGE_MINIGAME3_ENTRY_BOXES,
	&IMAGE_MINIGAME3_TIMER_FILLBAR,
	&IMAGE_MINIGAME3_TIMER_LEFT,
	&IMAGE_MINIGAME3_LABEL_TIME,
	&IMAGE_MINIGAME3_TILE_GOLD,
	&IMAGE_MINIGAME3_TILE_SILVER,
	&IMAGE_MINIGAME3_BRACKET,
	&IMAGE_MINIGAME3_X_CHECK,
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
		case IMAGE_MINIMENU_LETTER_RIP_BTN_ID: return "IMAGE_MINIMENU_LETTER_RIP_BTN";
		case IMAGE_MINIMENU_LINKNSPELL_BTN_ID: return "IMAGE_MINIMENU_LINKNSPELL_BTN";
		case IMAGE_MINIMENU_WORDMASTER_BTN_ID: return "IMAGE_MINIMENU_WORDMASTER_BTN";
		case IMAGE_MINIGAME1_BRACKET_ID: return "IMAGE_MINIGAME1_BRACKET";
		case IMAGE_MINIGAME1_ENTRY_BOXES_ID: return "IMAGE_MINIGAME1_ENTRY_BOXES";
		case IMAGE_MINIGAME1_LABEL_TURNS_ID: return "IMAGE_MINIGAME1_LABEL_TURNS";
		case IMAGE_MINIGAME1_X_CHECK_ID: return "IMAGE_MINIGAME1_X_CHECK";
		case IMAGE_MINIGAME1_TAB_LEFT_DARK_ID: return "IMAGE_MINIGAME1_TAB_LEFT_DARK";
		case IMAGE_MINIGAME1_TAB_LEFT_LIT_ID: return "IMAGE_MINIGAME1_TAB_LEFT_LIT";
		case IMAGE_MINIGAME1_TILE_GOLD_ID: return "IMAGE_MINIGAME1_TILE_GOLD";
		case IMAGE_MINIGAME1_TILE_SILVER_ID: return "IMAGE_MINIGAME1_TILE_SILVER";
		case IMAGE_MINIGAME1_TILE_RED_ID: return "IMAGE_MINIGAME1_TILE_RED";
		case IMAGE_MINIGAME1_TITLE_WORDMASTER_ID: return "IMAGE_MINIGAME1_TITLE_WORDMASTER";
		case IMAGE_MINIGAME1_TURN_NUMBERS_ID: return "IMAGE_MINIGAME1_TURN_NUMBERS";
		case IMAGE_MINIGAME1_LEGEND_ID: return "IMAGE_MINIGAME1_LEGEND";
		case IMAGE_MINIGAME2_TITLE_ID: return "IMAGE_MINIGAME2_TITLE";
		case IMAGE_MINIGAME2_GOLD_FILL_ID: return "IMAGE_MINIGAME2_GOLD_FILL";
		case IMAGE_MINIGAME2_LABEL_TIME_ID: return "IMAGE_MINIGAME2_LABEL_TIME";
		case IMAGE_MINIGAME2_SPELLING_BOX_ID: return "IMAGE_MINIGAME2_SPELLING_BOX";
		case IMAGE_MINIGAME2_TIMER_FILLBAR_ID: return "IMAGE_MINIGAME2_TIMER_FILLBAR";
		case IMAGE_MINIGAME2_TIMER_LEFT_ID: return "IMAGE_MINIGAME2_TIMER_LEFT";
		case IMAGE_MINIGAME3_TITLE_ID: return "IMAGE_MINIGAME3_TITLE";
		case IMAGE_MINIGAME3_ENTRY_BOXES_ID: return "IMAGE_MINIGAME3_ENTRY_BOXES";
		case IMAGE_MINIGAME3_TIMER_FILLBAR_ID: return "IMAGE_MINIGAME3_TIMER_FILLBAR";
		case IMAGE_MINIGAME3_TIMER_LEFT_ID: return "IMAGE_MINIGAME3_TIMER_LEFT";
		case IMAGE_MINIGAME3_LABEL_TIME_ID: return "IMAGE_MINIGAME3_LABEL_TIME";
		case IMAGE_MINIGAME3_TILE_GOLD_ID: return "IMAGE_MINIGAME3_TILE_GOLD";
		case IMAGE_MINIGAME3_TILE_SILVER_ID: return "IMAGE_MINIGAME3_TILE_SILVER";
		case IMAGE_MINIGAME3_BRACKET_ID: return "IMAGE_MINIGAME3_BRACKET";
		case IMAGE_MINIGAME3_X_CHECK_ID: return "IMAGE_MINIGAME3_X_CHECK";
		default: return "";
	}
}

