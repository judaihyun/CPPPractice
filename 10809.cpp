#include <iostream>
#include <cstring>
using namespace std;
/*
���ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����. ������ ���ĺ��� ���ؼ�,
�ܾ ���ԵǾ� �ִ� ��쿡�� ó�� �����ϴ� ��ġ��,
���ԵǾ� ���� ���� ��쿡�� -1�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

baekjoon�϶�,

'b'�� abcdef~~xyz���� 1��°��ġ�̹Ƿ� �ش��ϴ� ���� baekjoon�� 'b'��ġ�� ����
-> abcdef���� b�� �ڸ����� baekjoon�� ù��°�� 1�� ����.

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