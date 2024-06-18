/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/06/18 14:37:28 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat() : AAnimal(), _brain(new Brain())
{
	std::cout << BLUE << "Default constructor called" << RESET << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &src) : AAnimal(), _brain(new Brain()){
	std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
	*this = src;
}

Cat::~Cat(){
	std::cout << BLUE << "Cat Destructor called" << RESET << std::endl;
	delete this->_brain;
}

Cat	&Cat::operator=(const Cat &src){
	std::cout << BLUE << "Copy Assignament constructed called" << RESET << std::endl;
	if (this != &src){
		this->_type = src._type;
		delete _brain;
		this->_brain = new Brain(*src._brain);
	}
	return (*this);
}

void	Cat::makeSound() const{
	std::cout << BLUE << "Meow Meow" << RESET << std::endl;
}