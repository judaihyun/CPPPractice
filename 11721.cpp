#include <iostream>
using namespace std;

int main() {

	char string[100];

	cin >> string;

		int i = 0;
		while (string[i] != '\0') {
			cout << string[i];
			i++;
			if (i % 10 == 0) {
				cout << "\n";
			}
		}

	return 0;
}