#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {

    setlocale(LC_ALL, "Ukrainian");

    int p, t;
    
    
    cout << "Введіть кількість елементів в послідовності a (p): ";
    cin >> p;

    cout << "Введіть кількість елементів в послідовності b (t): ";
    cin >> t;

    vector<double> a(p);
    vector<double> b(t);


    cout << "Введіть елементи послідовності a:" << endl;
    for (int i = 0; i < p; i++) {
        cin >> a[i];
    }

    cout << "Введіть елементи послідовності b:" << endl;
    for (int i = 0; i < t; i++) {
        cin >> b[i];
    }

    set<double> commonElements;

    for (int i = 0; i < p; i++) {
        for (int j = 0; j < t; j++) {
            if (a[i] == b[j]) {
                commonElements.insert(a[i]);
            }
        }
    }

    cout << "Спільні елементи обох послідовностей: ";
    for (const double& element : commonElements) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
