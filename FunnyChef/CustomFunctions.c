#include "raylib.h"
#include "CustomFunctions.h"

// эта функия делает text по центру горизонтально. 
// параметр relativeY принимает значения от 0 до 1 (то есть это параметр в процентах).
// relativeY помещает текст по верткикали относительно текущего размера окна (вроде удобно)
void DrawCenteredText(const char* text, double relativeY, int fontSize, Color color)
{
    int textWidth = MeasureText(text, fontSize);
    int x = (GetScreenWidth() - textWidth) / 2;
    int y = (int)(GetScreenHeight() * relativeY);
    DrawText(text, x, y, fontSize, color);
}

// функцию можно удалить.она сделана просто так, чтобы на страничках отображалось хоть что-то.
void DrawHint(const char* text, double relativeY, int fontSize, Color color)
{
    int textWidth = MeasureText(text, fontSize);
    int x = (GetScreenWidth() - textWidth) / 2;
    int y = (int)(GetScreenHeight() * relativeY);

    DrawText(text, x, y, fontSize, color);
}



