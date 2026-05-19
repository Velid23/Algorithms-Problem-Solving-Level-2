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

void PrintDigits(int number) {
	int remainder;
	while (number>0) {
		remainder = number % 10;
		number = number / 10;
		cout<< remainder<<endl;
	 }
}

int main() {
	PrintDigits(ReadPositiveNumber("Enter multi-digit number: "));
	return 0;
}