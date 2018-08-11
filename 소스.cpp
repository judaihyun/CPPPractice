#include <iostream>
#include <vector>
#include <string>
using namespace std;


vector<string> arr;

void input() {
	int words{ 0 };
	cin >> words;
	
	int i = 0;
	while (i < words) {
		string temp;
		cin >> temp;
		arr.push_back(temp);
		++i;
	}


	for (int i = 0; i < arr.size(); ++i) {
		cout << arr[i] << endl;
	}

}


int main() {
	
	input();
	

	return 0;
}

