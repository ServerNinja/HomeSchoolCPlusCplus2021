#include <iostream>
#include "utilityWindows.h"

using namespace std; 

int main (void)
{
    struct termSize termSizeDimensions;
    termSizeDimensions = terminalSize();

    cout << "Rows:\t\t " << termSizeDimensions.array[0] << endl;
    cout << "Columns:\t " << termSizeDimensions.array[1] << endl;
    return(0);
}