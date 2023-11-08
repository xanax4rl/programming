#include <iostream>


using namespace std;

int main() {



    setlocale(LC_ALL, "Ukrainian");

    int n;



    cout << "Введіть натуральне n (n > 1): ";

    cin >> n;



    if (n <= 1) {

        cout << "n повинно бути більше 1." << endl;

        return 1;

    }





    int u0 = 0;

    int u1 = 1;



    cout << "Члени послідовності Фібоначчі:" << endl;

    cout << u0 << " " << u1 << " ";



    for (int i = 2; i < n; i++) {

        int next = u0 + u1;

        cout << next << " ";

        u0 = u1;

        u1 = next;

    }





    return 0;

}