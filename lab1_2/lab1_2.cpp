#include <iostream>


int main() {

	setlocale(LC_ALL, "Ukrainian");

	double x;

	std::cout << "Введiть значення(дюйми): ";

	std::cin >> x;


	std::cout << x << "дюйм у см = " << x * 2.54 << std::endl;

	std::cout << x << "дюйм у мм = " << (x * 2.54) * 10 << std::endl;

	std::cout << x << "дюйм у м = " << (x * 2.54) / 100 << std::endl;

	return 0;

}