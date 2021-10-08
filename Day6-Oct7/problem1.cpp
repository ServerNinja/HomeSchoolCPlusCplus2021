/* 
  name: Problem1
  author: Jennifer Reed
  date: 10/05/2021
*/

# include <iostream>

using namespace std;

int main() {

    int K = 5;
    int I = -2;
    while (I <= K) {
        I = I + 2;
        --K; // same as: K = K - 1;
        cout << (I + K) << endl;
    }

    // program exit...
    cout << "Press the return key to exit..." << endl;
    getchar();
    return(0);
}