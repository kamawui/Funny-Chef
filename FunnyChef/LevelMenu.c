#include "raylib.h"
#include "LevelMenu.h"
#include "CustomFunctions.h"
#include "GameConfig.h"
#include "State.h"

void renderLevelMenu()
{
    // delete and change it ///////////
    DrawCenteredText(
        "THIS IS LEVEL MENU",
        0.35,
        gameConfig.fontSizeHeader3,
        WHITE
    );
    DrawCenteredText(
        "AND THERE IS STILL NOTHING THERE",
        0.45,
        gameConfig.fontSizeHeader3,
        WHITE
    );
    DrawHint(
        "(press backspace to return, press space to continue)",
        0.6,
        gameConfig.fontSizeParagraph,
        WHITE
    );
    //////////////////////////////////
}