#include "MapRegion.h"



#include "Box.h"



MapRegion::MapRegion()
{
	for (int i = 0; i < 100; ++i)
	{
		tiles[i] = 1;
	}

	tileSizeAvatar = 40;
	tileSizeWorld = 4;
}


MapRegion::~MapRegion()
{
}



void MapRegion::drawAvatar(vec2 playerPos)
{
	for (int y = 0; y < 10; ++y)
	{
		for (int x = 0; x < 10; ++x)
		{
			tiles[x + y * 10];
			Box::draw(playerPos, {	(float)x * tileSizeAvatar,
									(float)y * tileSizeAvatar },
									{ tileSizeAvatar,tileSizeAvatar });
		}
	}
}

void MapRegion::drawWorld(vec2 playerPos)
{
	for (int y = 0; y < 10; ++y)
	{
		for (int x = 0; x < 10; ++x)
		{
			tiles[x + y * 10];
			Box::draw(playerPos, {	(float)x * tileSizeWorld,
									(float)y * tileSizeWorld },
									{ tileSizeWorld,tileSizeWorld });
		}
	}
}

//void MapRegion::draw()
//{
//	for (int y = 0; y < 10; ++y)
//	{
//		for (int x = 0; x < 10; ++x)
//		{
//			tiles[x + y * 10];
//			Box::draw({ (float)x * tileSize + transform.pos.x,
//						(float)y * tileSize + transform.pos.y },
//						{ tileSize,tileSize });
//		}
//	}
//}
