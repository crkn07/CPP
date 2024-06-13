/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/06/13 15:56:02 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal"){
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &src){
	std::cout << "Animal constructor copy called" << std::endl;
	*this = src;
}

Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &src){
	std::cout << "Animal assignation operator called" << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

const std::string	Animal::getType() const{
	std::cout << "Animal getType called" << std::endl;
	return (this->_type);
}

void	Animal::makeSound() const{
	std::cout << "Animal makeSound called" << std::endl;
}
