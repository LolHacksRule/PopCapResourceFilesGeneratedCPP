#include "Book1.h"
#include "SexyAppFramework/ResourceManager.h"

using namespace Sexy;

#pragma warning(disable:4311 4312)

static bool gNeedRecalcVariableToIdMap = false;

bool Sexy::ExtractResourcesByName(ResourceManager *theManager, const char *theName)
{
	if (strcmp(theName,"Book1Chapter1")==0) return ExtractBook1Chapter1Resources(theManager);
	if (strcmp(theName,"Book1Chapter10")==0) return ExtractBook1Chapter10Resources(theManager);
	if (strcmp(theName,"Book1Chapter2")==0) return ExtractBook1Chapter2Resources(theManager);
	if (strcmp(theName,"Book1Chapter3")==0) return ExtractBook1Chapter3Resources(theManager);
	if (strcmp(theName,"Book1Chapter4")==0) return ExtractBook1Chapter4Resources(theManager);
	if (strcmp(theName,"Book1Chapter5")==0) return ExtractBook1Chapter5Resources(theManager);
	if (strcmp(theName,"Book1Chapter6")==0) return ExtractBook1Chapter6Resources(theManager);
	if (strcmp(theName,"Book1Chapter7")==0) return ExtractBook1Chapter7Resources(theManager);
	if (strcmp(theName,"Book1Chapter8")==0) return ExtractBook1Chapter8Resources(theManager);
	if (strcmp(theName,"Book1Chapter9")==0) return ExtractBook1Chapter9Resources(theManager);
	if (strcmp(theName,"Book1Common")==0) return ExtractBook1CommonResources(theManager);
	if (strcmp(theName,"Book1Init")==0) return ExtractBook1InitResources(theManager);
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

// Book1Chapter1 Resources
Image* Sexy::IMAGE_B1A_BLUE_SEA1;
int Sexy::SOUND_HOUND_BARK;
int Sexy::SOUND_HOUND_DIE;
int Sexy::SOUND_TROJ_ARROWATTACK;
int Sexy::SOUND_TROJ_DIE;
int Sexy::SOUND_TROJ_ENGAGE1;
int Sexy::SOUND_TROJ_ENGAGE2;
int Sexy::SOUND_TROJ_ENGAGE3;
int Sexy::SOUND_TROJ_HIT;
int Sexy::SOUND_TROJ_SHIELDATTACK;
int Sexy::SOUND_TROJ_SPEARATTACK;
int Sexy::SOUND_TROJ_SWORDATTACK;

bool Sexy::ExtractBook1Chapter1Resources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_B1A_BLUE_SEA1 = aMgr.GetImageThrow("IMAGE_B1A_BLUE_SEA1");
		SOUND_HOUND_BARK = aMgr.GetSoundThrow("SOUND_HOUND_BARK");
		SOUND_HOUND_DIE = aMgr.GetSoundThrow("SOUND_HOUND_DIE");
		SOUND_TROJ_ARROWATTACK = aMgr.GetSoundThrow("SOUND_TROJ_ARROWATTACK");
		SOUND_TROJ_DIE = aMgr.GetSoundThrow("SOUND_TROJ_DIE");
		SOUND_TROJ_ENGAGE1 = aMgr.GetSoundThrow("SOUND_TROJ_ENGAGE1");
		SOUND_TROJ_ENGAGE2 = aMgr.GetSoundThrow("SOUND_TROJ_ENGAGE2");
		SOUND_TROJ_ENGAGE3 = aMgr.GetSoundThrow("SOUND_TROJ_ENGAGE3");
		SOUND_TROJ_HIT = aMgr.GetSoundThrow("SOUND_TROJ_HIT");
		SOUND_TROJ_SHIELDATTACK = aMgr.GetSoundThrow("SOUND_TROJ_SHIELDATTACK");
		SOUND_TROJ_SPEARATTACK = aMgr.GetSoundThrow("SOUND_TROJ_SPEARATTACK");
		SOUND_TROJ_SWORDATTACK = aMgr.GetSoundThrow("SOUND_TROJ_SWORDATTACK");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Book1Chapter10 Resources
Image* Sexy::IMAGE_B1A_SUNSET;
int Sexy::SOUND_BASILISK_ATTACK;
int Sexy::SOUND_BASILISK_DIE;
int Sexy::SOUND_BASILISK_ENGAGE;
int Sexy::SOUND_BASILISK_HIT;
int Sexy::SOUND_CASSKISS;
int Sexy::SOUND_MEDUSA_DIE;
int Sexy::SOUND_MEDUSA_ENGAGE;
int Sexy::SOUND_MEDUSA_HIT;
int Sexy::SOUND_MEDUSA_SONG;
int Sexy::SOUND_NEMESISLAUGH;
int Sexy::SOUND_NEMESISWARP;
int Sexy::SOUND_WITCH_ATTACK;
int Sexy::SOUND_WITCH_DIE;
int Sexy::SOUND_WITCH_ENGAGE;
int Sexy::SOUND_WITCH_HIT;

bool Sexy::ExtractBook1Chapter10Resources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_B1A_SUNSET = aMgr.GetImageThrow("IMAGE_B1A_SUNSET");
		SOUND_BASILISK_ATTACK = aMgr.GetSoundThrow("SOUND_BASILISK_ATTACK");
		SOUND_BASILISK_DIE = aMgr.GetSoundThrow("SOUND_BASILISK_DIE");
		SOUND_BASILISK_ENGAGE = aMgr.GetSoundThrow("SOUND_BASILISK_ENGAGE");
		SOUND_BASILISK_HIT = aMgr.GetSoundThrow("SOUND_BASILISK_HIT");
		SOUND_CASSKISS = aMgr.GetSoundThrow("SOUND_CASSKISS");
		SOUND_MEDUSA_DIE = aMgr.GetSoundThrow("SOUND_MEDUSA_DIE");
		SOUND_MEDUSA_ENGAGE = aMgr.GetSoundThrow("SOUND_MEDUSA_ENGAGE");
		SOUND_MEDUSA_HIT = aMgr.GetSoundThrow("SOUND_MEDUSA_HIT");
		SOUND_MEDUSA_SONG = aMgr.GetSoundThrow("SOUND_MEDUSA_SONG");
		SOUND_NEMESISLAUGH = aMgr.GetSoundThrow("SOUND_NEMESISLAUGH");
		SOUND_NEMESISWARP = aMgr.GetSoundThrow("SOUND_NEMESISWARP");
		SOUND_WITCH_ATTACK = aMgr.GetSoundThrow("SOUND_WITCH_ATTACK");
		SOUND_WITCH_DIE = aMgr.GetSoundThrow("SOUND_WITCH_DIE");
		SOUND_WITCH_ENGAGE = aMgr.GetSoundThrow("SOUND_WITCH_ENGAGE");
		SOUND_WITCH_HIT = aMgr.GetSoundThrow("SOUND_WITCH_HIT");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Book1Chapter2 Resources
Image* Sexy::IMAGE_B1A_BLUE_SEA2;
int Sexy::SOUND_CYCLOPS_DIE;
int Sexy::SOUND_CYCLOPS_HIT;
int Sexy::SOUND_MUTTON_BLEAT;
int Sexy::SOUND_MUTTON_STUN;

bool Sexy::ExtractBook1Chapter2Resources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_B1A_BLUE_SEA2 = aMgr.GetImageThrow("IMAGE_B1A_BLUE_SEA2");
		SOUND_CYCLOPS_DIE = aMgr.GetSoundThrow("SOUND_CYCLOPS_DIE");
		SOUND_CYCLOPS_HIT = aMgr.GetSoundThrow("SOUND_CYCLOPS_HIT");
		SOUND_MUTTON_BLEAT = aMgr.GetSoundThrow("SOUND_MUTTON_BLEAT");
		SOUND_MUTTON_STUN = aMgr.GetSoundThrow("SOUND_MUTTON_STUN");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Book1Chapter3 Resources
Image* Sexy::IMAGE_B1A_STORMY_SKY;
int Sexy::SOUND_CHARY_DIE;
int Sexy::SOUND_CHARY_HIT;
int Sexy::SOUND_FEMALE_GROAN1;
int Sexy::SOUND_FEMALE_GROAN2;
int Sexy::SOUND_KRAKEN_ATTACK;
int Sexy::SOUND_KRAKEN_HIT;
int Sexy::SOUND_KRAKEN_ROAR;
int Sexy::SOUND_SCYLLA_ATTACK;
int Sexy::SOUND_SCYLLA_STUN;
int Sexy::SOUND_SEAELEMENTAL_HIT;
int Sexy::SOUND_SEAWITCH_ATTACK;
int Sexy::SOUND_SERPENT_HISS;
int Sexy::SOUND_SIREN_ENGAGE;
int Sexy::SOUND_SIREN_SONG;
int Sexy::SOUND_WITCH_LAUGH2;

bool Sexy::ExtractBook1Chapter3Resources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_B1A_STORMY_SKY = aMgr.GetImageThrow("IMAGE_B1A_STORMY_SKY");
		SOUND_CHARY_DIE = aMgr.GetSoundThrow("SOUND_CHARY_DIE");
		SOUND_CHARY_HIT = aMgr.GetSoundThrow("SOUND_CHARY_HIT");
		SOUND_FEMALE_GROAN1 = aMgr.GetSoundThrow("SOUND_FEMALE_GROAN1");
		SOUND_FEMALE_GROAN2 = aMgr.GetSoundThrow("SOUND_FEMALE_GROAN2");
		SOUND_KRAKEN_ATTACK = aMgr.GetSoundThrow("SOUND_KRAKEN_ATTACK");
		SOUND_KRAKEN_HIT = aMgr.GetSoundThrow("SOUND_KRAKEN_HIT");
		SOUND_KRAKEN_ROAR = aMgr.GetSoundThrow("SOUND_KRAKEN_ROAR");
		SOUND_SCYLLA_ATTACK = aMgr.GetSoundThrow("SOUND_SCYLLA_ATTACK");
		SOUND_SCYLLA_STUN = aMgr.GetSoundThrow("SOUND_SCYLLA_STUN");
		SOUND_SEAELEMENTAL_HIT = aMgr.GetSoundThrow("SOUND_SEAELEMENTAL_HIT");
		SOUND_SEAWITCH_ATTACK = aMgr.GetSoundThrow("SOUND_SEAWITCH_ATTACK");
		SOUND_SERPENT_HISS = aMgr.GetSoundThrow("SOUND_SERPENT_HISS");
		SOUND_SIREN_ENGAGE = aMgr.GetSoundThrow("SOUND_SIREN_ENGAGE");
		SOUND_SIREN_SONG = aMgr.GetSoundThrow("SOUND_SIREN_SONG");
		SOUND_WITCH_LAUGH2 = aMgr.GetSoundThrow("SOUND_WITCH_LAUGH2");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Book1Chapter4 Resources
Image* Sexy::IMAGE_B1A_BLUE_SEA4;
int Sexy::SOUND_CIRCE_ENGAGE;
int Sexy::SOUND_CIRCE_POLY;
int Sexy::SOUND_EAGLE_ATTACK;
int Sexy::SOUND_EAGLE_CRY;
int Sexy::SOUND_FEMALE_GROAN1_4;
int Sexy::SOUND_FEMALE_GROAN2_4;
int Sexy::SOUND_HOUND_BARK_4;
int Sexy::SOUND_HOUND_DIE_4;
int Sexy::SOUND_LION_HIT;
int Sexy::SOUND_LION_ROAR;
int Sexy::SOUND_MUTTON_BLEAT_4;
int Sexy::SOUND_RAM_HIT;
int Sexy::SOUND_SCORPION_ATTACK;
int Sexy::SOUND_SCORPION_HIT;
int Sexy::SOUND_SERPENT_HISS_4;
int Sexy::SOUND_TROJ_SHIELDATTACK_4;

bool Sexy::ExtractBook1Chapter4Resources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_B1A_BLUE_SEA4 = aMgr.GetImageThrow("IMAGE_B1A_BLUE_SEA4");
		SOUND_CIRCE_ENGAGE = aMgr.GetSoundThrow("SOUND_CIRCE_ENGAGE");
		SOUND_CIRCE_POLY = aMgr.GetSoundThrow("SOUND_CIRCE_POLY");
		SOUND_EAGLE_ATTACK = aMgr.GetSoundThrow("SOUND_EAGLE_ATTACK");
		SOUND_EAGLE_CRY = aMgr.GetSoundThrow("SOUND_EAGLE_CRY");
		SOUND_FEMALE_GROAN1_4 = aMgr.GetSoundThrow("SOUND_FEMALE_GROAN1_4");
		SOUND_FEMALE_GROAN2_4 = aMgr.GetSoundThrow("SOUND_FEMALE_GROAN2_4");
		SOUND_HOUND_BARK_4 = aMgr.GetSoundThrow("SOUND_HOUND_BARK_4");
		SOUND_HOUND_DIE_4 = aMgr.GetSoundThrow("SOUND_HOUND_DIE_4");
		SOUND_LION_HIT = aMgr.GetSoundThrow("SOUND_LION_HIT");
		SOUND_LION_ROAR = aMgr.GetSoundThrow("SOUND_LION_ROAR");
		SOUND_MUTTON_BLEAT_4 = aMgr.GetSoundThrow("SOUND_MUTTON_BLEAT_4");
		SOUND_RAM_HIT = aMgr.GetSoundThrow("SOUND_RAM_HIT");
		SOUND_SCORPION_ATTACK = aMgr.GetSoundThrow("SOUND_SCORPION_ATTACK");
		SOUND_SCORPION_HIT = aMgr.GetSoundThrow("SOUND_SCORPION_HIT");
		SOUND_SERPENT_HISS_4 = aMgr.GetSoundThrow("SOUND_SERPENT_HISS_4");
		SOUND_TROJ_SHIELDATTACK_4 = aMgr.GetSoundThrow("SOUND_TROJ_SHIELDATTACK_4");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Book1Chapter5 Resources
Image* Sexy::IMAGE_B1A_UNDERWORLD_BG;
int Sexy::SOUND_BANSHEE_ATTACK;
int Sexy::SOUND_BANSHEE_WAIL;
int Sexy::SOUND_CERBERUS_GROWL;
int Sexy::SOUND_CERBERUS_SCREAM;
int Sexy::SOUND_ORTHRUS_DIE;
int Sexy::SOUND_ORTHRUS_GROWL;
int Sexy::SOUND_ORTHRUS_STUN;
int Sexy::SOUND_PHANTOM_ROAR;
int Sexy::SOUND_SHADE_ATTACK;
int Sexy::SOUND_SHADE_DIE;
int Sexy::SOUND_SHADE_ENGAGE;
int Sexy::SOUND_SHADE_HIT;

bool Sexy::ExtractBook1Chapter5Resources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_B1A_UNDERWORLD_BG = aMgr.GetImageThrow("IMAGE_B1A_UNDERWORLD_BG");
		SOUND_BANSHEE_ATTACK = aMgr.GetSoundThrow("SOUND_BANSHEE_ATTACK");
		SOUND_BANSHEE_WAIL = aMgr.GetSoundThrow("SOUND_BANSHEE_WAIL");
		SOUND_CERBERUS_GROWL = aMgr.GetSoundThrow("SOUND_CERBERUS_GROWL");
		SOUND_CERBERUS_SCREAM = aMgr.GetSoundThrow("SOUND_CERBERUS_SCREAM");
		SOUND_ORTHRUS_DIE = aMgr.GetSoundThrow("SOUND_ORTHRUS_DIE");
		SOUND_ORTHRUS_GROWL = aMgr.GetSoundThrow("SOUND_ORTHRUS_GROWL");
		SOUND_ORTHRUS_STUN = aMgr.GetSoundThrow("SOUND_ORTHRUS_STUN");
		SOUND_PHANTOM_ROAR = aMgr.GetSoundThrow("SOUND_PHANTOM_ROAR");
		SOUND_SHADE_ATTACK = aMgr.GetSoundThrow("SOUND_SHADE_ATTACK");
		SOUND_SHADE_DIE = aMgr.GetSoundThrow("SOUND_SHADE_DIE");
		SOUND_SHADE_ENGAGE = aMgr.GetSoundThrow("SOUND_SHADE_ENGAGE");
		SOUND_SHADE_HIT = aMgr.GetSoundThrow("SOUND_SHADE_HIT");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Book1Chapter6 Resources
Image* Sexy::IMAGE_B1A_BLACK;
int Sexy::SOUND_GRIF_ATTACK;
int Sexy::SOUND_GRIF_HIT;
int Sexy::SOUND_HARPY_ATTACK;
int Sexy::SOUND_HARPY_DIE;
int Sexy::SOUND_HARPY_ENGAGE;
int Sexy::SOUND_HARPY_HIT;
int Sexy::SOUND_MANTICORE_DIE;
int Sexy::SOUND_MANTICORE_HIT;
int Sexy::SOUND_MINO_ATTACK;
int Sexy::SOUND_MINO_GRUMBLE;

bool Sexy::ExtractBook1Chapter6Resources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_B1A_BLACK = aMgr.GetImageThrow("IMAGE_B1A_BLACK");
		SOUND_GRIF_ATTACK = aMgr.GetSoundThrow("SOUND_GRIF_ATTACK");
		SOUND_GRIF_HIT = aMgr.GetSoundThrow("SOUND_GRIF_HIT");
		SOUND_HARPY_ATTACK = aMgr.GetSoundThrow("SOUND_HARPY_ATTACK");
		SOUND_HARPY_DIE = aMgr.GetSoundThrow("SOUND_HARPY_DIE");
		SOUND_HARPY_ENGAGE = aMgr.GetSoundThrow("SOUND_HARPY_ENGAGE");
		SOUND_HARPY_HIT = aMgr.GetSoundThrow("SOUND_HARPY_HIT");
		SOUND_MANTICORE_DIE = aMgr.GetSoundThrow("SOUND_MANTICORE_DIE");
		SOUND_MANTICORE_HIT = aMgr.GetSoundThrow("SOUND_MANTICORE_HIT");
		SOUND_MINO_ATTACK = aMgr.GetSoundThrow("SOUND_MINO_ATTACK");
		SOUND_MINO_GRUMBLE = aMgr.GetSoundThrow("SOUND_MINO_GRUMBLE");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Book1Chapter7 Resources
Image* Sexy::IMAGE_B1A_HYDRA_BOSS_BATTLE;
Image* Sexy::IMAGE_B1A_SWAMP_SKY;
int Sexy::SOUND_DRAGON_BITE;
int Sexy::SOUND_DRAGON_DEATH;
int Sexy::SOUND_DRAGON_PAIN;
int Sexy::SOUND_DRAGON_ROAR;

bool Sexy::ExtractBook1Chapter7Resources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_B1A_HYDRA_BOSS_BATTLE = aMgr.GetImageThrow("IMAGE_B1A_HYDRA_BOSS_BATTLE");
		IMAGE_B1A_SWAMP_SKY = aMgr.GetImageThrow("IMAGE_B1A_SWAMP_SKY");
		SOUND_DRAGON_BITE = aMgr.GetSoundThrow("SOUND_DRAGON_BITE");
		SOUND_DRAGON_DEATH = aMgr.GetSoundThrow("SOUND_DRAGON_DEATH");
		SOUND_DRAGON_PAIN = aMgr.GetSoundThrow("SOUND_DRAGON_PAIN");
		SOUND_DRAGON_ROAR = aMgr.GetSoundThrow("SOUND_DRAGON_ROAR");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Book1Chapter8 Resources
Image* Sexy::IMAGE_B1A_SKY8;
int Sexy::SOUND_NEMEAN_DIE;
int Sexy::SOUND_NEMEAN_ENGAGE;
int Sexy::SOUND_NEMEAN_HIT;
int Sexy::SOUND_PIG_DIE;
int Sexy::SOUND_PIG_SQUEAL1;
int Sexy::SOUND_STYM_ATTACK;
int Sexy::SOUND_STYM_BLEED;
int Sexy::SOUND_STYM_DIE;
int Sexy::SOUND_STYM_ENGAGE;

bool Sexy::ExtractBook1Chapter8Resources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_B1A_SKY8 = aMgr.GetImageThrow("IMAGE_B1A_SKY8");
		SOUND_NEMEAN_DIE = aMgr.GetSoundThrow("SOUND_NEMEAN_DIE");
		SOUND_NEMEAN_ENGAGE = aMgr.GetSoundThrow("SOUND_NEMEAN_ENGAGE");
		SOUND_NEMEAN_HIT = aMgr.GetSoundThrow("SOUND_NEMEAN_HIT");
		SOUND_PIG_DIE = aMgr.GetSoundThrow("SOUND_PIG_DIE");
		SOUND_PIG_SQUEAL1 = aMgr.GetSoundThrow("SOUND_PIG_SQUEAL1");
		SOUND_STYM_ATTACK = aMgr.GetSoundThrow("SOUND_STYM_ATTACK");
		SOUND_STYM_BLEED = aMgr.GetSoundThrow("SOUND_STYM_BLEED");
		SOUND_STYM_DIE = aMgr.GetSoundThrow("SOUND_STYM_DIE");
		SOUND_STYM_ENGAGE = aMgr.GetSoundThrow("SOUND_STYM_ENGAGE");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Book1Chapter9 Resources
Image* Sexy::IMAGE_B1A_SKY9;
int Sexy::SOUND_CENT_ARROWATTACK;
int Sexy::SOUND_CENT_DIE;
int Sexy::SOUND_CENT_ENGAGE1;
int Sexy::SOUND_CENT_ENGAGE2;
int Sexy::SOUND_CENT_HIT;
int Sexy::SOUND_NESSUS_ATTACK;
int Sexy::SOUND_NESSUS_DIE;
int Sexy::SOUND_NESSUS_ENGAGE;
int Sexy::SOUND_NESSUS_HIT;
int Sexy::SOUND_NYMPH_ATTACK;
int Sexy::SOUND_NYMPH_DIE;
int Sexy::SOUND_NYMPH_ENGAGE;
int Sexy::SOUND_NYMPH_HIT;
int Sexy::SOUND_NYMPH_MMM;
int Sexy::SOUND_NYMPH_OOH;
int Sexy::SOUND_NYMPH_SONG;

bool Sexy::ExtractBook1Chapter9Resources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_B1A_SKY9 = aMgr.GetImageThrow("IMAGE_B1A_SKY9");
		SOUND_CENT_ARROWATTACK = aMgr.GetSoundThrow("SOUND_CENT_ARROWATTACK");
		SOUND_CENT_DIE = aMgr.GetSoundThrow("SOUND_CENT_DIE");
		SOUND_CENT_ENGAGE1 = aMgr.GetSoundThrow("SOUND_CENT_ENGAGE1");
		SOUND_CENT_ENGAGE2 = aMgr.GetSoundThrow("SOUND_CENT_ENGAGE2");
		SOUND_CENT_HIT = aMgr.GetSoundThrow("SOUND_CENT_HIT");
		SOUND_NESSUS_ATTACK = aMgr.GetSoundThrow("SOUND_NESSUS_ATTACK");
		SOUND_NESSUS_DIE = aMgr.GetSoundThrow("SOUND_NESSUS_DIE");
		SOUND_NESSUS_ENGAGE = aMgr.GetSoundThrow("SOUND_NESSUS_ENGAGE");
		SOUND_NESSUS_HIT = aMgr.GetSoundThrow("SOUND_NESSUS_HIT");
		SOUND_NYMPH_ATTACK = aMgr.GetSoundThrow("SOUND_NYMPH_ATTACK");
		SOUND_NYMPH_DIE = aMgr.GetSoundThrow("SOUND_NYMPH_DIE");
		SOUND_NYMPH_ENGAGE = aMgr.GetSoundThrow("SOUND_NYMPH_ENGAGE");
		SOUND_NYMPH_HIT = aMgr.GetSoundThrow("SOUND_NYMPH_HIT");
		SOUND_NYMPH_MMM = aMgr.GetSoundThrow("SOUND_NYMPH_MMM");
		SOUND_NYMPH_OOH = aMgr.GetSoundThrow("SOUND_NYMPH_OOH");
		SOUND_NYMPH_SONG = aMgr.GetSoundThrow("SOUND_NYMPH_SONG");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Book1Common Resources
Image* Sexy::IMAGE_B1_LEFT_FACING_ARROW;

bool Sexy::ExtractBook1CommonResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_B1_LEFT_FACING_ARROW = aMgr.GetImageThrow("IMAGE_B1_LEFT_FACING_ARROW");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

// Book1Init Resources
Image* Sexy::IMAGE_B1_ICONANIM1;
Image* Sexy::IMAGE_B1_ICONANIM10;
Image* Sexy::IMAGE_B1_ICONANIM2;
Image* Sexy::IMAGE_B1_ICONANIM3;
Image* Sexy::IMAGE_B1_ICONANIM4;
Image* Sexy::IMAGE_B1_ICONANIM5;
Image* Sexy::IMAGE_B1_ICONANIM6;
Image* Sexy::IMAGE_B1_ICONANIM7;
Image* Sexy::IMAGE_B1_ICONANIM8;
Image* Sexy::IMAGE_B1_ICONANIM9;
Image* Sexy::IMAGE_B1_ICONMASK1;
Image* Sexy::IMAGE_B1_ICONMASK10;
Image* Sexy::IMAGE_B1_ICONMASK2;
Image* Sexy::IMAGE_B1_ICONMASK3;
Image* Sexy::IMAGE_B1_ICONMASK4;
Image* Sexy::IMAGE_B1_ICONMASK5;
Image* Sexy::IMAGE_B1_ICONMASK6;
Image* Sexy::IMAGE_B1_ICONMASK7;
Image* Sexy::IMAGE_B1_ICONMASK8;
Image* Sexy::IMAGE_B1_ICONMASK9;
Image* Sexy::IMAGE_B1_MAP;
Image* Sexy::IMAGE_B1_MAPSCREEN_BANNER;
Image* Sexy::IMAGE_B1_MINIMAP_1_1;
Image* Sexy::IMAGE_B1_MINIMAP_1_10;
Image* Sexy::IMAGE_B1_MINIMAP_1_2;
Image* Sexy::IMAGE_B1_MINIMAP_1_3;
Image* Sexy::IMAGE_B1_MINIMAP_1_4;
Image* Sexy::IMAGE_B1_MINIMAP_1_5;
Image* Sexy::IMAGE_B1_MINIMAP_1_6;
Image* Sexy::IMAGE_B1_MINIMAP_1_7;
Image* Sexy::IMAGE_B1_MINIMAP_1_8;
Image* Sexy::IMAGE_B1_MINIMAP_1_9;
Image* Sexy::IMAGE_B1_MINIMAP_ICONS;

bool Sexy::ExtractBook1InitResources(ResourceManager *theManager)
{
	gNeedRecalcVariableToIdMap = true;

	ResourceManager &aMgr = *theManager;
	try
	{
		IMAGE_B1_ICONANIM1 = aMgr.GetImageThrow("IMAGE_B1_ICONANIM1");
		IMAGE_B1_ICONANIM10 = aMgr.GetImageThrow("IMAGE_B1_ICONANIM10");
		IMAGE_B1_ICONANIM2 = aMgr.GetImageThrow("IMAGE_B1_ICONANIM2");
		IMAGE_B1_ICONANIM3 = aMgr.GetImageThrow("IMAGE_B1_ICONANIM3");
		IMAGE_B1_ICONANIM4 = aMgr.GetImageThrow("IMAGE_B1_ICONANIM4");
		IMAGE_B1_ICONANIM5 = aMgr.GetImageThrow("IMAGE_B1_ICONANIM5");
		IMAGE_B1_ICONANIM6 = aMgr.GetImageThrow("IMAGE_B1_ICONANIM6");
		IMAGE_B1_ICONANIM7 = aMgr.GetImageThrow("IMAGE_B1_ICONANIM7");
		IMAGE_B1_ICONANIM8 = aMgr.GetImageThrow("IMAGE_B1_ICONANIM8");
		IMAGE_B1_ICONANIM9 = aMgr.GetImageThrow("IMAGE_B1_ICONANIM9");
		IMAGE_B1_ICONMASK1 = aMgr.GetImageThrow("IMAGE_B1_ICONMASK1");
		IMAGE_B1_ICONMASK10 = aMgr.GetImageThrow("IMAGE_B1_ICONMASK10");
		IMAGE_B1_ICONMASK2 = aMgr.GetImageThrow("IMAGE_B1_ICONMASK2");
		IMAGE_B1_ICONMASK3 = aMgr.GetImageThrow("IMAGE_B1_ICONMASK3");
		IMAGE_B1_ICONMASK4 = aMgr.GetImageThrow("IMAGE_B1_ICONMASK4");
		IMAGE_B1_ICONMASK5 = aMgr.GetImageThrow("IMAGE_B1_ICONMASK5");
		IMAGE_B1_ICONMASK6 = aMgr.GetImageThrow("IMAGE_B1_ICONMASK6");
		IMAGE_B1_ICONMASK7 = aMgr.GetImageThrow("IMAGE_B1_ICONMASK7");
		IMAGE_B1_ICONMASK8 = aMgr.GetImageThrow("IMAGE_B1_ICONMASK8");
		IMAGE_B1_ICONMASK9 = aMgr.GetImageThrow("IMAGE_B1_ICONMASK9");
		IMAGE_B1_MAP = aMgr.GetImageThrow("IMAGE_B1_MAP");
		IMAGE_B1_MAPSCREEN_BANNER = aMgr.GetImageThrow("IMAGE_B1_MAPSCREEN_BANNER");
		IMAGE_B1_MINIMAP_1_1 = aMgr.GetImageThrow("IMAGE_B1_MINIMAP_1_1");
		IMAGE_B1_MINIMAP_1_10 = aMgr.GetImageThrow("IMAGE_B1_MINIMAP_1_10");
		IMAGE_B1_MINIMAP_1_2 = aMgr.GetImageThrow("IMAGE_B1_MINIMAP_1_2");
		IMAGE_B1_MINIMAP_1_3 = aMgr.GetImageThrow("IMAGE_B1_MINIMAP_1_3");
		IMAGE_B1_MINIMAP_1_4 = aMgr.GetImageThrow("IMAGE_B1_MINIMAP_1_4");
		IMAGE_B1_MINIMAP_1_5 = aMgr.GetImageThrow("IMAGE_B1_MINIMAP_1_5");
		IMAGE_B1_MINIMAP_1_6 = aMgr.GetImageThrow("IMAGE_B1_MINIMAP_1_6");
		IMAGE_B1_MINIMAP_1_7 = aMgr.GetImageThrow("IMAGE_B1_MINIMAP_1_7");
		IMAGE_B1_MINIMAP_1_8 = aMgr.GetImageThrow("IMAGE_B1_MINIMAP_1_8");
		IMAGE_B1_MINIMAP_1_9 = aMgr.GetImageThrow("IMAGE_B1_MINIMAP_1_9");
		IMAGE_B1_MINIMAP_ICONS = aMgr.GetImageThrow("IMAGE_B1_MINIMAP_ICONS");
	}
	catch(ResourceManagerException&)
	{
		return false;
	}
	return true;
}

static void* gResources[] =
{
	&IMAGE_B1_MINIMAP_ICONS,
	&IMAGE_B1_MAPSCREEN_BANNER,
	&IMAGE_B1_MINIMAP_1_1,
	&IMAGE_B1_MINIMAP_1_2,
	&IMAGE_B1_MINIMAP_1_3,
	&IMAGE_B1_MINIMAP_1_4,
	&IMAGE_B1_MINIMAP_1_5,
	&IMAGE_B1_MINIMAP_1_6,
	&IMAGE_B1_MINIMAP_1_7,
	&IMAGE_B1_MINIMAP_1_8,
	&IMAGE_B1_MINIMAP_1_9,
	&IMAGE_B1_MINIMAP_1_10,
	&IMAGE_B1_ICONANIM1,
	&IMAGE_B1_ICONANIM2,
	&IMAGE_B1_ICONANIM3,
	&IMAGE_B1_ICONANIM4,
	&IMAGE_B1_ICONANIM5,
	&IMAGE_B1_ICONANIM6,
	&IMAGE_B1_ICONANIM7,
	&IMAGE_B1_ICONANIM8,
	&IMAGE_B1_ICONANIM9,
	&IMAGE_B1_ICONANIM10,
	&IMAGE_B1_ICONMASK1,
	&IMAGE_B1_ICONMASK2,
	&IMAGE_B1_ICONMASK3,
	&IMAGE_B1_ICONMASK4,
	&IMAGE_B1_ICONMASK5,
	&IMAGE_B1_ICONMASK6,
	&IMAGE_B1_ICONMASK7,
	&IMAGE_B1_ICONMASK8,
	&IMAGE_B1_ICONMASK9,
	&IMAGE_B1_ICONMASK10,
	&IMAGE_B1_MAP,
	&IMAGE_B1_LEFT_FACING_ARROW,
	&IMAGE_B1A_BLUE_SEA1,
	&SOUND_TROJ_ENGAGE1,
	&SOUND_TROJ_ENGAGE2,
	&SOUND_TROJ_ENGAGE3,
	&SOUND_TROJ_SPEARATTACK,
	&SOUND_TROJ_SWORDATTACK,
	&SOUND_TROJ_SHIELDATTACK,
	&SOUND_TROJ_ARROWATTACK,
	&SOUND_TROJ_HIT,
	&SOUND_TROJ_DIE,
	&SOUND_HOUND_BARK,
	&SOUND_HOUND_DIE,
	&IMAGE_B1A_BLUE_SEA2,
	&SOUND_CYCLOPS_HIT,
	&SOUND_CYCLOPS_DIE,
	&SOUND_MUTTON_STUN,
	&SOUND_MUTTON_BLEAT,
	&IMAGE_B1A_STORMY_SKY,
	&SOUND_SERPENT_HISS,
	&SOUND_SIREN_SONG,
	&SOUND_SIREN_ENGAGE,
	&SOUND_FEMALE_GROAN1,
	&SOUND_FEMALE_GROAN2,
	&SOUND_WITCH_LAUGH2,
	&SOUND_SEAWITCH_ATTACK,
	&SOUND_SEAELEMENTAL_HIT,
	&SOUND_KRAKEN_ATTACK,
	&SOUND_KRAKEN_ROAR,
	&SOUND_KRAKEN_HIT,
	&SOUND_SCYLLA_ATTACK,
	&SOUND_SCYLLA_STUN,
	&SOUND_CHARY_HIT,
	&SOUND_CHARY_DIE,
	&IMAGE_B1A_BLUE_SEA4,
	&SOUND_EAGLE_CRY,
	&SOUND_EAGLE_ATTACK,
	&SOUND_LION_ROAR,
	&SOUND_LION_HIT,
	&SOUND_RAM_HIT,
	&SOUND_SCORPION_ATTACK,
	&SOUND_SCORPION_HIT,
	&SOUND_CIRCE_POLY,
	&SOUND_CIRCE_ENGAGE,
	&SOUND_FEMALE_GROAN1_4,
	&SOUND_FEMALE_GROAN2_4,
	&SOUND_SERPENT_HISS_4,
	&SOUND_TROJ_SHIELDATTACK_4,
	&SOUND_MUTTON_BLEAT_4,
	&SOUND_HOUND_BARK_4,
	&SOUND_HOUND_DIE_4,
	&IMAGE_B1A_UNDERWORLD_BG,
	&SOUND_PHANTOM_ROAR,
	&SOUND_SHADE_ENGAGE,
	&SOUND_SHADE_ATTACK,
	&SOUND_SHADE_HIT,
	&SOUND_SHADE_DIE,
	&SOUND_BANSHEE_WAIL,
	&SOUND_BANSHEE_ATTACK,
	&SOUND_ORTHRUS_GROWL,
	&SOUND_ORTHRUS_STUN,
	&SOUND_ORTHRUS_DIE,
	&SOUND_CERBERUS_GROWL,
	&SOUND_CERBERUS_SCREAM,
	&IMAGE_B1A_BLACK,
	&SOUND_GRIF_ATTACK,
	&SOUND_GRIF_HIT,
	&SOUND_HARPY_ATTACK,
	&SOUND_HARPY_ENGAGE,
	&SOUND_HARPY_HIT,
	&SOUND_HARPY_DIE,
	&SOUND_MANTICORE_HIT,
	&SOUND_MANTICORE_DIE,
	&SOUND_MINO_GRUMBLE,
	&SOUND_MINO_ATTACK,
	&IMAGE_B1A_SWAMP_SKY,
	&IMAGE_B1A_HYDRA_BOSS_BATTLE,
	&SOUND_DRAGON_BITE,
	&SOUND_DRAGON_ROAR,
	&SOUND_DRAGON_PAIN,
	&SOUND_DRAGON_DEATH,
	&IMAGE_B1A_SKY8,
	&SOUND_PIG_SQUEAL1,
	&SOUND_PIG_DIE,
	&SOUND_STYM_ENGAGE,
	&SOUND_STYM_ATTACK,
	&SOUND_STYM_BLEED,
	&SOUND_STYM_DIE,
	&SOUND_NEMEAN_HIT,
	&SOUND_NEMEAN_DIE,
	&SOUND_NEMEAN_ENGAGE,
	&IMAGE_B1A_SKY9,
	&SOUND_CENT_ENGAGE1,
	&SOUND_CENT_ENGAGE2,
	&SOUND_CENT_HIT,
	&SOUND_CENT_DIE,
	&SOUND_CENT_ARROWATTACK,
	&SOUND_NYMPH_OOH,
	&SOUND_NYMPH_MMM,
	&SOUND_NYMPH_ATTACK,
	&SOUND_NYMPH_SONG,
	&SOUND_NYMPH_ENGAGE,
	&SOUND_NYMPH_HIT,
	&SOUND_NYMPH_DIE,
	&SOUND_NESSUS_ENGAGE,
	&SOUND_NESSUS_ATTACK,
	&SOUND_NESSUS_HIT,
	&SOUND_NESSUS_DIE,
	&IMAGE_B1A_SUNSET,
	&SOUND_BASILISK_ATTACK,
	&SOUND_BASILISK_ENGAGE,
	&SOUND_BASILISK_HIT,
	&SOUND_BASILISK_DIE,
	&SOUND_WITCH_ENGAGE,
	&SOUND_WITCH_ATTACK,
	&SOUND_WITCH_HIT,
	&SOUND_WITCH_DIE,
	&SOUND_MEDUSA_SONG,
	&SOUND_MEDUSA_HIT,
	&SOUND_MEDUSA_ENGAGE,
	&SOUND_MEDUSA_DIE,
	&SOUND_CASSKISS,
	&SOUND_NEMESISWARP,
	&SOUND_NEMESISLAUGH,
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
		case IMAGE_B1_MINIMAP_ICONS_ID: return "IMAGE_B1_MINIMAP_ICONS";
		case IMAGE_B1_MAPSCREEN_BANNER_ID: return "IMAGE_B1_MAPSCREEN_BANNER";
		case IMAGE_B1_MINIMAP_1_1_ID: return "IMAGE_B1_MINIMAP_1_1";
		case IMAGE_B1_MINIMAP_1_2_ID: return "IMAGE_B1_MINIMAP_1_2";
		case IMAGE_B1_MINIMAP_1_3_ID: return "IMAGE_B1_MINIMAP_1_3";
		case IMAGE_B1_MINIMAP_1_4_ID: return "IMAGE_B1_MINIMAP_1_4";
		case IMAGE_B1_MINIMAP_1_5_ID: return "IMAGE_B1_MINIMAP_1_5";
		case IMAGE_B1_MINIMAP_1_6_ID: return "IMAGE_B1_MINIMAP_1_6";
		case IMAGE_B1_MINIMAP_1_7_ID: return "IMAGE_B1_MINIMAP_1_7";
		case IMAGE_B1_MINIMAP_1_8_ID: return "IMAGE_B1_MINIMAP_1_8";
		case IMAGE_B1_MINIMAP_1_9_ID: return "IMAGE_B1_MINIMAP_1_9";
		case IMAGE_B1_MINIMAP_1_10_ID: return "IMAGE_B1_MINIMAP_1_10";
		case IMAGE_B1_ICONANIM1_ID: return "IMAGE_B1_ICONANIM1";
		case IMAGE_B1_ICONANIM2_ID: return "IMAGE_B1_ICONANIM2";
		case IMAGE_B1_ICONANIM3_ID: return "IMAGE_B1_ICONANIM3";
		case IMAGE_B1_ICONANIM4_ID: return "IMAGE_B1_ICONANIM4";
		case IMAGE_B1_ICONANIM5_ID: return "IMAGE_B1_ICONANIM5";
		case IMAGE_B1_ICONANIM6_ID: return "IMAGE_B1_ICONANIM6";
		case IMAGE_B1_ICONANIM7_ID: return "IMAGE_B1_ICONANIM7";
		case IMAGE_B1_ICONANIM8_ID: return "IMAGE_B1_ICONANIM8";
		case IMAGE_B1_ICONANIM9_ID: return "IMAGE_B1_ICONANIM9";
		case IMAGE_B1_ICONANIM10_ID: return "IMAGE_B1_ICONANIM10";
		case IMAGE_B1_ICONMASK1_ID: return "IMAGE_B1_ICONMASK1";
		case IMAGE_B1_ICONMASK2_ID: return "IMAGE_B1_ICONMASK2";
		case IMAGE_B1_ICONMASK3_ID: return "IMAGE_B1_ICONMASK3";
		case IMAGE_B1_ICONMASK4_ID: return "IMAGE_B1_ICONMASK4";
		case IMAGE_B1_ICONMASK5_ID: return "IMAGE_B1_ICONMASK5";
		case IMAGE_B1_ICONMASK6_ID: return "IMAGE_B1_ICONMASK6";
		case IMAGE_B1_ICONMASK7_ID: return "IMAGE_B1_ICONMASK7";
		case IMAGE_B1_ICONMASK8_ID: return "IMAGE_B1_ICONMASK8";
		case IMAGE_B1_ICONMASK9_ID: return "IMAGE_B1_ICONMASK9";
		case IMAGE_B1_ICONMASK10_ID: return "IMAGE_B1_ICONMASK10";
		case IMAGE_B1_MAP_ID: return "IMAGE_B1_MAP";
		case IMAGE_B1_LEFT_FACING_ARROW_ID: return "IMAGE_B1_LEFT_FACING_ARROW";
		case IMAGE_B1A_BLUE_SEA1_ID: return "IMAGE_B1A_BLUE_SEA1";
		case SOUND_TROJ_ENGAGE1_ID: return "SOUND_TROJ_ENGAGE1";
		case SOUND_TROJ_ENGAGE2_ID: return "SOUND_TROJ_ENGAGE2";
		case SOUND_TROJ_ENGAGE3_ID: return "SOUND_TROJ_ENGAGE3";
		case SOUND_TROJ_SPEARATTACK_ID: return "SOUND_TROJ_SPEARATTACK";
		case SOUND_TROJ_SWORDATTACK_ID: return "SOUND_TROJ_SWORDATTACK";
		case SOUND_TROJ_SHIELDATTACK_ID: return "SOUND_TROJ_SHIELDATTACK";
		case SOUND_TROJ_ARROWATTACK_ID: return "SOUND_TROJ_ARROWATTACK";
		case SOUND_TROJ_HIT_ID: return "SOUND_TROJ_HIT";
		case SOUND_TROJ_DIE_ID: return "SOUND_TROJ_DIE";
		case SOUND_HOUND_BARK_ID: return "SOUND_HOUND_BARK";
		case SOUND_HOUND_DIE_ID: return "SOUND_HOUND_DIE";
		case IMAGE_B1A_BLUE_SEA2_ID: return "IMAGE_B1A_BLUE_SEA2";
		case SOUND_CYCLOPS_HIT_ID: return "SOUND_CYCLOPS_HIT";
		case SOUND_CYCLOPS_DIE_ID: return "SOUND_CYCLOPS_DIE";
		case SOUND_MUTTON_STUN_ID: return "SOUND_MUTTON_STUN";
		case SOUND_MUTTON_BLEAT_ID: return "SOUND_MUTTON_BLEAT";
		case IMAGE_B1A_STORMY_SKY_ID: return "IMAGE_B1A_STORMY_SKY";
		case SOUND_SERPENT_HISS_ID: return "SOUND_SERPENT_HISS";
		case SOUND_SIREN_SONG_ID: return "SOUND_SIREN_SONG";
		case SOUND_SIREN_ENGAGE_ID: return "SOUND_SIREN_ENGAGE";
		case SOUND_FEMALE_GROAN1_ID: return "SOUND_FEMALE_GROAN1";
		case SOUND_FEMALE_GROAN2_ID: return "SOUND_FEMALE_GROAN2";
		case SOUND_WITCH_LAUGH2_ID: return "SOUND_WITCH_LAUGH2";
		case SOUND_SEAWITCH_ATTACK_ID: return "SOUND_SEAWITCH_ATTACK";
		case SOUND_SEAELEMENTAL_HIT_ID: return "SOUND_SEAELEMENTAL_HIT";
		case SOUND_KRAKEN_ATTACK_ID: return "SOUND_KRAKEN_ATTACK";
		case SOUND_KRAKEN_ROAR_ID: return "SOUND_KRAKEN_ROAR";
		case SOUND_KRAKEN_HIT_ID: return "SOUND_KRAKEN_HIT";
		case SOUND_SCYLLA_ATTACK_ID: return "SOUND_SCYLLA_ATTACK";
		case SOUND_SCYLLA_STUN_ID: return "SOUND_SCYLLA_STUN";
		case SOUND_CHARY_HIT_ID: return "SOUND_CHARY_HIT";
		case SOUND_CHARY_DIE_ID: return "SOUND_CHARY_DIE";
		case IMAGE_B1A_BLUE_SEA4_ID: return "IMAGE_B1A_BLUE_SEA4";
		case SOUND_EAGLE_CRY_ID: return "SOUND_EAGLE_CRY";
		case SOUND_EAGLE_ATTACK_ID: return "SOUND_EAGLE_ATTACK";
		case SOUND_LION_ROAR_ID: return "SOUND_LION_ROAR";
		case SOUND_LION_HIT_ID: return "SOUND_LION_HIT";
		case SOUND_RAM_HIT_ID: return "SOUND_RAM_HIT";
		case SOUND_SCORPION_ATTACK_ID: return "SOUND_SCORPION_ATTACK";
		case SOUND_SCORPION_HIT_ID: return "SOUND_SCORPION_HIT";
		case SOUND_CIRCE_POLY_ID: return "SOUND_CIRCE_POLY";
		case SOUND_CIRCE_ENGAGE_ID: return "SOUND_CIRCE_ENGAGE";
		case SOUND_FEMALE_GROAN1_4_ID: return "SOUND_FEMALE_GROAN1_4";
		case SOUND_FEMALE_GROAN2_4_ID: return "SOUND_FEMALE_GROAN2_4";
		case SOUND_SERPENT_HISS_4_ID: return "SOUND_SERPENT_HISS_4";
		case SOUND_TROJ_SHIELDATTACK_4_ID: return "SOUND_TROJ_SHIELDATTACK_4";
		case SOUND_MUTTON_BLEAT_4_ID: return "SOUND_MUTTON_BLEAT_4";
		case SOUND_HOUND_BARK_4_ID: return "SOUND_HOUND_BARK_4";
		case SOUND_HOUND_DIE_4_ID: return "SOUND_HOUND_DIE_4";
		case IMAGE_B1A_UNDERWORLD_BG_ID: return "IMAGE_B1A_UNDERWORLD_BG";
		case SOUND_PHANTOM_ROAR_ID: return "SOUND_PHANTOM_ROAR";
		case SOUND_SHADE_ENGAGE_ID: return "SOUND_SHADE_ENGAGE";
		case SOUND_SHADE_ATTACK_ID: return "SOUND_SHADE_ATTACK";
		case SOUND_SHADE_HIT_ID: return "SOUND_SHADE_HIT";
		case SOUND_SHADE_DIE_ID: return "SOUND_SHADE_DIE";
		case SOUND_BANSHEE_WAIL_ID: return "SOUND_BANSHEE_WAIL";
		case SOUND_BANSHEE_ATTACK_ID: return "SOUND_BANSHEE_ATTACK";
		case SOUND_ORTHRUS_GROWL_ID: return "SOUND_ORTHRUS_GROWL";
		case SOUND_ORTHRUS_STUN_ID: return "SOUND_ORTHRUS_STUN";
		case SOUND_ORTHRUS_DIE_ID: return "SOUND_ORTHRUS_DIE";
		case SOUND_CERBERUS_GROWL_ID: return "SOUND_CERBERUS_GROWL";
		case SOUND_CERBERUS_SCREAM_ID: return "SOUND_CERBERUS_SCREAM";
		case IMAGE_B1A_BLACK_ID: return "IMAGE_B1A_BLACK";
		case SOUND_GRIF_ATTACK_ID: return "SOUND_GRIF_ATTACK";
		case SOUND_GRIF_HIT_ID: return "SOUND_GRIF_HIT";
		case SOUND_HARPY_ATTACK_ID: return "SOUND_HARPY_ATTACK";
		case SOUND_HARPY_ENGAGE_ID: return "SOUND_HARPY_ENGAGE";
		case SOUND_HARPY_HIT_ID: return "SOUND_HARPY_HIT";
		case SOUND_HARPY_DIE_ID: return "SOUND_HARPY_DIE";
		case SOUND_MANTICORE_HIT_ID: return "SOUND_MANTICORE_HIT";
		case SOUND_MANTICORE_DIE_ID: return "SOUND_MANTICORE_DIE";
		case SOUND_MINO_GRUMBLE_ID: return "SOUND_MINO_GRUMBLE";
		case SOUND_MINO_ATTACK_ID: return "SOUND_MINO_ATTACK";
		case IMAGE_B1A_SWAMP_SKY_ID: return "IMAGE_B1A_SWAMP_SKY";
		case IMAGE_B1A_HYDRA_BOSS_BATTLE_ID: return "IMAGE_B1A_HYDRA_BOSS_BATTLE";
		case SOUND_DRAGON_BITE_ID: return "SOUND_DRAGON_BITE";
		case SOUND_DRAGON_ROAR_ID: return "SOUND_DRAGON_ROAR";
		case SOUND_DRAGON_PAIN_ID: return "SOUND_DRAGON_PAIN";
		case SOUND_DRAGON_DEATH_ID: return "SOUND_DRAGON_DEATH";
		case IMAGE_B1A_SKY8_ID: return "IMAGE_B1A_SKY8";
		case SOUND_PIG_SQUEAL1_ID: return "SOUND_PIG_SQUEAL1";
		case SOUND_PIG_DIE_ID: return "SOUND_PIG_DIE";
		case SOUND_STYM_ENGAGE_ID: return "SOUND_STYM_ENGAGE";
		case SOUND_STYM_ATTACK_ID: return "SOUND_STYM_ATTACK";
		case SOUND_STYM_BLEED_ID: return "SOUND_STYM_BLEED";
		case SOUND_STYM_DIE_ID: return "SOUND_STYM_DIE";
		case SOUND_NEMEAN_HIT_ID: return "SOUND_NEMEAN_HIT";
		case SOUND_NEMEAN_DIE_ID: return "SOUND_NEMEAN_DIE";
		case SOUND_NEMEAN_ENGAGE_ID: return "SOUND_NEMEAN_ENGAGE";
		case IMAGE_B1A_SKY9_ID: return "IMAGE_B1A_SKY9";
		case SOUND_CENT_ENGAGE1_ID: return "SOUND_CENT_ENGAGE1";
		case SOUND_CENT_ENGAGE2_ID: return "SOUND_CENT_ENGAGE2";
		case SOUND_CENT_HIT_ID: return "SOUND_CENT_HIT";
		case SOUND_CENT_DIE_ID: return "SOUND_CENT_DIE";
		case SOUND_CENT_ARROWATTACK_ID: return "SOUND_CENT_ARROWATTACK";
		case SOUND_NYMPH_OOH_ID: return "SOUND_NYMPH_OOH";
		case SOUND_NYMPH_MMM_ID: return "SOUND_NYMPH_MMM";
		case SOUND_NYMPH_ATTACK_ID: return "SOUND_NYMPH_ATTACK";
		case SOUND_NYMPH_SONG_ID: return "SOUND_NYMPH_SONG";
		case SOUND_NYMPH_ENGAGE_ID: return "SOUND_NYMPH_ENGAGE";
		case SOUND_NYMPH_HIT_ID: return "SOUND_NYMPH_HIT";
		case SOUND_NYMPH_DIE_ID: return "SOUND_NYMPH_DIE";
		case SOUND_NESSUS_ENGAGE_ID: return "SOUND_NESSUS_ENGAGE";
		case SOUND_NESSUS_ATTACK_ID: return "SOUND_NESSUS_ATTACK";
		case SOUND_NESSUS_HIT_ID: return "SOUND_NESSUS_HIT";
		case SOUND_NESSUS_DIE_ID: return "SOUND_NESSUS_DIE";
		case IMAGE_B1A_SUNSET_ID: return "IMAGE_B1A_SUNSET";
		case SOUND_BASILISK_ATTACK_ID: return "SOUND_BASILISK_ATTACK";
		case SOUND_BASILISK_ENGAGE_ID: return "SOUND_BASILISK_ENGAGE";
		case SOUND_BASILISK_HIT_ID: return "SOUND_BASILISK_HIT";
		case SOUND_BASILISK_DIE_ID: return "SOUND_BASILISK_DIE";
		case SOUND_WITCH_ENGAGE_ID: return "SOUND_WITCH_ENGAGE";
		case SOUND_WITCH_ATTACK_ID: return "SOUND_WITCH_ATTACK";
		case SOUND_WITCH_HIT_ID: return "SOUND_WITCH_HIT";
		case SOUND_WITCH_DIE_ID: return "SOUND_WITCH_DIE";
		case SOUND_MEDUSA_SONG_ID: return "SOUND_MEDUSA_SONG";
		case SOUND_MEDUSA_HIT_ID: return "SOUND_MEDUSA_HIT";
		case SOUND_MEDUSA_ENGAGE_ID: return "SOUND_MEDUSA_ENGAGE";
		case SOUND_MEDUSA_DIE_ID: return "SOUND_MEDUSA_DIE";
		case SOUND_CASSKISS_ID: return "SOUND_CASSKISS";
		case SOUND_NEMESISWARP_ID: return "SOUND_NEMESISWARP";
		case SOUND_NEMESISLAUGH_ID: return "SOUND_NEMESISLAUGH";
		default: return "";
	}
}

