#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber(string message) {
	float number;
	cout << message;
	cin >> number;
	return number;
}

float GetFractoinPart(float number) {
	return number - (int)number;
}

int MyCeil(float number) {
	if (number > 0) {
		return number - GetFractoinPart(number) + 1;
	}
	else {
		return number - GetFractoinPart(number);
	}
}

int main() {
	float number = ReadNumber("enter float number: ");
	cout << "My ceil is : " << MyCeil(number) << endl;
	cout << "C++ ceil is : " << ceil(number) << endl;
	return 0;
}