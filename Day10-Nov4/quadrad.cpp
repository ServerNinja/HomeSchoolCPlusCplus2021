#include <iostream>
#include <math.h>

using namespace std;

// Top part of formula
double rosa(double a, double b, double c) {
    return(sqrt(pow(b, 2) + (-4 * (a * c))));
}

// Because He's a 'Bottom'
double boyle(double a) {
    return(2 * a);
}

void quad(double a, double b, double c) {
    double hitchcock, skully;

    hitchcock = (-b + rosa(a, b, c)) / (boyle(a));
    skully    = (-b - rosa(a, b, c)) / (boyle(a));

    cout << "The two results are: ";
    cout << hitchcock << " and " << skully << endl;    
}


int main() {
    double a, b, c;

    cout << "Please enter the value of B: ";
    cin >> b;
    cout << "Please enter the value of A: ";
    cin >> a;
    cout << "Please enter the value of C: ";
    cin >> c;

    quad(a, b, c);
}