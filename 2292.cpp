#include <iostream>
using namespace std;

int main() {


	int num;
	cin >> num;
	
	int round = 1;
	int i = 1;
	while (true) {
		if (num <= round) {
			cout << i << endl;
			break;
		}
		round += 6 * i;
		i++;
	}

	return 0;
}