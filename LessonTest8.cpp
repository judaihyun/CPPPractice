#include <iostream>
#include <string>

using namespace std;

void add(int &x, int &y, int add) {

	x += add;
	y += add;
}

int main() {


	int subject1, subject2, adding;

	cout << "2 ������ ������ �Է��ϼ�" << endl;
	cin >> subject1;
	cin >> subject2;

	cout << " + " << endl;
	cin >> adding;

	add(subject1, subject2, adding);


	cout << "subject 1 : " << subject1 << endl;
	cout << "subject 2 : " << subject2 << endl;


	return 0;
}