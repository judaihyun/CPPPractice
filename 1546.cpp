#include <iostream>
using namespace std;

int main() {

	int n;
	float max;
	float result = 0;

	cin >> n;
	float *grade = new float[n];

	for (int i = 0; i < n; i++)
		cin >> grade[i];


	max = grade[0];
	for (int i = 1; i < n; i++) {
		if (max < grade[i]) {
			max = grade[i];
		}
	}

	for (int i = 0; i < n; i++) {
		grade[i] = (float)(grade[i] / max) * 100;
		result += grade[i];
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << result / n << endl;



	return 0;
}