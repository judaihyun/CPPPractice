#include <iostream>
#include <cstring>
using namespace std;

bool GroupNumChk(char *eliminated_, int size_) {
	int i = 0;
	int j = 0;
	bool group = true;
	size_ = (int)strlen(eliminated_);
	while (i < size_) {
	//	cout << "i : " << i << endl;
		for (int j = i; j < size_ - 1; j++) {
	//		cout << "j : " << j << " ";
	//		cout << eliminated_[i] << " == " << eliminated_[j + 1] << endl;
			if (eliminated_[i] == eliminated_[j + 1]) {
				return false;
			}
		}

		i++;
	}
	return group;
}

void Eliminated(char * eliminated_, char *input_) {
	int loop = 0;
	int eliloop = 0;
	int size_ = (int)strlen(input_);
	eliminated_[0] = input_[0];
	while (!input_[loop] == NULL) {

		if (eliminated_[eliloop] != input_[loop + 1]) {
			eliminated_[eliloop + 1] = input_[loop + 1];
			eliloop++;
		}
		loop++;

	}
}

int main() {

	char *input;
	char *eliminated;


	int count = 0;
	int size = 0;
	int testcases;

	cin >> testcases;

	for (int i = 0; i < testcases; i++) {
		eliminated = new char[100];
		input = new char[100];
		cin >> input;
		Eliminated(eliminated, input);
		if (GroupNumChk(eliminated, size) == true) {
			count++;
		}
		delete eliminated;
		delete input;
	}

	cout << count << endl;

	return 0;
}