#include "myfunc.h"

class Sugar {
private:
	int input;
	int Kilo5 = 0;
	int Kilo3 = 0;
	int remain = 0;
	int sum = 0;
public:
	void setInput() {
		int num;
		cin >> num;
		if (num >= 3 && num <= 5000)
			input = num;
		else
			cout << "out of range" << endl;

	}
	void calc();
};

void Sugar::calc() {
	
	while (true) {

		if (input % 5 == 0) {
			sum = input / 5 + sum;
			break;
		}
		if (input < 0) {
			sum = -1;
		}

		input -= 3;
		sum++;
	}

	cout << sum << endl;

}



int main() {

	Sugar su;
	su.setInput();
	su.calc();



	return 0;
}