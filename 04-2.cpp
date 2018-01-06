#include "Point.h"



class Circle{
private:
	Point center;
	int radius;

public:
	void Init(int x, int y, int r){
		center.Init(x, y);
		radius = r;
	}
	
	void ShowCircleInfo() const{
		cout << "radius : " << radius << endl;
		center.ShowPointInfo();
	}

};

class Ring{
private:
	Circle circle1;
	Circle circle2;
public:
	void Init(int x, int y, int r, int xx, int yy, int rr) {
		circle1.Init(x, y, r);
		circle2.Init(xx, yy, rr);
	}
	void ShowRingInfo(){
		circle1.ShowCircleInfo();
		circle2.ShowCircleInfo();
	}
};



int main(){
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();

	return 0;
}