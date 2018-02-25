#include <iostream>
using namespace std;

int main() {
	int value;
	int count = 1;
	int arr[2];

	cin >> value;

	int result = 0;
	int num = value;

	while (1) {
		
		arr[0] = num / 10;
		arr[1] = num % 10;
		result = arr[0] + arr[1];

		if (result >= 10) {
			result = result % 10;
		}

		num = (arr[1] * 10) + result;

		if (num == value) {
			break;
		}
	
		count++;

	}


	cout << count << endl;

	return 0;
}