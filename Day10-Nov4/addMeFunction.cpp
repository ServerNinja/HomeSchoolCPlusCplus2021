#include <iostream>

using namespace std;

// Define headers
bool isSmaller(int x, int y);
bool isLarger(int x, int y);
int multiplyMe(int poop ,int pee);
int addMe(int x, int y);

int main() {
    int foo = 5;
    int bar = 7;

    cout << addMe(foo, bar);
    cout << endl;
    cout << multiplyMe(foo, bar);
    cout << endl;

    int product = multiplyMe(foo, bar) * addMe(foo, bar);

    cout << product << endl;

    cout << "Is " << foo << " smaller than " << bar << "?? ";
    if (isSmaller(foo, bar))
        cout << "True";
    else
        cout << "False";

    cout << endl;

    cout << "Is " << foo << " larger than " << bar << "?? ";

    if (isLarger(foo, bar))
        cout << "True";
    else
        cout << "False";

    cout << endl;

    return(0);
}

bool isSmaller(int x, int y) {
    // is X smaller than Y?
    return(x < y);
}

bool isLarger(int x, int y) {
    // is X smaller than Y?
    return(x > y);
}

int multiplyMe(int poop ,int pee) {
    return(poop * pee);
}

int addMe(int x, int y) {
    return(x+y);
}
