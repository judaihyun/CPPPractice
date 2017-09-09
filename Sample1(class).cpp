#include <iostream>
using namespace std;

class Car {
private:
		int num = 0;
		double gas = 0;
public:
		void show();
		void setNumGas(int, double);
		inline int getNum() { return num; } // function of inline is automatically 
		inline double getGas() { return gas; }
};

void Car::show() {
	cout << "car number : " << num << endl;
	cout << "car's gas : " << gas << endl;
}

void Car::setNumGas(int n, double g) {
	if (g > 0 && g < 1000) {
		num = n;
		gas = g;
		cout << "Car number is " << num << ", Gas is " << gas << " changed." << endl;
	}
	else {
		cout << g << "is incorrect gas value " << endl;
	}
	
}

void buy(Car& c);

int main() {

	Car* pCar;




	/*
	Car* pCar;
	pCar = new Car;

	pCar->num = 4321;
	pCar->gas = 50.2;

	pCar->show();
	delete pCar;
	*/

	pCar = new Car;
	pCar->setNumGas(4321, 980.5);
	buy(*pCar);
	delete pCar;




	return 0;
}


void buy(Car& c) {
	int n = c.getNum();
	double g = c.getGas();
	cout << "car number : " << n << endl;
	cout << "car's gas : " << g << endl;
}