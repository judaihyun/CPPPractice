#include "StackL.h"
#include <iostream>

StackClass::StackClass(const StackClass &S) {
	L = S.L;
}
StackClass::~StackClass() {
	int temp;
	while (!IsEmpty())
		temp = Pop();
}

bool StackClass::IsEmpty() {
	return (L.IsEmpty());
}

void StackClass::Push(int item) {
	L.Insert(1, item);
}

int StackClass::Pop() {
	L.Delete(1);
}



int main() {


	return 0;
}
