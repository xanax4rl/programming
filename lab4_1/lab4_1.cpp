#include <iostream>
using namespace std;


int main() {

    setlocale(LC_ALL, "Ukrainian");

    double s = 1.0;



    for (double x = 0.1; x <= 10.0; x += 0.1) {

        double a = 100.0 + 10.0 * cos(x);

        s *= a;

    }



    cout << "Результат: " << s << endl;



    return 0;

}