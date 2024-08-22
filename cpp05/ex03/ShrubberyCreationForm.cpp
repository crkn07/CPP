/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/08/22 15:09:50 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Aform("ShrubberyCreationForm", 145, 137), _target(target){
	std::cout << YELLOW << "ShrubberyCreationForm constructor called" << RESET << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Aform(src){
	std::cout << ORANGE << "ShrubberyCreationForm copy constructor called" << RESET << std::endl;
	_target = src._target;
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src){
	std::cout << BLUE << "ShrubberyCreationForm assignation operator called" << RESET << std::endl;
	if (this != &src){
		Aform::operator=(src);
		_target = src._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << RED << "ShrubberyCreationForm destructor called" << RESET << std::endl;
	return ;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	Aform::execute(executor);
	std::ofstream file((_target + "_shrubbery").c_str());
	if (!file.is_open()){
		std::cout << "Error opening file." << std::endl;
		return ;
	}
	file <<  "     _-_\n"
           "    /~~~~~~\\\n"
           " /~~~~~~~~~~~\\\n"
           "{~~~~~~~~~~~~~~}\n"
           " \\  _-    -_  /\n"
           "   ~  \\\\//  ~\n"
           "_- -   | | _- _\n"
           "  _ -  | |   -_\n"
           "     // \\\\ \n";
	file.close();
	std::cout << "Shrubbery has been created." << std::endl;
}