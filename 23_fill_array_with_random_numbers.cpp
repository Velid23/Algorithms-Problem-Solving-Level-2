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
		Elements[i]=RandomNumber(1,100);
	}
}

void PrintArray(int Elements[100], int length) {
	for (int i = 0; i < length; i++) {
		cout<< Elements[i]<<"  ";
	}
}

int main() {
	srand((unsigned)time(NULL));
	int Elements[100];
	int length;
	ReadArray(Elements,length);
	cout << "Array elements: ";
	PrintArray(Elements,length);
	return 0;
}