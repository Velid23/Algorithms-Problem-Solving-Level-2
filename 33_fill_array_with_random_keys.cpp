#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadPositiveNumber(string message) {
	int number;
	do {
	cout << message;
	cin >> number;
	} while (number < 0);
	return number;
}

int RandomNumber(int from,int to) {
	int randomnumber = rand() % (to - from + 1) + from;
	return randomnumber;
}

enum CharacterType{
	SmalLeter=1,CapitalLeter=2,SpecialCharacter=3,Digit=4
};

char RandomChar(CharacterType Type) {
	switch (Type) {
	case(CharacterType::CapitalLeter):
		return char(RandomNumber(65, 90));
	case(CharacterType::SmalLeter):
		return char(RandomNumber(97, 122));
	case(CharacterType::SpecialCharacter):
		return char(RandomNumber(33, 47));
	case(CharacterType::Digit):
		return char(RandomNumber(48, 57));
	}
}

string GenerateWord(CharacterType type ,int length) {
	string word;
	for (int i = 0; i < length;i++) {
		word = word + RandomChar(type);
	}
	return word;
}

string GenerateKey() {
	string key = "";
	key = key+GenerateWord(CharacterType::CapitalLeter, 4) + "-";
	key = key + GenerateWord(CharacterType::CapitalLeter, 1) + "-";
	key = key + GenerateWord(CharacterType::CapitalLeter, 4) + "-";
	key = key + GenerateWord(CharacterType::CapitalLeter, 3) ;
	return key;
}

void FillArrayWithKeys(string Array[100],int KeysNumber) {
	for (int i = 0; i < KeysNumber;i++) {
		Array[i] = GenerateKey();
	}
}

void PrintArray(string Array[100],int KeysNumber) {
	for (int i = 0; i < KeysNumber; i++) {
		cout<<"Array["<<i<<"] : "<<Array[i]<<endl;
	}
}

int main() {
	srand((unsigned)time(NULL));
	string Array[100];
	int KeysNumber = ReadPositiveNumber("Enter Keys Number: ");
	FillArrayWithKeys(Array, KeysNumber);
	cout << "Array Elements:" << endl;
	PrintArray(Array, KeysNumber);
	return 0;
}