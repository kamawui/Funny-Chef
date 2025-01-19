#pragma once

typedef enum GameScreen { MAIN_MENU = 0, SETTINGS, GUIDE, LEVEL_MENU, GAMEPLAY } GameScreen;

extern GameScreen currentState;