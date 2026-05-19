#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum PrimeOrNot{
	Prime=1,NotPrime=2
};

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

PrimeOrNot CheckPrime(int number) {
	if (number <= 1) return PrimeOrNot::NotPrime;
	for (int i = 2; i < number;i++) {
		if (number%i==0) {
			return PrimeOrNot::NotPrime;
		}
	}
	return PrimeOrNot::Prime;
}

bool IsPrime(int number) {
	if (CheckPrime(number)==PrimeOrNot::Prime) {
		return true;
	}
	else {
		return false;
	}
}

void CopyArray(int Elements[100], int CopiedArray[100],int length) {
	for (int i = 0; i < length;i++) {
			CopiedArray[i]=Elements[i];
	}
}

void ChoosePrimeElements(int elements[100], int length) {
	int NewArray[100];
	int count = 0;
	int original_length = length;
	for (int i = 0; i < original_length; i++) {
		if (IsPrime(elements[i])) {
			NewArray[count] = elements[i];
			cout << NewArray[count]<<" ";
			count++;
		}
	}
	if (count==0) {
		cout << "No prime numbers";
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
	cout << "\nPrime numbers in Array2: ";
	ChoosePrimeElements(CopiedArray,length);
	return 0;
}