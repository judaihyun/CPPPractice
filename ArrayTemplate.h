#ifndef __ARRAY_TEMPLATE_H_
#define __ARRAY_TEMPLATE_H_

#include <ostream>
#include <cstdlib>

template <class T>
class BoundCheckArray {
private:
	T * arr_;
	int arrlen_;

	BoundCheckArray(const BoundCheckArray& arr){}
	BoundCheckArray& operator=(const BoundCheckArray& arr){}
public:
	BoundCheckArray(int len);
	T& operator[] (int idx);
	T operator[](int idx) const;
	int GetArrLen() const;
	~BoundCheckArray();
};

template <class T>
BoundCheckArray<T>::BoundCheckArray(int len) : arrlen_(len) {
	arr_ = new T[len];
}

template <class T>
T& BoundCheckArray<T>::operator[] (int idx) {
	if (idx < 0 || idx >= arrlen_) {
		cout << "out of bound" << endl;
		exit(1);
	}
	return arr_[idx];
}

template <class T>
T BoundCheckArray<T>::operator[] (int idx) const {
	if (idx < 0 || idx >= arrlen_) {
		cout << "out of bound" << endl;
		exit(1);
	}
	return arr_[idx];
}

template <class T>
int BoundCheckArray<T>::GetArrLen() const {
	return arrlen_;
}

template <class T>
BoundCheckArray<T>::~BoundCheckArray() {
	delete[]arr_;
}

#endif // !__ARRAY_TEMPLATE_H_
