#include <iostream>
#include <string>
#define MAX 1

using namespace std;

class Queue {
public:
	void push(int value);
	int pop();
	bool empty() { if (count == 0) return true; else return false; };
	int size() {return count;};
	int front() {
		if (empty()) return -1;
		return q[front_]; 
	}
	int back() {
		if (empty()) return -1;
		return q[rear_];
	}

private:
	int q[MAX];
	int front_{ 0 };
	int rear_{ -1 };
	int count{ 0 };
};

void Queue::push(int value) {
	if (count <= MAX) {
		++count;
		rear_ = (rear_ + 1) % MAX;
		q[rear_] = value;
	//	cout << "MOD : " << rear_ << endl;
	}
	//cout << "front:" << front_ << ", rear:" << rear_ << endl;
}

int Queue::pop() {
	int temp;
	if (empty()) {
		return -1;
	}
	temp = q[front_];
	front_ = (front_ + 1) % MAX;
	--count;
	//cout << "front:" << front_ << ", rear:" << rear_ << endl;
	return temp;
}


int main() {

	int end{ 10000 };
	int num{ 0 };
	string cmd{ "" };
	int i = 0;
	Queue queue;

	cin >> end;
	
	while (i < end) {
		cin >> cmd;
		if (cmd == "push") {
			cin >> num;
			queue.push(num);
		}
		else if (cmd == "front") {
			cout << queue.front() << endl;
		}
		else if (cmd == "pop") {
			cout << queue.pop() << endl;
		}
		else if (cmd == "size") {
			cout << queue.size() << endl;
		}
		else if (cmd == "back") {
			cout << queue.back() << endl;
		}
		else if (cmd == "empty") {
			cout << queue.empty() << endl;
		}

		
		++i;
	}

	

	return 0;
}