#include "myfunc.h"
class Calculator {
private:
	int AddCount, DivCount, MulCount, MinCount;
public:
	template <class T>
	T Add(T x, T y);
	template <class T>
	T Div(T x, T y);
	template <class T>
	T Mul(T x, T y);
	template <class T>
	T Min(T x, T y);
	void Init();
	void ShowOpCount();
};


// 함수템플릿은 inline과 같이 
template <class T>
T Calculator::Add(T x, T y) {
	AddCount++;
	return x + y;
}

template <class T>
T Calculator::Div(T x, T y) {
	DivCount++;
	return x / y;
}

template <class T>
T Calculator::Mul(T x, T y) {
	MulCount++;
	return x * y;
}

template <class T>
T Calculator::Min(T x, T y) {
	MinCount++;
	return x - y;
}