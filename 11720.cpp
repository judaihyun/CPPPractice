#include "myfunc.h"


int main() {

	int pre;
	char num[100];
	int sum = 0;

	cin >> pre >> num;


	for (int x = 0; x < pre; x++) {
		sum = sum + (num[x] - '0');
	}
	cout << "result : " << sum << endl;



	return 0;
}