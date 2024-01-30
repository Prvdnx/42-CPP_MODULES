// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"


int		main( void ) {

	typedef std::vector<Account::t>							  accounts_t; // vector of Account objects
	typedef std::vector<int>								  ints_t; // vector of integers
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t; // pair of iterators for accounts_t and ints_t

	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 }; // initializes array representing initial deposit amounts for accounts
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) ); // calculates the number of elements in the amount array
	accounts_t				accounts( amounts, amounts + amounts_size ); // vector to contain Account objects initialized with initial deposit amounts
	accounts_t::iterator	acc_begin	= accounts.begin(); // accounts.begin() returns iterator pointing to first element of accounts vector, it's assigned to acc_begin, representing starting position for iterating over accounts vector
	accounts_t::iterator	acc_end		= accounts.end(); // accounts.end() returns iterator pointing one past the last element of accounts vector, it's assigned to acc_end, representing the ending position for iterating over the accounts vector.

	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 }; // initializes array representing deposit amounts to be made into accounts
	size_t const		d_size( sizeof(d) / sizeof(int) ); // calculates the number of elements in the d array
	ints_t				deposits( d, d + d_size ); // vector to contain deposit amounts
	ints_t::iterator	dep_begin	= deposits.begin(); // deposits.begin() returns iterator pointing to first element of deposits vector, it;s assigned to dep_begin, representing starting position for iterating over deposits vector.
	ints_t::iterator	dep_end		= deposits.end(); // deposits.end() returns iterator pointing one past the last element of deposits vector, it's assigned to dep_end, representing ending position for iterating over deposits vector.

	int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 }; // initializes array representing withdrawal amounts to be made from accounts
	size_t const		w_size( sizeof(w) / sizeof(int) ); // calculates the number of elements in the w array
	ints_t				withdrawals( w, w + w_size ); // vector to contains withdrawal amounts
	ints_t::iterator	wit_begin	= withdrawals.begin(); // withdrawals.begin() returns iterator pointing to first element of withdrawals vector, it's assigned to wit_begin, representing starting position for iterating over withdrawals vector.
	ints_t::iterator	wit_end		= withdrawals.end(); // withdrawals.end() returns iterator pointing to one past the last element of withdrawals vector, it's assigned to wit_end, representing ending position for iterating over withdrawals vector.

/* calls Account::displayAccountsInfos to display global account statistics. Uses std::for_each & std::mem_fun_ref to call Account::displayStatus for each account.
 - std::mem_fun_ref is a func template in C++, part of C++ Standard Library. Used to create unary func object that can be used to invoke a member func on an object by reference
 - std::for_each is a C++ Standard Library <algorithm> that operates on elements of a range & applies a specified operation to each element in that range
   Uses loop with iterators to make deposits into each account using makeDeposit member func. Displays deposit information for each account. */
	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	for ( acc_int_t it( acc_begin, dep_begin );
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeDeposit( *(it.second) );
	}

/* calls Account::displayAccountsInfos again to display updated global account statistics.
   Uses std::for_each & std::mem_fun_ref to call Account::displayStatus for each account.
   Uses a loop with iterators to make withdrawals from each account using makeWithdrawal member function.
   Displays withdrawal information for each account. */
	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	for ( acc_int_t it( acc_begin, wit_begin );
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeWithdrawal( *(it.second) );
	}

/* calls Account::displayAccountsInfos one more time to display final global account statistics
   uses std::for_each & std::mem_fun_ref to call Account::displayStatus for each account */
	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	return 0; // returns 0 to indicate successful program execution
}


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //
