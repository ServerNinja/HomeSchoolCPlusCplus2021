/* 
  name:
  author: Jennifer Reed
  date: 9/23/2021
*/

# include <iostream>

using namespace std;

// Add two characters together
char addChar(char x, char y) {
    return(char(x + y));
}

int main() {
    // insert code here...
    char firstLetter = '+';
    char secondLetter = 'E';

    cout << addChar(firstLetter, secondLetter) << endl;
    cout << addChar('A', 'C') << endl;
    cout << addChar(65, 27) << endl;
    cout << addChar('A', 'a') << endl;

    // program exit...
    return(0);
}