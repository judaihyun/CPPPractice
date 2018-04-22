#include <iostream>
#include <algorithm>
#include <vector>
#include<sstream>
#include<vector>
using namespace std;


constexpr double in = 2.54; // 1inch -> cm
constexpr double ft = 12; //  1ft -> in
constexpr double m = 100; // 1m -> cm

int main() {

	char output = 'a';
	int out = output;

	while (out < 123) {
		cout << char(out) << " " << out << endl;
		++out;
	}


	/*
	double max{ 0 };
	double min{ 0 };
	int temp = 0;
	string unit{ " " };
	int count{ 0 };
	double maxNum{ 0 };
	vector<double> list;

	while (true)
	{
		cin >> temp >> unit;
		if (cin.fail() == 1) {
			break;
		}

		if (unit == "y" || unit == "yard" || unit == "km" || unit == "meter" || unit == "gallon") {
			unit = " ";
			cout << "invalid unit" << endl;
		}
		if (unit == "in") {
			temp *= in;
		}
		else if (unit == "ft") {
			temp *= ft * in;
		}
		else if (unit == "m") {
			temp *= m;
		}

		cout << "current input : " << temp << endl;
		if (max == 0 && min == 0) {
			max = temp;
			min = temp;
		}

		if (max < temp) {
			cout << "current max : " << temp << ", before max : " << max << endl;
			max = temp;
		}
		if (min > temp) {
			cout << "current input : " << temp << ", before min : " << min << endl;
			min = temp;
		}

		maxNum += temp / 100;
		list.push_back(temp / 100);

		++count;

	}

	cout << "max : " << max << endl;
	cout << "min : " << min << endl;
	cout << "sum : " << maxNum << " (M)" << endl;
	cout << "count : " << count << endl;

	sort(list.begin(), list.end());

	for (int x : list)
		cout << x << endl;

		*/

	return 0;
}