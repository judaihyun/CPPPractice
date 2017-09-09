#include <iostream>

class Point {
private :
	int x;
	int y;
public :
	void setX(int xx) { x = xx; }
	void setY(int yy) { y = yy; }
	int getX() { return x; }
	int getY() { return y; }
};

void Point::setX(int xx) {
	if (xx > 0 && xx < 11) {
		x = xx;
	}
}