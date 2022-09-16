#pragma once

#include <iostream>
#include "BankAccount.h"

class BankAccount;

class BankSystem
{
public:

	BankSystem();
	~BankSystem();

	BankAccount& updateData(std::string data);
	void selectData(std::string data); //should search only by code

};
