#include <iostream>
#include <vector>

using namespace std;


void main() {

	vector< vector <char> > arr({
vector<char> {'3','4','1','4','9'},
vector<char> {'2','9','4','5','8'},
vector<char> {'9','0','8','2','1'},
vector<char> {'7','0','2','8','4'},
vector<char> {'2','7','2','1','4'},
	});


	for (int i = 0; i < arr.size(); ++i) {
		for (int j = 0; j < arr[0].size(); ++j) {
			if (arr[i][j] == '*') break;
			if (i > 0 && i < arr.size() - 1 && j < arr[0].size() - 1 && j > 0) {
				if (arr[i][j] < arr[i + 1][j] || arr[i][j] < arr[i][j + 1] 
					|| arr[i][j] < arr[i-1][j] || arr[i][j] < arr[i][j-1]) arr[i][j] = '*';
			}
		}
	}



	for (vector<char> t : arr) {
		for (char n : t) {
			cout << n << " ";
		}
		cout << endl;
	}



}