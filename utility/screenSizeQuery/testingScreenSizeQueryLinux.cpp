#include "utilityLinux.h"
#include <iostream>

using namespace std;

int main (void)
{
    clearScreen();
    struct termSize termSizeDimensions;
    termSizeDimensions = terminalSize();

    setCursorPosition(5,1);
    cout << "Screen Dimensions:";
    setCursorPosition(10,2);
    cout << "Rows:\t\t " << termSizeDimensions.array[0];
    setCursorPosition(10,3);
    cout << "Columns:\t " << termSizeDimensions.array[1];
    return(0);
}