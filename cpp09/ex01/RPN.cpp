/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 08:59:00 by crtorres          #+#    #+#             */
/*   Updated: 2024/10/17 12:55:14 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(const RPN &src){
	(void)src;
}

RPN &RPN::operator=(RPN &src){
	if (this != &src)
		return src;
	return *this;
}


bool isNumber(char c){
	return (c >= '0' && c <= '9');
}

bool isSign(char c){
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

void	RPN::pushWithoutSign(std::string str){
	unsigned long i = 0;
	for (i = 0; str[i]; i++)
	{
		char c = str[i];
		if (c == '-' || c == '+' || c == '*' || c == '/'){
			push(c);
			break;
		}
		if (c != ' ')
			push(c - '0');
	}
	addExpression();
	std::string newStr = &str[i + 1];
	if (newStr.size() > 1)
		pushWithoutSign(newStr);
}

RPN::~RPN(){}