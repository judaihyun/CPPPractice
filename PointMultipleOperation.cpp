#include <iostream>
using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y){}
	void ShowPosition() const {
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	Point operator*(int times) {
		Point pos(xpos*times, ypos*times);
		return pos;
	}
};


int main() {

	Point pos(1, 2);
	Point cpy;

	cpy = pos * 3; // pos.operator*(3);
	//cpy = 3 * pos;  --> not interpret,  
	cpy.ShowPosition();

	cpy = pos * 3 * 2; // pos.operator*(3) 
	cpy.ShowPosition();

	return 0;
}