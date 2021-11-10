/* 
  name: Hello Sir! (Revised)
  author: Jennifer Reed
  date: 11/09/2021
*/

# include <iostream>

using namespace std;

int main() {
    // insert code here...
    char str[100];

    cout << "What is your name? ";
    cin.get(str, 100);
    cout << "Hello! " << str << endl;

    // program exit...
    return(0);
}