#pragma once

#include <iostream>
#include "BankAccount.h"

class BankAccount;

class BankSystem
{
private:
	std::string selectData(std::string data);
public:

	BankAccount& getAccount(std::string data); //should search only by code
	void updateData(std::string data);

};
