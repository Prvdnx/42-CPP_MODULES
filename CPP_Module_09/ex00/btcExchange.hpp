/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btcExchange.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ookamonu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:11:39 by ookamonu          #+#    #+#             */
/*   Updated: 2024/05/07 02:59:26 by ookamonu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__BTC_EXCHANGE_HPP__
#define	__BTC_EXCHANGE_HPP__

#include	<map>
#include	<string>

class	BitcoinExchange
{
 public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &name);
	BitcoinExchange &operator=(const BitcoinExchange &other);
	~BitcoinExchange();

	void	solve(const std::string &arg);

 private:
	std::map<std::string, double> _map;

	static bool			validateDate(const std::string &s);
	static std::string	getKey(const std::string &s);
	static float		getValue(const std::string &, char delimiter);
};

#endif
