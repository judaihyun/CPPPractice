#include <iostream>

using namespace std;

int main() {
	int num = 12;
	int *ptr = &num;
	int **dptr = &ptr;


	int &ref = num; // declare reference.
	int *(&pref) = ptr; // ������ ������ ������ ����
	int **(&dpref) = dptr;

}