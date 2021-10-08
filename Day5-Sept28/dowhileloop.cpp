/* 
  name:
  author: Jennifer Reed
  date: 9/23/2021
*/

# include <iostream>

using namespace std;

int main() {
    // insert code here...
    int num = 0;

    while (num <= 10)
    {
        num = num + 1;
        cout << num << endl;
    } 

    // program exit...
    cout << "Press the return key to exit..." << endl;
    getchar();
    return(0);
}