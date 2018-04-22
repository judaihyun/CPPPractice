#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};
struct Node *Head, *Prev, *Cur;

class List{
public:
	List() : count(0), Head() {}
	List(const List& L);
	~List();
	void Insert(int pos, int item);
	void Delete(int pos);
	void Retrieve(int pos, int *item);

	bool IsEmpty();
	int Length();
private:
	int count;
	Node Head;
};

void List::Insert(int pos, int item) {
	
}

int main() {
	List list1;
	

	return 0;
}
