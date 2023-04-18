#include <iostream>
using namespace std;

int main() {
	int number, sum = 0, count = 0;
	double average;

	while (true) {
		cout << "Provide an integer: ";
		cin >> number;
		if (number <= 0) {
			break;
		}
		sum = sum + number;
	}
	cout << sum << endl;
	return 0;
}
