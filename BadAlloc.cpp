#include <iostream>
#include <new>
using namespace std;

void main() {


	int num = 0;

	try {
		while (true) {
			num++;
			cout << num << " attempt" << endl;
			new int[10000][10000];
		}
	}
	catch (bad_alloc &bad) {
		cout << bad.what() << endl;
	}
}