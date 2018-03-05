#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int testcases;
	int a = 0;
	int b = 0;
	int forstart = 0;

	cin >> testcases;

	while (forstart < testcases) {
		cin >> a >> b;cout << a + b << "\n";
		forstart++;
	}


	return 0;
}