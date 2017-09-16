#include <iostream>

using namespace std;

int length(char* str);
int count(char str[], char ch);

int main() {

	char* pT;
	pT = new char;

	char search;
	int num;

	cout << "input character\n";
	cin >> pT;
	cout << "What's character searching for?" << endl;
	cin >> search;
	
	num = count(pT, search);
	cout << "count : " << num << endl;
	return 0;
}

int count(char str[], char ch) {
	int i = 0;
	int c = 0;
	while (str[i] != '\0') {
		if (str[i] == ch)
			c++;

		i++;
	}
	return c;
}

int length(char* str) {

	int i = 0;
	for (int size = 0; str[size] != '\0'; size++) {
		i++;
	}
	return i;
}