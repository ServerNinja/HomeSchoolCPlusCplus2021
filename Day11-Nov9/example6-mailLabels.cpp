/* 
  name: Package Labels (Enhanced)
  author: Jennifer Reed
  date: 11/09/2021

  description: Write a for loop that prints out package labels for the number of boxes entered in...
*/

# include <iostream>
# include <string>

using namespace std;

int main() {
    int num;
    string address, city, state, zip, recipient;

    cout << "Please enter the name of the recipient: ";
    getline(cin, recipient);

    cout << "Please enter the street address: ";
    getline(cin, address);

    cout << "Please enter the City: ";
    getline(cin, city);
    
    cout << "Please enter the State: ";
    getline(cin, state);

    cout << "Please enter the Zip Code: ";
    getline(cin, zip);

    do {
        cout << "Please input the number of boxes: ";
        cin >> num;
    } while(num < 0); 

    cout << endl << "Labels..." << endl;
    for(int x=1; x<=num; x++) {
        cout << endl;
        cout << recipient << endl;
        cout << address << endl;
        cout << city << ", " << state << " " << zip << endl;
        cout << "Box " << x << " of " << num << endl;
    }

    return(0);
}