#include "myfunc.h"

enum Week{ SUN, MON, TUE, WED, THU, FRI, SAT };


class Calendar
{
private:
	int day, month;
public:
	Calendar();
	void Show();
	void Init();
	void ShowDays();
};

Calendar::Calendar(){
	day = 0;
	month = 0;
}
void Calendar::ShowDays() {

	int key;
		for (int i = 0; i<month - 1; i++) { //�ش� �� ���� ���Ѵ� idx=0���� �̹Ƿ� m-1����
			day += 30;
			cout << "day : " << day << endl;
		}
		key = day % 7;  //�� ���� ���� ������(7��)�� �������� �������� key�� ����

		cout << key << endl;

}

void Calendar::Show() {

//	Week w;


	switch (month) {
	case 1:
		break;
	}

	cout << "day : " << day << ", month : " << month << endl;
}

void Calendar::Init() {

	int x, y;
	cout << "�Է� \n";
	cin >> x >> y;

	if (1 <= x && x <= 12)
		month = x;
	else
		cout << "out of range\n";
	
	if (1 <= y && y <= 31)
		day = y;
	else
		cout << "out of range\n";

	ShowDays();
}


int main()
{
	Calendar calendar;

	calendar.Init();




	return 0;
}