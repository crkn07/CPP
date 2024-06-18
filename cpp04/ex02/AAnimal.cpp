/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:56:50 by crtorres          #+#    #+#             */
/*   Updated: 2024/06/18 14:25:23 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("not defined"){
	std::cout << ROSE << "AAnimal default constructor called" << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal &src){
	std::cout << ROSE << "AAnimal copy constructor called" << RESET << std::endl;
	*this = src;
}

AAnimal	&AAnimal::operator=(const AAnimal &src){
	std::cout << ROSE << "AAnimal assignation operator called" << RESET << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

AAnimal::~AAnimal(){
	std::cout << ROSE << "AAnimal Destructor called" << RESET << std::endl;
}

const std::string	AAnimal::getType() const{
	std::cout << ROSE <<"AAnimal getType called" << RESET << std::endl;
	return (this->_type);
}

void	AAnimal::makeSound() const{
	std::cout << ROSE << "AAnimal makeSound called" << RESET << std::endl;
}
