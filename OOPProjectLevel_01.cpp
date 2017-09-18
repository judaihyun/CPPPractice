#include <iostream>
#include <string>
//using std::cout;
using namespace std;

void ShowMenu();
void MakeAccount();
void DepositMoney();
int IdChecker(int);
void WithdrawMoney();
void ShowAllAccInfo();

struct Account {
	int accID;
	int balance; 
	char cusName[20];
};

Account accArr[100];
int accNum = 0;

int main() {
	while(true){
		ShowMenu();

		int select = 0;
		cout << "Select ? : ";
		cin >> select;
		cout << endl;

		switch (select)
		{
		case 1:
			MakeAccount();
			break;
		case 2:
			DepositMoney();
			break;
		case 4:
			ShowAllAccInfo();
			break;
		case 5:
			return 0;
		default:
			cout << "Illegal selection. please input : 1~5" << endl;
		}

	}
	return 0;
}

void WithdrawMoney() {

}

int IdChecker(int i) {
	int a;
	for (a = 0; a < 100; a++) {
		if (accArr[a].accID == i) {
			return a;
		}
	}
	return -1;
}

void DepositMoney() {

	int accId, bal;
	int checkId;

	cout << "[ÀÔ±Ý]" << endl;
	cout << "°èÁÂID: "; cin >> accId;

	if ( (checkId=IdChecker(accId)) == -1) {
		cout << "¹Ì Á¸Àç °èÁÂ ID " << endl;
	}

	cout << "ÀÔ±Ý¾×: "; cin >> bal; 
	accArr[checkId].balance += bal;
	cout << "ÀÔ±Ý¿Ï·á" << endl;

}

void ShowAllAccInfo() {
	for (int i = 0; i < 100; i++) {
		if (accArr[i].accID != 0) {
			cout << "------------------------------" << endl;
			cout << "°èÁÂID: " << accArr[i].accID << endl;
			cout << "NAME: " << accArr[i].cusName << endl;
			cout << "Balance: " << accArr[i].balance << endl;
			cout << "------------------------------" << endl;
		}
	}
}

void MakeAccount() {

	int accId, bal;
	char name[20];

	cout << "[°èÁÂ°è¼³]" << endl;
	cout << "°èÁÂID: "; cin >> accArr[accNum].accID;
	cout << "NAME: "; cin >> accArr[accNum].cusName;
	cout << "Balance: "; cin >> accArr[accNum].balance;

	accNum++;

}

void ShowMenu() {
	cout << "-------Menu-------" << endl;
	cout << "1. Create Account " << endl;
	cout << "2. Deposit Money  " << endl;
	cout << "3. Withdraw Money " << endl;
	cout << "4. ShowAllAccInfo" << endl;
	cout << "5. Program Exit " << endl;
}