#include "TextureLoader.h"

#include "sfwdraw.h"


int TextureLoader::avatar_button_1;
int TextureLoader::avatar_button_2;
int TextureLoader::back_button_1;
int TextureLoader::back_button_2;
int TextureLoader::gen_button_1;
int TextureLoader::gen_button_2;

int TextureLoader::grass10img;
int TextureLoader::grass20img;
int TextureLoader::grass30img;
int TextureLoader::grass40img;
int TextureLoader::grass50img;
int TextureLoader::grass60img;
int TextureLoader::grass70img;
int TextureLoader::grass80img;
int TextureLoader::grass90img;

int TextureLoader::water10img;
int TextureLoader::water20img;
int TextureLoader::water30img;
int TextureLoader::water40img;
int TextureLoader::water50img;
int TextureLoader::water60img;
int TextureLoader::water70img;
int TextureLoader::water80img;
int TextureLoader::water90img;



TextureLoader::TextureLoader()
{
	
}


TextureLoader::~TextureLoader()
{
}

void TextureLoader::init()
{
	avatar_button_1 = sfw::loadTextureMap("AvatarButton1.png");
	avatar_button_2 = sfw::loadTextureMap("AvatarButton2.png");
	back_button_1 = sfw::loadTextureMap("BackButton1.png");
	back_button_2 = sfw::loadTextureMap("BackButton2.png");
	gen_button_1 = sfw::loadTextureMap("GenButton1.png");
	gen_button_2 = sfw::loadTextureMap("GenButton2.png");

	grass10img = sfw::loadTextureMap("10Grass.png");
	grass20img = sfw::loadTextureMap("20Grass.png");
	grass30img = sfw::loadTextureMap("30Grass.png");
	grass40img = sfw::loadTextureMap("40Grass.png");
	grass50img = sfw::loadTextureMap("50Grass.png");
	grass60img = sfw::loadTextureMap("60Grass.png");
	grass70img = sfw::loadTextureMap("70Grass.png");
	grass80img = sfw::loadTextureMap("80Grass.png");
	grass90img = sfw::loadTextureMap("90Grass.png");

	water10img = sfw::loadTextureMap("10Water.png");
	water20img = sfw::loadTextureMap("20Water.png");
	water30img = sfw::loadTextureMap("30Water.png");
	water40img = sfw::loadTextureMap("40Water.png");
	water50img = sfw::loadTextureMap("50Water.png");
	water60img = sfw::loadTextureMap("60Water.png");
	water70img = sfw::loadTextureMap("70Water.png");
	water80img = sfw::loadTextureMap("80Water.png");
	water90img = sfw::loadTextureMap("90Water.png");
}
