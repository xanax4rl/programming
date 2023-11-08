#include <iostream>
#include <vector>

using namespace std;

int main() {

    setlocale(LC_ALL, "Ukrainian");

    int p; 
    int t; 

    cout << "Введіть кількість рядків: ";
    cin >> p;

    cout << "Введіть кількість стовпців: ";
    cin >> t;

    vector<vector<int>> A(p, vector<int>(t));

    for (int i = 0; i < p; i++) {
        for (int j = 0; j < t; j++) {
            cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    vector<int> temp = A[0];
    A[0] = A[p - 1];
    A[p - 1] = temp;

    cout << "Змінена таблиця A:" << endl;
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < t; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
