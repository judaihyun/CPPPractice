#include <iostream>
using namespace std;

int main() {

	int a, b, c = 0;
	int temp = 0;

	cin >> a >> b >> c;

	if (a >= b && a >= c) {
		if (b >= c) {
			temp = b;
		}
		else
			temp = c;
	}
	else if (b >= a && b >= c) {
		if (a >= c) {
			temp = a;
		}
		else
			temp = c;
	}
	else if (c >= a && c >= b) {
		if (a >= b) {
			temp = a;
		}
		else
			temp = b;
	}


	cout << temp << endl;

	return 0;
}
