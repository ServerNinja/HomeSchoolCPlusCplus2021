/* 
  name: Square Builder
  author: Jennifer Reed
  date: 9/23/2021
*/

# include <iostream>

using namespace std;

int main() {
    int size;
    do {
        cout << "Please input for the size of the square: ";
        cin >> size;
    } while (size <=0);

    for (int i = 1; i <=size; i++) {
        for (int x = 1; x <=size; x++) {
            cout <<"X ";
        }
        cout << "\n";
    }

    // program exit...
    cout << "Press the return key to exit..." << endl;
    getchar();
    return(0);
}