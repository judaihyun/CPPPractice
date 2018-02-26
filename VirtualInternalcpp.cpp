#include <iostream>
using namespace std;

class AAA {
private:
	int num1;
public:
	virtual void Func1() { cout << "func1()" << endl; }
	virtual void Func2() { cout << "func2()" << endl; }
};

class BBB : public AAA {
private:
	int num2;
public:
	virtual void Func1() { cout << "BBB::func1()" << endl; }
	void Func3() { cout << "Func3" << endl; }
};

int main() {
	AAA* aptr = new AAA();
	aptr->Func1();

	BBB* bptr = new BBB();
	bptr->Func1();



	return 0;
}