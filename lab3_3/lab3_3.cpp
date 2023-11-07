#include <iostream>


using namespace std;



int main()

{
    setlocale(LC_ALL, "Ukrainian");
    double x, y;



    cout << "Введіть x:";

    cin >> x;

    cout << "Введіть y:";

    cin >> y;



    if (x * x + y * y <= 4) {

        if (!(x <= 1 && x >= -1 && y <= 1 && y >= -1))

        {

            cout << "Входить";

        }

    }

    else

    {

        cout << "Не входить";

    }



    return 0;

}

