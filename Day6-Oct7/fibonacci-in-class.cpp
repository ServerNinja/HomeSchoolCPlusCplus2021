/* 
  name: Fibonacci In Class
  author: Jamie, Eli, Matthew
  date: 10/07/2021
*/

# include <iostream>

using namespace std;

int main() {
    // insert code here...
    int max = 10;
    int a = 0;
    int b = 1;

    do {
       a = b+a;
       cout << a << " ";
       b = a+b;
       cout << b << " ";
    }
    while (a+b<=max); 

    // program exit...
    cout << "Press the return key to exit..." << endl;
    getchar();
    return(0);
}
