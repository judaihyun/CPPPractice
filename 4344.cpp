#include <iostream>
using namespace std;


float getLines();

int main() {

	cout.setf(ios::fixed);
	cout.precision(3);

	int cases;
	cin >> cases;

	float *result = new float[cases];


	for (int i = 0; i < cases; i++) {
		result[i] = getLines();
	}

	for (int i = 0; i < cases; i++) {
		cout << result[i] << "%" << endl;
	}


return 0;
}

float getLines() {
	int i;
	int sum = 0;
	int highStu = 0;
	float avarage = 0;
	cin >> i;

	int *line = new int[i];

	for (int a = 0; a < i; a++) {
		cin >> line[a];
		sum += line[a];
	}

	avarage = (float)sum / i;

	for (int a = 0; a < i; a++) {
		if (line[a] > avarage) {
			highStu++;
		}
	}
	avarage = (float)highStu / (float)i * 100;


	return avarage;
}
