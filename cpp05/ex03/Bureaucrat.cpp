/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/08/22 14:02:31 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150){
	std::cout << YELLOW << "Bureaucrat Default constructor called" << RESET << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name){
	std::cout << ROSE << "Bureaucrat Parametric constructor called" << RESET << std::endl;
	CheckGrade(grade);
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name), _grade(src._grade){
	std::cout << ORANGE << "Bureaucrat Copy constructor called" << RESET << std::endl;
	_grade = src._grade;
	CheckGrade(_grade);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src){
	std::cout << BLUE << "Bureaucrat Assignation operator called" << RESET << std::endl;
	if (this != &src) {
		_grade = src._grade;
		CheckGrade(_grade);
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(){
	std::cout << RED << "Bureaucrat Destructor called" << RESET << std::endl;
	return ;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade is too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade is too low!");
}

std::string Bureaucrat::getName() const{
	return (_name);
}

int Bureaucrat::getGrade() const{
	return (_grade);
}

void Bureaucrat::incrementGrade(){
	_grade--;
	CheckGrade(_grade);
}

void Bureaucrat::decrementGrade(){
	_grade++;
	CheckGrade(_grade);
}

void Bureaucrat::CheckGrade(int grade){
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src){
	out << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return (out);
}

void Bureaucrat::signForm(Aform &form){
	try{
		form.beSigned(*this);
		std::cout << _name << " signs " << form.getName() << std::endl;
	}
	catch(const std::exception &e){
		std::cout << _name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Aform const &form){
	try{
		form.execute(*this);
		std::cout << _name << " executes " << form.getName() << std::endl;
	}
	catch(const std::exception &e){
		std::cout << _name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
	}
}