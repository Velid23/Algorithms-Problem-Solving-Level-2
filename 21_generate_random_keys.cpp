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

int RandomNumber(int From, int To) {
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

enum status {
	smallleter=1,capitalleter=2,specialCharacter=3,digit=4
};

char PrintResult(status ExampleStatus) {
	switch (ExampleStatus) {
	case(status::capitalleter):
		return char(RandomNumber(65, 90));
	case(status::smallleter):
		return char(RandomNumber(97, 122));
	case(status::specialCharacter):
		return char(RandomNumber(33, 47));
	case(status::digit):
		return char(RandomNumber(48, 57));
	}
}

string GenerateWord(status examplestatus , short length) {
	string word;
	for (int i=1; i <= length;i++) {
		word = word + PrintResult(examplestatus);
	}
	return word;
}

string GenerateKey() {
	string key = "";
	key = key + GenerateWord(status::capitalleter, 6) + "-";
	key = key + GenerateWord(status::capitalleter, 7) + "-";
	key = key + GenerateWord(status::capitalleter, 4) + "-";
	key = key + GenerateWord(status::capitalleter, 2);
	return key;
}

void KeyGenerationRepeat(int number) {
	for (int i = 1; i <= number; i++) {
		cout << "key [" << i << "] : " << GenerateKey() << endl;
	}
}

int main() {
	srand((unsigned)time(NULL));
	KeyGenerationRepeat(ReadPositiveNumber("please enter how many keys you want:"));
	return 0;
}