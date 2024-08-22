/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aform.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/08/22 14:01:04 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Aform.hpp"

Aform::Aform() : _name("Default"), _signed(false), _gradeToSign(150), _gradeToExecute(150){
	std::cout << YELLOW << "Aform Default constructor called" << RESET << std::endl;
	return ;
}

Aform::Aform(const std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){
	std::cout << ROSE << "Aform Parametric constructor called" << RESET << std::endl;
	CheckGrade(gradeToSign);
	CheckGrade(gradeToExecute);
	_signed = false;
}

Aform::Aform(const Aform &src) : _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute){
	std::cout << ORANGE << "Aform Copy constructor called" << RESET << std::endl;
	CheckGrade(_gradeToSign);
	CheckGrade(_gradeToExecute);
}

Aform &Aform::operator=(const Aform &src){
	std::cout << BLUE << "Aform Assignation operator called" << RESET << std::endl;
	if (this != &src) {
		_signed = src._signed;
		CheckGrade(_gradeToSign);
		CheckGrade(_gradeToExecute);
	}
	return (*this);
}

Aform::~Aform(){
	std::cout << RED << "Aform Destructor called" << RESET << std::endl;
	return ;
}

const char* Aform::GradeTooHighException::what() const throw(){
	return ("Grade is too high!");
}

const char* Aform::GradeTooLowException::what() const throw(){
	return ("Grade is too low!");
}

const char* Aform::FormNotSignedException::what() const throw(){
	return ("Form is not signed!");
}

std::string Aform::getName() const{
	return (_name);
}

bool Aform::getSigned() const{
	return (_signed);
}

int Aform::getGradeToSign() const{
	return (_gradeToSign);
}

int Aform::getGradeToExecute() const{
	return (_gradeToExecute);
}

void Aform::beSigned(Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() > _gradeToSign)
		throw Aform::GradeTooLowException();
	_signed = true;
}

void Aform::execute(Bureaucrat const &executor) const{
	if (!_signed)
		throw Aform::FormNotSignedException();
	if (executor.getGrade() > _gradeToExecute)
		throw Aform::GradeTooLowException();
}

void Aform::CheckGrade(int grade){
	if (grade < 1)
		throw Aform::GradeTooHighException();
	else if (grade > 150)
		throw Aform::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const Aform &src){
	out << "Form " << src.getName() << " is " << (src.getSigned() ? "" : "not ") << "signed, grade to sign: " << src.getGradeToSign() << ", grade to execute: " << src.getGradeToExecute() << std::endl;
	return (out);
}