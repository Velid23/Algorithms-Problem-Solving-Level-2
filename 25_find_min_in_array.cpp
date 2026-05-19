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

int FindMin(int elements[100], int length) {
	int MinElement = elements[0];
	for (int i = 1; i < length; i++) {
		if (elements[i] < MinElement) {
			MinElement = elements[i];
		}
	}
	return MinElement;
}

int main() {
	srand((unsigned)time(NULL));
	int Elements[100];
	int length;
	ReadArray(Elements, length);
	cout << "Array elements: ";
	PrintArray(Elements, length);
	cout << "\n" << "The min number is : " << FindMin(Elements, length) << endl;
	return 0;
}