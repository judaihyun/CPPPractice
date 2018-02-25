#include <iostream>
using namespace std;

class MyFriendInfo {
private:
	char * name;
	int age;
public:
	MyFriendInfo(char *myname, int age) : age(age) {
		int len = (int)strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
	}
	void ShowMyFriendInfo() {
		cout << "name : " << name << endl;
		cout << "age : " << age << endl;
	}
};

class MyFriendDetailInfo : public MyFriendInfo {
private:
	char *addr;
	char *phone;
public:
	MyFriendDetailInfo(char *address, char *phoneNum, char *name, int age) : MyFriendInfo(name, age) {
		int addLen = (int)strlen(address) + 1;
		int phoLen = (int)strlen(phoneNum) + 1;
		addr = new char[addLen];
		phone = new char[phoLen];
		strcpy_s(addr, addLen, address);
		strcpy_s(phone, phoLen, phoneNum);
	}
	void ShowMyFriendDetailInfo() {
		ShowMyFriendInfo();
		cout << "address : " << addr << endl;
		cout << "phone : " << phone << endl << endl;
	}

};


void main() {
	MyFriendDetailInfo mf1("seoul","010-1234-1234", "ju", 10);
	mf1.ShowMyFriendDetailInfo();

}