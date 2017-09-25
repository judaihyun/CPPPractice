#include <iostream>

using namespace std;

int main() {
	int num = 12;
	int *ptr = &num;
	int **dptr = &ptr;


	int &ref = num; // declare reference.
	int *(&pref) = ptr; // 포인터 변수의 참조자 선언
	int **(&dpref) = dptr;

}