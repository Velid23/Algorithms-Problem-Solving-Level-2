#include <iostream>
#include <string>
using namespace std;

string ReadText(string message) {
	string text;
	cout << message;
	getline(cin, text);
	return text;
}

string Encryption(string ExampleText,short EncryptionKey) {
	for (int k = 0; k < ExampleText.length();k++) {
		ExampleText[k] = char((int)ExampleText[k] + EncryptionKey);
	}
	return ExampleText;
}

string Decryption(string ExampleText, short DecryptionKey) {
	for (int k = 0; k < ExampleText.length(); k++) {
		ExampleText[k] = char((int)ExampleText[k] - DecryptionKey);
	}
	return ExampleText;
}

void PrintResult(string exampletext) {
	string EncryptedText = Encryption(exampletext,2);
	cout << "Text before Encryption: " << exampletext<<endl;
	cout << "Text after Encryption: " << EncryptedText<<endl;
	cout << "Text after Decryption: " << Decryption(EncryptedText,2)<<endl;
}

int main() {
	string txt = ReadText("Enter your message: ");
	PrintResult(txt);
	return 0;
}