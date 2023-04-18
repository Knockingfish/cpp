#include <iostream>
using namespace std;

int main() {
	int num1, num2, num3, smallest;
	cout << "Anna kolme kokonaislukua: ";
	cin >> num1 >> num2 >> num3;

	if (num1 == num2 && num2 == num3) {
		cout << "Luvut ovat yhtä suuria" << endl;
		return 0;
	}

	smallest = num1;

	if (num2 < smallest) {
		smallest = num2;
	}

	if (num3 < smallest) {
		smallest = num3;
	}

	cout << "Pienin luku on " << smallest << endl;

	return 0;
}
