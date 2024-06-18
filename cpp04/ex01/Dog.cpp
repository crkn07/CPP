/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/06/18 14:32:16 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(), _brain(new Brain()){
    std::cout << GREEN << "Dog default constructor called" << RESET << std::endl;
    this->_type = "Dog";
}

Dog::Dog(const Dog &src) : Animal(src), _brain(new Brain()){
    std::cout << GREEN << "Dog copy constructor called" << RESET << std::endl;
    *this = src;
}

Dog::~Dog(){
    std::cout << GREEN << "Dog Destructor called" << RESET << std::endl;
    delete this->_brain;
}

Dog    &Dog::operator=(const Dog &src){
    std::cout << GREEN << "Dog assignation operator called" << RESET << std::endl;
    if (this != &src){
        this->_type = src._type;
        delete _brain;
        this->_brain = new Brain(*src._brain);
    }
    return (*this);
}

void    Dog::makeSound() const{
    std::cout << GREEN << "Guau Guau" << RESET << std::endl;
}