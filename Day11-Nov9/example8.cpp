/* 
  name: Remove spaces
  author: Jennifer Reed
  date: 9/23/2021
*/

# include <iostream>
# include <string>

using namespace std;

int main() {
    // insert code here...
    string sentence;
    string sentenceRevised;

    cout << "Please type in a sentence: ";
    getline(cin, sentence);

    for (int i=0; i<sentence.length(); i++) {
      if (sentence[i] != ' ') {
          sentenceRevised.push_back(sentence[i]);
      }
    }

    cout << "-----------------------------" << endl;
    cout << sentenceRevised <<;

    // program exit...
    return(0);
}