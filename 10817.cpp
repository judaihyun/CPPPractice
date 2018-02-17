#include <iostream>
using namespace std;

int main() {

	int a, b, c = 0;
	int temp = 0;

	cin >> a >> b >> c;

	if (a >= b) {
		if (a >= c) {
			if (b >= c) {
				temp = b;
			}
			else {
				temp = c;
			}
		}
	}
	else if (b >= c) {
		if (b >= a) {
			if (c >= a) {
				temp = c;
			}
			else {
				temp = a;
			}
		}
	}
	else if (a >= c) {
		if (b >= c) {
			temp = b;
		}
		else if(b >= c) {
			if (a >= c) {
				temp = c;
			}
		}
	}

	cout << temp << endl;

	return 0;
}
