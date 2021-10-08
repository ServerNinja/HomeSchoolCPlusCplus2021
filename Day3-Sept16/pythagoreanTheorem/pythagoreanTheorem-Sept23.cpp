# include <iostream>
# include <cmath>

using namespace std;

void pythagorean() {
    double a, b, c;

    cout << "Calculating the Pythagorean Theorem" << endl;
    cout << "Please input for side A: ";
    cin >> a;

    cout << "Please input for side B: ";
    cin >> b;

    if (a <=0 || b <=0) {
      cout <<"You may not input zeros for A or B!"<< endl;
    } 
    else {
        // Calculate a to the power of 2
        double aSquared = pow(a, 2);
    
        // Calculate b to the power of 2
        double bSquared = pow(b, 2);
    
        // Calculate the length of side c
        c = sqrt(aSquared + bSquared);
    
        cout << "The length of side C is: " << c;
        cout << endl;
    }
}

int main() {

    while(true) {
        pythagorean();
    }

    return(0);
}