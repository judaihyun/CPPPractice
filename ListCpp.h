#pragma once
//#define NULL 0
#include <iostream>

typedef struct nodeRecord {
	int data;
	struct nodeRecord* Next;
}node;
typedef node* Nptr;



class ListClass {
public:
	ListClass() : count(0), Head(NULL) {}
	ListClass(const ListClass& L);
	~ListClass();
	void Insert(int pos, int item);
	void Delete(int pos);
	void Retrieve(int pos, int *item);

	bool IsEmpty();
	int Length(); 
private:
	int count;
	Nptr Head;
};


