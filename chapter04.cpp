#include <iostream>
#include <assert.h>
using namespace std;


/*
int Factorial_Recur(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return (n * Factorial_Recur(n - 1));
	}
}

int Factorial_For(int n) {
	int result = 1;
	for (int i = 1; i <= n; i++)
		result *= i;

	return result;
}

int Fibonacci(int n) {
	if (n < 2)
		return 1;
	else
		return (Fibonacci(n - 1) + Fibonacci(n - 2));
}

void WriteBackward(char s[], int size) {
	if (size > 1){
		WriteBackward(s, size - 1);
	}
		cout << s[size - 1];
}
void BinarySearch(int *arr, int x, int first, int last) {
	if (x <= 0) {
		return assert(x);
	}
	int middle = (first + last) / 2;
	cout << "Middle : " << middle << endl;

	if (arr[middle] == x) {
		cout << "arr[" << middle << "] : " << arr[middle] << endl;
		return;
	}
	if (x < arr[middle]) {  
		last = middle - 1;
		cout << "(left) first : " << first << ", last : " << last << endl;
		BinarySearch(arr, x, first, last);
	}
	else{
		first = middle + 1;
		cout << "(right) first : " << first << ", last : " << last << endl;
		BinarySearch(arr, x, first, last);
	}

}

void BinarySearch(int *arr, int target, int first, int last) {
	int middle = 0;
	while (true) {
		middle = (first + last) / 2;
		cout << "Middle : " << middle << endl;
		if (target == arr[middle]) {
			cout << "arr[" << middle << "] : " << arr[middle] << endl;
			break;
		}
		else if (target < arr[middle]) {
			last = middle - 1;
			cout << "(left) first : " << first << ", last : " << last << endl;
		}
		else {
			first = middle + 1;
			cout << "(right) first : " << first << ", last : " << last << endl;
		}
	}
}

int Greatest(int a, int b) {
	if (b > a) {
		int temp = a;
		a = b;
		b = temp;
	}
	int result = a % b;
	if (result == 0) {
		return b;
	}
	else {
		a = b;
		b = result;
		return Greatest(a, b);
	}

	
}
*/

int Hap(int i) {
	if (i == 0) {
		return 0;
	}
	else {
		int num;
		cin >> num;
		
		return Hap(num + Hap(i - 1));
	}
}

int main() {

	int n = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	cin >> n;

	Hap(10);


	//cout << Factorial_Recur(n);
	//cout << Factorial_For(n);
	//cout << Fibonacci(n);
	//WriteBackward(s, strlen(s));


	return 0;
}