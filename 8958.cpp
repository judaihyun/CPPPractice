#include <iostream>
using namespace std;
int Ox(char *arr) {
	int grade = 0;
	int check = 0;
	for (int i = 0; arr[i] != NULL; i++) {
		if (arr[i] == 'O') {
			check++;
		}
		else {
			check = 0;
		}
		grade += check;
	}
	return grade;
}

int main() {
	int cases = 0;
	char *arr = new char[81];
	int i = 0;


	cin >> cases;
	int *result = new int[cases];

	while (i < cases) {
		cin >> arr;
		result[i] = Ox(arr);
		i++;
	}
	i = 0;


	while (i < cases) {
		cout << result[i] << endl;
		i++;
	}


	return 0;
}