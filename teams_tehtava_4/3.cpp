#include <iostream>
using namespace std;

int main() {
	int number, sum = 0, count = 0;
	double average;

	while (true) {
		cout << "Provide a positive integer, provide a negative integer to terminate: ";
		cin >> number;
		if (number < 0) {
			break;
		}
		sum = number + sum;
		count++;
	}
	if (count > 0) {
		average = static_cast<double>(sum) / count;
		cout << "The average of the provided integers is " << average << "." << endl;
	} else {
		cout << "No positive integers were provided." << endl;
	}
	return 0;
}
