
#define MAX_STACK 100000

template <typename T>
class Vector_ {
public:
	T& operator[] (int idx);
	void push(T arg);
	T pop();
	int size() { return Top; };
	T top();
	bool empty();
private:
	T stack[MAX_STACK];
	int Top{ 0 };
}; 

template <typename T>
T& Vector_<T>::operator[](int idx) {
	return stack[idx];
}

template <typename T>
void Vector_<T>::push(T arg) {
	//if (top() > MAX_STACK) cerr << "out of range";
	stack[Top] = arg;
	++Top;
}

template <typename T>
T Vector_<T>::pop() {
	if (size() > 0) {
		--Top;
		return stack[Top];
	}
	return -1;
}
template <typename T>
T Vector_<T>::top() {
	if (!empty()) {
		return stack[Top - 1];
	}
	return -1;
}

template <typename T>
bool Vector_<T>::empty() {
	if (size() > 0) {
		return false;
	}
	return true;
}
