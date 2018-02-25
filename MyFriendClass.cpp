#include <iostream>
#include <cstring>
using namespace std;

class Boy {
private:
	int height;
	friend class Girl;
public:
	Boy(int len) : height(len) {}
	void ShowYourFriendInfo(Girl &frn);
};

class Girl {
private:
	char phNum[20];
public:
	Girl(char *num) {
		int len = (int)strlen(num) + 1;
		strcpy_s(phNum, len, num);
	}
	void ShowYourFriendInfo(Boy &frn);
	friend class Boy;
};

void Boy::ShowYourFriendInfo(Girl &frn) {
	cout << "Her : " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy &frn)
{
	cout << "His : " << frn.height << endl;
}

int main() {
	Boy boy(70);
	Girl girl("010-1234-1234");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfo(boy);

	return 0;
}