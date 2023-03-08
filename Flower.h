#pragma once
#include <iostream>

class Flower {
private:
	std::string flower;
	float price;
	int stalk_lenght;
public:
	Flower(std::string flower, float price, int stalk_lenght);
	Flower operator++ ();
	Flower operator-- ();
	Flower operator-(int lenght);
	friend std::ostream& operator<< (std::ostream& out, const Flower& flower);
};
std::ostream& operator<< (std::ostream& out, const Flower& flower);

