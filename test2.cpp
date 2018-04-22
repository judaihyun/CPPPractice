#include <iostream>
using namespace std;

void For_each(int *begin, int *end, void(*pf)(int)) {
	while (begin != end) {
		pf(*begin++);
	}
}

void Print1(int n) {
	cout << n << ' ';
}

void Print2(int n) {
	cout << n * n << ' ';
}

void Print3(int n) {
	cout << "Á¤¼ö : " << n << endl;
}

void main() {
	int arr[5] = { 10,20,30,40,50 };

	For_each(arr, arr + 5, Print1);
	cout << endl << endl;

}