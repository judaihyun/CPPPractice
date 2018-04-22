#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;




int main() {
	vector<int> primes;
	primes.push_back(2);
	int input{ 0 };
	cin >> input;

	for (int i = 1; i <= input; i++) {

		bool flag = false;
		int num = 2;

		while (num < sqrt(i))
		{
			if (i % num == 0) {
				flag = false;
				break;
			}
			else {
				flag = true;
			}
		num++;
		}
			if (flag == true) {
				primes.push_back(i);
			}
	}

	for (int x = 0; x < primes.size(); x++ )
		cout << primes[x] << " ";

	return 0;
}

/*

void number8-9(){
constexpr int one{ 1000 };
constexpr int two{ 1000000};
constexpr int three{ 1000000000 };

int rect{ 1 };
double currentRice{ 1 };
double totalRice{ 0 };

for (rect; rect <= 1500; rect++) {
totalRice = currentRice;

cout << "Rect[" << rect << "]";
cout << "  : rice[ " << totalRice << " ]" << endl;

currentRice *= 2;
if (three < currentRice) {
cout << "finished" << endl;
break;
}
}

cout << "rect : " << rect - 1 << endl;
cout << "totalRice : " << totalRice << endl;
}

void numberSix() {
	vector<string> pronounce{ "zero","one","two","three","four","five","six","seven","eight","nine" };

	char *input;
	input = new char;

	int integer = NULL;
	int size{ 0 };
	string temp{ " " };

	while (true) {
		cin >> input;
		size = (int)strlen(input);
		if (size < 2) {
			integer = input[0] - 48;
			cout << pronounce[integer] << endl;
		}
		else {
			temp = input;
			for (int i = 0; i < pronounce.size(); i++) {
				if (temp == pronounce[i]) {
					cout << i << endl;
					break;
				}
			}

		}

	}

}

void numberFour() {
	int attempt{ 0 };
	int point{ 0 };
	char input{ ' ' };
	vector<int> numbers;
	vector<int> left;
	vector<int> right;

	for (int i = 1; i < 101; i++) {
		numbers.push_back(i);
	}

	sort(numbers.begin(), numbers.end());

	while (point != 1) {
		point = numbers.size() / 2;
		cout << "당신이 생각하는 숫자가 " << point << "보다 작은가요? " << endl;
		cin >> input;
		if (input == 'y') {
			for (int i = 0; i < point; i++)
				left.push_back(numbers[i]);
			numbers.swap(left);
			left.clear();
		}
		else {
			for (int i = point; i < numbers.size(); i++)
				right.push_back(numbers[i]);
			numbers.swap(right);
			right.clear();
		}


		++attempt;

	}

	cout << "attempted : " << attempt << endl;
}


*/
