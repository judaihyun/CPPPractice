#include "myfunc.h"


/*  using FunciontTemplate

template <class T>
void swap(T *a, T *b) {
	T temp = *a;
	*a = *b;
	*b = temp;
}
*/

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap(char *a, char *b) {
	char temp = *a;
	*a = *b;
	*b = temp;
}

int main() {

	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	cout << num1 << ' ' << num2 << endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	cout << ch1 << ' ' << ch2 << endl;


	return 0;
}

