#include <iostream>
using namespace std;

void main() {

	int num1, num2;
	cout << " 2���� ���� �Է�: " << endl;
	cin >> num1 >> num2;

	try {
		if (num2 == 0)
			throw num2;

		cout << " = : " << num1 / num2 << endl;
		cout << " % : " << num1 % num2 << endl;

	}
	catch(int expn){
		cout << "������ " << expn << "�� �� �� �����ϴ�." << endl;
	}

	
}