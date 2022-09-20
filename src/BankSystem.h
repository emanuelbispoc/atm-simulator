#pragma once

#include <iostream>
#include "BankAccount.h"

class BankAccount;

class BankSystem
{
public:

	BankAccount& selectData(std::string data); //should search only by code
	void updateData(std::string data);

};
