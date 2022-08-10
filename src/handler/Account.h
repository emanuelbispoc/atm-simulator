#pragma once

class Account
{
private:
	float balance = 0.0;
	int accontNumber = 0;
	const char* holder;



public:

	const char* getHolder() {
		return this->holder;
	}

	int getAccountNumber() {
		return this->accontNumber;
	}

	float getBalance() {
		return this->balance;
	}

	void setBalance(int val) {
		this->balance += val;
	}

	void setHolder(const char* holder) {
		this->holder = holder;
	}
};