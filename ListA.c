#pragma once
#include "ListA.h"
#include <stdio.h>
void Init(listType *Lptr) {
	Lptr->count = 0;
}

bool IsEmpty(listType *Lptr) {
	return (Lptr->count == 0);
}
void Insert(listType *Lptr, int position, int item) {
	if (Lptr->count == MAX)
		printf("List Full");
	else if ((position > (Lptr->count + 1)) || (position < 1))
		printf("Position out of range");
	else
		for (int i = (Lptr->count - 1); i >= (position - 1); i--)
			Lptr->Data[i + 1] = Lptr->Data[i];
	Lptr->Data[position - 1] = item;
	Lptr->count += 1;
	
}

void main() {
	listType List1;
	int result;
	Insert(&List1, 1, 23);
}