#include "WYSWIETLANIE.h"

//Camera position
GLfloat gCameraX = 0.f, gCameraY = 0.f;

bool initGL()
{
	//Set the viewport
	glViewport(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);

	//Initialize Projection Matrix
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, SCREEN_WIDTH, SCREEN_HEIGHT, 0.0, 1.0, -1.0);

	//Initialize Modelview Matrix
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	//Save the default modelview matrix
	glPushMatrix();

	//Initialize clear color
	glClearColor(0.f, 0.f, 0.f, 1.f);

	//Enable texturing
	glEnable(GL_TEXTURE_2D);

	//Set blending
	glEnable(GL_BLEND);
	glDisable(GL_DEPTH_TEST);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	//Check for error
	GLenum error = glGetError();
	if (error != GL_NO_ERROR)
	{
		printf("Error initializing OpenGL! %s\n", gluErrorString(error));
		return false;
	}
	return true;
}












void update()
{
	if (JUMP_FRAMES > 0)
	{
		JUMP_FRAMES--;
		PLAYER_POSITION_Y -= 2.4f;
	}
	if (JUMP_FRAMES == 0 && PLAYER_ON_GROUND == 0)
	{
		PLAYER_ALREADY_JUMPED = true;
		PLAYER_POSITION_Y += 2.4f;
	}

	PLAYER_COLLISION[0] = (PLAYER_POSITION_X - 25.f);
	PLAYER_COLLISION[1] = (PLAYER_POSITION_X + 25.f);
	PLAYER_COLLISION[2] = (PLAYER_POSITION_Y + 37.f);
	PLAYER_COLLISION[3] = (PLAYER_POSITION_Y + 40.f);

	// Move to the right
	{
		if (LOOK_RIGHT == true && LOOK_LEFT == false && (keyStates['d'] == true || keyStates['D'] == true))
			PLAYER_POSITION_X += 1;

		//Moving camera if player cross half of the screen
		if (PLAYER_POSITION_X >= gCameraX + 500)
			gCameraX += 1.f;
	}
	// Move to the left
	{
		//Block from leaving the screen
		if (PLAYER_POSITION_X > gCameraX + 30 && LOOK_LEFT == true && LOOK_RIGHT == false && (keyStates['a'] == true || keyStates['A'] == true))
			PLAYER_POSITION_X -= 1.f;
	}

	if(MELE_FRAMES > 0)
		MELE_FRAMES--;
	if (BULLET_FRAMES > 0)
		BULLET_FRAMES--;

	collision();
	bullet_collision();
	powerup_collision();
	ground_collision();
}

