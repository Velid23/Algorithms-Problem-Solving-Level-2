#include <iostream>
using namespace std;

void FillArray(int Array[100],int &length) {
	length = 10;
	Array[0] = 90;
	Array[1] = 90;
	Array[2] = 40;
	Array[3] = 60;
	Array[4] = 80;
	Array[5] = 90;
	Array[6] = 80;
	Array[7] = 40;
	Array[8] = 40;
	Array[9] = 60;
}

bool IsElementInArray(int number,int Array[100],int &length) {
	for (int i = 0; i < length;i++) {
		if (Array[i]==number) {
			return true;
		}
	}
	return false;
}

void AddElementToArray(int element,int Array[100],int &length) {
	length++;
	Array[length - 1] = element;
}

void CopyOnlyDistinctElements(int Array[100],int CopyArray[100], int length,int &length2) {
	for (int i = 0; i < length;i++) {
		if (IsElementInArray(Array[i],CopyArray,length2)==false){
			AddElementToArray(Array[i],CopyArray,length2);
		}
	}
}

void PrintArray(int Array[100], int length) {
	for (int i = 0; i < length; i++) {
		cout << Array[i] << " ";
	}
}

int main() {
	int Array[100], CopyArray[100], Length, Length2 = 0;
	FillArray(Array, Length);
	cout << "Array 1 Elements: " << endl;
	PrintArray(Array,Length);
	CopyOnlyDistinctElements(Array, CopyArray, Length, Length2);
	cout << endl;
	cout << "Array 2 distinct elements: " << endl;
	PrintArray(CopyArray,Length2);
	return 0;
}