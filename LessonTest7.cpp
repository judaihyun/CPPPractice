#include <iostream>

using namespace std;

template <class A>
A square(A x) {
	return x * x;
}

int main() {

	int num = 0;
	int result = 0;
	double numD = 0;
	double resultD = 0;

	cout << "Please input" << endl;
	cin >> num;
	result = square(num);
	cout << num << "의 제곱은 " << result << "입니다." << endl;

	cout << "Please input" << endl;
	cin >> numD;
	resultD = square(numD);
	cout << numD << "의 제곱은 " << resultD << "입니다." << endl;
	return 0;
}
