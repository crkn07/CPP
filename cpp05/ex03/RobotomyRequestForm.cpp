/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/08/22 15:08:37 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Aform("Robotomy Request Form", 72, 45){
	std::cout << YELLOW << "RobotomyRequestForm constructor." << RESET << std::endl;
	_target = target;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Aform(src){
	std::cout << ORANGE << "RobotomyRequestForm copy constructor." << RESET << std::endl;
	_target = src._target;
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src){
	std::cout << BLUE << "RobotomyRequestForm assignation operator." << RESET << std::endl;
	if (this != &src){
		Aform::operator=(src);
		_target = src._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << RED << "RobotomyRequestForm destructor." << RESET << std::endl;
	return ;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	Aform::execute(executor);
	if (rand() % 2 == 0)
		std::cout << _target << " has been robotomized 50% of the time." << std::endl;
	else
		std::cout << _target << " robotomy of " << _target << " failed." << std::endl;
}