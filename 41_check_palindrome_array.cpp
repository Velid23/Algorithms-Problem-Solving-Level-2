#include <iostream>
#include <string>
using namespace std;

void FillArray(int Array[100],int &length) {
	length = 6;
	Array[0] = 10;
	Array[1] = 4;
	Array[2] = 30;
	Array[3] = 30;
	Array[4] = 45;
	Array[5] = 10;
}

bool IsPalindromeArray(int Array[100],int Length) {
	for (int i = 0; i < Length;i++) {
		if (Array[i] != Array[Length-i-1]) {
			return false;
		}
	}
	return true;
}

void PrintArray(int Array[100],int length) {
	for (int i = 0; i < length;i++) {
		cout << Array[i] << " ";
	}
}

int main() {
	int Array[100], length;
	FillArray(Array, length);
	cout << "Array Elements: " << endl;
	PrintArray(Array, length);
	cout << endl;
	if (IsPalindromeArray(Array,length)) {
		cout << "Yes, it is a palindrome array\n";
	}
	else {
		cout << "no, it is not a palindrome array\n";
	}
	return 0;
}