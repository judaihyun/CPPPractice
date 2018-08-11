#include <iostream>

using namespace std;

void merge_sort(int *array, int size){
	int *temp = new int[size];

	for (int i = 0; i < size; ++i) {
		if (array[i] > array[i + 1]) {
			int store = array[i];
			array[i] = array[i + 1];
			array[i + 1] = store;
		}
	}

}
void heap_sort(){}

int main() {
	int n = 0;
	/*
	cin >> n;

	int *array = new int[n];
	for (int i = 0; i < n; ++i)
		cin >> array[i];
		*/

	int array[5]{ 6,5,3,1,8 };
	merge_sort(array, 5);

	cout << "\nresult --------------\n";
	for (int i = 0; i < 5; ++i)
		cout << array[i] << endl;


	//delete[]array;

	return 0;
}