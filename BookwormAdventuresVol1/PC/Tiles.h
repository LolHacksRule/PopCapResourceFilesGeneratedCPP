#ifndef __Tiles_H__
#define __Tiles_H__

namespace Sexy
{
	class ResourceManager;
	class Image;
	class Font;

	Image* LoadImageById(ResourceManager *theManager, int theId);
	void ReplaceImageById(ResourceManager *theManager, int theId, Image *theImage);
	bool ExtractResourcesByName(ResourceManager *theManager, const char *theName);

	// Init_DefaultTiles Resources
	bool ExtractInit_DefaultTilesResources(ResourceManager *theMgr);
	extern Image* IMAGE_TILE_AMETHYST;
	extern Image* IMAGE_TILE_AMETHYST_GLOW;
	extern Image* IMAGE_TILE_AMETHYST_MO;
	extern Image* IMAGE_TILE_CRYSTAL;
	extern Image* IMAGE_TILE_CRYSTAL_GLOW;
	extern Image* IMAGE_TILE_CRYSTAL_MO;
	extern Image* IMAGE_TILE_DESTROYED;
	extern Image* IMAGE_TILE_DIAMOND;
	extern Image* IMAGE_TILE_DIAMOND_GLOW;
	extern Image* IMAGE_TILE_DIAMOND_MO;
	extern Image* IMAGE_TILE_EMERALD;
	extern Image* IMAGE_TILE_EMERALD_GLOW;
	extern Image* IMAGE_TILE_EMERALD_MO;
	extern Image* IMAGE_TILE_FIRE;
	extern Image* IMAGE_TILE_FIRE_CHARRED;
	extern Image* IMAGE_TILE_FIRE_GLOW;
	extern Image* IMAGE_TILE_GARNET;
	extern Image* IMAGE_TILE_GARNET_GLOW;
	extern Image* IMAGE_TILE_GARNET_MO;
	extern Image* IMAGE_TILE_LOCKED;
	extern Image* IMAGE_TILE_PLAGUED;
	extern Image* IMAGE_TILE_RUBY;
	extern Image* IMAGE_TILE_RUBY_GLOW;
	extern Image* IMAGE_TILE_RUBY_MO;
	extern Image* IMAGE_TILE_SAPPHIRE;
	extern Image* IMAGE_TILE_SAPPHIRE_GLOW;
	extern Image* IMAGE_TILE_SAPPHIRE_MO;
	extern Image* IMAGE_TILE_TOPAZ;
	extern Image* IMAGE_TILE_TOPAZ_GLOW;
	extern Image* IMAGE_TILE_TOPAZ_MO;

	enum ResourceId
	{
		IMAGE_TILE_AMETHYST_ID,
		IMAGE_TILE_AMETHYST_MO_ID,
		IMAGE_TILE_AMETHYST_GLOW_ID,
		IMAGE_TILE_CRYSTAL_ID,
		IMAGE_TILE_CRYSTAL_MO_ID,
		IMAGE_TILE_CRYSTAL_GLOW_ID,
		IMAGE_TILE_DESTROYED_ID,
		IMAGE_TILE_PLAGUED_ID,
		IMAGE_TILE_DIAMOND_ID,
		IMAGE_TILE_DIAMOND_MO_ID,
		IMAGE_TILE_DIAMOND_GLOW_ID,
		IMAGE_TILE_EMERALD_ID,
		IMAGE_TILE_EMERALD_MO_ID,
		IMAGE_TILE_EMERALD_GLOW_ID,
		IMAGE_TILE_FIRE_ID,
		IMAGE_TILE_FIRE_CHARRED_ID,
		IMAGE_TILE_FIRE_GLOW_ID,
		IMAGE_TILE_GARNET_ID,
		IMAGE_TILE_GARNET_MO_ID,
		IMAGE_TILE_GARNET_GLOW_ID,
		IMAGE_TILE_LOCKED_ID,
		IMAGE_TILE_RUBY_ID,
		IMAGE_TILE_RUBY_MO_ID,
		IMAGE_TILE_RUBY_GLOW_ID,
		IMAGE_TILE_SAPPHIRE_ID,
		IMAGE_TILE_SAPPHIRE_MO_ID,
		IMAGE_TILE_SAPPHIRE_GLOW_ID,
		IMAGE_TILE_TOPAZ_ID,
		IMAGE_TILE_TOPAZ_MO_ID,
		IMAGE_TILE_TOPAZ_GLOW_ID,
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
