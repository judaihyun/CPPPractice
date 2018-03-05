#include <iostream>
using namespace std;

class Number {
private:
	int num_;
public:
	Number(int n) : num_(n){}
	void ShowData() { cout << num_ << endl; }

	Number* operator->() {
		return this;
	}

	Number& operator*() {
		return *this;
	}
};

void main() {
	Number num(20);
	num.ShowData();

	(*num) = 30;  // num.operator*()
	num->ShowData();  // (num.operator*()).ShowData();
	(*num).ShowData();
	num.ShowData();

}