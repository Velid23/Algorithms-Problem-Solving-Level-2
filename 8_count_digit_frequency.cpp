#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string message) {
	int number;
	do {
		cout << message;
		cin >> number;
	} while (number < 0);

	return number;
}

int ReturnCount(int number,short digit) {
	int remainder = 0,count=0;

	while (number > 0) {
		remainder = number % 10;
		number = number / 10;
		if (remainder==digit) {
			count++;
		}
	}
	return count;
}

int main() {
	int num = ReadPositiveNumber("Enter main number: ");
	int dig;
	cout << "Enter digit to check frequency: ";
	cin >> dig;
	cout << "Digit " << dig << " repeated " << ReturnCount(num, dig) << " time(s)\n";
	return 0;
}