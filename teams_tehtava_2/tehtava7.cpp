#include <iostream>
using namespace std;

int main() {
	int a, b;
	double quotient;

	cout << "Enter two integers: ";
	cin >> a >> b;

	quotient = static_cast<double>(a) / b;

	cout << "The quotient of " << a << " and " << b << " is " << quotient << endl;

	return 0;
}
