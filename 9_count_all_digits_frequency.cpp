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

void CheckDigits(int number) {
	for (int i=0; i <= 9; i++) {
		if(ReturnCount(number, i)!=0){
		cout << "Digit " << i << " Frequency is " << ReturnCount(number, i)<<"\n";
		}
	}
}

int main() {
	CheckDigits(ReadPositiveNumber("Enter number: "));
	return 0;
}