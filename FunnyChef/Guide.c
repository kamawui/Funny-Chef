#include "raylib.h"
#include "Guide.h"
#include "CustomFunctions.h"
#include "GameConfig.h"
#include "State.h"

void renderGuide()
{
    // delete and change it ///////////
    DrawCenteredText(
        "THIS IS GUIDE",
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