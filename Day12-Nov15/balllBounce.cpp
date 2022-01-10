/* 
  name:
  author: Jennifer Reed
  date: 9/23/2021
*/

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include <iostream>
#include "../utility/screenSizeQuery/utilityLinux.h"

using namespace std;

int moveBallRow(int row, int maxRow, string rowDirection) {
    if (row >= maxRow)
      row = maxRow;
    if (row <= 0)
      row = 0;

    if (rowDirection == "down") {
        return(row+=1);
    } else {
        return(row-=1);
    }
}

string determineRowDirection(int row, int maxRow, string rowDirection) {
    if (row >= maxRow) {
        return("up");
    }

    if (row <=0) {
        return("down");
    }

    return(rowDirection);
}


int moveBallCol(int col, int maxCol, string colDirection) {
    if (col >= maxCol)
      col = maxCol;
    if (col <= 0)
      col = 0;

    if (colDirection == "right") {
        return(col+=1);
    } else {
        return(col-=1);
    }

}

string determineColDirection(int col, int maxCol, string colDirection) {
    if (col >= maxCol) {
        return("left");
    }

    if (col <=0) {
        return("right");
    }

    return(colDirection);
}

int main() {
    // Clear screen
    clearScreen();

    // Get screen dimensions
    struct termSize termSizeDimensions;
    termSizeDimensions = terminalSize();

    unsigned int waitMS = 5 * 1000;

    int maxRow = termSizeDimensions.array[0];
    int maxCol = termSizeDimensions.array[1];
    int row = 1;
    int col = 1;
    string rowDirection = "right";
    string colDirection = "down";

    do {
        // Draw
        setCursorPosition(0, 0);
        cout << "Row: " << row << ":" << maxRow << ":" << rowDirection;
        cout << "\tCol: " << col << ":" << maxCol << ":" << colDirection;
        setCursorPosition(row, col);
        cout << "X";

        cin.get();
        // Clear
        setCursorPosition(row, col);
        cout << " ";

        // Move
        rowDirection = determineRowDirection(row, maxRow, rowDirection);
        row = moveBallRow(row, maxRow, rowDirection);

        colDirection = determineColDirection(col, maxCol, colDirection);
        col = moveBallCol(col, maxCol, colDirection);

    } while (true);
    

    // program exit...
    return(0);
}