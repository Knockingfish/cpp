#include <iostream>
#include <string>
using namespace std;

int main() {
	string word;
	cout << "Syötä sana: ";
	cin >> word;

	cout << "Syötit sanan: " << word << endl;

	if (word.length() < 5) {
		cout << "Onpa lyhyt sana" << endl;
	} else if (word.length() > 10) {
		cout << "Onpa pitkä sana" << endl;
	}

	return 0;
}
