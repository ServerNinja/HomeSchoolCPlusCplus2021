# September 16, 2021
time: 2

## Topics
- Declaring variables
- integer and double variable types
- how to do basic math with c++
- how to get your program to ask for input
- Sent email showing how to use the cmath library to calculate square roots and exponentials

Everything we have learned about c++ so far can be found in the yellow book - Page 1 - 26.

## Example code on cmath library:

```text
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
```

## Homework (Pythagorean Theorem Problem):
Hello Students,

Please write a program that uses the Pythagorean Theorem to calculate the length of side C after giving the computer values for A and B.

You will need to look at my previous email to see how the cmath library is used to calculate square roots (the "sqrt()" function) and exponentials (the "pow()" function).

The program should ask the user to give it the value for side A and B of the triangle. Then the program should calculate the value for side C using the pythagorean theorem. Please assume that side C is the hypotenuse of a right triangle.

This is what the output of your finished program should look like:

```
Calculating the Pythagorean Theorem
Please input for side A: 5
Please input for side B: 12
The length of side C is: 13
```

Please show me a working copy of your code before next Tuesday.

Thanks!