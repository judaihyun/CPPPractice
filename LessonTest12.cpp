#include <iostream>
#include "myfunc.h"

class Point {
private :
	int x;
	int y;
public :
	void setX(int a);
	void setY(int b);
	int getX() { return x; };
	int getY() { return y; };
};

void Point::setX(int a) {
	if (a >= 0 && a <= 10)
		x = a;

}

void Point::setY(int b) {
	if (b >= 0 && b <= 10)
		y = b;

}


int main() {

	Point pt;
	int x, y;

	cout << " X : " << endl;
	cin >> x;
	cout << " Y : " << endl;
	cin >> y;


	pt.setX(x);
	pt.setY(y);

	cout << "coordinate (" << pt.getX() << "," << pt.getY() << ")" << endl;

}
