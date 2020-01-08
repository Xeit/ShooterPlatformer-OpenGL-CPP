#include "COLLISION.h"

void compare(float left_x, float right_x, float y)
{
	for (float x = left_x; x <= right_x; x+=2)
	{
		if (x >= PLAYER_COLLISION[0] && x <= PLAYER_COLLISION[1])
		{
			if (y <= PLAYER_COLLISION[3] && y >= PLAYER_COLLISION[2])
			{
				PLAYER_ON_GROUND = 1;
				PLAYER_TOUCHED_GROUND = 1;
			}
		}
	}
}

void collision()
{
	PLAYER_ON_GROUND = 0;

	if (level == 1)
	{
		Level_1_collision();
	}
	else if (level == 2)
	{
		Level_2_collision();
	}
	else if (level == 3)
	{
		Level_3_collision();
	};
}

void bullet_collision()
{
	for (int bullet_id = 0; bullet_id <= 29; bullet_id++)
	{
		if (bullet[bullet_id][0] == 1)
		{
			for (int box_id = 0; box_id <= 24; box_id++)
			{
				if (box_exist[box_id][0] == 1)
				{
					if (((bullet[bullet_id][1] >= (box_exist[box_id][1] - 40.f)) && (bullet[bullet_id][1] <= (box_exist[box_id][1] + 40.f))) ||
						((bullet[bullet_id][2] >= (box_exist[box_id][1] - 40.f)) && (bullet[bullet_id][2] <= (box_exist[box_id][1] + 40.f))))
					{
						if (((bullet[bullet_id][3] >= (box_exist[box_id][2] - 80.f)) && (bullet[bullet_id][3] <= box_exist[box_id][2])) ||
							((bullet[bullet_id][4] >= (box_exist[box_id][2] - 80.f)) && (bullet[bullet_id][4] <= box_exist[box_id][2])))
						{
							bullet[bullet_id][0] = 0;
							box_exist[box_id][0] = 0;
							powerup_slot++;
							if (powerup_slot > 2)
								powerup_slot = 0;
							powerup[powerup_slot][0] = 1;
							powerup[powerup_slot][1] = box_exist[box_id][1];
							powerup[powerup_slot][2] = box_exist[box_id][2] - 40;
							powerup[powerup_slot][3] = rand()%3+0.f;
						}
					}
				}
			}
		}
	}
}

void powerup_collision()
{
	for (int powerup_id = 0; powerup_id < 3; powerup_id++)
	{
		if (powerup[powerup_id][0] == 1)
		{
			if (powerup[powerup_id][1] >= PLAYER_POSITION_X - 25 && powerup[powerup_id][1] <= PLAYER_POSITION_X + 25)
			{
				if (powerup[powerup_id][2] >= PLAYER_POSITION_Y - 40 && powerup[powerup_id][2] <= PLAYER_POSITION_Y + 40)
				{
					SHOOTING_MODE = powerup[powerup_id][3];
					powerup[powerup_id][0] = 0;
				}
			}
		}
	}
}

void ground_collision()
{
	if (PLAYER_POSITION_Y >= 560)
	{
		PLAYER_ON_GROUND = 1;
		PLAYER_TOUCHED_GROUND = 1;
	}
}