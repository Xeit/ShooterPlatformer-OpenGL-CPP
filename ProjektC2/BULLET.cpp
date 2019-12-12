#include "BULLET.h"

void Bullet_movement(GLfloat gCameraX, GLfloat gCameraY)
{

	for (int bullet_slot_value = 0; bullet_slot_value <= 29; bullet_slot_value++)
	{
		if (bullet[bullet_slot_value][0] == 1)
		{
			bullet_render(bullet[bullet_slot_value][1], bullet[bullet_slot_value][2], bullet[bullet_slot_value][3], bullet[bullet_slot_value][4]);
			if (bullet[bullet_slot_value][1] > gCameraX + SCREEN_WIDTH ||
				bullet[bullet_slot_value][3] < gCameraY ||
				bullet[bullet_slot_value][1] < gCameraX ||
				bullet[bullet_slot_value][3] > gCameraY + SCREEN_HEIGHT)
			{
				bullet[bullet_slot_value][0] = 0;
			};

			if (bullet[bullet_slot_value][6] == 0)
			{
				bullet[bullet_slot_value][1] += 2.5f;
				bullet[bullet_slot_value][2] += 2.5f;
			}
			else if (bullet[bullet_slot_value][6] == 1)
			{
				bullet[bullet_slot_value][1] += 2.5f;
				bullet[bullet_slot_value][2] += 2.5f;
				bullet[bullet_slot_value][3] -= 1.f;
				bullet[bullet_slot_value][4] -= 1.f;
			}
			else if (bullet[bullet_slot_value][6] == 2)
			{
				bullet[bullet_slot_value][1] += 2.5f;
				bullet[bullet_slot_value][2] += 2.5f;
				bullet[bullet_slot_value][3] += 1.f;
				bullet[bullet_slot_value][4] += 1.f;
			}
			else if (bullet[bullet_slot_value][6] == 3)
			{
				bullet[bullet_slot_value][1] += 2.5f;
				bullet[bullet_slot_value][2] += 2.5f;
				bullet[bullet_slot_value][3] -= 2.f;
				bullet[bullet_slot_value][4] -= 2.f;
			}
			else if (bullet[bullet_slot_value][6] == 4)
			{
				bullet[bullet_slot_value][1] += 2.5f;
				bullet[bullet_slot_value][2] += 2.5f;
				bullet[bullet_slot_value][3] += 2.f;
				bullet[bullet_slot_value][4] += 2.f;
			};
		}
	}
}

void Create_bullets()
{
	if (SHOOTING_MODE == 0) // STANDARD WEAPON
	{
		if (BULLET_FRAMES == 0)
		{
			BULLET_FRAMES = 250;

			bullet_slot++;
			if (bullet_slot > 29)
				bullet_slot = 0;

			bullet[bullet_slot][0] = 1;
			bullet[bullet_slot][1] = PLAYER_POSITION_X + 25;
			bullet[bullet_slot][2] = PLAYER_POSITION_X + 35;
			bullet[bullet_slot][3] = PLAYER_POSITION_Y;
			bullet[bullet_slot][4] = PLAYER_POSITION_Y;
			bullet[bullet_slot][5] = SHOOTING_MODE + 0.f;
			bullet[bullet_slot][6] = 0;
		}
	}
	else if (SHOOTING_MODE == 1) // MACHINEGUN
	{
		if (BULLET_FRAMES == 0)
		{
			BULLET_FRAMES = 60;

			bullet_slot++;
			if (bullet_slot > 29)
				bullet_slot = 0;

			bullet[bullet_slot][0] = 1;
			bullet[bullet_slot][1] = PLAYER_POSITION_X + 25;
			bullet[bullet_slot][2] = PLAYER_POSITION_X + 35;
			bullet[bullet_slot][3] = PLAYER_POSITION_Y;
			bullet[bullet_slot][4] = PLAYER_POSITION_Y;
			bullet[bullet_slot][5] = SHOOTING_MODE + 0.f;
			bullet[bullet_slot][6] = 0;
		}

	}
	else if (SHOOTING_MODE == 2) // SHOTGUN
	{
		if (BULLET_FRAMES == 0)
		{
			BULLET_FRAMES = 350;
			for (int number = 0; number <= 4; number++)
			{
				bullet_slot++;
				if (bullet_slot > 29)
					bullet_slot = 0;

				bullet[bullet_slot][0] = 1;
				bullet[bullet_slot][1] = PLAYER_POSITION_X + 25;
				bullet[bullet_slot][2] = PLAYER_POSITION_X + 35;
				bullet[bullet_slot][3] = PLAYER_POSITION_Y;
				bullet[bullet_slot][4] = PLAYER_POSITION_Y;
				bullet[bullet_slot][5] = SHOOTING_MODE + 0.f;
				bullet[bullet_slot][6] = number + 0.f;
			}
		}
	}
}
