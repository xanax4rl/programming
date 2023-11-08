#include <iostream>
#include <string>

using namespace std;

int main() {

    setlocale(LC_ALL, "Ukrainian");

    string input;
    cout << "Введіть рядок: ";
    cin >> input;

    int sum = 0;  
    int sign = 1; 

    for (char c : input) {
        if (isdigit(c)) {
            int digit = c - '0'; 
            sum += sign * digit;
            sign = -sign; 
        }
    }

    cout << "Сума цифр зі зміною знаку: " << sum << endl;

    return 0;
}
