#include <iostream>
using namespace std;

void fcn(int *pi) {
	*pi = 5;
}

void main() {
	int n = 3;
	fcn(&n);
	cout << n << endl;


}