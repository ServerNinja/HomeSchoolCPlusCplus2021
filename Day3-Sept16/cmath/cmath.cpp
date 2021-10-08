# include <iostream>
# include <cmath>

using namespace std;

int main() {
    double x, y, exponentRes, sqrtRes;

    x = 5;
    y = 49;

    // Square Root calculation
    sqrtRes = sqrt(y);

    // Exponential
    exponentRes = pow(x, 2);

    // Output the results
    cout << "The square root of " << y << " is " << sqrtRes;
    cout << endl;
    cout << x << " squared is " << exponentRes;
    cout << endl;

    return(0);
}