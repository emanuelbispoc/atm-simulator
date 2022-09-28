#ifndef TESTE
#define TESTE

#include <iostream>

#include "sqlite3.h"	
#include "../src/BankSystem.h"
	
BankSystem bank;

int main(int argc, const char* argv[]) {
	
	sqlite3* db;
	int rc;

	rc = sqlite3_open("./dbtest/datas_test.db", &db);
	if (rc) throw "ERROR ON SYSTEM:\n";

	bank.getAccount("3456");

	sqlite3_close(db);

	return 0;
}

#endif // !TESTE
