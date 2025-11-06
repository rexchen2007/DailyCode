#include <iostream>
using namespace std;

void run() {
	int i, j;
	int n, pos, counter = 0;
	int code[26] = {};
	string sentence;

	cin >> n;
	cin.ignore();

	for (i = 0; i < n; i++) {
		getline(cin, sentence);

		for (j = 0; j < sentence.size(); j++) {
			pos = -1;

			if (sentence[j] >= 'a' && sentence[j] <= 'z')
				pos = sentence[j] - 'a';
			else if (sentence[j] >= 'A' && sentence[j] <= 'Z')
				pos = sentence[j] - 'A';

			if (pos != -1) {
				counter++;
				code[pos]++;
			}
		}
	}
	for (j = counter; j >= 1; j--) {
		for (i = 0; i < 26; i++) {
			if (code[i] == j) {
				cout << (char)(i + 'A') << " " << code[i] << endl;
			}
		}
	}

}
