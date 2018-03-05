#include <iostream>
#include <cstring>
using namespace std;

class Book {
private:
	char *title;
	char *isbn;
	int price;
public:
	Book(char *title, char *isbn, int value) : price(value) {
		this->title = new char[(int)strlen(title) + 1];
		this->isbn = new char[(int)strlen(isbn) + 1];
		strcpy_s(this->title, (int)strlen(title) + 1, title);
		strcpy_s(this->isbn, (int)strlen(isbn) + 1, isbn);
	}
	Book(const Book& ref) : price(ref.price) {
		title = new char[(int)strlen(ref.title) + 1];
		isbn = new char[(int)strlen(ref.isbn) + 1];
		strcpy_s(title, (int)strlen(ref.title) + 1, ref.title);
		strcpy_s(isbn, (int)strlen(ref.isbn) + 1, ref.isbn);
	}
	Book& operator=(const Book& ref) {
		title = new char[(int)strlen(ref.title) + 1];
		isbn = new char[(int)strlen(ref.isbn) + 1];
		strcpy_s(title, (int)strlen(ref.title) + 1, ref.title);
		strcpy_s(isbn, (int)strlen(ref.isbn) + 1, ref.isbn);
		price = ref.price;
		return *this;
	}
	void ShowBookInfo() {
		cout << "title : " << title << endl;
		cout << "SIBN  : " << isbn << endl;
		cout << "Price : " << price << endl;
	}
	~Book() {
		delete[]title;
		delete[]isbn;
	}
};

class EBook : public Book {
private:
	char *DRMKey;
public:
	EBook(char *title, char *isbn, int value, char *key) : Book(title, isbn, value) {
		DRMKey = new char[(int)strlen(key) + 1];
		strcpy_s(DRMKey, (int)strlen(key) + 1, key);
	}
	EBook(const EBook& ref) : Book(ref) {
		DRMKey = new char[(int)strlen(ref.DRMKey + 1)];
		strcpy_s(DRMKey, (int)strlen(ref.DRMKey) + 1, ref.DRMKey);
	}
	EBook operator=(const EBook&ref) {
		Book::operator=(ref);
		DRMKey = new char[(int)strlen(ref.DRMKey + 1)];
		strcpy_s(DRMKey, (int)strlen(ref.DRMKey) + 1, ref.DRMKey);
		return *this;
	}
	void ShowEBookInfo() {
		ShowBookInfo();
		cout << "DRMKey : " << DRMKey << endl;
	}
	~EBook() {
		if(DRMKey == NULL)
		delete[]DRMKey;
	}
};

int main() {
	EBook ebook1("Good C++ ebook", "55-12312-903-3", 59900, "fdsakj9fdsk");
	EBook ebook2 = ebook1;  //copy constructor
	ebook2.ShowEBookInfo();
	cout << endl;

	EBook ebook3("dumy", "dumy", 0, "dumy");
	ebook3.ShowEBookInfo();
	cout << endl;

	ebook3 = ebook2;
	ebook3.ShowEBookInfo();

	return 0;
}