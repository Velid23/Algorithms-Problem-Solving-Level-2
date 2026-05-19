#include <iostream>
#include <string>
using namespace std;

enum PrimeOrNot {
	prime=1,NotPrime=2
};

int ReadPositiveNumber(string message) {
	int number;
	do {
		cout << message;
		cin >> number;
	} while (number<0);

	return number;
}

PrimeOrNot PrimeDefine(int number){
	for (int i = number-1; i > 1;i--) {
		if (number%i==0) {
			return PrimeOrNot::NotPrime;
		}
	}	
	return PrimeOrNot::prime;
}

void PrintResult(int number) {
	cout << "prime numbers until " << number << "\nare:\n";
	for (int j=2; j < number;j++) {
		if (PrimeDefine(j) == PrimeOrNot::prime) {
			cout << j << endl;
		}
	}
}

int main() {
	PrintResult(ReadPositiveNumber("Enter positive number: "));
	return 0;
}