#include "WYSWIETLANIE_H.h"

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

	platform(0.f, 900.f, 400.f, 450.f); // FIRST
	platform(600.f, 900.f, 280.f, 300.f); // SECOND
	platform(1000.f, 1100.f, 250.f, 270.f);//THIRD
	platform(1150.f, 1350.f, 180.f, 200.f); //4th
	platform(1350.f, 1650.f, 130.f, 140.f);//5th
	platform(1750.f, 2250.f, 500.f, 550.f);//6th
	platform(2350.f, 2400.f, 450.f, 460.f);//7th
	platform(2500.f, 2550.f, 400.f, 410.f);//8th
	platform(2650.f, 2700.f, 350.f, 360.f);//9th
	platform(2750.f, 3650.f, 320.f, 340.f);//10th
	platform(3750.f, 4350.f, 480.f, 510.f);//11th
	platform(4250.f, 4350.f, 380.f, 390.f);//12th
	platform(4250.f, 4350.f, 280.f, 290.f);//13th
	platform(4250.f, 4350.f, 180.f, 190.f);//14th
	platform(4450.f, 5100.f, 180.f, 200.f);//15th
	platform(5150.f, 5600.f, 230.f, 250.f);//16th
	platform(5650.f, 5900.f, 180.f, 200.f);//17th
	platform(5950.f, 6200.f, 120.f, 140.f);//18th
	platform(6360.f, 6860.f, 500.f, 530.f);//19th ***
	platform(6430.f, 6630.f, 300.f, 310.f);//20th
	platform(6730.f, 6830.f, 300.f, 310.f);//21th
	platform(6930.f, 7130.f, 300.f, 310.f);//22th
	platform(7230.f, 7330.f, 300.f, 310.f);//23th
	platform(7480.f, 7680.f, 300.f, 310.f);//24th
	platform(7790.f, 7950.f, 300.f, 310.f);//25th
	platform(8140.f, 8740.f, 330.f, 340.f);//26th
	platform(6970.f, 7360.f, 500.f, 530.f);//27th ***
	platform(7490.f, 7880.f, 500.f, 530.f);//28th ***
	platform(8010.f, 8290.f, 500.f, 530.f);//29th ***
	platform(8160.f, 8290.f, 390.f, 400.f);//30th ***
	platform(8690.f, 8740.f, 260.f, 270.f);//31
	platform(8800.f, 8850.f, 200.f, 210.f);//32
	platform(8910.f, 8960.f, 140.f, 150.f);//33
	platform(9020.f, 9070.f, 110.f, 130.f);//34
	platform(9130.f, 9530.f, 110.f, 130.f);//35
	platform(9650.f, 9900.f, 110.f, 130.f);//36
	platform(10040.f, 10190.f, 260.f, 270.f);//37
	platform(10260.f, 10410.f, 160.f, 170.f);//38
	platform(10550.f, 10700.f, 310.f, 320.f);//39
	platform(10770.f, 10920.f, 210.f, 220.f);//40
	platform(11060.f, 11210.f, 360.f, 370.f);//41
	platform(11280.f, 11430.f, 260.f, 270.f);//42
	platform(11570.f, 11720.f, 410.f, 420.f);//43
	platform(11790.f, 11940.f, 310.f, 320.f);//44
	platform(12080.f, 12580.f, 460.f, 480.f);//45
	platform(12700.f, 13100.f, 460.f, 480.f);//46    -->Easter Egg V V V
	platform(13165.f, 13230.f, 395.f, 405.f);//47
	platform(13295.f, 13360.f, 330.f, 340.f);//48
	platform(13425.f, 13490.f, 265.f, 275.f);//49
	platform(13555.f, 14555.f, 200.f, 600.f);//50
	platform(14505.f, 14555.f, 0.f, 600.f);//51  Di Ent

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