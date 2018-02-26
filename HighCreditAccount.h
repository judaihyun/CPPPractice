#pragma once
#ifndef __HIGHCREDIT_ACCOUNT_H__
#define __HIGHCREDIT_ACCOUNT_H__
#include "NormalAccount.h"

class HighCreditAccount : public NormalAccount {
private:
	int specialRate;
public:
	HighCreditAccount(int id, int balance, char * name, int rate, int special)
		: NormalAccount(id, balance, name, rate), specialRate(special)
	{ }

	virtual void Deposit(int balance) {
		NormalAccount::Deposit(balance);
		NormalAccount::Deposit(balance * (int)(specialRate / 100.0));
	}

};

#endif 

