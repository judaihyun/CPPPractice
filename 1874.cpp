#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int main() {
	int num{ 0 };
	int input{ 0 };
	stack<int> stack;
	vector<char> print;
	cin >> num;


	int i = 0;
	int start = 0;
	stack.push(0);
	while (start < num) {

		cin >> input;
		while (stack.top() < input) {
			stack.push(++i);
			print.push_back('+');
		
		}
		if (stack.top() > input) {
			cout << "NO\n";
			return 0;
		}
	
		stack.pop();
		print.push_back('-');
		++start;
		
	}

	for (int i = 0; i < print.size(); ++i) {
		cout << print[i] << "\n";
	}
	
	return 0;
}