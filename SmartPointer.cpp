#include <iostream>
using namespace std;

class Point {
private:
	int xpos_, ypos_;
public:
	Point(int x = 0, int y = 0) : xpos_(x), ypos_(y) {
		cout << "Point 按眉 积己" << endl;
	}
	~Point() {
		cout << "Point 按眉 家戈" << endl;
	}
	void SetPos(int x, int y) {
		xpos_ = x;
		ypos_ = y;
	}
	friend ostream& operator<<(ostream& os, const Point& pos);
};

ostream& operator<<(ostream& os, const Point& pos) {
	os << '[' << pos.xpos_ << ", " << pos.ypos_ << ']' << endl;
	return os;
}

class SmartPtr {
private:
	Point * posptr_;
public:
	SmartPtr(Point* ptr) : posptr_(ptr){}

	Point& operator*() const {
		return *posptr_;
	}

	Point* operator->() const {
		return posptr_;
	}

	~SmartPtr() {
		delete posptr_;
	}
};

int main() {
	SmartPtr sptr1(new Point(1, 2));
	SmartPtr sptr2(new Point(2, 3));
	SmartPtr sptr3(new Point(4, 5));
	cout << *sptr1;
	cout << *sptr2;
	cout << *sptr3;

	sptr1->SetPos(10, 20);
	sptr2->SetPos(30, 40);
	sptr3->SetPos(50, 60);

	cout << *sptr1;
	cout << *sptr2;
	cout << *sptr3;
	return 0;
}
