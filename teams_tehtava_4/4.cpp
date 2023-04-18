# include <iostream>
# include <cctype>
using namespace std;

int main() {
	char direction;
	int number;
	int i = 0;

	cout << "Ascending (A) or descending (D)?" << endl;
	cin >> direction;
	direction = toupper(direction);

	cout << "Provide an integer: ";
	cin >> number;

	if (direction == 'A') {
		for (i = 0; i <= number; i++) {
			cout << i << endl;
		}
	} else {
		for (i = number; i >= 0; i--) {
			cout << i << endl;
		}
	}
}
