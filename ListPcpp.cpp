#include "ListCpp.h"
using namespace std;

ListClass::ListClass(const ListClass& L) {
	count = L.count;
	if (L.Head == NULL)
		Head = NULL;
	else
	{
		Head = new node;
		Head->data = L.Head->data;
		Nptr Temp1 = Head;
		for (Nptr temp2 = L.Head->Next; temp2 != NULL; temp2 = temp2->Next) {
			Temp1->Next = new node;
			Temp1 = Temp1->Next;
			Temp1->data = temp2->data;
		}
		Temp1->Next = NULL;
	}
}
bool ListClass::IsEmpty() {
	return (count == 0);
}

void ListClass::Delete(int pos) {
	Nptr temp;
	if (IsEmpty()) {
		cerr << "empty\n";
	}
	else if (pos > count || pos < 1) {
		cerr << "out of range\n";
	}
	else {
		if (pos == 1) {
			Nptr p = Head;
			Head = Head->Next;
		}
		else {
			for (int i = 1; i < (pos - 1); i++)
				temp = temp->Next;
			Nptr p = temp->Next;
			temp->Next = p->Next;
			delete(p);
		}
		count -= 1;
	}
}

ListClass::~ListClass() {
	while (!IsEmpty())
		Delete(1);
}

void ListClass::Insert(int pos, int item) {
	if ((pos > (count + 1)) || (pos < 1))
		printf("out of range");
	else {
		Nptr p = (node*)malloc(sizeof(node));
		p->data = item;
		if (pos == 1) {
			p->Next = Head;
			Head = p;
		}
		else {
			Nptr temp = Head;
			for (int i = 1; i < (pos - 1); i++)
				temp = temp->Next;
			p->Next = temp->Next;
			temp->Next = p;
		}
		count += 1;
	}
}

void main() {

	ListClass list;
	list.Insert(1, 10);
	ListClass list2 = list;
	list2.Delete(1);
}
