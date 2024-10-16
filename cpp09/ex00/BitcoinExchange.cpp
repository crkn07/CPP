/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 08:59:00 by crtorres          #+#    #+#             */
/*   Updated: 2024/10/16 13:00:08 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitCoinExchange::BitCoinExchange(std::ifstream& database)
{
	std::string line;
	std::map<std::string, float>::iterator it = bit_price.begin();

	while (std::getline(database, line))
	{
		std::string currency = line.substr(0, 3);
		float value = strToNum<float>(line.substr(4));
		bit_price.insert(it, std::pair<std::string, float>(currency, value));
	}
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
	{
		if (errorLog(currency, exchangeRate))
			return ;
	}
}

void	newDate(int year, int month, int day, std::string& date)
{
	std::string newDate;
	newDate = numToStr<int>(year);
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
 