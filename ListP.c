#include "ListP.h"
#include <stdio.h>
#include <stdlib.h>

void Init(listType *Lptr) {
	Lptr->count = 0;
	Lptr->Head = NULL;
}

bool IsEmpty(listType *Lptr) {
	return (Lptr->count == 0);
}

void Insert(listType *Lptr, int pos, int item) {
	if ((pos > (Lptr->count + 1)) || (pos < 1))
		printf("out of range");
	else {
		Nptr p = (node*)malloc(sizeof(node));
		p->data = item;
		if (pos == 1) {
			p->Next = Lptr->Head;
			Lptr->Head = p;
		}
		else {
			Nptr temp = Lptr->Head;
			for (int i = 1; i < (pos - 1); i++)
				temp = temp->Next;
			p->Next = temp->Next;
			temp->Next = p;
		}
		Lptr->count += 1;
	}
}

void Delete(listType *Lptr, int pos) {
	if (IsEmpty(Lptr)) {
		printf("empty");
	}
	else if (pos > (Lptr->count) || (pos < 1))
		printf("out of range");
	else {
		if (pos == 1) {
			Nptr p = Lptr->Head;
			Lptr->Head = Lptr->Head->Next;
			free(p);
		}
		else {
			Nptr temp = Lptr->Head;
			for (int i = 1; i < (pos - 1); i++)
				temp = temp->Next;
			Nptr p = temp->Next;
			temp->Next = p->Next;
			free(p);
		}
		Lptr->count -= 1;
	}

}

void Retrieve(listType* Lptr, int pos, int *item) {
	if (pos > (Lptr->count) || (pos < 1))
		printf("out of range");
	else {
		Nptr temp = Lptr->Head;
		for (int count = 1; count < pos; count++) {
			temp = temp->Next;
		}
		*item = temp->data;
	}
}


void main() {

	listType List1;
	Init(&List1);
	Nptr temp;
	Insert(&List1, 1, 30);
	/*
	Insert(&List1, 2, 40);
	Insert(&List1, 3, 50);
	Insert(&List1, 4, 60);
	*/


	Delete(&List1, 1);


	if (List1.count == 0) {
		printf("count = 0 \n");
		return 0;
	}
	temp = List1.Head;
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->Next;
	}
	printf("\n count : %d \n", List1.count);

	int item;
	//Retrieve(&List1, 1, &item);
	printf("\n found : %d \n", item);

}