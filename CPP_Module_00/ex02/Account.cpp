/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 06:12:24 by ookamonu          #+#    #+#             */
/*   Updated: 2024/01/31 12:09:52 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime> // to work with time

std::string getTimeStamp()  // simulate timestamp
{
    char timestamp[20];
    std::time_t t = std::time(NULL); // gets current time in seconds since the epoch (January 1, 1970)
    std::strftime(timestamp, sizeof(timestamp), "%Y%m%d_%H%M%S", std::localtime(&t)); // format time as "YYYYMMDD_HHMMSS" & store it in 'timestamp' array ("%Y-%m-%d %H:%M:%S")
    return timestamp; // returns string representing current timestamp
}

// initialize static member variables to keep track of global account statistics
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp()  // displays timestamp. Static member function to display timestamp using helper function getTimeStamp.
{
    std::cout << "[" << getTimeStamp() << "] ";
}

// constructor for the Account class. Increments total num of accounts, updates the total amount and
// account-specific amount based on the initial deposit & Displays a creation message with timestamp
Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)  // destructor. Displays a closure message with timestamp
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

// static member function to display global account statistics. Displays total num of accounts,
// total amount, total deposits, and total withdrawals with a timestamp
void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

// member function to make a deposit into account. Updates the account amount, total amount, number of deposits,
// and total number of deposits. Displays a deposit message with timestamp
void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

// member function to make a withdrawal. Checks if the account has sufficient funds, updates the account amount, total
// amount, number of withdrawals, and total number of withdrawals. Displays a withdrawal message with timestamp
bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
    if (_amount >= withdrawal) {
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return true;
    } else {
        std::cout << "refused" << std::endl;
        return false;
    }
}

int Account::checkAmount(void) const  // member function to check the account balance
{  
    return _amount; // returns the current account balance
}

void Account::displayStatus(void) const  // member function to display the account status
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
    // Displays the account index, amount, number of deposits, number of withdrawals with timestamp
}
