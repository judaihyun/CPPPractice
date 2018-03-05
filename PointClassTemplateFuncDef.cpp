#include <iostream>
using namespace std;

template <typename T>
class Point {
private:
	T xpos_, ypos_;
public:
	Point(T x = 0, T y = 0);
	void ShowPosition() const;
};

template <typename T>
Point<T>::Point(T x, T y) : xpos_(x), ypos_(y){}

template <typename T>
void Point<T>::ShowPosition() const {
	cout << '[' << xpos_ << ", " << ypos_ << ']' << endl;
}




void main() {
	Point<int> pos1(3, 4);
	pos1.ShowPosition();
}