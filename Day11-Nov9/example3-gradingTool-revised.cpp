/* 
  name: Grading Tool (Revised)
  author: Jennifer Reed
  date: 11/09/2021
*/

# include <iostream>

using namespace std;

int main() {
    int gradePercent;
    char gradeLetter;
    char gradeMod = ' ';

    do {
        cout << "Please enter in the percentage score: ";
        cin >> gradePercent;
    } while (gradePercent < 0 || gradePercent > 100);

    if (gradePercent > 95)
        gradeLetter = 'A'; 
    else if (gradePercent >=90) {
        gradeLetter = 'A'; 
        gradeMod = '-';
    }
    else if (gradePercent >=87) {
        gradeLetter = 'B';
        gradeMod = '+';
    }
    else if (gradePercent >=84) {
        gradeLetter = 'B';
    }
    else if (gradePercent >=80) {
        gradeLetter = 'B';
        gradeMod = '-';
    }
    else if (gradePercent >=77) {
        gradeLetter = 'C';
        gradeMod = '+';
    }
    else if (gradePercent >=74) {
        gradeLetter = 'C';
    }
    else if (gradePercent >=70) {
        gradeLetter = 'C';
        gradeMod = '-';
    }
    else if (gradePercent >=67) {
        gradeLetter = 'D';
        gradeMod = '+';
    }
    else if (gradePercent >=64)
        gradeLetter = 'D';
    else if (gradePercent >=60) {
        gradeLetter = 'D';
        gradeMod = '-';
    }
    else if (gradePercent >=50)
        gradeLetter = 'E';
    else
        gradeLetter = 'F';

    cout << "The computed grade is: " << gradeLetter << gradeMod << endl;

    // program exit...
    return(0);
}