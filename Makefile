
#ignores my simple ugly make file :-)

testar:
	g++ -o testando.exe ./test/selectData.test.cpp src/BankSystem.cpp -lsqlite3

all:
	g++ -o bank.exe src/main.cpp src/ATM_System.cpp src/BankAccount.cpp src/MenuNavigate.cpp src/BankSystem.cpp -lsqlite3