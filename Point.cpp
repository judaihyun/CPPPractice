#include <iostream>
#include "Point.h"
using namespace std;

Point::Point(int x,int y) : xpos_(x), ypos_(y){}

ostream& operator<<(ostream& os, const Point& pos) {
	os << '[' << pos.xpos_ << ", " << pos.ypos_ << ']' << endl;
	return os;
}