#pragma once
#define MAX 100
typedef enum { false, true } bool;
typedef struct StackRecord {
	int top;
	int stack[MAX];
}stackType;

void Push(stackType* sptr, int item);
int Pop(stackType* sptr);
void Init(stackType* sptr);
bool IsEmpty(stackType* sptr);
bool IsFull(stackType* sptr);


