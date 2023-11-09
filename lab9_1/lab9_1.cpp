#include <iostream>

using namespace std;

int GCD(int A, int B) {
    if (B == 0) {
        return A;
    }
    else {
        return GCD(B, A % B);
    }
}

int main() {

    setlocale(LC_ALL, "Ukrainian");

    int A, B;

    cout << "Введіть число A: ";
    cin >> A;

    cout << "Введіть число B: ";
    cin >> B;

    int result = GCD(A, B);

    cout << "Найбільший спільний дільник (НСД) A і B: " << result << endl;

    return 0;
}
