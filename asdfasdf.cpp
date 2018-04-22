#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void func(int &i) {
	while (i < 100) {
		cout << i << '\n';
		++i;
	}
}

void main() {


	vector<string> files;
//	ifstream ifs[5000];
	int i = 0;
	func(i);
	/*
	while (i < 100) {
		ifs[i].open(files[i]);
		cout << i << "\n";
		++i;
	}
	*/
	
}