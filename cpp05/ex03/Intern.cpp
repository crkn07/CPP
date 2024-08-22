/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/08/22 15:51:52 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
	std::cout << YELLOW << "Intern default constructor created" << RESET << std::endl;
	return ;
}

Intern::Intern(const Intern &src){
	std::cout << ORANGE << "Intern copy constructor created" << RESET << std::endl;
	*this = src;
}

Intern &Intern::operator=(const Intern &src){
	std::cout << BLUE << "Intern assignation operator created" << RESET << std::endl;
	(void)src;
	return (*this);
}

Intern::~Intern(){
	std::cout << RED << "Intern destructor called" << RESET << std::endl;
	return ;
}

Aform *Intern::makeForm(const std::string &formName, const std::string &target){
	const std::string formNames[3] = {"robotomy request form", "shrubbery creation form", "presidential pardon form"};
	int i = 0;
	for (i = 0; i < 3; i++){
		if (formName == formNames[i]){
			std::cout << "Intern creates " << formName << std::endl;
			break;
		}
	}
	switch (i)
	{
	case 0:
		return (new RobotomyRequestForm(target));
	case 1:
		return (new ShrubberyCreationForm(target));
	case 2:
		return (new PresidentialPardonForm(target));
	default:
		std::cout << PURPLE << "Form name not found." << RESET << std::endl;
		return (NULL);
	}
}