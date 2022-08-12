#include "BankSystem.h"
#include "BankAccount.h"

BankAccount acc;

static int callback(void* data, int argc, char** argv, char** azColName) {

	int i = 0;

	for (i; i < argc; i++)
	{
		std::cout << azColName[i] << " | " << argv[i] << std::endl;
	}

	return 0;
}

void BankSystem::selectData(std::string data)
{
	const char* sql;
	int rc;
	char* err;

	std::string command = "SELECT * FROM TB_ACC_BANK WHERE ACC_CODE=";
	std::string adapt = command + "'"+data+"'" + ";";


	sql = adapt.c_str();

	rc = sqlite3_exec(ATM_System::db, sql, callback, NULL, &err);

	if (rc != SQLITE_OK) {
		std::cout << err;
	}
}