#include <iostream>
using namespace std;

class Pen {
public:
	Pen();
	void move(int, int);
	void penUp();
	void penDown();
	void special();
protected:
	int getX();
	int getY();
private:
	int x, y;
	bool isUp;
};

void Pen::special() {
	penDown();
	int savex = getX();
	move(3, 5);
	bool saveStat = isUp;
	setColor(32);
	int c = color;
}

class ColorPen : public Pen {
public:
	ColorPen();
	void move(int, int);
	void setColor(int);
	void CPspecial();
protected:
	int color;
};

void ColorPen::CPspecial() {
	penDown();
	int savex = getX();
	move(3, 5);
	bool saveStat = isUp;
	setColor(32);
	int c = color;
}

void main() {


}