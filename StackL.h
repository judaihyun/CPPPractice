#pragma once
#include "ListCpp.h"

const int MAX = 100;

typedef struct stack {
	int data;
	stack* next;
}node;

typedef node* Nptr;

class StackClass {
public:
	StackClass() : Top(NULL), top(0) {};
	StackClass(const StackClass &S);
	~StackClass();
	void Push(int item);
	int Pop();
	bool IsEmpty();
	bool IsFull();
private:
	ListClass L;
	Nptr Top;
	int top;
	int stack[MAX];
};

