#ifndef WYSWIETLANIE
#define WYSWIETLANIE

#include <iostream>
#include <Windows.h>
#include <time.h>
#include <string>
#include <stdio.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <gl\glut.h>
#include <gl/freeglut.h>
#include <gl/freeglut_ext.h>
#include <gl/freeglut_std.h>
#include <SOIL.h>

#include "RENDERS.h"
#include "ZMIENNE.h"
#include "COLLISION.h"
#include "BULLET.h"
#include "LEVEL_1.h"

// Initialization
bool initGL();

// Operations every frame
void update();

// Rendering what's now on screen
void render();

// Detector when key is pressed
void handleKeys(unsigned char key, int x, int y);

// Detector when key is released
void keyUp(unsigned char key, int x, int y);

// Function to do something when key is pressed
void keyOperations();

#endif