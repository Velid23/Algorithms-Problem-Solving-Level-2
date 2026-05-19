#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int from, int to) {
	int randomnumber = rand() % (to - from + 1) + from;
	return randomnumber;
}

void FillArrayWithRandomNumbers(int Array[100], int& length) {
	cout << "please enter size of array: ";
	cin >> length;

	for (int i = 0; i < length; i++) {
		Array[i] = RandomNumber(-100, 100);
	}
}

short CountNegativeNumbers(int Array[100], int length) {
	short counter = 0;
	for (int i = 0; i < length; i++) {
		if (Array[i] < 0) {
			counter++;
		}
	}
	return counter;
}

void PrintArray(int Array[100], int length) {
	for (int i = 0; i < length; i++) {
		cout << Array[i] << " ";
	}
}

int main() {
	int Array[100], length;
	FillArrayWithRandomNumbers(Array, length);
	cout << "Array elements: ";
	PrintArray(Array, length);
	cout << endl;
	cout << "Negative numbers count is : " << CountNegativeNumbers(Array, length) << endl;
	return 0;
}