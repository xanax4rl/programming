#include <iostream>

using namespace std;



int main()

{

    setlocale(LC_ALL, "Ukrainian");



    int v1, v2, t1, t2, s;



    cout << "Введіть швидкість катера(V1): ";

    cin >> v1;



    cout << "Введіть швидкість течії річки(V2>V1): ";

    cin >> v2;



    cout << "Введіть час руху катера по озеру за течією: ";

    cin >> t1;



    cout << "Введіть час руху катера по озеру проти течії: ";

    cin >> t2;



    s = v2 * t1;



    cout << "Катер проплив " << s << " км.";





}