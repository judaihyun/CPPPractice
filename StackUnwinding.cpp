#include <iostream>
using namespace std;

void SimpleFuncOne();
void SimpleFuncTwo();
void SimpleFuncThree();


void main() {

	//try {
		SimpleFuncOne();
		/*
	}
	catch (int e) {
		cout << "Exception code : " << e << endl;
	}
	*/

}

void SimpleFuncOne() {
	cout << "SimpleFuncOne()" << endl;
	SimpleFuncTwo();
}

void SimpleFuncTwo() {
	cout << "SimpleFuncTwo()" << endl;
	SimpleFuncThree();
}

void SimpleFuncThree() {
	cout << "SimpleFuncThree()" << endl;
	throw - 1;
}