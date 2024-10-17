/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 08:59:00 by crtorres          #+#    #+#             */
/*   Updated: 2024/10/17 09:48:45 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitCoinExchange::BitCoinExchange(std::ifstream& database)
{
	std::string line;
	std::map<std::string, float>::iterator it = bit_price.begin();

	while (std::getline(database, line))
	{
		std::string currency = line.substr(0, 10);
		float value = strToNum<float>(line.substr(11));
		bit_price.insert(it, std::pair<std::string, float>(currency, value));
	}
}

void	removeDate(std::string& currency)
{
	int year = strToNum<int>(currency.substr(0, 4));
	int month = strToNum<int>(currency.substr(5, 2));
	int day = strToNum<int>(currency.substr(8, 2));
	if ( day >= 0)
	{
		if (day == 0)
		{
			if (month >= 1)
			{
				if (month == 1)
					year--;
				else
					month--;
			}
		}
		else
			day--;
	}
	newDate(year, month, day, currency);
}

void	BitCoinExchange::getConversion(std::string currency, float exchangeRate)
{
	std::string imputDate = currency;

	if (bit_price[currency] != 0)
	{
		std::cout << imputDate << " => " << exchangeRate << " = " << bit_price[currency] * exchangeRate << std::endl;
		return ;
	}
	while (bit_price[currency] == 0)
		removeDate(currency);
	std::cout << imputDate << " => " << exchangeRate << " = " << bit_price[currency] * exchangeRate << " (based on " << currency << ")" << std::endl;
}

BitCoinExchange::~BitCoinExchange(){}

bool	errorLog(std::string currency, float exchangeRate)
{
	int	year = strToNum<int>(currency.substr(0, 4));
	int	month = strToNum<int>(currency.substr(5, 2));
	int	day = strToNum<int>(currency.substr(8, 2));
	if (year < 0 || month < 0 || month > 12 || year > 2024 || day < 0 || day > 31)
	{
		std::cerr << "Error: bad input => " << currency << std::endl;
		return true;
	}
	if (exchangeRate < 0.0 || exchangeRate > 1000000.0)
	{
		std::cerr << "Error: too large a number => " << exchangeRate << std::endl;
		return true;
	}
	return false;
}

void	newDate(int year, int month, int day, std::string& date)
{
	std::string newDate;
	newDate += numToStr<int>(year);
	if (month < 10 || day < 10)
	{
		if (month < 10)
			newDate += "-0" + numToStr<int>(month);
		else
			newDate += "-" + numToStr<int>(month);
		if (day < 10)
			newDate += "-0" + numToStr<int>(day);
		else
			newDate += "-" + numToStr<int>(day);
	}
	date = newDate;
}
 