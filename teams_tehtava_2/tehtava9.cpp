#include <iostream>
using namespace std;

int main() {
	int num1, num2, num3, sum;

	cout << "Enter the first number: ";
	cin >> num1;

	cout << "Enter the second number: ";
	cin >> num2;

	sum = num1 + num2;
	cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;

	cout << "Enter the third number: ";
	cin >> num3;

	sum -= num3;
	cout << "The result after subtracting " << num3 << " is " << sum << endl;

	return 0;
}
