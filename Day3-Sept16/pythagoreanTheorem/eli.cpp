//Pythagorean Theorem Homework for Computer Science class 9.16.2021
//Written by Elijah Reed

# include <iostream>
# include <cmath>

using namespace std;

int main() {
    double a, b;
//User input for the sides of the trianle. Hopefully Pythagorus won't stab them!
   cout<<"Please input for a: ";
   cin>> a;

   cout<<"Please input for b: ";
   cin>> b;
//Here's the mathematical equation
   cout<< sqrt(pow(b,2)+pow(a,2));

  
  cout<<endl;
   return(0);
}