#include <iostream>
using namespace std;

class Rectangle {
private:
	int x, y;
public:
	Rectangle(int x, int y) : x(x), y(y) {}
	void ShowAreaInfo() {
		cout << "area : " << x * y << endl;
	}


};

class Square : public Rectangle {
private:
	int side;
public:
	Square(int s) : side(s), Rectangle(s, s){}

};

int main() {
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();


	return 0;
}