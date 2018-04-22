#include "StackP.h"

void Init(Nptr Top) {
	Top = NULL;
}

bool IsEmpty(Nptr Top) {
	return (Top == NULL);
}

void Push(Nptr Top, int item) {
	Nptr temp = (Nptr)malloc(sizeof(node));
	temp->data = item;
	temp->Next = Top;
	Top = temp;
}

int Pop(Nptr Top) {
	if (Top == NULL) {
		printf("empty stack\n");
	}
	else {
		Nptr temp = Top;
		int item = temp->data;
		Top = Top->Next;
		free(temp);
		return item;
	}
	
}


void main() {


}