/* 
  name: Homework # 1
  author: Jennifer Reed
  date: 10/05/2021

  description: Write a program that will print the multiplication table of a number
*/

# include <iostream>

using namespace std;

int main() {
    int num;
    int counter = 1;

    do {
        cout << "input number between 1 and 12: ";
        cin >> num;
    } while(num < 1 || num > 12);

    do {
      cout << num << " * " << counter << " = " << num * counter << endl;
      counter ++;
    } while(counter <=12);

    // program exit...
    cout << "Press the return key to exit..." << endl;
    getchar();
    return(0);
}