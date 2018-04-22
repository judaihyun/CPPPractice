#include "StackA.h"
#include <stdio.h>


void Init(stackType* sptr) {
	sptr->top = 0;
}

bool IsEmpty(stackType* sptr) {
	printf("current top :  %d \n", sptr->top);
	return (sptr->top == 0);
}

void Push(stackType* sptr, int item) {
	sptr->stack[sptr->top] = item;
	//printf("item : %d \n", sptr->stack[sptr->top]);
	printf("push top :  %d \n", sptr->top);
	printf("stack[%d]:  %d \n", sptr->top, sptr->stack[sptr->top]);
	sptr->top++;
	printf("\n\n");
}

int Pop(stackType* sptr) {
	printf("top :  %d \n", sptr->top);
	printf("\n\n");
	return sptr->stack[--sptr->top];
}

void main() {

	stackType s;
	Init(&s);
	Push(&s, 10);
	printf("PoP : %d \n",Pop(&s));
	Push(&s, 20);
	Push(&s, 30);
	printf("PoP : %d \n",Pop(&s));
	printf("PoP : %d \n",Pop(&s));

	/*
	if (IsEmpty(&s)) {
		printf("true \n");
	}
	else {
		printf("false \n");
	}
	*/
}