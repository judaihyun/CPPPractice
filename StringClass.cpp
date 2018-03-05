#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
	int len;
	char *str;
public:
	String() {
		len = 0;
		str = NULL;
	}
	String(const char *s) {
		len = (int)strlen(s) + 1;
		str = new char[len];
		strcpy_s(str, len, s);
	}
	String(const String &s) {
		len = s.len;
		str = new char[len];
		strcpy_s(str, len, s.str);
	}
	String operator+(const String &s) {
		char* tempstr = new char[len + s.len - 1];
		strcpy_s(tempstr, (len + s.len - 1), str);
		strcat_s(tempstr, (len + s.len - 1), s.str);
		String temp(tempstr);
		delete[]tempstr;
		return temp;
	}
	String& operator+=(const String &s) {
		len += (s.len - 1);
		char* tempstr = new char[len];
		strcpy_s(tempstr, len, str);
		strcat_s(tempstr, len, s.str);

		if (str != NULL)
			delete[]str;
		str = tempstr;
		return *this;
	}
	String operator=(const String &s) {
		if (str != NULL)
			delete[]str;
		len = s.len;
		str = new char[len];
		strcpy_s(str, len, s.str);
		return *this;
	}
	bool operator==(const String &s) {
		return strcmp(str, s.str) ? false : true;
	}
	friend ostream& operator<< (ostream& os, const String& s);
	friend istream& operator>> (istream& is, String& s);
	
	~String() {
		delete[] str;
	}
};

ostream& operator<< (ostream& os, const String& s) {
	os << s.str;
	return os;
}
istream& operator>> (istream& is, String& s) {
	char str[100];
	is >> str;
	s = String(str); // operator=(str)
	return is;
}

int main() {
	String str1 = "I Like ";
	String str2 = "string class";
	String str3 = str1 + str2; //str1.operator+(str2);

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	str1 += str2;  // str1.operator+=(str2);
	
	if (str1 == str3)  // bool str1.operator==(str3)
		cout << "동일 문자열!" << endl;
	else
		cout << "동일하지 않은 문자열!" << endl;
	

	String str4;
	cout << "문자열 입력 : ";
	cin >> str4;

	cout << "입력한 문자열 : " << str4 << endl;


}