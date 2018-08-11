#include <iostream>

using namespace std;

int main() {

	int day{ 0 };
	int number{ 0 };
	int illegal{ 0 };

	cout << "day:";
	cin >> day;
	for (int i = 0; i < 5; ++i) {
		cout << "number:";
		cin >> number;
		if (number == day) ++illegal;
	}

	cout << "result : " << illegal << endl;
	



}