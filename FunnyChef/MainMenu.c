#include "raylib.h";
#include "MainMenu.h"
#include "GameConfig.h"
#include "CustomFunctions.h"
#include "State.h"

void DrawCenteredButton(const char* text, int relativeY, int fontSize, Color buttonBackground, Color fontColor, Rectangle buttonRect)
{
    DrawRectangleRec(buttonRect, buttonBackground);
    int textWidth = MeasureText(text, fontSize);
    int textX = buttonRect.x + (buttonRect.width - textWidth) / 2;
    int textY = buttonRect.y + (buttonRect.height - fontSize) / 2;
    DrawText(text, textX, textY, fontSize, fontColor);
}

void renderMainMenu()
{
    int buttonX = (GetScreenWidth() - gameConfig.buttonWidth) / 2;
    int buttonY = (int)(GetScreenHeight() * 0.6);
    Rectangle buttonRect = { buttonX, buttonY, gameConfig.buttonWidth, gameConfig.buttonHeight };

    if (CheckCollisionPointRec(GetMousePosition(), buttonRect) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
        currentState = LEVEL_MENU;
    }

    DrawCenteredText("FUNNY CHEF", 0.3, gameConfig.fontSizeHeader1, WHITE);
    DrawCenteredButton("PLAY", 0.6, gameConfig.fontSizeHeader2, gameConfig.buttonBackgroundColor, WHITE, buttonRect);
}