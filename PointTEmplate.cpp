#include <iostream>
#include "PointTemplate.h"
using namespace std;


template <typename T>
Point<T>::Point(T x, T y) : xpos_(x), ypos_(y) {}

template <typename T>
void Point<T>::ShowPosition() const {
	cout << '[' << xpos_ << ", " << ypos_ << ']' << endl;
}
