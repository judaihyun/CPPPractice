#include <iostream>
#include <cstring>
using namespace std;

class Person 
{
	char *name;
	int age;
public:
	Person(char *myname, int myage) {
		int len = (int)strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
	}
	/*       deep copy
	Person(const Person& copy) : age(copy.age) {
		int len = (int)strlen(copy.name) + 1;
		name = new char[len];
		strcpy_s(name, len, copy.name);
	}                  
	*/
	Person operator=(const Person& ref) {
		delete[] name; // man2 object is destruct.
		int len = (int)strlen(ref.name) + 1;
		name = new char[len];
		strcpy_s(name, len, ref.name);
		age = ref.age;
		return *this;
	}

	void ShowPersonInfo() const {
		cout << "name : " << name << endl;
		cout << "age : " << age << endl;
	}
	/*
	~Person() {
		delete[] name;
		cout << "called destructor!" << endl;
	}
	*/
};

int main(void) 
{
	Person man1("Lee dong woo", 29);
	Person man2("dong woo", 300);
	man2 = man1;  // man2.operator=(man1)   
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}
