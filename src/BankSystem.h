#pragma once

#include <iostream>
#include "systemhandlers/acc_handler.h"
#include "BankAccount.h"
#include "ATM_System.h"

class BankAccount;

class BankSystem
{
public:
	void selectData(std::string data);
public:

	BankAccount& getAccount(std::string data); //should search only by code
	void updateData(std::string data);

};
