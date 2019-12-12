#ifndef RENDERS
#define RENDERS

#include "ZMIENNE_H.h"
#include "WYSWIETLANIE_H.h"

void Render_player();

void platform(float XL, float XR, float YU, float YD);

void mele();

void bullet_render(float XL, float XR, float YL, float YR);

void powerup_render();

// Box with power up, place point on floor and this will make same box every time
void box(float X, float Y);
#endif