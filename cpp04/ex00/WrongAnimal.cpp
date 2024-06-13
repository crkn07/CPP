/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/06/13 18:33:40 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal"){
	std::cout << RED << "WrongAnimal default constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src){
	std::cout << RED << "WrongAnimal copy constructor called" << RESET << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal(){
	std::cout << RED << "WrongAnimal Destructor called" << RESET << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src){
	std::cout << RED << "WrongAnimal assignation operator called" << RESET << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void	WrongAnimal::makeSound() const{
	std::cout << RED << "WrongAnimal makeSound called" << RESET << std::endl;
}

const std::string	WrongAnimal::getType() const{
	std::cout << RED << "WrongAnimal getType called" << RESET << std::endl;
	return (this->_type);
}