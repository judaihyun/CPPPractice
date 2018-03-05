#include <iostream>
using namespace std;

class BoundCheckIntArray {
private:
	int *arr;
	int arrlen;
public:
	BoundCheckIntArray(int len) :arrlen(len) {
		arr = new int[len];
	}
	int& operator[] (int idx) {
		if (idx < 0 || idx >= arrlen) {
			cout << "out of bound" << endl;
			exit(1);
		}
		return arr[idx];
	}
	int GetArrLen() const { return arrlen; }
	~BoundCheckIntArray() { delete[]arr; }
};

typedef BoundCheckIntArray* POINT_PTR;

class BoundCheck2DIntArray {
private:
	BoundCheckIntArray** arr;
	int arrlen;

public:
	BoundCheck2DIntArray(int col, int row) :arrlen(col) {
		arr = new POINT_PTR[col];
	}
};

void main() {

	BoundCheck2DIntArray arr2d(3,4);
	for (int n = 0; n < 3; n++)
		for (int m = 0; m < 4; m++)
			arr2d[n][m] = n + m;



}