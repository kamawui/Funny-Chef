#include "raylib.h"
#include "CustomFunctions.h"

// ��� ������ ������ text �� ������ �������������. 
// �������� relativeY ��������� �������� �� 0 �� 1 (�� ���� ��� �������� � ���������).
// relativeY �������� ����� �� ���������� ������������ �������� ������� ���� (����� ������)
void DrawCenteredText(const char* text, double relativeY, int fontSize, Color color)
{
    int textWidth = MeasureText(text, fontSize);
    int x = (GetScreenWidth() - textWidth) / 2;
    int y = (int)(GetScreenHeight() * relativeY);
    DrawText(text, x, y, fontSize, color);
}

// ������� ����� �������.��� ������� ������ ���, ����� �� ���������� ������������ ���� ���-��.
void DrawHint(const char* text, double relativeY, int fontSize, Color color)
{
    int textWidth = MeasureText(text, fontSize);
    int x = (GetScreenWidth() - textWidth) / 2;
    int y = (int)(GetScreenHeight() * relativeY);

    DrawText(text, x, y, fontSize, color);
}



