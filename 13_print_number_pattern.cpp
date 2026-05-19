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

void PrintDigitsInvertedPattern(int number) {
	for (int i = 1; i<= number; i++) {
		for (int j = 0; j < i; j++) {
			cout << i;
		}
		cout << "\n";
	}
}

int main() {
	PrintDigitsInvertedPattern(ReadPositiveNumber("Enter rows number: "));
	return 0;
}