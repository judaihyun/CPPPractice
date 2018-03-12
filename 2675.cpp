#include <iostream>
#include <cstring>
using namespace std;

void Rotate(int r, char *s) {
	for (int i = 0; i < strlen(s); i++) {
		for (int j = 0; j < r; j++) {
			putchar(s[i]);
		}
	}
}

int main() {

	int tests = 0; // 1000
	int rotate[8];// 8
	char string[20]; // 1~20

	cin >> tests;

	for (int i = 0; i < tests; i++) {
		cin >> rotate[i]; 
		cin >> string;
		Rotate(rotate[i], string);
		putchar('\n');
	}



	return 0;
}