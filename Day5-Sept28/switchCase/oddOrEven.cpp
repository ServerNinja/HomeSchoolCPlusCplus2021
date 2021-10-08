/* 
  name:
  author: Jennifer Reed
  date: 9/23/2021
*/

# include <iostream>

using namespace std;

int main() {
    // insert code here...

    int num = 7;
    if (num % 2 == 0)
      cout << "EVEN";
    else
      cout << "ODD";

    cout << endl;
    // program exit...
    cout << "Press the return key to exit..." << endl;
    getchar();
    return(0);
}