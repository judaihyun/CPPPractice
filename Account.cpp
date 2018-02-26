
#include "Account.h"
#include "BankingCommonDecl.h"

Account::Account(int ID, int money, char *name) : accID(ID), balance(money) {

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
	cout << "°èÁÂID: " << accID << endl;
	cout << "NAME: " << cusName << endl;
	cout << "Balance: " << balance << endl;
	cout << "------------------------------" << endl;
}

Account::~Account() {
	delete[]cusName;
}