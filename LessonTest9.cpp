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

	int scores[5];// 요소수는 5, 접근 시 첫 배열은 첨자 0부 터 시작함.
	int maxScore;
	cout << "input " << endl;
	
	for (int i = 0; i < 5; i++) {
		cin >> scores[i];
	}

	maxScore = max(scores);

	cout << "최고 점수는 : " << maxScore << endl;
	

	return 0;
}