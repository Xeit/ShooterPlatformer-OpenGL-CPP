#include "TEXTURES.h"

GLuint tex_2d = 0;

void Load_textures()
{
}

void Render_texture_test()
{
	if (tex_2d == 0)
		Load_textures();


	//Remove any previous transformations
	glLoadIdentity();

	//Move to rendering point
	glTranslatef(400.f, 250.f, 0.f);

	//Set texture ID
	glBindTexture(GL_TEXTURE_2D, tex_2d); 


	glBegin(GL_QUADS);
	glTexCoord2f(0.f, 0.f); glVertex2f(0.f, 0.f);
	glTexCoord2f(256.f, 0.f); glVertex2f(256.f, 0.f);
	glTexCoord2f(256.f, 128.f); glVertex2f(256.f, 128.f);
	glTexCoord2f(0.f, 128.f); glVertex2f(0.f, 128.f);
	glEnd();


	/*
	glBegin(GL_QUADS);
	
		glVertex2f(PLAYER_POSITION_X - 25, PLAYER_POSITION_Y - 40);
		glVertex2f(PLAYER_POSITION_X + 25, PLAYER_POSITION_Y - 40);
		glVertex2f(PLAYER_POSITION_X + 25, PLAYER_POSITION_Y + 40);
		glVertex2f(PLAYER_POSITION_X - 25, PLAYER_POSITION_Y + 40);

	glTexCoord2d(0, 0);        glVertex2f(1 * SCREEN_WIDTH / 2, -1 * SCREEN_HEIGHT / 2);
	glTexCoord2d(0, 1);        glVertex2f(1 * SCREEN_WIDTH / 2, 1 * SCREEN_HEIGHT / 2);
	glTexCoord2d(1, 1);        glVertex2f(-1 * SCREEN_WIDTH / 2, 1 * SCREEN_HEIGHT / 2);
	glTexCoord2d(1, 0);        glVertex2f(-1 * SCREEN_WIDTH / 2, -1 * SCREEN_HEIGHT / 2);
	*/

	glEnd();

}