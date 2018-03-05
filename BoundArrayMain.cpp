#include <iostream>
#include "Point.h"
#include "ArrayTemplate.h"
#include "PointTemplate.h"
using namespace std;

int main() {

	BoundCheckArray<int> iarr(5);
	for (int i = 0; i < 5; i++)
		iarr[i] = (i + 1) * 11;
	for (int i = 0; i < 5; i++)
		cout << iarr[i] << endl;

	BoundCheckArray<Point<int>> oarr1(3);


	return 0;
}