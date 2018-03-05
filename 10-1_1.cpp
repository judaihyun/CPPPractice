#include <iostream>
using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
	void ShowPosition() const {
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	friend Point operator-(const Point &pos1, const Point &pos2);
	friend bool operator==(const Point &, const Point &);
	friend bool operator!=(const Point &, const Point &);


	Point& operator+=(const Point &ref) {
		xpos += ref.xpos;
		ypos += ref.ypos;
		return *this;
	}
	Point& operator-=(const Point &ref) {
		xpos -= ref.xpos;
		ypos -= ref.ypos;
		return *this;
	}
};

bool operator!=(const Point &p1, const Point &p2) {
 if (p1.xpos == p2.xpos && p1.ypos == p2.ypos)
		return false;
	else
		return true;
	return !(p1 == p2);
}

bool operator==(const Point &p1, const Point &p2) {
	if (p1.xpos == p2.xpos && p1.ypos == p2.ypos)
		return true;
	else
		return false;
}

Point operator-(const Point &pos1, const Point &pos2) {
	Point pos(pos1.xpos - pos2.ypos, pos1.ypos - pos2.ypos);
	return pos;
}



int main() {
	Point pos1(20, 30);
	Point pos2(5, 7);
	Point pos3(5, 7);

	(pos1 - pos2).ShowPosition();
	(pos1 -= pos2).ShowPosition();
	(pos2 += pos3).ShowPosition();
	
	if (pos2 == pos3)
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;


	(pos2 -= pos3).ShowPosition();

	if(pos2!=pos3)
		cout << "not equal" << endl;
	else
		cout << "equal" << endl;



	return 0;
}