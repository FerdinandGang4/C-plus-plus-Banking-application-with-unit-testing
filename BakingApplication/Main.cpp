
#include<iostream>
#include"Account.h"

int main()
{
    std::cout << "Welcome to Engineer Dinga Banking Application\n";

    int respond;
    

    while (true)
    {
        std::cout << "\n===== MAIN MENU =====\n";
        std::cout << "Press 1. Create Account\n";
        std::cout << "Press 2. Deposit Money\n";
        std::cout << "Press 3. Check Balance\n";
        std::cout << "Press 4. Withdraw Money\n";
        std::cout << "Press 5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> respond;

        switch (respond)
        {
        case 1:
            std::cout << "Creating account...\n";
            // acc.createAccount();
            break;

        case 2:
            std::cout << "Depositing money...\n";
            // acc.deposit(amount);
            break;

        case 3:
            std::cout << "Checking balance...\n";
            // std::cout << "Balance: " << acc.getBalance() << '\n';
            break;

        case 4:
            std::cout << "Withdrawing money...\n";
            // acc.withdraw(amount);
            break;

        case 5:
            std::cout << "Thank you for using the app!\n";
            return 0;  // EXIT program

        default:
            std::cout << "Invalid choice, try again.\n";
        }
    }
    return 0;
}