#include "myfunc.h"

int& RefRetFuncOne(int &ref) {
	ref++;
	return ref;
}

int main() {
	int num1 = 1;
	int num2 = RefRetFuncOne(num1);

	num1 += 1;
	num2 += 100;

	cout << num1;
	cout << num2;

}