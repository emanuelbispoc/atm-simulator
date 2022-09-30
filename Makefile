
#ignores my simple ugly make file :-)

#testar:
#	g++ -o testando.exe ./test/selectData_test.cpp -lsqlite3

all:
	g++ -o teste.exe src/main.cpp src/ATM_System.cpp src/MenuNavigate.cpp src/BankSystem.cpp -lsqlite3