#include <iostream>
#include <ctime>

using namespace std;



int main() {

    setlocale(LC_ALL, "Ukrainian");

    srand(static_cast<unsigned int>(time(nullptr)));



    int Massiv[99];



    for (int i = 0; i <= 100; ++i) {

        Massiv[i] = rand() % 90 + 10;

    }

    cout << "Числа у нормальному порядку: " << Massiv << endl;

    for (int i = 0; i < 100; ++i) {

        cout << Massiv[i] << " ";

        if (i % 6 == 5) {

            cout << endl;

        }

    }



    cout << endl;



    cout << "Числа у зворотному порядку по 6 в рядку:" << endl;

    for (int i = 100 - 1; i >= 0; --i) {

        cout << Massiv[i] << " ";

        if (i % 6 == 4) {

            cout << endl;

        }

    }



    return 0;

}