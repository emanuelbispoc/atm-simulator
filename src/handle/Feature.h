class Feature
{
private:
	int balance = 0;
	int accontNumber = 0;
	const char* holder;



public:

	void transferTo();
	void depositTo();
	void withdraw();

	const char* getHolder() {
		return this->holder;
	}

	int getAccountNumber() {
		return this->accontNumber;
	}

	int getBalance() {
		return this->balance;
	}

	void setBalance(int val) {
		this->balance += val;
	}
};