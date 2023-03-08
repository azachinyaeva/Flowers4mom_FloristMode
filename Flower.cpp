#include "Flower.h"
#include "Exception.h"

	Flower::Flower(std::string flower, float price, int stalk_lenght) {
		this->flower = flower;
		this->price = price;
		this->stalk_lenght = stalk_lenght;
	}

	Flower Flower::operator++ () {
		this->price = this->price + 10;
		if (this->price < 0) {
			throw NegativeException("������! ���� ������ ����");
		}
		return *this;
	}

	Flower Flower::operator-- () {
		this->price = this->price - 10;
		return *this;
	}

	Flower Flower::operator-(int lenght) {

		this->stalk_lenght = this->stalk_lenght - lenght;
		if (this->stalk_lenght <= 0) {
			throw NegativeException("����� ������ �� ����� ���� ������ ����");
		}
		return *this;

	}
	std::ostream& operator<< (std::ostream& out, const Flower& flower)
	{
		out << "������: " << flower.flower << '\n' << "����: " << flower.price << '\n' << "����� ������: " << flower.stalk_lenght << '\n';
		return out;
	}