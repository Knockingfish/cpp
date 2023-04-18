#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "Anna kokonaisluku: ";
	cin >> number;

	if (number > 0) {
		cout << "Annettu luku on positiivinen." << endl;
	} else if (number < 0) {
		cout << "Annettu luku on negatiivinen." << endl;
	} else {
		cout << "Annettu luku on nolla." << endl;
	}

	return 0;
}
