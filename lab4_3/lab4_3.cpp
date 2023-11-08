#include <iostream> 
#include <cmath>



using namespace std;



int main()

{
    setlocale(LC_ALL, "Ukrainian");
    double n; double x;



    cout << "Введіть натуральне число n: ";

    cin >> n;



    cout << "Введіть число x: ";

    cin >> x; int count = 0;



    for (int i = 0; i < n; ++i)

    {

        double ai;



        cout << "Введіть число a" << i + 1 << ": ";

        cin >> ai;





        if (sin(ai) == x)

        {

            count++;



        }



    }

    cout << "Число " << x << " зустрічається серед sin(a1), sin(a2), .., sin(an) " << count << " разів." << endl;





    return 0;

}