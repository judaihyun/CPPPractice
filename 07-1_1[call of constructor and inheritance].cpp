#include <iostream>
using namespace std;


class Car {
private:
	int gasolineGauge;
public:
	Car() : gasolineGauge(100) {

	}
	Car(int gas) : gasolineGauge(gas) {

	}
	int GetGasGauge() {
		return gasolineGauge;
	}
};

class HybridCar : public Car {
private:
	int electricGauge;
public:
	HybridCar() : electricGauge(100) {

	}
	HybridCar(int ele, int g) : Car(g), electricGauge(ele) {

	}
	int getElecGauge() {
		return electricGauge;
	}
};

class HybridWaterCar : public HybridCar {
private:
	int waterGauge;
public:
	HybridWaterCar() : waterGauge(100) {

	}
	HybridWaterCar(int w, int e, int g) : HybridCar(e, g), waterGauge(w) {

	}
	HybridWaterCar(int e, int g) : HybridCar(e, g), waterGauge(100) {

	}
	void ShowCurrentGauge() {
		cout << "residual gas: " << GetGasGauge() << endl;
		cout << "residual electricity: " << getElecGauge() << endl;
		cout << "residual water: " << waterGauge << endl;
	}
};


void main() {
	HybridWaterCar t;
	t.ShowCurrentGauge();

	HybridWaterCar t1(1, 2, 3);
	t1.ShowCurrentGauge();

	HybridWaterCar t2(50, 60);
	t2.ShowCurrentGauge();



}