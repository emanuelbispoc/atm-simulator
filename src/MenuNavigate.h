#pragma once

#include "BankAccount.h"
#include "BankSystem.h"
#include "handler/systemHandler.h"

#include <iostream>


class MenuNavigate
{
private:

	std::string code;
	menuList currentMenu;

public:

	void initialMenu();

	int getCurrenteMenu() { return this->currentMenu; };
	void setCurrentMenu(menuList m) { this->currentMenu = m; };
};