/* 
  name:
  author: Jennifer Reed
  date: 9/23/2021
*/

# include <iostream>

using namespace std;

int main() {
    // insert code here...
    int max = 7;
    int total = 0;
    int counter = 1;

    while(counter <= 7) {
        total += counter;
        counter++;
    }
    cout << total<< endl;

    return(0);
}