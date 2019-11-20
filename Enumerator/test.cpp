#include <iostream>
#include"Enumerator.hpp"

using namespace std;

int main() {
	int min_val;
	int val;
	int max_val;
	cout << "min value: ";
	cin >> min_val;
	cout << "max value: ";
	cin >> max_val;
	cout << "value: ";
	cin >> val;
	Enumerator enumerator(max_val, val, min_val);
	enumerator.work(15);
	cout << "new min value: ";
	cin >> min_val;
	cout << "new max value: ";
	cin >> max_val;
	cout << "value: ";
	cin >> val;
	enumerator.setMinValue(min_val);
	enumerator.setMaxValue(max_val);
	enumerator.setValue(val);
	enumerator.work(15);
}