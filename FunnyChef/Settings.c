#include "raylib.h"
#include "Settings.h"
#include "CustomFunctions.h"
#include "GameConfig.h"
#include "State.h"

void renderSettings()
{
    // delete and change it ///////////
    DrawCenteredText(
        "THIS IS SETTINGS",
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
        "(press backspace to return)",
        0.6,
        gameConfig.fontSizeParagraph,
        WHITE
    );
    //////////////////////////////////
}