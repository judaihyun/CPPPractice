
#include "Account.h"
#include "AccountHandler.h"
#include "BankingCommonDecl.h"
#include "NormalAccount.h"
#include "HighCreditAccount.h"



void AccountHandler::ShowMenu() const {
	cout << "-------Menu-------" << endl;
	cout << "1. Create Account " << endl;
	cout << "2. Deposit Money  " << endl;
	cout << "3. Withdraw Money " << endl;
	cout << "4. ShowAllAccInfo" << endl;
	cout << "5. Program Exit " << endl;
}

void AccountHandler::MakeAccount() {
	int sel;

	cout << "[������������]" << endl;
	cout << "1.���뿹�� 2.�ſ�ŷ�" << endl;
	cout << "select? : "; cin >> sel;
	if (sel == NORMAL)
		MakeNormalAccount();
	else
		MakeCreditAccount();
}

void AccountHandler::MakeNormalAccount() {
	int id;
	char name[NAME_LEN];
	int balance;
	int interRate;

	cout << "[���뿹�ݰ��� ����]" << endl;
	cout << "accID : "; cin >> id;
	cout << " name : "; cin >> name;
	cout << "money : "; cin >> balance;
	cout << " rate : "; cin >> interRate;
	cout << endl;

	accArr[accNum++] = new NormalAccount(id, balance, name, interRate);
}

void AccountHandler::MakeCreditAccount() {
	int id;
	char name[NAME_LEN];
	int balance;
	int interRate;
	int creditLevel;

	cout << "[�ſ�ŷڰ��� ����]" << endl;
	cout << "accID : "; cin >> id;
	cout << " name : "; cin >> name;
	cout << "money : "; cin >> balance;
	cout << " rate : "; cin >> interRate;
	cout << "level : "; cin >> creditLevel;
	cout << endl;

	switch (creditLevel) {
	case 1:
		accArr[accNum++] = new HighCreditAccount(id, balance, name, interRate, LEVEL_A);
		break;
	case 2:
		accArr[accNum++] = new HighCreditAccount(id, balance, name, interRate, LEVEL_B);
		break;
	case 3:
		accArr[accNum++] = new HighCreditAccount(id, balance, name, interRate, LEVEL_C);
		break;
	}
}

void AccountHandler::DepositMoney() {
	int accId, bal;
	int checkId;

	cout << "[�Ա�]" << endl;
	cout << "����ID: "; cin >> accId;
	if ((checkId = IdChecker(accId)) == -1) {
		cout << "�� ���� ���� ID " << endl;
		AccountHandler::DepositMoney();
	}

	cout << "�Աݾ�: "; cin >> bal;
	if (0 >= bal) {
		cout << "0�� �̻� �Աݵ˴ϴ�." << endl;
		AccountHandler::DepositMoney();
	}

	accArr[checkId]->Deposit(bal);
	cout << "�ԱݿϷ�" << endl;
}

void AccountHandler::WithdrawMoney() {
	int money;
	int accId;
	int resultMoney;
	int checkId;

	cout << "[withdraw]" << endl;
	cout << "AccountID: "; cin >> accId;

	if ((checkId = IdChecker(accId)) == -1) {
		cout << "�� ���� ���� ID " << endl;
		AccountHandler::WithdrawMoney();
	}

	cout << "��ݾ� : "; cin >> money;

	if ((resultMoney = accArr[checkId]->Withdraw(money)) == 0) {
		cout << "�ܾ׺���" << endl;
		return;
	}

	cout << "��ݿϷ�" << endl;
	cout << "�ܾ� : " << resultMoney << endl;


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

