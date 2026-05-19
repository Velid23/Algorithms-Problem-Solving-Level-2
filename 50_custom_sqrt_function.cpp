#include <iostream>
#include <cmath>
using namespace std;

int ReadNumber(string message) {
	int number;
	cout << message;
	cin >> number;
	return number;
}

float MySqrt(int number) {
	return pow(number, 0.5);
}

int main() {
	int number = ReadNumber("please enter the number: ");
	cout << "My sqrt is : " << MySqrt(number)<<endl;
	cout << "C++ sqrt is : " << sqrt(number) << endl;
	return 0;
}