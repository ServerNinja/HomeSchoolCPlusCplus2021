/* 
  name: vectorExample2.cpp
  author: Jennifer Reed
  date: 11/02/2021
*/

#include <iostream>

// Vector library reference: https://www.cplusplus.com/reference/vector/vector/
#include <vector>

using namespace std;

int main() {
    // Declare new vector
    vector<int> myVector;
    vector<int> onlyEvens;

    // Add values from 1 - 100 to the vector
    for(int i=1; i<=100; i++) {
        myVector.push_back(i);
    }

    // Loop through myVector and push all even numbers into onlyEvens
    for(int i=0; i<myVector.size(); i++) {
        if (myVector[i] % 2 == 0) {
            onlyEvens.push_back(myVector[i]);
        }
    }

    // Loop through onlyEvens and print out each value that was pushed into it
    for(int i=0; i<onlyEvens.size(); i++) {
        cout << onlyEvens[i] << endl;
    }
    
    // program exit...
    return(0);
}