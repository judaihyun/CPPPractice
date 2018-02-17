#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS {
	enum { CLERK, SENIOR, ASSIST, MANAGER };

	void ShowPositionInfo(int pos) {
		switch (pos) {
		case CLERK:
			cout << "사원" << endl;
			break;
		case SENIOR:
			cout << "주임" << endl;
			break;
		case ASSIST:
			cout << "대리" << endl;
			break;
		case MANAGER:
			cout << "과장" << endl;
			break;
		}
	}

}

	class NameCard {
	private:
		char *name;
		char *company;
		char *phone;
		int position;
	public:
		NameCard(char *name, char *company, char *phone, int pos) : position(pos) {
			this->name = new char[(int)strlen(name) + 1];
			this->company = new char[(int)strlen(company) + 1];
			this->phone = new char[(int)strlen(phone) + 1];
			strcpy_s(this->name, (int)strlen(name) + 1, name);
			strcpy_s(this->company, (int)strlen(company) + 1, company);
			strcpy_s(this->phone, (int)strlen(phone) + 1, phone);
		}
		NameCard(const NameCard& copy) : position(copy.position) {
			name = new char[(int)strlen(copy.name) + 1];
			company = new char[(int)strlen(copy.company) + 1];
			phone = new char[(int)strlen(copy.phone) + 1];
			strcpy_s(name, (int)strlen(copy.name) + 1, copy.name);
			strcpy_s(company, (int)strlen(copy.company) + 1, copy.company);
			strcpy_s(phone, (int)strlen(copy.phone) + 1, copy.phone);

		}
		void ShowNameCardInfo() {
			cout << "name : " << name << endl;
			cout << "company : " << company << endl;
			cout << "phone : " << phone << endl;
			cout << "position : "; COMP_POS::ShowPositionInfo(position);
			cout << endl;
		}
		~NameCard() {
			delete []name;
			delete []phone;
			delete []company;
		}
	};


int main() {
	NameCard manClerk("Lee", "ABCEng", "010-1234-1234", COMP_POS::CLERK);
	NameCard copy1 = manClerk;
	NameCard manSENIOR("Hong", "OrangeEng", "123-1234-4443", COMP_POS::SENIOR);
	NameCard copy2 = manSENIOR;

	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();

	return 0;
}