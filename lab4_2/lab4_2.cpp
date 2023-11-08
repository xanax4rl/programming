#include <iostream>


using namespace std;



int main() {


    setlocale(LC_ALL, "Ukrainian");

    int n;

    cout << "Введіть натуральне число n: ";

    cin >> n;



    double b = 0.0;



    for (int i = 1; i <= n; i++) {

        b += 1.0 / i;

    }



    cout << "Послідовність b[i]: ";

    for (int i = 1; i <= n; i++) {

        b -= 1.0 / i;

        cout << b << " | ";

    }



    cout << endl;



    return 0;

}