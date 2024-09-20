/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/09/12 16:57:54 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	std::cout << YELLOW << "ScalarConverter constructor called" << RESET << std::endl;
	return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter &src) {
	(void)src;
	std::cout << ROSE << "ScalarConverter copy constructor called" << RESET << std::endl;
	return ;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &b) {
	(void)b;
	std::cout << CYAN << "ScalarConverter assignation operator called" << RESET << std::endl;
	return *this;
}

ScalarConverter::~ScalarConverter() {
	std::cout << RED << "ScalarConverter destructor called" << RESET << std::endl;
	return ;
}

bool ScalarConverter::isChar() {
	if (!isdigit(_input[0]))
		return true;
	return false;
}

bool ScalarConverter::isInt() {
	if (_input.length() == 1 && isdigit(_input[0]))
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
	if (isChar()){	
		std::cout << "entraaa" << std::endl;
		printChar();
	}
	else if (isInt())
		printInt();
	else if (isFloat())
		printFloat();
	else if (isDouble())
		printDouble();
	else
		std::cout << RED << "Error: Invalid input" << RESET << std::endl;
}

void ScalarConverter::printChar() {
	if (_input == "nan" || _input == "inf" || _input == "-inf" || _input == "+inf") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << _input << "f" << std::endl;
        std::cout << "double: " << _input << std::endl;
    } else if (_input.length() == 1) {
        char c = _input[0];
        std::cout << "char: '" << c << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
    } else {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}

void ScalarConverter::printInt() {
	int i = std::stoi(_input);
	if (i < 32 || i > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void ScalarConverter::printFloat() {
	float f = std::stof(_input);
	if (f < 32 || f > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
}

void ScalarConverter::printDouble() {
	double d = std::stod(_input);
	if (d < 32 || d > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}
