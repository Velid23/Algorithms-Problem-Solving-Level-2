#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int ReadPositiveNumber(string message) {
	int number;
	do {
		cout << message;
		cin >> number;
	} while (number<0);
	return number;
}

int RandomNumber(int from , int to) {
	int RandomNumber = rand() % (to - from + 1) + from;
	return RandomNumber;
}

void FillArrayWithRandomNumbers(int Array[100],int length) {
	for (int i = 0; i < length;i++) {
		Array[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int Array[100], int length) {
	for (int i = 0; i < length;i++) {
		cout << Array[i]<<" ";
	}
}

bool IsFound(int number,int Array[100],int length) {
	for (int i = 0; i < length;i++) {
		if (number == Array[i]) {
			 return true;
		}
	}
	return false;
}

int main() {
	int array[100];
	int length = ReadPositiveNumber("please enter size of array: ");
	FillArrayWithRandomNumbers(array, length);
	cout << "Array1 elements:" << endl;
	PrintArray(array, length);
	cout << endl;
	int searchnumber = ReadPositiveNumber("enter number you want to search: ");
	cout << "the number you are looking for is: " << searchnumber << endl;
	if (IsFound(searchnumber, array, length)) {
		cout << "Yes, the number is found :-)\n";
	}
	else {
		cout << "No, the number is not found :-(\n";
	}
	return 0;
}