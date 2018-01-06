#ifndef __POINT_H_
#define __POINT_H_
#include "myfunc.h"

class Point
{
private:
	int xpos, ypos;
public:
	void Init(int x, int y){
		xpos = x;
		ypos = y;
	}

	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

#endif
