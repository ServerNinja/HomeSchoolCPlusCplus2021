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

    int count = 1;
    do {

        if (count % 2 == 0) {
            cout << count << ": ";

            int countx = 1;
            do {
    
                cout << "+";
                countx++;
    
            } while(countx <= count);

            cout << endl;
        }
        count ++;

    } while(count <= num);

    // program exit...
    cout << "Press the return key to exit..." << endl;
    getchar();
    return(0);
}