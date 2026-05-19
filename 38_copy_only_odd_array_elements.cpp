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

void CopyOddNumbersInArray(int Array1[100], int Array2[100],int length,int &length2) {
	for (int i = 0; i < length;i++) {
		if (Array1[i]%2!=0) {
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
	CopyOddNumbersInArray(Array1, Array2, length,length2);
	cout << "Array2 elements after copy only odd numbers: " << endl;
	PrintArray(Array2, length2);
	return 0;
}