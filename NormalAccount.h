#pragma once
#ifndef __NORMAL_ACCOUNT_H__
#define __NORMAL_ACCOUNT_H__

#include "Account.h"

class NormalAccount : public Account {
private:
	int interRate;
public:
	NormalAccount(int ID, int bal, char * name, int rate) : Account(ID, bal, name), interRate(rate)
	{}

	virtual void Deposit(int money) {
		Account::Deposit(money);
		Account::Deposit(money * (int)(interRate / 100.0));
	}

};

#endif

