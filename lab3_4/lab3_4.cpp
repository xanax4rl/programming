#include <iostream>

#include <math.h>

using namespace std;



int main()

{



    setlocale(LC_ALL, "Ukrainian");



    double f, x, c, b, a;

    cout << "Введіть x: ";

    cin >> x;

    cout << "Введіть a: ";

    cin >> a;

    cout << "Введіть b: ";

    cin >> b;

    cout << "Введіть c: ";

    cin >> c;



    if (x < 5 && c == 0)

    {

        f = (1 / (a * x)) - b;

        cout << "F= " << f << endl;

    }

    else if (x > (-5) && c != 0)

    {

        f = (x - a) / x;

        cout << "F= " << f << endl;

    }

    else

    {

        f = (10 * x) / (c - 4);

        cout << "F= " << f << endl;

    }



    return 0;

}