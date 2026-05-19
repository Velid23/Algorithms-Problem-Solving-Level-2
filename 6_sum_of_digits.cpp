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

int PrintDigits(int number) {
	int remainder,sum=0;

	while (number > 0) {
		remainder = number % 10;
		number = number / 10;
		sum +=remainder;
	}
	return sum;
}

int main() {
	int num = ReadPositiveNumber("Enter number: ");
	cout << "Sum of digits is: " << PrintDigits(num) << endl;
	return 0;
}