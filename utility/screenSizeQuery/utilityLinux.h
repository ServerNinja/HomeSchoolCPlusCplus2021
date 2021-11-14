#include <iostream>
#include <sys/ioctl.h>

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

void setCursorPosition(int XPos, int YPos) {
    printf("\033[%d;%dH",YPos+1,XPos+1);
}
void getCursor(int* x, int* y) {
   printf("\033[6n");  /* This escape sequence !writes! the current
                          coordinates to the terminal.
                          We then have to read it from there, see [4,5].
                          Needs <termios.h>,<unistd.h> and some others */
   scanf("\033[%d;%dR", x, y);
}

void clearScreen() {
    printf("\033[2J");
    printf("\033[1;1H");
}