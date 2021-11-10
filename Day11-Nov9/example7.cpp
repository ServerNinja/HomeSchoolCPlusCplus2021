/* 
  name: Iterate over string
  author: Jennifer Reed
  date: 9/23/2021
*/

# include <iostream>
# include <string>

using namespace std;

int main() {
    // insert code here...
    string name;
    cout << "Please enter your name: ";
    getline(cin, name);

    for (int i=0; i<name.length(); i++) {
        cout << "Character #" << i << ": " << name[i] << endl;
    }

    // program exit...
    return(0);
}