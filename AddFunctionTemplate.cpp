#include <iostream>
using namespace std;

template <class T1, class T2>
void ShowData(double num) {
	cout << (T1)num << ", " << (T2)num << endl;
}

void main() {
	ShowData<char, int>(65);
}