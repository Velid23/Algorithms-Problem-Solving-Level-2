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

short CheckIfFound(int number,int Array[100],int length) {
	for (int i = 0; i < length;i++) {
		if (number == Array[i]) {
			return i;
		}
	}
	return -1;
}

int main() {
	int array[100];
	int length = ReadPositiveNumber("please enter size of array: ");
	FillArrayWithRandomNumbers(array, length);
	cout << "Array1 elements:" << endl;
	PrintArray(array, length);
	cout << endl;
	int searchnumber = ReadPositiveNumber("enter number you want to search: ");
	if (CheckIfFound(searchnumber, array, length)==-1) {
		cout << "the number is not found :-(";
	}
	else {
		cout << "the number found at position: " << CheckIfFound(searchnumber, array, length) << endl;
		cout << "the number found its order : " << CheckIfFound(searchnumber, array, length) + 1 << endl;
	}
	return 0;
}