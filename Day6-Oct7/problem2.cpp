/* 
  name: Problem2
  author: Jennifer Reed
  date: 10/05/2021
*/

# include <iostream>

using namespace std;

int main() {

    int number = 4;
    while (number >= 0) {
        --number; // same as: nuumber = number - 1;
        cout << number << endl;
    }

    // program exit...
    cout << "Press the return key to exit..." << endl;
    getchar();
    return(0);
}