#include <iostream>
#include <cstring>
using namespace std;


int main() {

	char *input;
	long size;
	int top;
	int index = 0;
	char most;
	int result[26] = { 0 };
	bool same = false;
	input = new char[1000001];

	cin >> input;
	size = (long)strlen(input);

	for (int i = 0; i < size; i++) {
		if (input[i] >= 65 && input[i] < 97) {
			result[input[i] - 65] += 1;
		}
		else
			result[input[i] - 97] += 1;
	}


	top = result[0];
	// i = 0으로, if문에 result[i+1]로 하면 틀림 : result의 +1이면 없는값을 비교하는 꼴
	for (int i = 1; i < 26; i++) {
		if (top < result[i]) {
			top = result[i];
			index = i;
			same = false;
		}
		else if (top == result[i]) {
			same = true;
		}
	}

	if (same == false) {
		most = index + 65;
		cout << most << endl;
	}
	else
		cout << "?" << endl;



	/*
	int i = 0;
	while (i < 26) {
		cout << result[i];
		i++;
	}
	*/

	return 0;
}