# include <iostream>

using namespace std;

int main() {
    int height;

    cout << "Please put in height in inches: ";
    cin >> height; 
 
    if (height % 2 == 0)
      cout << "Your height is an even number" << endl;
    else
      cout << "Your height is an odd number" << endl;

/*
    if (height < 0 || height > 84)
      cout << "Out of acceptable range!" << endl;
    else if (height < 30)
      cout << "You must be a kid!" << endl;
    else if (height < 50)
      cout << "Wow, you're short!" << endl;
    else if (height == 50)
      cout << "You're as tall as grandma" << endl;
    else if (height > 50 && height <= 84)
      cout << "You're taller than grandma!" << endl;
*/
    cout << endl;
    return(0);
}