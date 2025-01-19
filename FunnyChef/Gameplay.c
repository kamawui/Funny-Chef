#include "raylib.h"
#include "Gameplay.h"
#include "CustomFunctions.h"
#include "GameConfig.h"
#include "State.h"

void renderGameplay()
{
    // delete and change it ///////////
    DrawCenteredText(
        "OMG THIS IS GAMEPLAY",
        0.3,
        gameConfig.fontSizeHeader3,
        WHITE
    );
    DrawCenteredText(
        "AND OF COURSE",
        0.4,
        gameConfig.fontSizeHeader3,
        WHITE
    );
    DrawCenteredText(
        "THERE IS STILL NOTHING THERE",
        0.5,
        gameConfig.fontSizeHeader3,
        WHITE
    );
    DrawHint(
        "(press backspace to return, press space to continue)",
        0.65,
        gameConfig.fontSizeParagraph,
        WHITE
    );
    //////////////////////////////////
}