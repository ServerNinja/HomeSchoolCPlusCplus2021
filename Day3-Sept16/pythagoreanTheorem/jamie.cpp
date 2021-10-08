/*
_________________________
name: Pythagorean Theorum
Auther: Jamie Reed
Date: 9/17/21
__________________________
*/

# include <iostream>
# include <cmath>

using namespace std;

int main()
{

    double a,b,c,AB;
    
    cout << "  Please input for side A:  ";
    cin >> a;
    
    cout << "  Please input for side B:  ";
    cin >> b;
    
    AB = pow(a, 2) + pow(b, 2);
    c = sqrt(AB);

    cout << "  the length of side c is:  " <<c;
return(0);
}