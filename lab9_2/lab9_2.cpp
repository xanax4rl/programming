#include <iostream>
#include <vector>

using namespace std;

int calculateExpression(const vector<int>& numbers) {
    int result = 1;
    int sign = 1;

    for (int i = 0; i < numbers.size(); i++) {
        result *= sign * numbers[i];
        sign = -sign;
    }

    return result;
}

int main() {

    setlocale(LC_ALL, "Ukrainian");


    int n;

    cout << "Введіть натуральне число n (4 < n < 10): ";
    cin >> n;

    if (n <= 4 || n >= 10) {
        cout << "Помилкове значення n. Введіть коректне число." << endl;
        return 1;
    }

    vector<int> numbers;
    cout << "Введіть " << n << " цілих чисел: " << endl;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    int result = calculateExpression(numbers);

    cout << "Результат обчислень: " << result << endl;

    return 0;
}
