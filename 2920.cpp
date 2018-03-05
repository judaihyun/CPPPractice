#include <iostream>
using namespace std;

int main() {

	int arr[8];
	int i = 0;
	bool asc = false;
	bool desc = false;
	bool mixed = false;

	while (i < 8) {
		cin >> arr[i];
		i++;
	}

	i = 0;
	
	while (i < 7) {
		if (arr[i] < arr[i + 1]) {
			if (desc == true) {
				desc = false;
				mixed = true;
				break;
			}
			asc = true;
		}
		else if(arr[i] > arr[i+1]){
			if (asc == true) {
				asc = false;
				mixed = true;
				break;
			}
			desc = true;
		}
		else {
			asc = false;
			desc = false;
			mixed = true;
			break;
		}

		i++;
	}

	if (asc == true) {
		cout << "ascending" << endl;
	}
	else if (desc == true) {
		cout << "descending" << endl;
	}
	else
		cout << "mixed" << endl;



	return 0;
}