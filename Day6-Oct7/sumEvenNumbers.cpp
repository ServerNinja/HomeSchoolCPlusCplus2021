/* 
  name:
  author: Jennifer Reed
  date: 9/23/2021
*/

# include <iostream>

using namespace std;

int main() {
    int num, max;
    int counter = 2;
    int sum = 0;

    do {
        cout << "Input upper limit greater than 2: ";
        cin >> num;
    } while(num <= 2);

    max = num;

    if (num % 2 != 0) {
        max --;
    }

    while(counter <= max) {
        sum += counter; 
        counter += 2;
    }

    cout << "Sum of even numbers from 1 to " << num << ": " << sum << endl;

    // program exit...
    cout << "Press the return key to exit..." << endl;
    getchar();
    return(0);
}