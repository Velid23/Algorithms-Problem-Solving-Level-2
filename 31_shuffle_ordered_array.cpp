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

void PrintArray(int Elements[100], int length) {
	for (int i = 0; i < length; i++) {
		cout << Elements[i] << "  ";
	}
}

void FillArrayWithOrderdNumbers(int array[100],int length) {
	for (int i = 0; i < length;i++) {
		array[i] = i + 1;
	}
}

void SwapFunction(int &A,int &B) {
	int temp;
	temp=A;
	A = B;
	B = temp;
}

void ShufledNumbers(int array[100] ,int length) {
	for (int i = 0; i < length;i++) {
		int index1 = RandomNumber(1, length)-1;
		int index2 = RandomNumber(1, length) - 1;
		SwapFunction(array[index1], array[index2]);
	}
}

int main() {
	srand((unsigned)time(NULL));
	int OrderedArray[100] ;
	int length=ReadPositiveNumber("enter N:");
	FillArrayWithOrderdNumbers(OrderedArray, length);
	cout << "Array elements before shuffle: ";
	PrintArray(OrderedArray,length);
	cout << endl;
	ShufledNumbers(OrderedArray, length);
	cout << "Array elements after shuffle: ";
	PrintArray(OrderedArray, length);
	return 0;
}