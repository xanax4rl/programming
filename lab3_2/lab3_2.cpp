#include <iostream>
#include <math.h>

using namespace std;



int main()

{



    setlocale(LC_ALL, "Ukrainian");



    double x;



    cout << "Введіть x: ";

    cin >> x;



    cout << "Відповідь: " << sqrt(pow(x, 3) - sqrt(x - 1));





    return 0;

}