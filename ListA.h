#pragma once
#define MAX 100
typedef enum { false, true } bool;

typedef struct listRecord {
	int count;
	int Data[MAX];
}listType;

void Insert(listType *Lptr, int position, int item);
void Delete(listType *Lptr, int position);
void Retrieve(listType *Lptr, int position, int *itemptr);

void Init(listType *Lptr);
bool IsEmpty(listType *Lptr);
int Length(listType *Lptr);
