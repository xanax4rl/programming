#include <iostream>

#include <math.h>

using namespace std;



int main()

{



    setlocale(LC_ALL, "Ukrainian");



    int z1, z2, A;

    cout << "Маємо 2 формули:" << endl;

    cout << "1. z1 = (sin(2*A)+sin(5*A)-sin(3*A))/((cos(A)+1)- 2*pow(sin(2*A),2))" << endl;

    cout << "2. z2 = 2*sin(A)" << endl;

    cout << "Введіть значення А: ";

    cin >> A;



    z1 = (sin(2 * A) + sin(5 * A) - sin(3 * A)) / ((cos(A) + 1) - 2 * pow(sin(2 * A), 2));



    z2 = 2 * sin(A);



    cout << "z1 = " << z1 << endl;



    cout << "z2 = " << z2;

}

