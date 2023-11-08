#include <iostream>
#include <vector>

using namespace std;



int main() {

    setlocale(LC_ALL, "Ukrainian");
    
    int n;

    cout << "Введіть розмір квадратної матриці(вибирайте числа від 2 до 5, вам краще буде): " << endl;

    cin >> n;

    
    vector<vector<int>> matrix(n, vector<int>(n));


    cout << "Введіть " << n * n << " цілих чисел для заповнення масиву:" << endl;

    for (int i = 0; i < n; ++i) {

        for (int j = 0; j < n; ++j) {

            cin >> matrix[i][j];

        }

    }



    int sum = 0;

    for (int i = 0; i < n; ++i) {

        if (matrix[i][i] > 20) {

            sum += matrix[i][i];

        }

    }



    cout << "Сума елементів головної діагоналі, більших за 20: " << sum << endl;



    return 0;

}