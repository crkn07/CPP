/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/08/22 18:04:02 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	std::cout << YELLOW << "ScalarConverter constructor called" << RESET << std::endl;
	return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter &src) {
	*this = src;
	std::cout << ROSE << "ScalarConverter copy constructor called" << RESET << std::endl;
	return ;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src) {
	(void)src;
	std::cout << CYAN << "ScalarConverter assignation operator called" << RESET << std::endl;
	return *this;
}

ScalarConverter::~ScalarConverter() {
	std::cout << RED << "ScalarConverter destructor called" << RESET << std::endl;
	return ;
}

bool ScalarConverter::isChar() {
	if (_input.length() == 1 && !isdigit(_input[0]))
		return true;
	return false;
}

bool ScalarConverter::isInt() {
	if (_input.length() == 1 && isprint(_input[0]))
		return true;
	if (_input.length() > 1 && isprint(_input[0]) && !isdigit(_input[0]))
		return false;
	if (_input.length() > 1 && isprint(_input[0]) && isdigit(_input[0]))
		return true;
	return false;
}

void ScalarConverter::convert(const std::string &input) {
	ScalarConverter converter;
	converter._input = input;
	converter.convert();
}

bool ScalarConverter::isFloat() {
	std::string::const_iterator it = _input.begin();
	if (_input.length() == 1 && isprint(_input[0]))
		return true;
	if (_input.length() > 1 && isprint(_input[0]) && !isdigit(_input[0]))
		return false;
	if (_input.length() > 1 && isprint(_input[0]) && isdigit(_input[0])) {
		while (it != _input.end() && isdigit(*it))
			it++;
		if (*it == '.')
			it++;
		else
			return false;
		while (it != _input.end() && isdigit(*it))
			it++;
		if (it == _input.end())
			return true;
	}
	return false;
}

bool ScalarConverter::isDouble() {
	std::string::const_iterator it = _input.begin();
	if (_input.length() == 1 && isprint(_input[0]))
		return true;
	if (_input.length() > 1 && isprint(_input[0]) && !isdigit(_input[0]))
		return false;
	if (_input.length() > 1 && isprint(_input[0]) && isdigit(_input[0])) {
		while (it != _input.end() && isdigit(*it))
			it++;
		if (*it == '.')
			it++;
		else
			return false;
		while (it != _input.end() && isdigit(*it))
			it++;
		if (*it == 'f')
			it++;
		else
			return false;
		if (it == _input.end())
			return true;
	}
	return false;
}

void ScalarConverter::convert(){
	if (isChar())
		printChar();
	else if (isInt())
		printInt();
	else if (isFloat())
		printFloat();
	else if (isDouble())
		printDouble();
	else
		std::cout << RED << "Error: Invalid input" << RESET << std::endl;
}