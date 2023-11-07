
#include <iostream>
#include <math.h>

using namespace std;



int main()

{



    setlocale(LC_ALL, "Ukrainian");



    double n, s = 100, p;



    cout << "Введіть сумарний бал учня(0-100): ";

    cin >> n;



    p = (n / s) * 100;



    if (p >= 92)

    {

        cout << "Ваша оцінка: 12 " << endl;

    }

    else if (p < 92 && p >= 70)

    {

        cout << "Ваша оцінка: 8 " << endl;

    }

    else if (p < 70 && p >= 50)

    {

        cout << "Ваша оцінка: 5 " << endl;

    }

    else if (p < 50)

    {

        cout << "Ваша оцінка: 2 " << endl;

    }

    return 0;

}