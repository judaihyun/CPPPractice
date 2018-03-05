#include <iostream>
#include <cstdlib>
using namespace std;

class BoundCheckIntArray {
private:
	int * arr;
	int arrlen;
public:
	BoundCheckIntArray(int len) : arrlen(len) {
		arr = new int[len];
	}
	int& operator[](int idx) {
		if (idx < 0 || idx >= arrlen) {
			cout << "Arry index out of bound Exception" << endl;
			exit(1);
		}
		return arr[idx];
	}

	~BoundCheckIntArray() {
		delete[]arr;
	}
};

int main() {
	BoundCheckIntArray arr(5);
	for (int i = 0; i < 5; i++) {
		arr[i] = (i + 1) * 11;  // arr[i] ==== arr.operator[ ](i)
	}
	for (int i = 0; i < 6; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}