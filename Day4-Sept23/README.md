# September 23, 2021
time: 1

## Topics
- If statements
- Operators

## Teaching example


```
==
<
>
<=
=>
!=
% (modulus)
```

## Homework
Assignment # 1:

1. What would an if statement look like if it was to determine if a number is between 1 and 10 or not.

2. Write an if statement that asks for an age. If the age is 10 or more years older than your age, have it respond with "You're 10 or more years older than me"

3. What do each of these conditionals test?
   - x <= 0
   - age != 10
   - height >= 36
   - distance == 500

4. What will this snippet of code return to the user?:

```
int dollars = 15;
if (dollars == 10)
  cout << "You have 10 dollars!";
else
  cout << "You do not have 10 dollars!";
```

5. What will this snippet of code return to the user?:

```
int temperature = 72;

if (temperature = 70)
  cout << "The temperature is perfect!"; 
else if (temperature < 70)
  cout << "The temperature is too high!";
else
  cout << "The temperature is too low!";
```

6. Why do I get an error when this code compiles?
   
```
# include <iostream>

using namespace std;
int main() {
    int number
    cout << "Input a number: ";
    cin >> number;
    cout << "You just entered the number: " << number << endl;
    return(0);
}
```

Assignment # 2:
- Please take the Pythagorean Theorem program you wrote last week and let the user know they made a mistake if any of the inputs (for A and B) are less than or equal to zero.

Assignment # 3:
Determine type of vehicle based on weight (easy)

- Under 2000 lbs = automobile
- Under 5000 lbs = pickup utility
- Under 30000 lbs = box truck
- Over 30000 lbs = semi truck with trailer

Assignment # 4:
Write a simple program that asks for an integer
- Have it tell you if its a positive or negative number
- Have it tell you if it can be cleanly divisible by 10 or not