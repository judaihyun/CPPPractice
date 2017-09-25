#include "myfunc.h"
#include <cstring>


typedef struct __Point{
	int xpos;
	int ypos;
}Point;

Point& PntAdder(const Point &p1, const Point &p2);

int main() {

	

	Point *ptr1 = new Point();
	ptr1->xpos = 4;
	ptr1->ypos = 5;

	Point *ptr2 = new Point();
	ptr2->xpos = 10;
	ptr2->ypos = 10;


	Point *result = new Point();
	result = &PntAdder(*ptr1, *ptr2);

	cout << result->xpos << endl;
	cout << result->ypos << endl;


	cout << "------------" << endl;


	return 0;
}

Point& PntAdder(const Point &p1, const Point &p2) {
	Point *result = new Point();
	result->xpos = p1.xpos + p2.xpos;
	result->ypos = p1.ypos + p2.ypos;

	return *result;
}