#include <iostream>
#define DEBUG


using namespace std;
const int MAX = 10001;
const int ARR = 11107;


int selfNumber(int n);

int main() {
	int arr[ARR];


	for (int i = 1; i < MAX; i++) {
			arr[selfNumber(i)] = 1;
	}

	for (int i = 1; i < MAX; i++) {
		if (arr[i] != 1) {
			cout << i << endl;
		}
	}

	return 0;
}

int selfNumber(int n) {

	int result = n;

	while (1) {
		if (n == 0) {
			break;
		}
		result += n % 10;
		n = n / 10;

	}

	return result;
}

