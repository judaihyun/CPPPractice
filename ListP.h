#pragma once
#define NULL 0

typedef enum { false, true } bool;

typedef struct nodeRecord {
	int data;
	struct nodeRecord* Next;
}node;
typedef node* Nptr;


typedef struct {
	int count;
	Nptr Head;
}listType;


void Insert(listType *Lptr, int pos, int item);
void Delete(listType *Lptr, int pos);
void Retrieve(listType *Lptr, int pos, int *item);

void Init(listType *Lptr);
bool IsEmpty(listType *Lptr);
int Length(listType *Lptr);