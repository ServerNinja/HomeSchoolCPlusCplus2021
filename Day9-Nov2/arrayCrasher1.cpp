/* 
  name: Array Crasher
  author: Jennifer Reed
  date: 9/23/2021

  NOTE: This program will not compile correctly and will not run correctly.
        It is an example of what NOT to do when referencing indexes in an array.
*/

# include <iostream>

using namespace std;

int main() {
    int values[4] = { 1, 2, 3, 4 };

    cout << values[0] << endl;
    cout << values[1] << endl;
    cout << values[2] << endl;
    cout << values[3] << endl;

    // BAD BAD... very BAD... this is referencing the 5th position
    // in the array, which does not exist
    // indexes for arrays always start at 0
    cout << values[4] << endl;

    // program exit...
    return(0);
}