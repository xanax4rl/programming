#include <iostream>


using namespace std;

int main() {

    setlocale(LC_ALL, "Ukrainian");

    bool* show1 = new bool;

    bool* show2 = new bool;



    *show1 = true;

    *show2 = false;



    cout << "Початкові значення:" << endl;

    cout << "*show1 = " << *show1 << endl;

    cout << "*show2 = " << *show2 << endl;



    bool temp = *show1;

    *show1 = *show2;

    *show2 = temp;



    cout << "Змінені значення:" << endl;

    cout << "*show1 = " << *show1 << endl;

    cout << "*show2 = " << *show2 << endl;

    return 0;
}
