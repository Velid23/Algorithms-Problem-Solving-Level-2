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

void ReadArray(int Elements[100],int &length) {
	cout << "please enter number of elements:";
	cin >> length;

	for (int i = 0; i < length;i++) {
		cout << "Element[" << i+1<< "]: ";
		cin >> Elements[i];
	}
}

void PrintArray(int Elements[100], int length) {
	for (int i = 0; i < length; i++) {
		cout<< Elements[i]<<" ";
	}
}

int TimeRepeat(int number ,int Elements[100], int length) {
	int counter = 0;
	for (int i = 0; i < length;i++) {
		if (number == Elements[i]) {
			counter++;
		}
	}
	return counter;
}

int main() {
	int elements[100];
	int length;
	ReadArray(elements,length);
	int numberWantToCheck = ReadPositiveNumber("please enter number that you want to check it:");
	cout << "\nOriginal array: ";
	PrintArray(elements, length);
	cout << "\n" << numberWantToCheck << " is repeated " << TimeRepeat(numberWantToCheck, elements, length) << " time(s)\n";
	return 0;
}