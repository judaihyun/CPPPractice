#include <iostream>
using namespace std;

void main() {

	int sum = 0;

	for (int i = 0; i <= 2; i++) {
		cout << sum << "+" << i << "=" << sum + i << endl;
		sum += i;
	}

	cout << "result : " << sum << endl;
}