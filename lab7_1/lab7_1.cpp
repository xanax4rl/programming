#include <iostream>

using namespace std;

bool isPalindrome(string word) {
    int left = 0;
    int right = word.length() - 1;

    while (left < right) {
        if (word[left] != word[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {

    setlocale(LC_ALL, "Ukrainian");
    string word;

    cout << "Введіть слово: ";
    cin >> word;

    if (isPalindrome(word)) {
        cout << "Це слово є паліндромом" << endl;
    }
    else {
        cout << "Це слово не є паліндромом" << endl;
    }

    return 0;
}
