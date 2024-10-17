/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/10/17 11:54:34 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << GREEN << "Dog default constructor called" << RESET << std::endl;
    this->_type = "Dog";
}

Dog::Dog(const Dog &src) : Animal(src){
    std::cout << GREEN << "Dog copy constructor called" << RESET << std::endl;
    *this = src;
}

Dog::~Dog(){
    std::cout << GREEN << "Dog Destructor called" << RESET << std::endl;
}

Dog    &Dog::operator=(const Dog &src){
    std::cout << GREEN << "Dog assignation operator called" << RESET << std::endl;
    if (this != &src)
        this->_type = src._type;
    return (*this);
}

void    Dog::makeSound() const{
    std::cout << GREEN << "Guau Guau" << RESET << std::endl;
}