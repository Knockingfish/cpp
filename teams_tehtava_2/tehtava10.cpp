#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	int age;

	cout << "Enter your first name: ";
	cin >> name;
	cout << "Enter your age: ";
	cin >> age;

	cout << "Moi " << name << ", olet " << age << " vuotta vanha." << endl;

	return 0;
}
