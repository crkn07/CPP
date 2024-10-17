/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 08:59:00 by crtorres          #+#    #+#             */
/*   Updated: 2024/10/17 09:45:08 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	conversion(BitCoinExchange& historyValue, std::ifstream& inputFile)
{
	std::string	line;
	while (std::getline(inputFile, line))
	{
		std::string date = line.substr(0, 10);
		float exchangeRate = strToNum<float>(line.substr(line.find("|") + 1));
		if (!errorLog(date, exchangeRate))
			historyValue.getConversion(date, exchangeRate);
	}
}

int	main(int argc, char **argv){
	if (argc != 2)
	{
		std::cerr << "Usage: need a file as argument" << std::endl;
		return 1;
	}
	std::ifstream database("./data.csv");
	if (!(database.is_open() && database.good()))
	{
		std::cerr << "Error: could not open the file" << std::endl;
		return 1;
	}
	BitCoinExchange historyValue(database);
	std::ifstream inputFile(argv[1]);
	conversion(historyValue, inputFile);
	return 0;
}