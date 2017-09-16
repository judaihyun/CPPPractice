#include "myfunc.h"

struct Car {
	int num;
	double gas;
};

void show(Car& c);

int main() {

	Car car1 = { 0, 0.0 };
	
	cout << "input car num" << endl;
	cin >> car1.num;

	cout << "input car gas" << endl;
	cin >> car1.gas;

	show(car1);

	return 0;
}

void show(Car& x) {
	cout << "car num is " << x.num << ", gas is " << x.gas << endl;
}
