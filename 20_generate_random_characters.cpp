#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

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

int main() {
	srand((unsigned)time(NULL));
	cout << "Random Capital Letter: " << PrintResult(status::capitalleter) << endl;
	cout << "Random Small Letter: " << PrintResult(status::smallleter) << endl;
	cout << "Random Digit: " << PrintResult(status::digit) << endl;
	return 0;
}