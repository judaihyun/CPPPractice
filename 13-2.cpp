#include <iostream>
using namespace std;

template <class T>
class SmartPtr {
private:
	T * posptr_;
public:
	SmartPtr(T * ptr) : posptr_(ptr){}
	T& operator*() const { return *posptr_; }
	T* operator->() const { return posptr_; }
	~SmartPtr() { delete posptr_; }
};

class Point {
private:
	int xpos_, ypos_;
public:
	Point(int x=0, int y=0) : xpos_(x), ypos_(y){}
	void SetPos(int x, int y) {
		xpos_ = x;
		ypos_ = y;
	}
	void ShowPosition() const { cout << '[' << xpos_ << ", " << ypos_ << ']' << endl; }
};

int main(void) {

	SmartPtr<Point> sptr1(new Point(1, 2));
	sptr1->ShowPosition();

	return 0;
}