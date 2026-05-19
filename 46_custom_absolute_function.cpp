#include <iostream>
#include <cmath>
using namespace std;

int ReadNumber(string message) {
	int number;
		cout << message;
		cin >> number;
	return number;
}

int AbsoluteFunction(int number) {
	if (number > 0) {
		return number;
	}
	else {
		return number * -1;
	}
}

int main() {
	int number = ReadNumber("please enter number: ");
	cout << "My absolute value is: " << AbsoluteFunction(number)<<endl;
	cout << "c++ abs value is : " << abs(number) << endl;
	return 0;
}