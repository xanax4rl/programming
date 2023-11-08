#include <iostream>


using namespace std;

int main() {

    setlocale(LC_ALL, "Ukrainian");

    double a, b;

    double* show_a, * show_b;



    cout << "Введіть a: ";

    cin >> a;

    cout << "Введіть b: ";

    cin >> b;



    show_a = &a;

    show_b = &b;



    if (*show_a > *show_b) {

        *show_a += 7;

        *show_b -= 3;

    }
    else {

        *show_b += 7;

        *show_a -= 3;

    }





    cout << "Змінна a після обробки: " << a << endl;

    cout << "Змінна b після обробки: " << b << endl;



    return 0;

}