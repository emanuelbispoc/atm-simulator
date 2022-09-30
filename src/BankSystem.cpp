#include "BankSystem.h"

/**
*	The bank system which manage all functionalities 
* 
* 

*/

AccHandlerTemp userAcc;

int callback(void* data, int argc, char** argv, char** azColName) {

	int i = 0;

	for (i; i < argc; i++)
	{
		std::cout << azColName[i] << " | " << argv[i] << std::endl;
	}

	userAcc.name = argv[2];

	return 0;
}

void BankSystem::selectData(std::string data)
{
	const char* sql;
	int rc;
	char* err;


	std::string command = "SELECT * FROM TB_ACC_BANK WHERE ACC_CODE=";
	std::string adapt = command + "'" + data + "'" + ";";


	sql = adapt.c_str();

	rc = sqlite3_exec(ATM_System::db, sql, callback, NULL, &err);

	if (rc != SQLITE_OK) {
		throw err;
	}
}

BankAccount& BankSystem::getAccount(std::string data)
{

	BankAccount* account = nullptr;

	BankSystem::selectData(data);
	
	try
	{
		account = new BankAccount();
		account->setHolder(userAcc.name);
	}
	catch (const std::exception&)
	{
		throw "ERROR ON SYSTEM!";
	}


	return *account;
}

void BankSystem::updateData(std::string data)
{

}