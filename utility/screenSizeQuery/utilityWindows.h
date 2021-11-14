#include <windows.h>
#include <conio.h>
#include <iostream>

//#############################################
// Set Cursor Position
void setCursorPosition(int XPos, int YPos) {
    COORD coordinate;
    coordinate.X = XPos;
    coordinate.Y = YPos;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}

//#############################################
// Clear Screen
void clearScreen() {
    system("cls");
}

//#############################################
// Query Terminal Size
struct termSize {
    int array[2];
};

struct termSize terminalSize() {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int columns, rows;
  
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    return((struct termSize) { .array = {rows, columns} });
}

/* Example usage of terminalSize() function in your program

#include <iostream>
#include "utilityWindows.h"

int main (void)
{
    struct termSize termSizeDimensions;
    termSizeDimensions = terminalSize();

    cout << "Rows:\t\t " << termSizeDimensions.array[0] << endl;
    cout << "Columns:\t " << termSizeDimensions.array[1] << endl;
    return 0;
}
*/