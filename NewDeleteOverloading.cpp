#include <iostream>
using namespace std;

class Point {
private:
	int xpos_, ypos_;
public:
	Point(int x = 0, int y = 0 ) : xpos_(x), ypos_(y){}
	friend ostream& operator<<(ostream& os, const Point& pos);

	void * operator new (size_t size) {
		cout << "operator new : " << size << endl;
		void * adr = new char[size];
		return adr;
	}
	void operator delete (void * adr) {
		cout << "operator delete ()" << endl;
		delete []adr;
	}
};

ostream& operator<<(ostream& os, const Point& pos) {
	os << '[' << pos.xpos_ << ", " << pos.ypos_ << ']' << endl;
	return os;
}

int main() {
	Point * ptr = new Point(3, 4);
	cout << *ptr;
	delete ptr;
	return 0;
}