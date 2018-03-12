#include <iostream>
#include <cstring>
#define SIZE 100

using namespace std;


int main() { 
	
	char input[SIZE];
	int inputsize;
	int i = 0;
	int result = 0;

	cin >> input;
	inputsize = (int)strlen(input);

	while (i < inputsize) {
		switch (input[i]) {
		case 'c':
			if (input[i + 1] == '=') {
				i++;
				result++;
				break;
			}
			else if (input[i + 1] == '-') {
				i++;
				result++;
				break;
			}
			result++;
			break;
		case 'd':
			if (input[i + 1] == 'z') {
				if (input[i + 2] == '=') {
					i += 2;
					result++;
					break;
				}
				result++;
				break;
			}
			else if (input[i + 1] == '-') {
				i++;
				result++;
				break;
			}
			result++;
			break;
		case 'l':
			if (input[i + 1] == 'j') {
				i++;
				result++;
				break;
			}
			result++;
			break;
		case 'n':
			if (input[i + 1] == 'j') {
				i++;
				result++;
				break;
			}
			result++;
			break;
		case 's':
			if (input[i + 1] == '=') {
				i++;
				result++;
				break;
			}
			result++;
			break;
		case 'z':
			if (input[i + 1] == '=') {
				i++;
				result++;
				break;
			}
			result++;
			break;
		default:
			result++;
			break;
		}

		i++;
	}
	
	cout << result << endl;


	return 0;
}