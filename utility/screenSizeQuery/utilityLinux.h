#include <iostream>
#include <sys/ioctl.h>

//#############################################
// Set Cursor Position
void setCursorPosition(int XPos, int YPos) {
    printf("\033[%d;%dH",YPos+1,XPos+1);
}

//#############################################
// Clear Screen
void clearScreen() {
    printf("\033[2J");
    printf("\033[1;1H");
}

//#############################################
// Query Terminal Size
struct termSize {
    int array[2];
};

struct termSize terminalSize() {
    struct winsize w;
    ioctl(0, TIOCGWINSZ, &w);
    return((struct termSize) { .array = {w.ws_row, w.ws_col} });
}
/* Example usage of terminalSize() function in your program

#include <iostream>
#include "utilityLinux.h"

int main (void)
{
    struct termSize termSizeDimensions;
    termSizeDimensions = terminalSize();

    cout << "Rows:\t\t " << termSizeDimensions.array[0] << endl;
    cout << "Columns:\t " << termSizeDimensions.array[1] << endl;
    return 0;
}
*/