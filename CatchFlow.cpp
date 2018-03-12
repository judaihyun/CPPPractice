#include <iostream>
using namespace std;

class AAA {
public:
	void ShowYou() { cout << "AAA Exception!" << endl; }
};

class BBB : public AAA {
public:
	void ShowYou() { cout << "BBB Exception!" << endl; }
};

class CCC : public BBB {
public:
	void ShowYou() { cout << "CCC Exception!" << endl; }
};

void ExceptionGenerator(int expn) {
	if (expn == 1)
		throw AAA();
	else if (expn == 2)
		throw BBB();
	else
		throw CCC();
}


void main() {

	try {
		ExceptionGenerator(3);
		ExceptionGenerator(2);
		ExceptionGenerator(1);
	}
	catch (AAA& e) {
		cout << "catch(AAA& expn)" << endl;
		e.ShowYou();
	}
	catch (BBB& e) {
		cout << "catch(BBB& expn)" << endl;
		e.ShowYou();
	}
	catch (CCC& e) {
		cout << "catch(CCC& expn)" << endl;
		e.ShowYou();
	}

}