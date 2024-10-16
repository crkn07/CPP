/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/09/26 08:59:09 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Aform("Presidential Pardon Creation Form", 25, 5){
	std::cout << YELLOW << "PresidentialPardonForm constructor called" << RESET << std::endl;
	_target = target;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Aform(src){
	std::cout << GREEN << "PresidentialPardonForm copy constructor called" << RESET << std::endl;
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
