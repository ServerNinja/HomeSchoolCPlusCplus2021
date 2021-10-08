# September 28, 2021
time: 1.5

## Topics
- Review basic if statements and the homework
- Deeper dive into if statements
- Nested If Statements
- Do while loop
- While Loop
- Incrementing number

## Teaching example

### Odd / Even problem
```
# include <iostream>

using namespace std;

int main() {
    // insert code here...

    int num = 7;
    if (num % 2 == 0)
      cout << "EVEN";
    else
      cout << "ODD";

    cout << endl;
    // program exit...
    cout << "Press the return key to exit..." << endl;
    getchar();
    return(0);
}
```

### Nested If statement:
```

```

### Do While Loop:
```
# include <iostream>

using namespace std;

int main() {
    // insert code here...
    int num = 0;

    do
    {
        num = num + 1;
        cout << num << endl;
    } 
    while (num <= 10);

    // program exit...
    cout << "Press the return key to exit..." << endl;
    getchar();
    return(0);
}
```

### While Loop
```
# include <iostream>

using namespace std;

int main() {
    // insert code here...
    int num = 0;

    while (num <= 10)
    {
        num = num + 1;
        cout << num << endl;
    } 

    // program exit...
    cout << "Press the return key to exit..." << endl;
    getchar();
    return(0);
}
```

### Iterations and how changing code can affect output
- What does line this do ?
```
        num = num + 1;
```
- Why do the do while and while loop examples above display output that starts at 1 and ends at 11 ?
- How can we debug this ?
- What happens if we switch the order of these two lines in both of the loop examples ?
```
        num = num + 1;
        cout << num << endl;
```

## Homework
- None for today