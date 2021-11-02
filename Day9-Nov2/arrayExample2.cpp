/* 
  name: arrayExample2.cpp
  author: Jennifer Reed
  date: 11/02/2021
*/

# include <iostream>

using namespace std;

int main() {
    // Declare array with values
    int values[] = { 2, 4, 6, 8 };

    // Get the total length of the array - sizeof gets total bite size
    //       More details on "sizeof" keyword: https://www.tutorialspoint.com/cplusplus/cpp_sizeof_operator.htm
    int lengthOfArray=sizeof(values)/sizeof(values[0]);

    // Loop through array and display each value
    // IMPORTANT: arrays always start at 0 and go up to the value of the number of items in the array minus one
    //            example: array with 5 elements starts at 0 for the first element and ends at 4 for the last element
    for(int i=0; i<lengthOfArray; i++) {
        cout << values[i] << endl;
    }

    // program exit...
    return(0);
}