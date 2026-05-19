#include <iostream>
#include <string>
using namespace std;

string ReadString(string message) {
	string password;
	cout << message;
	cin >> password;
	return password;
}

bool PrintLettersInvertedPattern(string ExamplePassword) {
	cout << endl;
	int count = 1;
	string word = "";
	for (int i = 65; i <= 90; i++) {
		for (int j = 65; j <= 90; j++) {
			for (int k = 65; k <= 90; k++) {
				word = word + char(i);
				word = word + char(j);
				word = word + char(k);
				cout << "Trial[" << count << "] : " << word << endl;
				if (word == ExamplePassword) {
					cout << "\nPassword is " << word << "\n";
					cout << "Found after " << count << " Trial(s)\n";
					return true;
				}
				word = "";
				count++;
			}
		}
	}
	return false;
}

int main() {
	string pass = ReadString("Enter 3 capital letters password: ");
	PrintLettersInvertedPattern(pass);
	return 0;
}