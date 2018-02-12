#include <iostream>
#include "Shapes.h"
using namespace std;

int main()
{
    int x1, y1, x2, y2, r1, r2;
    cout << "ENTER COORDINATES OF THE 1ST POINT:\n";
    cout << "X=";
    cin >> x1;
    cout << "Y=";
    cin >> y1;
    cout << "ENTER COORDINATES OF THE 2ND POINT:\n";
    cout << "X=";
    cin >> x2;
    cout << "Y=";
    cin >> y2;
    cout << "ENTER 2 RADII:\n";
    cout << "R1=";
    cin >> r1;
    cout << "R2=";
    cin >> r2;
    system("cls");
    int midX = (x1 + x2) / 2;
    int midY = (y1 + y2) / 2;
    drawR(x1, y1, x2, y2);
    drawE(midX, midY, r1, r2);
    system("pause");
    return(0);
}
