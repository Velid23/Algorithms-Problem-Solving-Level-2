#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadPositiveNumber(string message) {
	int number;
	cout << message;
	cin >> number;
	return number;
}

int RandomNumber(int from,int to) {
	int randomnumber=rand() % (to - from+1) + from;
	return randomnumber;
}

void ReadArray(int Array[100],int length) {
	for (int i = 0; i < length;i++) {
		Array[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int Array[100],int length) {
	for (int i = 0; i < length;i++) {
		cout << Array[i]<<" ";
	}
}

void CopyArrayInReverse(int Array[100],int ReverseCopy[100],int length) {
	for (int i = length-1; i >= 0;i--) {
			ReverseCopy[length-1-i]=Array[i];
	}
}

int main() {
	srand((unsigned)time(NULL));
	int Array[100], ReverseCopy[100];
	int length = ReadPositiveNumber("enter size of array: ");

	ReadArray(Array, length);
	CopyArrayInReverse(Array, ReverseCopy, length);
	cout << "Array before reverse: ";
	PrintArray(Array,length);
	cout << endl;
	cout << "Array after reverse: ";
	PrintArray(ReverseCopy, length);
	return 0;
}