#include <iostream>

using namespace std;




void insert_sort(int *arr, int size) {
	for (int i = 1; i < size; ++i) {
		//cout << "[" << i << "] \n";
		int current = arr[i];
		for (; current < arr[i-1]; --i) {
			int temp = arr[i-1];
			arr[i-1] = current;
			arr[i] = temp;
		
		}
	}
}

//   22 37 15 19 12

void bubble_sort(int *arr, int s) {
	int size = s - 1;

	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			if (arr[j] > arr[j + 1]) {
			//	cout << "change if : " << arr[j] << " > " << arr[j + 1] << "\n";
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		/*
		for (int i = 0; i < 5; ++i)
			cout << arr[i] << " ";
		cout << endl;
		*/
	}
}

int main() {
	int n = 0;
	cin >> n;

	int *array = new int[n];
	for (int i = 0; i < n; ++i)
		cin >> array[i];

	//insert_sort(array, n);
	bubble_sort(array, n);

//	cout << "\nresult --------------\n";
	for (int i = 0; i < n; ++i)
		cout << array[i] << endl;


	delete []array;

	return 0;
}