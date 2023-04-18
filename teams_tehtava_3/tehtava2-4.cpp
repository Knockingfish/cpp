#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "Anna kokonaisluku: ";
	cin >> number;

	if (number < 0) {
		cout << "Anna positiivinen luku kiitos." << endl;
	} else if (number < 10) {
		cout << "Luku on alle 10" << endl;
	} else if (number > 10) {
		cout << "Luku on suurempi kuin 10" << endl;
	} else {
		cout << "Täysi kymppi!" << endl;
	}

	return 0;
}
