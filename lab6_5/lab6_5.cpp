#include <iostream>
#include <vector>
using namespace std;

int main() {

    setlocale(LC_ALL, "Ukrainian");

    int n; 
    cout << "Введіть розмір таблиці n: ";
    cin >> n;

    vector<vector<int>> B(n, vector<int>(n));

    vector<int> C(n);
    

    cout << "Введіть елементи таблиці В(" << n*n <<"): " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
            C[j] += B[i][j]; 
        }
    }

    cout << "Масив C:" << endl;
    for (int j = 0; j < n; j++) {
        cout << "C[" << j << "] = " << C[j] << endl;
    }

    return 0;
}
