#include <iostream>
#include <string>
using namespace std;

int main() {
	string word1, word2;
	cout << "Syötä ensimmäinen sana: ";
	cin >> word1;
	cout << "Syötä toinen sana: ";
	cin >> word2;

	cout << "Syötit sanat: " << word1 << " ja " << word2 << endl;

	if (word1.length() < 5 || word2.length() < 5) {
		cout << "Jompikumpi sanoista on lyhyt" << endl;
	} else if (word1.length() > 10 || word2.length() > 10) {
		cout << "Jompikumpi sanoista on pitkä" << endl;
	}

	if (word1[0] == word2[0]) {
		cout << "Sanat alkavat samalla kirjaimella" << endl;
	} else {
		cout << "Sanat eivät ala samalla kirjaimella" << endl;
	}

	return 0;
}
