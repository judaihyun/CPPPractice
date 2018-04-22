
#include "StackAcpp.h"
#include <iostream>

StackClass::StackClass(const StackClass &S) {
	top = S.top;
	for (int i = 0; i <= S.top; ++i) {
		stack[i] = S.stack[i];
	}
}
StackClass::~StackClass() {
	int temp;
	while (!IsEmpty())
		temp = Pop();
}

bool StackClass::IsEmpty() {
	return (Top == NULL);
}

void StackClass::Push(int item) {
	Nptr NewTop = new node;
	NewTop->data = item;
	NewTop->next = Top;
	Top = NewTop;
}

int StackClass::Pop() {
	if (IsEmpty())
		std::cerr << "Deletion on Empty Stack";
	else {
		Nptr temp = Top;
		int item = temp->data;
		Top = Top->next;
		delete temp;
		return item;
	}
}



int main() {

	StackClass s;

	s.Push(10);
	s.Push(20);
	s.Push(30);
	std::cout << s.Pop() << std::endl;

	return 0;
}
