#include <iostream>
using namespace std;

template <class T>
T maxt(T x)
{
	return x * x;
}

int main() {

	double a, b;

	cout << "Input two integer \n";
	cin >> a;


	cout << "1 : " << maxt(a) << endl;

	return 0;
}