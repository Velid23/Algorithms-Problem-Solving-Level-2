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

void PrintLettersInvertedPattern(int number) {
	for (int i = 1; i<= number; i++) {
		for (int j = 0; j < i; j++) {
			cout << char(i+64);
		}
		cout << "\n";
	}
}

int main() {
	PrintLettersInvertedPattern(ReadPositiveNumber("Enter rows number (1-26): "));
	return 0;
}