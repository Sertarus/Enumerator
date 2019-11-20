#ifndef ENUMERATOR_H
#define ENUMERATOR_H

#include<iostream>

class Enumerator {

public:
	Enumerator(int max_value, int min_value, int value);

	int getValue() const;

	void setValue(int value);

	int getMaxValue() const;

	void setMaxValue(int max_value);

	int getMinValue() const;

	void setMinValue(int min_value);

	void add();

	void work(int time);



	friend std::ostream& operator<<(std::ostream& out, Enumerator& e);

private:
	int max_value;
	int min_value;
	int value;

	void isValid();
};

#endif