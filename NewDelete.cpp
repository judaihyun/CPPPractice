#include "myfunc.h"
#include <string.h>


char * MakeStrAdr(int len) {
	char * str = new char[len];
	return str;
}

int main() {
	char * str = MakeStrAdr(20);

	strcpy_s(str, 20, "test" );
	cout << str << endl;

	delete []str;

	return 0;
}