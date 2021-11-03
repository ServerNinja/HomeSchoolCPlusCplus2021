/* 
  name: Game Example 1
  author: Jennifer Reed
  date: 9/23/2021
*/

# include <iostream>
# include <vector>

using namespace std;

int main() {
    int rounds, score;
    int total = 0;
    vector<int> scores;

    // Ask user number of rounds
    do {
        cout << "Please enter in the number of rounds you wish to play: ";
        cin >> rounds;

        // Let user know they are a failure in life
        if (rounds <= 0)
            cout << "Please input a number greater than 0" << endl;

    } while(rounds <=0 );

    // Loop through rounds...
    for (int i=0; i<rounds; i++) {
        cout << "Please input score for round #" << i + 1 << ": ";
        cin >> score;

        scores.push_back(score);
    }

    // Display scores
    cout << endl;
    cout << endl;
    cout << "Game Over..." << endl;
    cout << "------------" << endl;
    cout << "Scores..." << endl;

    for(int x=0; x<scores.size(); x++) {
        cout << "Round: " << x + 1 << " --> " << scores[x] << " points" << endl;
        total +=scores[x];
    }

    cout << "------------" << endl;
    cout << "Total score: " << total << " points" << endl;


    



    // program exit...
    return(0);
}