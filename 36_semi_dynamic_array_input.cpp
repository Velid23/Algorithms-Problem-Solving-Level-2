#include <iostream>
#include <string>
using namespace std;

int ReadNumber(string message) {
	int number;
	cout << message;
	cin >> number;
	return number;
}

void AddElementToArray(int number,int Array[100],int &length) {
	length++;
	Array[length - 1] = number;
}

void FillArray(int Array[100],int &length) {
	bool choose=1;
	do {
		AddElementToArray(ReadNumber("enter the element: "), Array, length);
		cout << "Do you want to add more elements(yes=1,no=0): ";
		cin >> choose;
	} while (choose);
}

void PrintArray(int Array[100],int length) {
	for (int i = 0; i < length;i++) {
		cout << Array[i]<<" ";
	}
}

int main() {
	int Array[100], length=0;
	FillArray(Array, length);
	cout << "Array length is: " << length<<endl;
	cout << "Array Elements: ";
	PrintArray(Array, length);
	return 0;
}