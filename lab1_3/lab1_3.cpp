#include <iostream>

int main()
{
    double r1, r2, s, p = 3.14;
    setlocale(LC_ALL, "Ukrainian");

    std::cout << "Введiть R1:";
    std::cin >> r1;

    std::cout << "Введiть R2(R2>R1):";
    std::cin >> r2;

    if (r1 < r2) {
        std::cout << "S кiльця = " << p * ((r2 * r2) - (r1 * r1)) << std::endl;
    }
    else {
        std::cout << "Помилка";
    }
    return 0;
}