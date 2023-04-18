#include <iostream>
#include <string>
using namespace std;

int main() {
	int integer;
	string word;
	double decimal;

	cout << "Enter an integer: ";
	cin >> integer;

	cout << "Enter a word: ";
	cin >> word;

	cout << "Enter a decimal number: ";
	cin >> decimal;

	cout << "You entered:" << endl;
	cout << "Integer: " << integer << endl;
	cout << "Word: " << word << endl;
	cout << "Decimal number: " << decimal << endl;

	return 0;
}
