#include <iostream>
using namespace std;

int main() {
	int a, b, sum, difference, product;
	float quotient;

	cout << "Provide the first integer: ";
	cin >> a;
	cout << "Provide the second integer: ";
	cin >> b;

	sum = a + b;
	difference = a - b;
	product = a * b;
	quotient = (float)a / b;

	cout << "The sum of " << a << " and " << b << " is " << sum << endl;
	cout << "The difference of " << a << " and " << b << " is " << difference << endl;
	cout << "The product of " << a << " and " << b << " is " << product << endl;
	cout << "The quotient of " << a << " and " << b << " is " << quotient << endl;
	cout << "The provided numbers were " << a << " and " << b << "." << endl;

	return 0;
}
