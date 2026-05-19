#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int RandomNumber(int From, int To) {
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void ReadArray(int Elements[100], int& length) {
	cout << "please enter number of elements: ";
	cin >> length;

	for (int i = 0; i < length; i++) {
		Elements[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int Elements[100], int length) {
	for (int i = 0; i < length; i++) {
		cout << Elements[i] << "  ";
	}
}

int FindMax(int elements[100], int length) {
	int MaxElement = elements[0];
	for (int i = 1; i < length; i++) {
		if (elements[i] > MaxElement) {
			MaxElement = elements[i];
		}
	}
	return MaxElement;
}

int main() {
	srand((unsigned)time(NULL));
	int Elements[100];
	int length;
	ReadArray(Elements, length);
	cout << "Array elements: ";
	PrintArray(Elements, length);
	cout << "\n" << "The max number is : " << FindMax(Elements, length) << endl;
	return 0;
}