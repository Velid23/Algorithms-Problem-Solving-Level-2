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

bool IsPerfectNumber(int number) {
	int sum = 0;
	for (int i = 1; i < number; i++) {
		if (number % i == 0) {
			sum =sum+ i;
		}
	}
	return sum==number;
}

void PrintResult(int number) {
	if (IsPerfectNumber(number) ) {
		cout << number << " is perfect number";
	}
	else {
		cout << number << " is not a perfect number";
	}
}

int main() {
	PrintResult(ReadPositiveNumber("Enter number to check: "));
	return 0;
}