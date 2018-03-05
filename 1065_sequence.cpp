#include <iostream>
using namespace std;

/*
	어떤 양의 정수 X의 자리수가 등차수열을 이룬다면, 그 수를 한수라고 한다.
	등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다. N이 주어졌을 때, 
	1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오. 
	ex) 99 = 99개, 100=X, 101=X, 111=O, 112=X, 123=O, 137=O, 1000=X
*/

int sequence(int, int);

int main() {
	
	int num;
	int count = 0;
	int i = 0;
	cin >> num;
	
	while (i <= num) {
		if (i >= 100) {
			count = sequence(i, count);
		}
		else {
			count = i;
		}
		if (i == 1000)
			break;

		i++;
	}
	cout << count << endl;

	return 0;
}


int sequence(int i, int count) {
	int *arr;
	arr = new int[2];
	arr[0] = i / 100;
	arr[1] = i / 10 % 10;
	arr[2] = i % 10;
	if ((arr[0] - arr[1] == arr[1] - arr[2])) {
		count++;
		/*
		cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
		cout << "matched : " << count << endl;
		*/
	}
	return count;
}
