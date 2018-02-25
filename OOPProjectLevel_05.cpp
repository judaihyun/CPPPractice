#include <iostream>
#include <string>
using namespace std;
const int NAME_LEN = 20;

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };





class Account {
private:
	int accID;
	int balance;
	char * cusName;
public:
	Account(int ID, int money, char *name);
	Account(const Account &ref);

	int GetAccID() const;
	void Deposit(int money);
	int Withdraw(int money);
	void ShowAccInfo() const;
	~Account();
};
	

	Account::Account(int ID, int money, char *name) : accID(ID), balance(money) {

		//	cout << "NAME(size): " << strlen(name) << endl;
		int len = (int)strlen(name) + 1;
		cusName = new char[len];
		strcpy_s(cusName, len, name);
	}
	Account::Account(const Account &ref) : accID(ref.accID), balance(ref.balance) {
		int len = (int)strlen(ref.cusName) + 1;
		cusName = new char[len];
		strcpy_s(cusName, len, ref.cusName);
	}

	void Account::Deposit(int money) {
		balance += money;
	}
	int Account::Withdraw(int money) {
		if (balance < money) {
			return 0;
		}

		balance -= money;
		return balance;
	}

	int Account::GetAccID() const { return accID; }

	void Account::ShowAccInfo() const {
		cout << "------------------------------" << endl;
		cout << "계좌ID: " << accID << endl;
		cout << "NAME: " << cusName << endl;
		cout << "Balance: " << balance << endl;
		cout << "------------------------------" << endl;
	}

	Account::~Account() {
		delete[]cusName;
	}
	

class AccountHandler {
private:
	Account * accArr[100];
	int accNum;
public:
	AccountHandler();
	void ShowMenu() const;
	void MakeAccount();
	void DepositMoney();
	int IdChecker(int);
	void WithdrawMoney();
	void ShowAllAccInfo() const;
	~AccountHandler();
};

	
	void AccountHandler::ShowMenu() const {
		cout << "-------Menu-------" << endl;
		cout << "1. Create Account " << endl;
		cout << "2. Deposit Money  " << endl;
		cout << "3. Withdraw Money " << endl;
		cout << "4. ShowAllAccInfo" << endl;
		cout << "5. Program Exit " << endl;
	}

	void AccountHandler::MakeAccount() {
		int accId;
		int bal;
		char name[NAME_LEN];
		cout << "[계좌계설]" << endl;
		cout << "계좌ID: "; cin >> accId;
		cout << "NAME: "; cin >> name;
		cout << "Balance: "; cin >> bal;

		accArr[accNum++] = new Account(accId, bal, name);
	}

	void AccountHandler::DepositMoney() {
		int accId, bal;
		int checkId;

		cout << "[입금]" << endl;
		cout << "계좌ID: "; cin >> accId;
		if ((checkId = IdChecker(accId)) == -1) {
			cout << "미 존재 계좌 ID " << endl;
			AccountHandler::DepositMoney();
		}

		cout << "입금액: "; cin >> bal;
		if (0 >= bal) {
			cout << "0원 이상만 입금됩니다." << endl;
			AccountHandler::DepositMoney();
		}

		accArr[checkId]->Deposit(bal);
		cout << "입금완료" << endl;
		}

	void AccountHandler::WithdrawMoney() {
		int money;
		int accId;
		int resultMoney;
		int checkId;

		cout << "[withdraw]" << endl;
		cout << "AccountID: "; cin >> accId;

		if ((checkId = IdChecker(accId)) == -1) {
			cout << "미 존재 계좌 ID " << endl;
			AccountHandler::WithdrawMoney();
		}

		cout << "출금액 : "; cin >> money;

		if ((resultMoney = accArr[checkId]->Withdraw(money)) == 0) {
			cout << "잔액부족" << endl;
			return;
		}

		cout << "출금완료" << endl;
		cout << "잔액 : " << resultMoney << endl;


	}

	int AccountHandler::IdChecker(int id) {
		int Id = 0;
		for (Id = 0; Id < accNum; Id++) {
			if (accArr[Id]->GetAccID() == id) {
				return Id;
			}
		}
		return -1;
	}

	AccountHandler::AccountHandler() : accNum(0) { }

	void AccountHandler::ShowAllAccInfo() const {
		for (int i = 0; i < accNum; i++) {
			accArr[i]->ShowAccInfo();
		}
	}

	AccountHandler::~AccountHandler() {
		for (int i = 0; i < accNum; i++) {
			delete accArr[i];
		}
	}





int main() {
	AccountHandler manager;

	while (true) {
		manager.ShowMenu();

		int select = 0;
		cout << "Select ? : ";
		cin >> select;
		cout << endl;

		switch (select)
		{
		case MAKE:
			manager.MakeAccount();
			break;
		case DEPOSIT:
			manager.DepositMoney();
			break;
		case WITHDRAW:
			manager.WithdrawMoney();
			break;
		case INQUIRE:
			manager.ShowAllAccInfo();
			break;
		case EXIT:
			return 0;
		default:
			cout << "Illegal selection. please input : 1~5" << endl;
		}

	}
	return 0;
}
