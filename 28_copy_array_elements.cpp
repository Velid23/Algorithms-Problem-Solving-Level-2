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

void CopyArray(int Elements[100], int CopiedArray[100],int length) {
	for (int i = 0; i < length;i++) {
		CopiedArray[i] = Elements[i];
	}
}

int main() {
	srand((unsigned)time(NULL));
	int Elements[100],CopiedArray[100];
	int length;
	ReadArray(Elements, length);
	cout << "Array elements: ";
	PrintArray(Elements, length);
	CopyArray(Elements,CopiedArray, length);
	cout << "\nCopy Array elements: ";
	PrintArray(CopiedArray, length);
	return 0;
}