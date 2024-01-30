// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {


public:

	typedef Account		t; // defining a new type named t as an alias for Account class (shorthand / alternative name for Account type)

	static int	getNbAccounts( void ); // function to return total num of accounts
	static int	getTotalAmount( void ); // function to returns total amount across all accounts
	static int	getNbDeposits( void ); // function to returns total num of deposits made across all accounts
	static int	getNbWithdrawals( void ); // returns total num of withdrawals made across all accounts
	static void	displayAccountsInfos( void ); // displays global account statistics

	Account( int initial_deposit ); // paramitized constructor
	~Account( void ); // destructor

	void	makeDeposit( int deposit ); // func to deposits a specified amount into account
	bool	makeWithdrawal( int withdrawal ); // funct to withdraws a specified amount from account
	int		checkAmount( void ) const; // func that returns current amount in account
	void	displayStatus( void ) const; // func that displays current status of account


private:

	static int	_nbAccounts; // total num  of accounts
	static int	_totalAmount; // total amount across all accounts
	static int	_totalNbDeposits; // total num of deposits made across all accounts
	static int	_totalNbWithdrawals; // total num of withdrawals made across all

	static void	_displayTimestamp( void ); // function used internally for displaying timestamps

	int				_accountIndex; // index of the current account
	int				_amount; // current amount in the account
	int				_nbDeposits; // num of deposits made in account
	int				_nbWithdrawals; // num of withdrawals made from the account

	Account( void ); // constructor

};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */
