#pragma once
#ifndef ZMIENNE
#define ZMIENNE

struct collision_line
{
public:
	float point_left[2];
	float point_right[2];

	void collision_points(float left_x, float right_x, float y)
	{
		this->point_left[0] = left_x;
		this->point_left[1] = y;
		this->point_right[0] = right_x;
		this->point_right[1] = y;
	}

	float get_left_x()
	{
		return this->point_left[0];
	}
	float get_right_x()
	{
		return this->point_right[0];
	}
	float get_y()
	{
		return this->point_left[1];
	}
};

struct Image 
{
	unsigned long sizeX;
	unsigned long sizeY;
	char* data;
};

struct bullet
{
public:
	float point[2];
};





extern short level;

extern int texture[2];




const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 600;
const int SCREEN_FPS = 30;

extern float PLAYER_POSITION_X;
extern float PLAYER_POSITION_Y;
extern float PLAYER_COLLISION[];

extern int JUMP_FRAMES;
extern bool PLAYER_TOUCHED_GROUND;
extern bool PLAYER_ALREADY_JUMPED;

extern bool* keyStates;

extern bool PLAYER_ON_GROUND;
extern bool PLAYER_IN_WALL;

extern int MELE_FRAMES;
extern int BULLET_FRAMES;
extern float SHOOTING_MODE;

extern bool LOOK_UP;
extern bool LOOK_DOWN;
extern bool LOOK_LEFT;
extern bool LOOK_RIGHT;

extern int bullet_slot;
extern float bullet[][7];

extern float box_exist[][3];

extern int powerup_slot;
extern float powerup[][4];


#endif
