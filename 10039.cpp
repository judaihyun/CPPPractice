#include <iostream>
using namespace std;

double AvgGrades(int*);

int main() {

	int arr[5];
	int i = 0;
	while (i < 5) {
		cin >> arr[i];
		i++;
	}
	cout << AvgGrades(arr);

	return 0;
}


double AvgGrades(int *arr) {
	int i = 0;
	int sum = 0;
	while (i < 5) {
		if (arr[i] < 40)
			arr[i] = 40;

		sum += arr[i];
		i++;
	}

	return sum / 5;
}