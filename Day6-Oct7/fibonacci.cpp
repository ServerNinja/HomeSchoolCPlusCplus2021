/* 
  name: Fibonacci do/while
  author: Jennifer Reed
  date: 9/23/2021
*/

# include <iostream>

using namespace std;

int main() {
    // insert code here...

    int a, b, c, n;
    do {
        cout << "Enter a number greater than 1: ";
        cin >> n;
    } while (n <= 1);

    a = 0;
    b = 1;

    cout << a << " " << b << " ";
    
    do {
        c = a+b;
        a = b;
        b = c;
        cout << c << " ";
    } while(a+b <= n);

    // program exit...
    cout << endl << "Press the return key to exit..." << endl;
    getchar();
    return(0);
}