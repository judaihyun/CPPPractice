#include <iostream>
#include <assert.h>
#include <cstring>
#define SIZE 16

using namespace std;

int main() {

	char dial[SIZE];
	int i = 0;
	int value = 0;
	int result = 0;

	cin >> dial;


	while (i < strlen(dial)) {
		value = dial[i];
		if (value >= 65 && value <= 67) {
			result += 3;
		}
		else if (value >= 68 && value <= 70) {
			result += 4;
		}
		else if (value >= 71 && value <= 73) {
			result += 5;
		}
		else if (value >= 74 && value <= 76) {
			result += 6;
		}
		else if (value >= 77 && value <= 79) {
			result += 7;
		}
		else if (value >= 80 && value <= 83) {
			result += 8;
		}
		else if (value >= 84 && value <= 86) {
			result += 9;
		}
		else if (value >= 87 && value <= 90) {
			result += 10;
		}

		i++;
	}



	cout << result << endl;




	return 0;
}