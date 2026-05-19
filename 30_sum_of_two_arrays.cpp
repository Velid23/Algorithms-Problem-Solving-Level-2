#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int RandomNumber(int From, int To) {
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

int ReadPositiveNumber(string message) {
	int number;
	do {
		cout << message;
		cin >> number;
	} while (number < 0);
	return number;
}

void ReadArray(int Elements[100], int& length ) {
	for (int i = 0; i < length; i++) {
		Elements[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int Elements[100], int length) {
	for (int i = 0; i < length; i++) {
		cout << Elements[i] << "  ";
	}
}

void CalculateSum2Arrays(int array1[100], int array2[100],int SumArray[100], int length) {
	for (int i = 0; i < length;i++) {
		SumArray[i] = array1[i] + array2[i];
	}
}

int main() {
	srand((unsigned)time(NULL));
	int Array1[100],Array2[100],SumArray[100];
	int length=ReadPositiveNumber("how many elements: ");
	ReadArray(Array1, length);
	ReadArray(Array2, length);

	cout << "Array1 elements: ";
	PrintArray(Array1, length);
	cout << endl;
	cout << "Array2 elements: ";
	PrintArray(Array2, length);
	cout << endl;
	CalculateSum2Arrays(Array1, Array2, SumArray, length);
    cout << "The sum of 2 arrays is: ";
    PrintArray(SumArray, length);
	return 0;
}