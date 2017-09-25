#ifndef __CAR_H__
#define __CAR_H__

#include <iostream>
#include <cstring>
using namespace std;

namespace CAR_CONST {
	enum
	{
		ID_LEN = 20, MAX_SPD = 200, FUEL_STEP = 2,
		ACC_STEP = 10, BRK_STEP = 10
	};
}

class Car
{
private:
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;
public:
	void InitMembers(char * id, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};

inline void Car::ShowCarState() {
	cout << "ownerID : " << gamerID << endl;
	cout << "fuel : " << fuelGauge << "%" << endl;
	cout << "speed : " << curSpeed << "km/s" << endl;
}

inline void Car::Break() {
	if (curSpeed < CAR_CONST::BRK_STEP) {
		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}
#endif