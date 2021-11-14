#include <sys/ioctl.h>
#include <iostream>

using namespace std;

struct termSize {
    int array[2];
};

struct termSize terminalSize() {
    struct winsize w;
    ioctl(0, TIOCGWINSZ, &w);
    return((struct termSize) { .array = {w.ws_row, w.ws_col} });
}

int main (void)
{
    struct termSize termSizeDimensions;
    termSizeDimensions = terminalSize();

    cout << "Rows:\t\t " << termSizeDimensions.array[0] << endl;
    cout << "Columns:\t " << termSizeDimensions.array[1] << endl;
    return 0;
}