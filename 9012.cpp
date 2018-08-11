#include <iostream>
#include <stack>
#include <string>


using namespace std;

bool checker() {

	int cnt{ 0 };
	string temp{ "" };
	stack<char> st;

	cin >> temp;
	if (temp.size() < 2 || temp.size() > 50) return false;

	int i = 0;
	while (i < temp.size()) {
		st.push(temp[i]);
		++i;
	}

	if (st.top() == '(') {
		return false;
	}

	while (1) {
		if (st.empty()) break;
		while(st.top() == ')') {
			++cnt;
			st.pop();
			if (st.empty()) break;
		}
		if (st.empty()) break;

		while (st.top() == '(') {
			--cnt;
			st.pop();
			if (st.empty()) break;
		}
		if (cnt < 0) return false;
		
	}
	if (cnt != 0) {
		return false;
	}

	return true;
}

int main() {
	
	int num{ 0 };
	cin >> num;

	int i = 0;
	while (i < num) {
		if (checker() == true) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
		++i;
	}


	return 0;
}