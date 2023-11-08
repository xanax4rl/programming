#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {

    setlocale(LC_ALL, "Ukrainian");


    string sentence;

    cout << "Введіть речення(на англійській): ";
    getline(cin, sentence);

    istringstream iss(sentence);
    vector<string> words;

    string word;
    while (iss >> word) {
        words.push_back(word);
    }

    if (words.size() < 2) {
        cout << "Речення повинно містити принаймні два слова." << endl;
        return 1;
    }

    swap(words[0], words[words.size() - 1]);

    cout << "Результат: ";
    for (const string& w : words) {
        cout << w << ' ';
    }
    cout << endl;

    return 0;
}
