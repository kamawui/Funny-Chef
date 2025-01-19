#include "raylib.h"
#include "GameConfig.h"
#include "State.h"
#include "MainMenu.h"
#include "LevelMenu.h"
#include "Settings.h"

void EnableResizableScreen(int* prevScreenWidth, int* prevScreenHeight)
{
    if ((IsKeyPressed(KEY_ENTER) && (IsKeyDown(KEY_LEFT_ALT) || IsKeyDown(KEY_RIGHT_ALT))) || IsKeyPressed(KEY_F11))
    {
        if (IsWindowFullscreen())
        {
            SetWindowSize(*prevScreenWidth, *prevScreenHeight);
        }
        else
        {
            *prevScreenWidth = GetScreenWidth();
            *prevScreenHeight = GetScreenHeight();
            SetWindowSize(GetMonitorWidth(0), GetMonitorHeight(0));
        }
        ToggleFullscreen();
    }
}

int main()
{
    int currentScreenWidth = gameConfig.screenWidth;
    int currentScreenHeight = gameConfig.screenHeight;

    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(gameConfig.screenWidth, gameConfig.screenHeight, "Funny Chef");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        // making screen mod changed on alt+enter or f11
        EnableResizableScreen(&currentScreenWidth, &currentScreenHeight);

        switch (currentState)
        {
            case MAIN_MENU:
            {
                if (IsKeyPressed(KEY_SPACE))
                {
                    currentState = LEVEL_MENU;
                }
                if (IsKeyPressed(KEY_LEFT_CONTROL))
                {
                    currentState = SETTINGS;
                }
                if (IsKeyPressed(KEY_TAB))
                {
                    currentState = GUIDE;
                }
            } break;
            case LEVEL_MENU:
            {
                if (IsKeyPressed(KEY_SPACE))
                {
                    currentState = GAMEPLAY;
                }
                if (IsKeyPressed(KEY_BACKSPACE))
                {
                    currentState = MAIN_MENU;
                }
            } break;
            case SETTINGS:
            {
                if (IsKeyPressed(KEY_BACKSPACE))
                {
                    currentState = MAIN_MENU;
                }
            } break;
            case GUIDE:
            {
                if (IsKeyPressed(KEY_BACKSPACE))
                {
                    currentState = MAIN_MENU;
                }
            } break;
            case GAMEPLAY:
            {
                if (IsKeyPressed(KEY_BACKSPACE))
                {
                    currentState = LEVEL_MENU;
                }
            } break;
        }

        BeginDrawing();
        ClearBackground(gameConfig.menuBackgroundColor);

        switch (currentState)
        {
        case MAIN_MENU:
        {
            renderMainMenu();
        } break;
        case LEVEL_MENU:
        {
            renderLevelMenu();
        } break;
        case SETTINGS:
        {
            renderSettings();
        } break;
        case GUIDE:
        {
            renderGuide();
        } break;
        case GAMEPLAY:
        {
            renderGameplay();
        } break;
        }
        
        EndDrawing();
    }

    CloseWindow(); 

    return 0;
}


