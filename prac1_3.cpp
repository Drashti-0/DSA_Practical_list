#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    getline(cin, sentence);

    string word = "";
    string longest = "";

    for (int i = 0; i <= sentence.length(); i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            if (word.length() > longest.length()) {
                longest = word;
            }
            word = "";
        } else {
            word = word + sentence[i];
        }
    }

    cout << longest << endl;
    cout << longest.length() << endl;

    return 0;
}