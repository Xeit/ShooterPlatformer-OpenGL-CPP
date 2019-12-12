#include "RENDERS.h"

void Render_player()
{
	glBegin(GL_QUADS);
	{
		glColor3f(1.f, 0.f, 0.f);
		glVertex2f(PLAYER_POSITION_X - 25, PLAYER_POSITION_Y - 40);
		glVertex2f(PLAYER_POSITION_X + 25, PLAYER_POSITION_Y - 40);
		glVertex2f(PLAYER_POSITION_X + 25, PLAYER_POSITION_Y + 40);
		glVertex2f(PLAYER_POSITION_X - 25, PLAYER_POSITION_Y + 40);
	}
	glEnd();
}

void platform(float XL, float XR, float YU, float YD)
{
	glBegin(GL_QUADS);
	{
		glColor3f(0.f, 1.f, 0.f);
		glVertex2f(XL, YU);
		glVertex2f(XR, YU);
		glVertex2f(XR, YD);
		glVertex2f(XL, YD);
	}
	glEnd();
}

void mele()
{
	glBegin(GL_QUADS);
	{
		glColor3f(1.f, 1.f, 0.f);
		glVertex2f(PLAYER_POSITION_X + 25, PLAYER_POSITION_Y - 40);
		glVertex2f(PLAYER_POSITION_X + 75, PLAYER_POSITION_Y - 40);
		glVertex2f(PLAYER_POSITION_X + 75, PLAYER_POSITION_Y + 40);
		glVertex2f(PLAYER_POSITION_X + 25, PLAYER_POSITION_Y + 40);
	}
	glEnd();

}

void bullet_render(float XL, float XR, float YL, float YR)
{
	glBegin(GL_QUADS);
	{
		glColor3f(1.f, 0.f, 1.f);
		glVertex2f(XL - 5, YL - 5);
		glVertex2f(XR + 5, YR - 5);
		glVertex2f(XR + 5, YR + 5);
		glVertex2f(XL - 5, YL + 5);
	}
	glEnd();
}

void powerup_render()
{
	for (int powerup_id = 0; powerup_id < 3; powerup_id++)
	{
		if (powerup[powerup_id][0] == 1)
		{
			glBegin(GL_QUADS);
			{
				if (powerup[powerup_id][3] == 0)
					glColor3f(1.f, 1.f, 0.f);
				if (powerup[powerup_id][3] == 1)
					glColor3f(0.f, 1.f, 1.f);
				if (powerup[powerup_id][3] == 2)
					glColor3f(1.f, 0.f, 1.f);
				glVertex2f(powerup[powerup_id][1] - 5, powerup[powerup_id][2] - 5);
				glVertex2f(powerup[powerup_id][1] + 5, powerup[powerup_id][2] - 5);
				glVertex2f(powerup[powerup_id][1] + 5, powerup[powerup_id][2] + 5);
				glVertex2f(powerup[powerup_id][1] - 5, powerup[powerup_id][2] + 5);
			}
			glEnd();

		}
	}
}

void box(float X, float Y)
{
	glBegin(GL_QUADS);
	{
		glColor3f(0.f, 0.f, 1.f);
		glVertex2f(X - 40, Y - 80);
		glVertex2f(X + 40, Y - 80);
		glVertex2f(X + 40, Y);
		glVertex2f(X - 40, Y);
	}
	glEnd();
}
