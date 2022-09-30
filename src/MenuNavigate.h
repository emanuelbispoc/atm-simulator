#pragma once

#include "BankAccount.h"
#include "BankSystem.h"
#include "systemhandlers/types_handler.h"

#include <iostream>


class MenuNavigate
{
private:

	std::string code;
	menuList currentMenu;

public:

	~MenuNavigate();

	void initialMenu();

	int getCurrenteMenu() { return this->currentMenu; };
	void setCurrentMenu(menuList m) { this->currentMenu = m; };
};