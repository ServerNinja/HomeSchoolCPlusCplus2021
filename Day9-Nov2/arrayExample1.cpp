/* 
  name: arrayExample1.cpp
  author: Jennifer Reed
  date: 11/02/2021
*/

# include <iostream>

using namespace std;

int main() {
    // Declare array with values
    int values[4];

    // Set values for each position in the array
    // IMPORTANT: arrays always start at 0 and go up to the value of the number of items in the array minus one
    //            example: array with 5 elements starts at 0 for the first element and ends at 4 for the last element
    values[0] = 2;
    values[1] = 4;
    values[2] = 6;
    values[3] = 8;

    // Output each value of the array referencing their index (position in the array)
    cout << values[0] << endl;
    cout << values[1] << endl;
    cout << values[2] << endl;
    cout << values[3] << endl;

    // program exit...
    return(0);
}