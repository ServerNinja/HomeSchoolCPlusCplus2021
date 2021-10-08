/* 
  name:
  author: Jennifer Reed
  date: 9/23/2021
*/

# include <iostream>

using namespace std;

int main() {
    // insert code here...

    int doors = 4;
    int weight = 10000;
    if (weight <= 1000) 
    {
       cout << "This is a car..." << endl;
       if (doors == 2) 
       {
           cout << "This is a coup";
       }
       else
       {
           cout << "This is a sedan";
       }
    } 
    else 
    {
       cout << "This is a truck";
    }

    cout << endl;
    // program exit...
    cout << "Press the return key to exit..." << endl;
    getchar();
    return(0);
}