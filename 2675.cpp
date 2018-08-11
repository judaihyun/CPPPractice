#include <iostream>
#include <cstring>
using namespace std;

void Rotate(int rotateEnd, char *source) {
	
	for (int i = 0; i < strlen(source); i++) {
		for (int rotateStart = 0; rotateStart < rotateEnd; rotateStart++) {
			cout << source[i];
		}
	}
}

int main() {

	int tests = 0; // 1000
	int rotate;// 8
	char string[20]; // 1~20
	
	cin >> tests;

	for (int i = 0; i < tests; i++) {
		cin >> rotate; 
		cin >> string;
		Rotate(rotate, string);
		cout << endl;
	}



	return 0;
}