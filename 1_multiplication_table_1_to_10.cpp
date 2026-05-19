#include <iostream>
#include <string>
using namespace std;

void title() {
	cout<< "\n\n\t\t\tMultiplication Table From 1 to 10\n\n\n\n";
			for (int i = 1; i <= 10; i++) {
				cout << " \t";
				cout << i;
			}
			cout << endl;
			cout << "----------------------------------------------------------------------------------------" ;
}

string tablecolumn1(int i) {
	if (i<10) {
		return " |";
	}
	else {
		return "|";
	}
}

void PrintMultiplicationTable() {
	title();

	for (int i = 1; i <= 10;i++) {
		cout << endl;

		cout << i;

		cout<<"  " << tablecolumn1(i);

		for (int j=1; j <= 10;j++) {
			cout << "\t" << i * j;
		}
	}
}

int main() {
	PrintMultiplicationTable();
	cout << endl;
	return 0;
}