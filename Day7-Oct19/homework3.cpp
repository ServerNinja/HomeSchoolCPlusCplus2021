/* 
  name: Homework # 3
  author: Jennifer Reed
  date: 10/05/2021

  description: Write a program that will print a pattern of numbers as seen below:

  Please input the number of rows: 5                                                                                  
  1 2 3 4 5                                                                                                         
  2 3 4 5                                                                                                          
  3 4 5                                                                                                           
  4 5                                                                                                            
  5

*/

# include <iostream>

using namespace std;

int main() {

    int num;
    do {
        cout << "Please input the number of rows: ";
        cin >> num;
    } while(num < 0); 

    for(int x=1; x<=num; x++) {
        for(int y=x; y<=num; y++) {
            if (y <=9)
              cout <<"0";
            cout << y << " ";
        }
        cout << endl;
    }

    return(0);
}