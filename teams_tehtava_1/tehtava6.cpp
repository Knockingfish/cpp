#include <iostream>
using namespace std;

int main() {
	int luku1, luku2, erotus;
	cout << "Syötä kaksi lukua: ";
	cin >> luku1 >> luku2;
	erotus = luku1 - luku2;
	cout << "Lukujen erotus on: " << erotus << endl;

	return 0;
}
