#include "WYSWIETLANIE.h"

using namespace std;



int texture[2];





// X and Y positions of a player
float PLAYER_POSITION_X = 200.f;	
float PLAYER_POSITION_Y = 280.f;

//Player collision
float PLAYER_COLLISION[4];

// Data for jumps
bool PLAYER_TOUCHED_GROUND = 1;
bool PLAYER_ALREADY_JUMPED = 0;
int JUMP_FRAMES = 0;

// Data for collision
bool PLAYER_ON_GROUND = 0;
bool PLAYER_IN_WALL = 0;

// Data for attacks
int MELE_FRAMES = 0;
int BULLET_FRAMES = 0;
float SHOOTING_MODE = 0;

// Data for character rotation and bullet shooting
bool LOOK_UP = false;
bool LOOK_DOWN = false;
bool LOOK_LEFT = false;
bool LOOK_RIGHT = true;

// Data for player's bullets - I lost all hope at this point
int bullet_slot = 0; // MAX WILL BE 29
float bullet[30][7]; // Coordinates for bullets - exist / left_x / right_x / left_y / right_y / bullet_mode / bullet_nr

// Data for poerup
int powerup_slot = 0; // MAX WILL BE 2
float powerup[4][4];

// Data for boxes
float box_exist[99][3];


bool* keyStates = new bool[256];


void HideConsole()
{
	::ShowWindow(::GetConsoleWindow(), SW_HIDE);
}

void runMainLoop(int val)
{
	update();
	render();

	glutTimerFunc(100 / SCREEN_FPS, runMainLoop, val);
}

int main(int argc,char* args[])
{
	srand(time(0));
	HideConsole();

	for (int clear = 0; clear <= 29; clear++)
	{
		if (clear < 25)
			box_exist[clear][0] = 0;
		for (int clear_b = 0; clear <= 6; clear++)
		{
			bullet[clear][clear_b] = 0.f;
		}
	}

	box_exist[0][0] = 1;
	box_exist[1][0] = 1;
	box_exist[2][0] = 1;
	box_exist[3][0] = 1;
	box_exist[4][0] = 1;
	box_exist[5][0] = 1;
	box_exist[6][0] = 1;
	box_exist[7][0] = 1;
	box_exist[8][0] = 1;
	box_exist[9][0] = 1;
	box_exist[10][0] = 1;
	box_exist[11][0] = 1;
	box_exist[12][0] = 1;
	box_exist[13][0] = 1;


	//Initialize FreeGLUT
	glutInit(&argc, args);

	//Create OpenGL 2.1 context
	glutInitContextVersion(2, 1);

	//Create Double Buffered Window
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(SCREEN_WIDTH, SCREEN_HEIGHT);
	glutCreateWindow("OpenGL");

	//Do post window/context creation initialization
	if (!initGL())
	{
		printf("Unable to initialize graphics library!\n");
		return 1;
	}

	//Set keyboard handler
	glutKeyboardFunc(handleKeys);
	glutKeyboardUpFunc(keyUp);

	//Block repeating key like 'aaaa' when holding key <- optimalisation purpose 
	glutSetKeyRepeat(0);

	//Set rendering function
	glutDisplayFunc(render);

	//Set main loop
	glutTimerFunc(1000 / SCREEN_FPS, runMainLoop, 0);

	//Start GLUT main loop
	glutMainLoop();

	return 0;
}