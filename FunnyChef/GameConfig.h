#pragma once
#include "raylib.h"

typedef struct GameConfig
{
	double screenWidth;
	double screenHeight;
	double buttonWidth;
	double buttonHeight;
	double fontSizeHeader1;
	double fontSizeHeader2;
	double fontSizeHeader3;
	double fontSizeParagraph;
	Color buttonBackgroundColor;
	Color menuBackgroundColor;
} GameConfig;

extern GameConfig gameConfig;