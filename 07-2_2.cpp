#include <iostream>
using namespace std;

class Book {
private:
	char *title;
	char *isbn;
	int price;
public:
	Book(char *t, char *i, int p) : price(p) {
		title = new char[(int)strlen(t) + 1];
		isbn = new char[(int)strlen(i) + 1];
		strcpy_s(title, (int)strlen(t) + 1, t);
		strcpy_s(isbn, (int)strlen(i) + 1, i);
	}
	void ShowBookInfo() {
		cout << "title : " << title << endl;
		cout << "SIBN  : " << isbn << endl;
		cout << "Price : " << price << endl;
	}
	~Book() {
		delete []title;
		delete []isbn;
	}
};

class EBook : public Book {
private:
	char *DRMKey;
public:
	EBook(char *title, char *isbn, int price, char *drm) : Book(title,isbn,price){
		DRMKey = new char[(int)strlen(drm) + 1];
		strcpy_s(DRMKey, (int)strlen(drm) + 1, drm);
	}
	void ShowEBookInfo() {
		Book::ShowBookInfo();
		cout << "DRMKey : " << DRMKey << endl;
	}
	~EBook() {
		delete[]DRMKey;
	}
};

int main() {
	Book book("good C++", "555-1234-342-9", 20000);
	book.ShowBookInfo();
	cout << endl;

	EBook Ebook("Good C++ ebook", "55-12312-903-3", 59900, "fdsakj9fdsk");
	Ebook.ShowEBookInfo();

	return 0;
}