#pragma once
#define NULL 0
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
	Nptr Top;
	int top;
	int stack[MAX];
};
