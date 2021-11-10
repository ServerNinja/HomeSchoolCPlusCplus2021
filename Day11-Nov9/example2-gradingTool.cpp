/* 
  name: Grading Tool
  author: Jennifer Reed
  date: 11/09/2021
*/

# include <iostream>

using namespace std;

int main() {
    int gradePercent;
    char gradeLetter;

    do {
        cout << "Please enter in the percentage score: ";
        cin >> gradePercent;
    } while (gradePercent < 0 || gradePercent > 100);

    if (gradePercent > 90)
        gradeLetter = 'A'; 
    else if (gradePercent >=80)
        gradeLetter = 'B';
    else if (gradePercent >=70)
        gradeLetter = 'C';
    else if (gradePercent >=60)
        gradeLetter = 'D';
    else if (gradePercent >=50)
        gradeLetter = 'E';
    else
        gradeLetter = 'F';

    cout << "The computed grade is: " << gradeLetter << endl;


    // program exit...
    return(0);
}