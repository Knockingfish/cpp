#include <iostream>
using namespace std;

int main() {
	string word;

	while (word != "stop") {
		cout << "Provide a word: ";
		cin >> word;
		cout << word << endl;
	}
}
