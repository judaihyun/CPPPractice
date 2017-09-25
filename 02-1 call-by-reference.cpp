#include "myfunc.h"

void SwapByRef2(int &a, int &b) {
	a++;
	b *= -1;
}

int main() {

	int a = 1;
	int b = -1;
	cout << a << endl;
	cout << b << endl;

	SwapByRef2(a, b);

	cout << a << endl;
	cout << b << endl;
}