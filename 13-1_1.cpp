#include <iostream>
using namespace std;

template <class T>
void SwapData(T& x, T& y) {
	T temp = x;
	x = y;
	y = temp;
}

class Point {
private:
	int xpos_, ypos_;
public:
	Point(int x = 0, int y = 0) : xpos_(x), ypos_(y) 
	{}
	void ShowPosition() const {
		cout << '[' << xpos_ << ", " << ypos_ << ']' << endl;
	}
};

int main() {

	Point pos1(3, 4);
	Point pos2(10, 20);
	SwapData(pos1, pos2);
	pos1.ShowPosition();
	pos2.ShowPosition();




	return 0;
}