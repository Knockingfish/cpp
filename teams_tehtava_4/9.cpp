#include <iostream>
using namespace std;

int main() {
	string password;
	string repeat;
	int attempts = 0;

	cout << "Set a password: ";
	cin >> password;

	do {
		cout << "Repeat your password: ";
		cin >> repeat;
		attempts++;
	} while (repeat != password && attempts < 3);

	if (repeat == password) {
		cout << "Pin code correct, welcome!" << endl;
	} else {
		cout << "Too many wrong attempts!" << endl;
	}

	return 0;
}
