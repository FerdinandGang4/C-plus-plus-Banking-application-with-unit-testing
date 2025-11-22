#pragma once
#include"Customer.h"
#include<iostream>

class Account
{
private:
	int	accountNumber;
	double balance;
	Customer customer;

public:
	Account();
	~Account();
	void deposit();
	void withdraw();
	void getBalance();
};
