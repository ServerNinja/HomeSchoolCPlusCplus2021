/* 
  name: Character Conversion
  author: Jennifer Reed
  date: 11/90/2021
*/

# include <iostream>

using namespace std;

int main() {
    // insert code here...
    char character;
    int asciiNum;
    cout << "Please enter a character: ";
    cin >> character;

    // Convert character to integer
    cout << "Character: " << character << endl;
    cout << "ASCII #: " << int(character) << endl << endl;
    asciiNum = int(character);

    // Convert integer to character 
    cout << "ASCII #: " << asciiNum << endl;
    cout << "Character: " << char(asciiNum) << endl;

    // program exit...
    return(0);
}