#include <iostream>
#include "Exception.h"
#include "Flower.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	Flower tulip("tulip", 100, 20);
	std::cout << tulip;
	std::cout << "Уменьшаем цену " << '\n';
	try {
		--tulip;
		std::cout << tulip;
	}
	catch (const NegativeException& ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << "Увеличиваем цену " << '\n';
	try {
		++tulip;
		std::cout << tulip;
	}
	catch (const NegativeException& ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << "Уменьшаем стебель на 5" << '\n';
	try {
		tulip - 5;
		std::cout << tulip;
	}
	catch (const NegativeException& ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << "Сильно уменьшаем стебель " << '\n';
	try {
		tulip - 30;
		std::cout << tulip;
	}
	catch (const NegativeException& ex) {
		std::cout << ex.what() << std::endl;
	}
	return 0;
}

