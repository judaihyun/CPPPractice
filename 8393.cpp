#include <iostream>
using namespace std;

class Hap {
private:
	int num;
public:
	void getter(int n) {
		num = n;
	}
	int Calc() {
		int hap = 0;

		for (int i = 1; i <= num; i++) {
			hap += i;

		}

		return hap;
	}
};
int main() {

	Hap hap;
	int num;

	cin >> num;
	hap.getter(num);
	cout << hap.Calc();
	
	

	return 0;
}