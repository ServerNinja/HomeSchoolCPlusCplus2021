/* 
  name: vectorExample1.cpp
  author: Jennifer Reed
  date: 11/02/2021
*/

#include <iostream>

// Vector library reference: https://www.cplusplus.com/reference/vector/vector/
#include <vector>

using namespace std;

int main() {
    // Declare new vector
    vector<int> values;

    // Push three new values to the end (back) of the vector
    values.push_back(2);
    values.push_back(4);
    values.push_back(6);
    values.push_back(8);

    // Loop through each value in the vector showing the position and its value
    for(int i = 0; i < values.size(); i++) {
        cout << i << ": " << values[i] << endl;
    }

    // program exit...
    return(0);
}