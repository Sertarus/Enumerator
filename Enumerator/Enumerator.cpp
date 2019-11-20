#include "Enumerator.hpp"
#include <iostream>
#include "windows.h"

using namespace std;

Enumerator::Enumerator(int max_value, int value, int min_value) {
		this->max_value = max_value;
		this->value = value;
		this->min_value = min_value;
		this->isValid();
}

int Enumerator::getValue() const {
	return this->value;
}

int Enumerator::getMaxValue() const {
	return this->max_value;
}

int Enumerator::getMinValue() const {
	return this->min_value;
}

void Enumerator::setValue(int value) {
	this->value = value;
	this->isValid();
}

void Enumerator::setMaxValue(int max_value) {
	this->max_value = max_value;
	this->isValid();
}

void Enumerator::setMinValue(int min_value) {
	this->min_value = min_value;
	this->isValid();
}

void Enumerator::add() {
	if (value == max_value) {
		value = min_value;
	}
	else value++;
	isValid();
}


void Enumerator::work(int time) {
	int i = 0;
	while ( i < time) {
		std::cout << this->value << endl;
		add();
		i++;
		Sleep(1000);
	}
}
std::ostream& operator<<(std::ostream& out, Enumerator& e) {
	return out << " " << e.value;
}

void Enumerator::isValid() {
	if (value < min_value || value > max_value || value < min_value) {
		value = min_value;
	}
}