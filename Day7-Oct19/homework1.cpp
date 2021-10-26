/* 
  name: Homework # 1
  author: Jennifer Reed
  date: 10/05/2021

  description: Write a program that will print ALL multiplication numbers between 0 and 12...
*/

# include <iostream>

using namespace std;

int main() {
    int min=0;
    int max=12;
    
    for(int x=min; x<=max; x++) {
        for(int y=min; y<=max; y++) {
            cout << x << " * " << y << " = " << x * y << endl;
        }
    }

    return(0);
}