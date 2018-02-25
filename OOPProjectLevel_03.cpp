#include <iostream>
#include <string>
//using std::cout;
using namespace std;
const int NAME_LEN = 20;

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

void ShowMenu();
void MakeAccount();
void DepositMoney();
int IdChecker(int);
void WithdrawMoney();
void ShowAllAccInfo();


class Account {
private:
	int accID;
	int balance;
	char * cusName;
public:
	Account(int ID, int money, char *name) : accID(ID), balance(money) {

	//	cout << "NAME(size): " << strlen(name) << endl;
		int len = (int)strlen(name) + 1;
		cusName = new char[len];
		strcpy_s(cusName, len, name);
	}
	Account(const Account &ref) : accID(ref.accID), balance(ref.balance) {
		int len = (int)strlen(ref.cusName) + 1;
		cusName = new char[len];
		strcpy_s(cusName, len, ref.cusName);
	}

	void Deposit(int money) {
		balance += money;
	}

	int WithDraw(int money) {
		if (balance < money) {
			return 0;
		}

		balance -= money;
		return balance;
	}

	int getAccID() { return accID; }

	void ShowAccInfo() {
		cout << "------------------------------" << endl;
		cout << "����ID: " << accID << endl;
		cout << "NAME: " << cusName << endl;
		cout << "Balance: " << balance << endl;
		cout << "------------------------------" << endl;
	}

	~Account() {
		delete[]cusName;
	}
};





Account *accArr[100];
int accNum = 0;

int main() {

	while (true) {
		ShowMenu();

		int select = 0;
		cout << "Select ? : ";
		cin >> select;
		cout << endl;

		switch (select)
		{
		case MAKE:
			MakeAccount();
			break;
		case DEPOSIT:
			DepositMoney();
			break;
		case WITHDRAW:
			WithdrawMoney();
			break;
		case INQUIRE:
			ShowAllAccInfo();
			break;
		case EXIT:
			return 0;
		default:
			cout << "Illegal selection. please input : 1~5" << endl;
		}

	}
	return 0;
}



void WithdrawMoney() {
	int money;
	int id;
	int resultMoney;

	cout << "[withdraw]" << endl;
	cout << "AccountID: "; cin >> id;
	cout << "��ݾ� : "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->getAccID() == id) {
			if ((resultMoney = accArr[i]->WithDraw(money)) == 0) {
				cout << "�ܾ׺���" << endl;
				return;
			}

			cout << "��ݿϷ�" << endl;
			cout << "�ܾ� : " << resultMoney << endl;
			return;
		}
		cout << "Not Vailed Id" << endl;

	}

}

void MakeAccount() {
	int accId;
	int bal;
	char name[NAME_LEN];
	cout << "[���°輳]" << endl;
	cout << "����ID: "; cin >> accId;
	cout << "NAME: "; cin >> name;
	cout << "Balance: "; cin >> bal;

	accArr[accNum++] = new Account(accId, bal, name);

}

void DepositMoney() {

	int accId, bal;
	int checkId;

	cout << "[�Ա�]" << endl;
	cout << "����ID: "; cin >> accId;

	if ((checkId = IdChecker(accId)) == -1) {
		cout << "�� ���� ���� ID " << endl;
		DepositMoney();
	}

	cout << "�Աݾ�: "; cin >> bal;
	if (0 >= bal) {
		cout << "0�� �̻� �Աݵ˴ϴ�." << endl;
		DepositMoney();
	}

	accArr[checkId]->Deposit(bal);
	cout << "�ԱݿϷ�" << endl;

}


int IdChecker(int i) {

	int Id = 0;
	for (Id = 0; Id < accNum; Id++) {
		if (accArr[Id]->getAccID() == i) {
			return Id;
		}
	}
	return -1;
}


void ShowAllAccInfo() {
	for (int i = 0; i < accNum; i++) {
		accArr[i]->ShowAccInfo();
	}
}


void ShowMenu() {
	cout << "-------Menu-------" << endl;
	cout << "1. Create Account " << endl;
	cout << "2. Deposit Money  " << endl;
	cout << "3. Withdraw Money " << endl;
	cout << "4. ShowAllAccInfo" << endl;
	cout << "5. Program Exit " << endl;
}