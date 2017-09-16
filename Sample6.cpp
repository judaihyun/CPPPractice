#include "myfunc.h"

class Vehicle {
protected:
	int speed;
public:
	void setSpeed(int s);
	virtual void show() = 0;
};

class Car : public Vehicle {
private:
	int num;
	double gas;
public:
	Car(int n, double g);
	void show();
};

class Plane : public Vehicle {
private:
	int flight;
public:
	Plane(int f);
	void show();
};

void Vehicle::setSpeed(int s) {
	speed = s;
	cout << "speed is " << speed << endl;
}

Car::Car(int n, double g) {
	num = n;
	gas = g;
	cout << " car number is " << num << ", gas is " << gas << endl;
}

void Car::show() {
	cout << "car number is " << num << endl;
	cout << "gas is " << gas << " made" << endl;
}

Plane::Plane(int f) {
	flight = f;
	cout << " plane number is " << flight << endl;
}

void Plane::show() {
	cout << "plane number is " << flight << endl;
	cout << "speed is " << speed << endl;
}

int main() {

	Vehicle* pVc[2];
	Car car1(1234, 20.5);
	Plane pln1(232);

	pVc[0] = &car1;
	pVc[1] = &pln1;

	pVc[0]->setSpeed(60);
	pVc[1]->setSpeed(500);


	for (int i = 0; i < 2; i++) {
		if (typeid(*pVc[i]) == typeid(Car))
			cout << (i + 1) << "object is " << typeid(Car).name() << endl;
		else
			cout << (i + 1) << "object is not " << typeid(Car).name() << " " << typeid(*pVc[i]).name() << endl;
	}

	/*
	for (int i = 0; i < 2; i++) {
		pVc[i]->show();
	}
	*/
}