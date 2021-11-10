/* 
  name: Remove spaces
  author: Jennifer Reed
  date: 9/23/2021
*/

# include <iostream>
# include <string>

using namespace std;

string removeSpaces(string sentence) {
    string sentenceRevised;

    for (int i=0; i<sentence.length(); i++) {
      if (sentence[i] != ' ') {
          sentenceRevised.push_back(sentence[i]);
      }
    }
    return(sentenceRevised);
}

int main() {
    // insert code here...
    string sentence;

    cout << "Please type in a sentence: ";
    getline(cin, sentence);

    cout << "-----------------------------" << endl;
    cout << removeSpaces(sentence) << endl;

    // program exit...
    return(0);
}