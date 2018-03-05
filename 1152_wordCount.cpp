#include <iostream>
using namespace std;

const int SIZE = 1000000;

int main() {
	
	char input[SIZE-2];
	int count = 0;

	cin.getline(input, SIZE, '\n');

	// The Curious Case of Benjamin Button
	int i = 0;
		while (input[i] != NULL) {
			if (input[i] == ' ') {
				count++;
			}
			i++;
		}

		if (input[i-1] != ' ')
			count++;
		
		if (input[0] == ' ')
			count--;


		cout << count << endl;

	
	return 0;
}