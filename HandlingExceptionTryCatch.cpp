#include <iostream>
using namespace std;

void main() {

	int num1, num2;
	cout << " 2개의 숫자 입력: " << endl;
	cin >> num1 >> num2;

	try {
		if (num2 == 0)
			throw num2;

		cout << " = : " << num1 / num2 << endl;
		cout << " % : " << num1 % num2 << endl;

	}
	catch(int expn){
		cout << "제수는 " << expn << "이 될 수 없습니다." << endl;
	}

	
}