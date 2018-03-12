#include <iostream>
#include <cstring>
using namespace std;

class DepositException {
private:
	int reqDep_;
public:
	DepositException(int money) : reqDep_(money){}
	void ShowExceptionReason() {
		cout << "[Exception msg : " << reqDep_ << "´Â ÀÔ±ÝºÒ°¡" << endl;
	}
};

class WithdrawException
{
private:
	int balance_;
public:
	WithdrawException(int money) : balance_(money){}
	void ShowExceptionReason() {
		cout << "[Exception msg : ÀÜ¾× " << balance_ << ", ÀÜ¾×ºÎÁ·" << endl;
	}
};

class Account {
private:
	char accNum_[50];
	int balance_;
public:
	Account(char * acc, int money) : balance_(money) {
		int len = (int)strlen(acc) + 1;
		strcpy_s(accNum_, len, acc);
	}
	void Deposit(int money) throw (DepositException) {
		if (money < 0) {
			DepositException expn(money);
			throw expn;
		}
		balance_ += money;
	}
	void Withdraw(int money) throw (WithdrawException) {
		if (money > balance_) {
			throw WithdrawException(balance_);
			balance_ -= money;
		}
	}
	void ShowMyMoney() {
		cout << "ÀÜ°í : " << balance_ << endl << endl;
	}
};

void main() {
	Account myAcc("1234-234234", 5000);
	
	try {
		myAcc.Deposit(2000);
		myAcc.Deposit(-300);
	}
	catch (DepositException &expn) {
		expn.ShowExceptionReason();
	}
	myAcc.ShowMyMoney();
	
	try {
		myAcc.Withdraw(3500);
		myAcc.Withdraw(6500);
	}
	catch (WithdrawException &expn) {
		expn.ShowExceptionReason();
	}

	myAcc.ShowMyMoney();
}
