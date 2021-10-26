/* 
  name: Homework # 4
  author: Jennifer Reed
  date: 10/05/2021

  description: Write a program to display a pyramid of digits as seen below (pattern continues no matter how big the triangle):

  Please input the number of rows: 5                                           
      1                                                                  
     232                                                                 
    34543                                                                
   4567654                                                               
  567898765
*/

# include <iostream>

using namespace std;

int main() {

    int num;
    do {
        cout << "Please input the number of rows: ";
        cin >> num;
    } while(num < 0); 

    int numTicker=0; // numTicker should always be from 1-9
    for (int x=1; x<=num; x++) {
        // Increment numTicker
        numTicker++;
        if (numTicker>9)
          numTicker=1;

        // start new line
        cout << endl;

        // Spaces to indent for rows < num
        for(int space=1; space<=num-x; space++) {
                cout << " ";
        }

        // Left side + middle column of triangle
        for(int y=x; y<=(x+x)-1; y++) {
            cout << numTicker;
            // numTicker goes up
            numTicker++;
            if (numTicker>9)
              numTicker=1;
        }

        // Start numTicker counting down
        numTicker--;
        if (numTicker<1)
          numTicker=9;

        // Right side (not including middle column) of triangle
        for(int y=((x+x)-1); y>x; y--) {
            // numTicker goes down
            numTicker--;
            if (numTicker<1)
              numTicker=9;
            cout << numTicker;
        }

    }
    cout << endl;

    return(0);
}