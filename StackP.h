#pragma once
#include <stdio.h>
typedef enum { true,false } bool;

typedef struct Stack {
	int data;
	struct Stack* Next;
}node;

typedef node* Nptr;

void Push(Nptr Top, int item);
int Pop(Nptr Top);
void Init(Nptr Top);
bool IsEmpty(Nptr Top);
void FreeList(Nptr Top);