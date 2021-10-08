/* 
  name: Homework # 2
  author: Jennifer Reed
  date: 10/05/2021

  description: Write a program that will ask for a range (ie. between 1 and 10)
               and will output the sum of all "natural" numbers in that range.
*/

# include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int counter;
    int min, max;

    do {
        cout << "Enter lower limit: ";
        cin >> min;
        cout << "Enter upper limit: ";
        cin >> max;
    } while (min >= max);

    counter = min;
    do {
       if (counter >= 1) // because a natural number is not negative 
           sum += counter; 
       counter ++;
    } while(counter <= max);

    cout << "Sum of natural numbers " << min <<" to "<< max <<": " << sum << endl;
    
    // program exit...
    cout << "Press the return key to exit..." << endl;
    getchar();
    return(0);
}