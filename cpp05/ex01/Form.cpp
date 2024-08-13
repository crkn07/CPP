/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/08/13 20:10:46 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _signed(false), _gradeToSign(150), _gradeToExecute(150){
	return ;
}

Form::Form(const std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){
	CheckGrade(gradeToSign);
	CheckGrade(gradeToExecute);
	_signed = false;
}

Form::Form(const Form &src) : _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute){
	CheckGrade(_gradeToSign);
	CheckGrade(_gradeToExecute);
}

Form &Form::operator=(const Form &src){
	if (this != &src) {
		_signed = src._signed;
		_gradeToSign = src._gradeToSign;
		_gradeToExecute = src._gradeToExecute;
		CheckGrade(_gradeToSign);
		CheckGrade(_gradeToExecute);
	}
	return (*this);
}

Form::~Form(){
	return ;
}

const char* Form::GradeTooHighException::what() const throw(){
	return ("Grade is too high!");
}

const char* Form::GradeTooLowException::what() const throw(){
	return ("Grade is too low!");
}

std::string Form::getName() const{
	return (_name);
}

bool Form::getSigned() const{
	return (_signed);
}

int Form::getGradeToSign() const{
	return (_gradeToSign);
}

int Form::getGradeToExecute() const{
	return (_gradeToExecute);
}

void Form::beSigned(Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException();
	_signed = true;
}

void Form::CheckGrade(int grade){
	if (grade < 1)
		throw Form::GradeTooHighException();
	else if (grade > 150)
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const Form &src){
	out << "Form " << src.getName() << " is " << (src.getSigned() ? "" : "not ") << "signed, grade to sign: " << src.getGradeToSign() << ", grade to execute: " << src.getGradeToExecute() << std::endl;
	return (out);
}