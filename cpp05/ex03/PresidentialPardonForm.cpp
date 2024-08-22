/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/08/22 14:03:28 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Aform("Presidential Pardon Creation Form", 25, 5){
	std::cout << YELLOW << "PresidentialPardonForm constructor called" << RESET << std::endl;
	_target = target;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Aform(src){
	std::cout << ORANGE << "PresidentialPardonForm copy constructor called" << RESET << std::endl;
	_target = src._target;
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src){
	std::cout << BLUE << "PresidentialPardonForm assignation operator called" << RESET << std::endl;
	if (this != &src) {
		Aform::operator=(src);
		_target = src._target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << RED << "PresidentialPardonForm destructor called" << RESET << std::endl;
	return ;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	Aform::execute(executor);
	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