void render()
{
	//Clear color buffer
	glClear(GL_COLOR_BUFFER_BIT);

	//Pop default matrix onto current matrix
	glMatrixMode(GL_MODELVIEW);
	glPopMatrix();

	//Save default matrix again
	glPushMatrix();

	platform(0.f, 20000.f, 590.f, 600.f); // GROUND

	if(level == 1)
		Level_1_render(); // Rendering level 1 blocks

	if(LOOK_RIGHT == true && LOOK_LEFT == false)
	platform(PLAYER_POSITION_X, PLAYER_POSITION_X + 50, PLAYER_POSITION_Y - 2, PLAYER_POSITION_Y + 2);
	if (LOOK_LEFT == true && LOOK_RIGHT == false)
		platform(PLAYER_POSITION_X, PLAYER_POSITION_X - 50, PLAYER_POSITION_Y - 2, PLAYER_POSITION_Y + 2);

	if (box_exist[0][0] == 1)
	{
		box(450.f, 400.f); //1
		box_exist[0][1] = 450.f;
		box_exist[0][2] = 400.f;
	}
	if (box_exist[1][0] == 1)
	{
		box(550.f, 400.f);//2
		box_exist[1][1] = 550.f;
		box_exist[1][2] = 400.f;
	}
	if (box_exist[2][0] == 1)
	{
		box(1550.f, 130.f);//3
		box_exist[2][1] = 1550.f;
		box_exist[2][2] = 130.f;
	}
	if (box_exist[3][0] == 1)
	{
		box(1900.f, 280.f);//4
		box_exist[3][1] = 1900.f;
		box_exist[3][2] = 280.f;
	}
	if (box_exist[4][0] == 1)
	{
		box(2500.f, 400.f);//5
		box_exist[4][1] = 2500.f;
		box_exist[4][2] = 400.f;
	}
	if (box_exist[5][0] == 1)
	{
		box(4275.f, 380.f);//6
		box_exist[5][1] = 4275.f;
		box_exist[5][2] = 380.f;
	}
	if (box_exist[6][0] == 1)
	{
		box(5750.f, 180.f);//7
		box_exist[6][1] = 5750.f;
		box_exist[6][2] = 180.f;
	}
	if (box_exist[7][0] == 1)
	{
		box(6580.f, 300.f);//8
		box_exist[7][1] = 6580.f;
		box_exist[7][2] = 300.f;
	}
	if (box_exist[8][0] == 1)
	{
		box(7600.f, 300.f);//9
		box_exist[8][1] = 7600.f;
		box_exist[8][2] = 300.f;
	}
	if (box_exist[9][0] == 1)
	{
		box(8600.f, 330.f);//10
		box_exist[9][1] = 8600.f;
		box_exist[9][2] = 330.f;
	}
	if (box_exist[10][0] == 1)
	{
		box(9020.f, 110.f);//11
		box_exist[10][1] = 9020.f;
		box_exist[10][2] = 110.f;
	}
	if (box_exist[11][0] == 1)
	{
		box(10100.f, 100.f);//12
		box_exist[11][1] = 10100.f;
		box_exist[11][2] = 100.f;
	}
	if (box_exist[12][0] == 1)
	{
		box(11650.f, 260.f);//13
		box_exist[12][1] = 11650.f;
		box_exist[12][2] = 260.f;
	}
	if (box_exist[13][0] == 1)
	{
		box(13050.f, 460.f);//14
		box_exist[13][1] = 13050.f;
		box_exist[13][2] = 460.f;
	}

	powerup_render();

	//Player
	Render_player();

	if (MELE_FRAMES > 350)
		mele();

	Bullet_movement(gCameraX, gCameraY);

	keyOperations();
	//Update screen
	glutSwapBuffers();
}

void keyOperations()
{
	//Jumping
	if (keyStates['w'] == true || keyStates['W'] == true || keyStates[' '] == true)
	{
		LOOK_UP = true;
		if (PLAYER_TOUCHED_GROUND == 1 && PLAYER_ALREADY_JUMPED == 0)
		{
			JUMP_FRAMES = 60;
			PLAYER_TOUCHED_GROUND = 0;
			PLAYER_ON_GROUND = 0;
			PLAYER_ALREADY_JUMPED = 1;
		};
	}
	else if (keyStates['w'] == false || keyStates['W'] == false || keyStates[' '] == false)
	{
		LOOK_DOWN = false;
		PLAYER_ALREADY_JUMPED = 0;
	}
	//Movement do the right
	if (keyStates['d'] == true || keyStates['D'] == true)
	{
		LOOK_RIGHT = true;

		if (LOOK_LEFT == true)
			LOOK_LEFT = false;
	}
	//Movement to the left
	if (keyStates['a'] == true || keyStates['A'] == true)
	{
		LOOK_LEFT = true;

		if (LOOK_RIGHT == true)
			LOOK_RIGHT = false;
	}
	//Mele attack
	if (keyStates['j'] == true || keyStates['J'] == true)
	{
		if (MELE_FRAMES == 0)
		{
			MELE_FRAMES = 400;
		}
	}
	if (keyStates['k'] == true || keyStates['K'] == true)
	{
		Create_bullets();
	}
	if (keyStates['i'] == true || keyStates['I'] == true)
	{
		SHOOTING_MODE++;
		if (SHOOTING_MODE > 2)
		{
			SHOOTING_MODE = 0;
		}
	}
	//Take saved matrix off the stack and reset it
	glMatrixMode(GL_MODELVIEW);
	glPopMatrix();
	glLoadIdentity();

	//Move camera to position
	glTranslatef(-gCameraX, -gCameraY, 0.f);

	//Save default matrix again with camera translation
	glPushMatrix();
}
void handleKeys(unsigned char key, int x, int y)
{
	keyStates[key] = true;
}
void keyUp(unsigned char key, int x, int y)
{
	keyStates[key] = false;
}