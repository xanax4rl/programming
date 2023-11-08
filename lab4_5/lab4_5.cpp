#include <iostream>
#include <cmath>



using namespace std;



int main() {

    setlocale(LC_ALL, "Ukrainian");
    int n;

    double x;



    cout << "Введіть натуральне число n: ";

    cin >> n;



    cout << "Введіть дійсне число x: ";

    cin >> x;



    double sum = 0.0;



    for (int k = 1; k <= n; ++k) {

        double term = (2.0 * tgamma(k + 1));

        sum += term;

    }



    cout << "Результат обчислення суми: " << sum << endl;



    return 0;

}

