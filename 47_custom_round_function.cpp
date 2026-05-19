#include <iostream>
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

int MyRound(float number) {
	if (GetFractoinPart(number)>=0.5) {
		return number - GetFractoinPart(number) + 1;
	}
	else {
		return number - GetFractoinPart(number);
	}
}

int main() {
	float number = ReadNumber("enter float number: ");
	cout << "My round is : " << MyRound(number) << endl;
	return 0;
}