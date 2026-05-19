#include <iostream>
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
	for (int i = number; i >= 0 && i > 0; i--) {
		for (int j = 0; j < i; j++) {
			cout << i;
		}
		cout << "\n";
	}
}

int main() {
	PrintDigits(ReadPositiveNumber("Enter rows number: "));
	return 0;
}