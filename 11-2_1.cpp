#include <iostream>
#include <cstdlib>
using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
	friend ostream& operator<<(ostream& os, const Point* pos);
	friend ostream& operator<<(ostream& os, const Point& pos);
};

ostream& operator<<(ostream& os, const Point* pos) {
	os << '[' << pos->xpos << ", " << pos->ypos << ']' << endl;
	return os;
}

ostream& operator<<(ostream& os, const Point& pos) {
	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
	return os;
}

typedef Point* POINT_PTR;

class BoundCheckPointPtrArray {
private:
	POINT_PTR * arr;
	int arrlen;
	//	BoundCheckPointPtrArray(const BoundCheckPointPtrArray& arr) {}  //copy constructor
	BoundCheckPointPtrArray& operator=(const BoundCheckPointPtrArray& arr) {}
public:
	BoundCheckPointPtrArray(int len) : arrlen(len) {
		arr = new POINT_PTR[len];
	}
	POINT_PTR& operator[] (int idx) {
		if (idx < 0 || idx >= arrlen) {
			cout << "out of bound" << endl;
			exit(1);
		}
		return arr[idx];
	}
	/*
	Point operator[](int idx) const {
	if (idx < 0 || idx >= arrlen) {
	cout << "out of bound" << endl;
	exit(1);
	}
	return arr[idx];
	}
	*/
	int GetArrLen() const { return arrlen; }
	~BoundCheckPointPtrArray() { delete[]arr; }

};

int main() {
	BoundCheckPointPtrArray arr(3);
	arr[0] = new Point(3, 4);   // arr.operator[](idx)
	arr[1] = new Point(5, 6);
	arr[2] = new Point(7, 8);

	for (int i = 0; i < arr.GetArrLen(); i++)
		cout << arr[i];

	for (int i = 0; i < arr.GetArrLen(); i++)
		cout << *(arr[i]);

	delete arr[0];
	delete arr[1];
	delete arr[2];

	return 0;
}