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
		for (int i = 0; i<month - 1; i++) { //해당 달 까지 더한다 idx=0부터 이므로 m-1까지
			day += 30;
			cout << "day : " << day << endl;
		}
		key = day % 7;  //다 더한 값을 일주일(7일)로 나누어준 나머지를 key에 저장

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
	cout << "입력 \n";
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