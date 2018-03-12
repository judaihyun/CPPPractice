#include <iostream>
using namespace std;

void Print(int n) {
	cout << "static() " << n << endl;
}

namespace A {
	void Print(int n) {
		cout << "namespace A static () " << n << endl;
	}
}

class Point {
public:
	static void Print(int n) {
		cout << "static member function of Point class () " << n << endl;
	}
};

int main() {

	void(*pf)(int);

	Print(10);
	A::Print(10);
	Point::Print(10);

	pf = Print;
	pf(10);
	pf = A::Print;
	pf(10);
	pf = Point::Print;
	pf(20);

	return 0;
}