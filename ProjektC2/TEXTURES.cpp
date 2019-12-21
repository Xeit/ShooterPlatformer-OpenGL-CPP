#include "TEXTURES.h"

void Load_textures()
{
	GLuint tex_2d;
	tex_2d = SOIL_load_OGL_texture(
		"texture.png",
		SOIL_LOAD_AUTO,
		SOIL_CREATE_NEW_ID,
		SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
	);
}