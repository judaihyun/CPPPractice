#include <iostream>
using namespace std;

template <class T>
class Point {
private:
	T xpos_, ypos_;
public:
	Point(T x = 0, T y = 0) : xpos_(x), ypos_(y)
	{}
	void ShowPosition() const {
		cout << '[' << xpos_ << ", " << ypos_ << ']' << endl;
	}
};


void main() {
	Point<int>pos1(3, 4);
	pos1.ShowPosition();

}