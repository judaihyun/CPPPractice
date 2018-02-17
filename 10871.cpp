#include <iostream>
using namespace std;


int main() {

	int n;
	int x = 0;

	cin >> n >> x;

	int *a = new int[n];

	for (int i = 0; i < n; i++)
		cin >> a[i];


	for (int i = 0; i < n; i++)
		if (x > a[i]) {
			cout << a[i] << " ";
		}
	cout << endl;



	return 0;
}