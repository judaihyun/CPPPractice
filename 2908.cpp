#include <iostream>
using namespace std;

void Reverse(char s[], int size) {
	if (size == 0)
		return;
	else
	{
		cout << s[size - 1];
		Reverse(s, size - 1);
	}
}

int main() {




	char num1[4];
	/*
	char num2[4];
	char temp1[4];
	char temp2[4];
	*/

	cin >> num1;// >> num2;
	Reverse(num1, strlen(num1));
	/*
	
	int j = 2;
	for (int i = 0; i < 3; i++) {
		temp1[i] = num1[j];
		temp2[i] = num2[j];
		j--;
	}
	temp1[3] = '\0';
	temp2[3] = '\0';


	if (atoi(temp1) > atoi(temp2)) {
		cout << temp1 << endl;
	}
	else if (atoi(temp1) < atoi(temp2)) {
		cout << temp2 << endl;
	}
	*/
	
}