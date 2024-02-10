#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int width, length;

    cout << "Enter the width of the box: ";
    cin >> width;

    cout << "Enter the length of the box: ";
    cin >> length;

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == length-1 || j == 0 || j == width-1) {
                gotoxy(j+1, i+1);
                cout << "*";
            }
        }
    }
system("pause");
    return 0;
}