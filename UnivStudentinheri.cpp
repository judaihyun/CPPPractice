#include <iostream>
#include <cstring>
using namespace std;

class Person {    // upper, super, base, parent class
private:
	int age;
	char name[50];
public:
	Person(int myage, char *myname) : age(myage) {
		int len = (int)strlen(myname) + 1;
		strcpy_s(name, len, myname);
	}
	void WhatYourName() const {
		cout << "My name is " << name << endl;
	}
	void HowOldAreYou() const {
		cout << "I'm " << age << " years old" << endl;
	}
};

class UnivStudent : public Person {  // lower, derived, sub, child class
private:
	char major[50];
public :
	UnivStudent(char *myname, int myage, char *mymajor)
		: Person(myage, myname) {
		int len = (int)strlen(mymajor) + 1;
		strcpy_s(major, len, mymajor);
	}
	void WhoAreYou() const {
		WhatYourName();
		HowOldAreYou();
		cout << "My major is " << major << endl << endl;
	}
};

int main() {
	UnivStudent ustd1("Lee", 22, "computer eng.");
	ustd1.WhoAreYou();


	return 0;
}