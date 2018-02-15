#include "myfunc.h"

class Sugar {
private:
	int input;
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
	int sum = 0;
	
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