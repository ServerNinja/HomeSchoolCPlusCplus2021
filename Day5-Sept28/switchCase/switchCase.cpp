/* 
  name: switchCase Menu Program
  author: Jennifer Reed
  date: 9/23/2021
*/

# include <iostream>

using namespace std;

int main() {
    // insert code here...
    int option;

    do {
        cout << "============================="<< endl;
        cout << "            menu" << endl;
        cout << "============================="<< endl;
        cout << "Please choose an option..."<< endl;
        cout << "============================="<< endl;
        cout << "1. Say hello world..." << endl;
        cout << "2. Give me the weather..." << endl;
        cout << "3. Exit program..." << endl << endl;
        cin >> option;
    
        switch(option) {
           case 1:
               cout << "Hello world!" << endl;
               break; //optional
           case 2:
               cout << "It's going to be a partally sunny day!" << endl;
               break; //optional
           case 3:
               cout << "Good Bye!" << endl;
               break; //optional
           default : //Optional
               cout << "ERROR!" << endl;
        }
    } while (option != 3);

    // program exit...
    cout << "Press the return key to exit..." << endl;
    getchar();
    return(0);
}