#include <iostream>
#include <assert.h>
using namespace std;


int My_strlen(char *target) {   // without null
	int size = '\0';

	for (int i = 0; target[i] != '\0'; i++)
		size++;
	
	return size;
}


char* My_strcpy_s(char *des, int size, const char *src) {

	for (int i = 0; i < size; i++) {
		des[i] = src[i];
	}
	return des;
}
long My_atoi(char *target) {
	int e = 0;
	int size = My_strlen(target);
	long result = 0;
	try {
		if (target == NULL) {
			throw 1;
		}
		else 
		for (int i = 0; i < size; i++) {
			result *= 10;
			result += (target[i] - '0');
		}
	}
	catch(int e){
		if (e == 1) {
			cout << "Null" << endl;
		}
		else if (e == 2) {
			cout << "0~9" << endl;
		}
	}

	return result;
	}

char* My_itoa(int value, char *str) {
	int digit = 10;
	int count = 0;
	int temp = value;
	int i = 0;

	while (temp != 0) {
		temp -= temp % digit;
		digit *= 10;
		count++;
	}

	temp = value;
	digit /= 100;

	while (i < count){
		str[i] = temp / digit + '0';
		temp -= (temp / digit) * digit;
		digit /= 10;
		i++;
	}
	str[i] = '\0';

	return str;
}

int main() {

	char input[5] = "test";
	int size = My_strlen(input);
	cout << "size " << size<< endl;
	cout << "strlen : " << strlen(input) << endl;

	/*
	char input[5] = "test";
	char number[5] = "4324";
	int size = My_strlen(input) + 1;

	cout << "strlen : " << strlen(input) << endl;
	cout << "my_strlen : " << size << endl;
	int num = My_atoi("4324");
	
	My_strcpy_s(output, size, input);


	for (int i = 0; output[i] != NULL; i++)
		cout << output[i];
	cout << endl;

	int num = 580912;
	char *out = new char;

	My_itoa(num, out);

	int size = My_strlen(out);
	for (int i = 0; i < size; i++) {
		cout << out[i];
	}
	cout << endl;

	*/


	return 0;
}