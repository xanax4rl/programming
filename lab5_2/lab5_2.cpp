#include <iostream>
#include <cmath>

using namespace std;

int main() {

    setlocale(LC_ALL, "Ukrainian");

    double x;

    double* show_x;


    cout << "Введіть х: ";

    cin >> x;


    show_x = &x;



    cout << "Корінь квадратний: " << sqrt(sin(*show_x) + cos(*show_x)) << endl;



    return 0;

}