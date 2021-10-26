/* 
  name: Homework # 2
  author: Jennifer Reed
  date: 10/05/2021

  description: Write a for loop that prints out package labels for the number of boxes entered in...
*/

# include <iostream>

using namespace std;

int main() {
    int num;

    do {
        cout << "Please input the number of boxes: ";
        cin >> num;
    } while(num < 0); 

    cout << endl << "Labels..." << endl;
    for(int x=1; x<=num; x++) {
        cout << endl;
        cout << "4024 Anders Rd." << endl;
        cout << "Hastings, MI 49058" << endl;
        cout << "Box " << x << " of " << num << endl;
    }

    return(0);
}