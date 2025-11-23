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
	Account(int number, double balance, Customer customer);
	~Account();
	void deposit(double amount);
	double withdraw(double amount);
	double getBalance();
	void setBalance(double amount);
};
