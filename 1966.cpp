#include <iostream>
#include <string>
#define MAX 100000

using namespace std;


class Queue {
public:
	Queue() {
		rearIdx = -1;
		frontIdx = 0;
		count = 0;
	}
	void push(int);
	int pop();
	int size() { return count; }
	bool empty() { if (size() == 0) return true; return false; }
	int front() { if (empty()) return -1; return q[frontIdx]; }
	int back() { if (empty()) return -1; return q[rearIdx]; }
private:
	int q[MAX];
	int rearIdx{ -1 };
	int frontIdx{ 0 };
	int count{ 0 };
};

void Queue::push(int value) {
	if (count <= MAX) {
		++count;
		rearIdx = (rearIdx + 1) % MAX;
		q[rearIdx] = value;
	}
}

int Queue::pop() {
	int temp;
	if (empty()) return -1;
	temp = q[frontIdx];
	frontIdx = (frontIdx + 1) % MAX;
	--count;
	return temp;
}

void selectionSort(int *arr, int size) {

	int temp{ 0 };
	for (int last = size - 1; last >= 1; --last) {
		int large{ 0 };
		for (int j = 1; j <= last; j++) {
			if (arr[large] < arr[j]) {
				large = j;
			}
		}
		temp = arr[last];
		arr[last] = arr[large];
		arr[large] = temp;
	}

}


int main() {

	int cases{ 0 };
	int jobs{ 0 };
	int target{ 0 };
	int *prior;


	cin >> cases;

	for (int i = 0; i < cases; ++i) {

		cin >> jobs >> target;
		prior = new int[jobs];
		Queue q;
		Queue priQ;
		int count{ 0 };

		for (int j = 0; j < jobs; ++j) {
			cin >> prior[j];
		}


		selectionSort(prior, jobs);

		int t = 1;
		for (int i = 0; i < jobs; ++i) {
			q.push(i+1);
			priQ.push(t);
			if (prior[i] != prior[i + 1]) {
				if (i + 1 >= jobs) {
					break;
				}
				++t;
			}
		}

		/*
		cout << "priQ:";
		while (!priQ.empty())
			cout << priQ.pop() << " ";
		cout << endl;

		cout << "Queue:";
		while (!q.empty())
			cout << q.pop() << " ";
		cout << endl;
		*/



		int result = 0;
		int temp = 0;
		if (target == 0) {
			target = 1;
		}
		else if(target == 1){
			++target;
		}

		while (!priQ.empty()){
			temp = priQ.pop();
			result = q.pop();
			/*
			while (priQ.front() == temp) {
				result = q.pop();
				temp = priQ.pop();
			}
			*/
			if (priQ.front() > target) break;
			
		}


		cout << result << endl;

		delete[]prior;

	}

	//}

	return 0;
}