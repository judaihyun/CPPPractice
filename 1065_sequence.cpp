#include <iostream>
using namespace std;

/*
	� ���� ���� X�� �ڸ����� ���������� �̷�ٸ�, �� ���� �Ѽ���� �Ѵ�.
	���������� ���ӵ� �� ���� ���� ���̰� ������ ������ ���Ѵ�. N�� �־����� ��, 
	1���� ũ�ų� ����, N���� �۰ų� ���� �Ѽ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
	ex) 99 = 99��, 100=X, 101=X, 111=O, 112=X, 123=O, 137=O, 1000=X
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
