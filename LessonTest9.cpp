#include <iostream>

using namespace std;

int max(int x[]) {
	int maxScore = x[0];

	for (int i = 1; i < 5; i++) {
		if (maxScore < x[i]) {
			maxScore = x[i];
		}
	}

	return maxScore;
}

int main() {

	int scores[5];// ��Ҽ��� 5, ���� �� ù �迭�� ÷�� 0�� �� ������.
	int maxScore;
	cout << "input " << endl;
	
	for (int i = 0; i < 5; i++) {
		cin >> scores[i];
	}

	maxScore = max(scores);

	cout << "�ְ� ������ : " << maxScore << endl;
	

	return 0;
}