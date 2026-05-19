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
		Array[i] = RandomNumber(1, 100);
	}
}

short CountEvenNumbers(int Array[100], int length) {
	short count = 0;
	for (int i = 0; i < length; i++) {
		if (Array[i] % 2 == 0) {
			count++;
		}
	}
	return count;
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
	cout << "Even numbers count is : " << CountEvenNumbers(Array, length) << endl;
	return 0;
}