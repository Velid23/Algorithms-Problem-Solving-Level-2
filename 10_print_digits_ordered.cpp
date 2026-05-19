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

int ReverseNumbers(int number) {
	int remainder=0, number2 = 0;

	while (number > 0) {
		remainder = number % 10;
		number = number / 10;
		number2 = number2 * 10 + remainder;
	}
	return number2;
} 

void PrintDigits(int number) {
	int remainder=0;
	
	while (number > 0) {
		remainder = number % 10;
		number = number / 10;
		cout << remainder<<"\n";
	}
}

int main() {
	int num = ReadPositiveNumber("Enter number: ");
	PrintDigits(ReverseNumbers(num));
	return 0;
}