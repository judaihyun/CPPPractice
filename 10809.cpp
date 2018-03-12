#include <iostream>
#include <cstring>
using namespace std;
/*
알파벳 소문자로만 이루어진 단어 S가 주어진다. 각각의 알파벳에 대해서,
단어에 포함되어 있는 경우에는 처음 등장하는 위치를,
포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.

baekjoon일때,

'b'가 abcdef~~xyz에서 1번째위치이므로 해당하는 곳에 baekjoon의 'b'위치를 삽입
-> abcdef에서 b의 자리에는 baekjoon의 첫번째인 1이 들어간다.

*/

int main() {


	int arr[26];
	
	for (int i = 0; i < 26; i++) {
		arr[i] = -1;
	}


	char input[101];
	cin >> input;
	int lensize = (int)strlen(input);
//	char *input = "baekjoon";

	int j = 0;
	int i = 0;
	while (j < lensize) {
		int alpha = 97;
		while (true) {
			if (alpha == (int)input[j]) {
				if (arr[alpha - 97] == -1) {
					arr[alpha - 97] = j;
				}

				i++;
				break;
			}
			alpha++;
		}
		j++;
	}

	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}