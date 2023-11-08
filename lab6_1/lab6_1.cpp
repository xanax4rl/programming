#include <iostream>


using namespace std;



int main() {


    setlocale(LC_ALL, "Ukrainian");

    const int arraySize = 30;

    double a[arraySize];

    double b[arraySize];





    for (int i = 1; i <= arraySize; ++i) {

        a[i] = static_cast<double>(rand()) / RAND_MAX;

        b[i] = static_cast<double>(rand()) / RAND_MAX;

    }





    double numerator = 0;

    for (int i = 1; i < arraySize; i += 2) {

        numerator += a[i] * b[i];

    }





    double denominator = 0;

    for (int i = 2; i < arraySize; i += 2) {

        denominator += a[i] * b[i];

    }





    if (denominator != 0) {

        double result = numerator / denominator;

        cout << "Результат: " << result << endl;

    }
    else {

        cout << "Знаменник дорівнює нулю, ділення на нуль неможливе." << endl;

    }



    return 0;

}