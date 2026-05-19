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

bool IsPalindrome(int number) {
	return number == ReverseNumbers(number);
}

int main() {
	int num = ReadPositiveNumber("Enter number to check palindrome: ");
	if (IsPalindrome(num)) cout << "Yes, it is a Palindrome number\n";
	else cout << "No, it is not a Palindrome number\n";
	return 0;
}