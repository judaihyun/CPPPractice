#include <iostream>
using namespace std;

void Divide(int num1, int num2) {
	if (num2 == 0)
		throw num2;

	cout << " = : " << num1 / num2 << endl;
	cout << " % : " << num1 % num2 << endl;

}

void main() {

	int num1, num2;
	cout << " 2���� ���� �Է�: " << endl;
	cin >> num1 >> num2;

	try {
		Divide(num1, num2);
		cout << "divided" << endl;


	}
	catch (int expn) {
		cout << "������ " << expn << "�� �� �� �����ϴ�." << endl;
	}


}