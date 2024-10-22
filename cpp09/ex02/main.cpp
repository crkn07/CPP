/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 08:59:00 by crtorres          #+#    #+#             */
/*   Updated: 2024/10/22 11:40:39 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool    unwantedchar(std::string const &str)
{
	for (unsigned int i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && !isdigit(str[i]) && !isSign(str[i]))
			return true;
	}
	return false;
}

bool   inputWrong(std::string const &str)
{
	int	numsign = 0;
	int	numdigit = 0;
	for (unsigned long i = 0; str[i]; i++)
	{
		if (isdigit(str[i]))
			numdigit++;
		else if (isSign(str[i]))
			numsign++;
	}
	if (numsign + 1 != numdigit)
		return true;
	return false;
}

int	main(int argc, char **argv){
	if (argc != 2)
	{
		std::cerr << "Error " << std::endl;
		return 1;
	}
	std::string input(argv[1]);
	if (unwantedchar(input) || inputWrong(input))
	{
		std::cerr << "Error " << std::endl;
		return 1;
	}
	try
	{
		RPN rpn;
		rpn.pushWithoutSign(input);
		std::cout << rpn.top() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}