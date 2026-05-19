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

int MyFloor(float number) {
	if (number>0) {
	return number - GetFractoinPart(number);
	}
	else {
		return number - GetFractoinPart(number) - 1;
	}
}

int main() {
	float number = ReadNumber("enter float number: ");
	cout << "My floor is : " << MyFloor(number)<<endl;
	cout << "C++ floor is : " << floor(number) << endl;
	return 0;
}