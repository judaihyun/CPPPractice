#include <iostream>

using namespace std;

int main() {


	for (int i = 0; i < 5; i++) {
		for (int a = 0; a <= i; a++) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}