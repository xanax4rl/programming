#include <iostream>
using namespace std;



int main() {


    setlocale(LC_ALL, "Ukrainian");
    int m;



    cout << "Введіть номер місяця (від 1 до 12): ";

    cin >> m;



    if (m < 1 || m > 12) {

        cout << "Некоректний місяць. Введіть число від 1 до 12." << endl;

    }
    else if (m <= 3) {

        cout << "Це перший квартал." << endl;

    }
    else if (m <= 6) {

        cout << "Це другий квартал." << endl;

    }
    else if (m <= 9) {

        cout << "Це третій квартал." << endl;

    }
    else {

        cout << "Це четвертий квартал." << endl;

    }



    return 0;

}