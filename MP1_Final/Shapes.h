#include <cmath>
#include <windows.h>
#include <stdlib.h>

void drawHorizontalLine(int x, int y, int w){
    COLORREF color = RGB(255,0,0); // COLORREF to hold the color info

    SetConsoleTitle("Drawing"); // Set text of the console so you can find the window

    HWND hwnd = FindWindow(NULL, "Drawing"); // Get the HWND
    HDC hdc = GetDC(hwnd); // Get the DC from that HWND

    for( int i = x ; i <= w ; i++ ){
        SetPixel(hdc, i, y, color); // SetPixel(HDC hdc, int x, int y, COLORREF color)
    }
    ReleaseDC(hwnd, hdc); // Release the DC
    return;
}

void drawVerticalLine(int x, int y, int h){
    COLORREF color = RGB(255,0,0); // COLORREF to hold the color info

    SetConsoleTitle("Drawing"); // Set text of the console so you can find the window

    HWND hwnd = FindWindow(NULL, "Drawing"); // Get the HWND
    HDC hdc = GetDC(hwnd); // Get the DC from that HWND

    for( int i = y ; i <= h ; i++ ){
        SetPixel(hdc, x, i, color); // SetPixel(HDC hdc, int x, int y, COLORREF color)
    }
    ReleaseDC(hwnd, hdc); // Release the DC
    return;
}

void drawR(int x1, int y1, int x2, int y2){
    int x = std::min(x1, x2);
    int y = std::min(y1, y2);
    int width = abs(x1 - x2);
    int height = abs(y1 - y2);

    drawHorizontalLine(x, y, width);
    drawHorizontalLine(x, height, width);
    drawVerticalLine(x, y, height);
    drawVerticalLine(width, y, height);
}

int getX(int curX, int r, int i){
    double x = curX + r*cos(i);
    return (int)x;
}

int getY(int curY, int r, int i){
    double y = curY + r*sin(i);
    return (int)y;
}

void drawE(int x, int y, int r1, int r2){

    COLORREF color = RGB(255,0,0); // COLORREF to hold the color info

    HWND hwnd = FindWindow(NULL, "Drawing"); // Get the HWND
    HDC hdc = GetDC(hwnd); // Get the DC from that HWND
    for (int i = 0; i < 3; i++){
        for (int i = 0; i < 720; i++){
            int newX = getX(x, r1, i);
            int newY = getY(y, r2, i);
            SetPixel(hdc, newX, newY, color);
        }
    }
    ReleaseDC(hwnd, hdc);
    return;
}


