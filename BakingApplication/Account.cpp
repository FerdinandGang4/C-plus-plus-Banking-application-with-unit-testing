#include"Account.h"
#include<iostream>

Account::Account(int number, double balance, Customer customer)
{
	this->accountNumber = number;
	this->balance = balance;
	this->customer = customer;
}

Account::~Account()
{
	std::cout << "The destructor is called " << std::endl;
}

void Account::deposit(double amount)
{
	if (amount > 0)
	{
		this->balance = amount;
	}
}

double Account::withdraw(double amount)
{
 if(amount > this->balance)
 {
	 return 0;
 }
 balance -= amount;
 return amount;
}

double Account::getBalance()
{
	return this->balance;
}