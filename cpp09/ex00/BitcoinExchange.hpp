/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 08:59:00 by crtorres          #+#    #+#             */
/*   Updated: 2024/10/16 11:58:33 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <sstream>
# include <fstream>
# include <iomanip>
# include <map>

class   BitCoinExchange
{
    private:
        std::map<std::string, float> bit_price;
        BitCoinExchange();
        BitCoinExchange(BitCoinExchange const & src);
        BitCoinExchange & operator=(BitCoinExchange const & src);
        ~BitCoinExchange();
        
    public:
        BitCoinExchange(std::ifstream& database);
        void    getConversion(std::string currency, float exchangeRate);
};

bool    errorLog(std::string currency, float exchangeRate);
void    newDate(int year, int month, int day, std::string& date);

template <typename T>
std::string numToStr(T num)
{
    std::ostringstream ss;
    ss << num;
    return ss.str();
}

template <typename T>
T strToNum(std::string str)
{
    std::istringstream ss(str);
    T num;
    ss >> num;
    return num;
}

#endif