#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int RandomNumber(int from,int to) {
	int number = rand() % (to - from + 1) + from;
	return number;
}

void FillArrayWithRandomNumbers(int Array[100],int &length) {
	cout << "enter size of array: ";
	cin >> length;

	for (int i = 0; i < length;i++) {
		Array[i] = RandomNumber(1, 100);
	}
}

void AddArrayElement(int number,int Array[100],int &length) {
	length++;
	Array[length - 1] = number;
}

enum PrimeOrNot {
	Prime = 1,NotPrime=2
};

PrimeOrNot IsPrime(int number) {
	if (number <= 1) return PrimeOrNot::NotPrime;
	for (int i = 2; i < number;i++) {
		if (number%i==0) {
			return PrimeOrNot::NotPrime;
		}
	}
	return PrimeOrNot::Prime;
}

void CopyNumbersInArray(int Array1[100], int Array2[100],int length,int &length2) {
	for (int i = 0; i < length;i++) {
		if (IsPrime(Array1[i])==PrimeOrNot::Prime) {
		AddArrayElement(Array1[i], Array2, length2);
		}
	}
}

void PrintArray(int Array[100],int length) {
	for (int i = 0; i < length;i++) {
		cout << Array[i] << " ";
	}
}

int main() {
	srand((unsigned)time(NULL));
	int Array1[100], Array2[100], length=0,length2=0;
	FillArrayWithRandomNumbers(Array1, length);
	cout << "Array1 elements: " << endl;
	PrintArray(Array1, length);
	cout << endl;
	CopyNumbersInArray(Array1, Array2, length,length2);
	cout << "Array2 elements after copy only prime numbers: " << endl;
	PrintArray(Array2, length2);
	return 0;
}