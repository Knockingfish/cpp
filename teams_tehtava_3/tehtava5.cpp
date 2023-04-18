#include <iostream>
using namespace std;

int main() {
	double num1, num2, num3, average;
	cout << "Anna kolme lukua: ";
	cin >> num1 >> num2 >> num3;

	average = (num1 + num2 + num3) / 3.0;

	cout << "Lukujen keskiarvo on " << average << endl;

	return 0;
}
