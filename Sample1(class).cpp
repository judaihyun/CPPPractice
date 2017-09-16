#include <iostream>
using namespace std;

class Car {
protected:
		int num;
		double gas;
public:
	Car();
	void setCar(int n, double g);
	virtual void show();
};

class RacingCar : public Car {
private:
	int course;
public:
	RacingCar();
	virtual void setCourse(int c);
	void show();
};

Car::Car() {
	num = 0;
	gas = 0.0;
	cout << "car was made." << endl;
}

void Car::setCar(int n, double g) {
	num = n;
	gas = g;
	cout << " car number is " << num << ", gas is " << gas << endl;
}

void Car::show() {
	cout << "car number : " << num << endl;
	cout << "car's gas : " << gas << endl;
}

RacingCar::RacingCar() {
	course = 0;
	cout << "racing car was made" << endl;
}
void RacingCar::setCourse(int c) {
	course = c;
	cout << " course number : " << course << endl;
}

void RacingCar::show() {
	cout << "racing car number is " << num << endl;
	cout << "gas is " << gas << endl;
	cout << "course number is " << course << endl;
}

int main() {

	Car* pCars[2];

	Car car1;
	RacingCar rccar1;

	pCars[0] = &car1;
	pCars[0]->setCar(1234, 20.5);

	pCars[1] = &rccar1;
	pCars[1]->setCar(4567, 30.5);
	pCars[1]->setCourse();

	for (int i = 0; i < 2; i++)
		pCars[i]->show();

	return 0;
}
