/* 
  name:
  author: Jennifer Reed
  date: 9/23/2021
*/

# include <iostream>

using namespace std;

int main() {
    int num;

    do {
        cout << "Please input a number: ";
        cin >> num;
    } while(num <=0);

    int total = 0;
    
    for (int i=1; i<=num; i++) {
        int sum = 0;
        for (int x=1; x<=i; x++) {
            sum += x;
            cout << x;

            if (x < i) {
                cout << "+";
            }
        }
        total += sum;
        cout << " = " << sum << endl;
    }

    cout << "The total of all numbers = " << total << endl;

    // program exit...
    cout << "Press the return key to exit..." << endl;
    getchar();
    return(0);
}