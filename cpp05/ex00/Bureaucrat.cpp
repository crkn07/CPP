/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/09/26 12:47:18 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150){
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name){
	CheckGrade(grade);
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name), _grade(src._grade){
	CheckGrade(_grade);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src){
	if (this != &src) {
		_grade = src._grade;
		CheckGrade(_grade);
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(){
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