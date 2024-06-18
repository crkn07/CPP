/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/06/13 19:26:24 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(){
  std::cout << YELLOW << "WrongCat default constructor called" << RESET << std::endl;
  this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src){
  std::cout << YELLOW << "WrongCat copy constructor called" << RESET << std::endl;
  *this = src;
}

WrongCat::~WrongCat(){
  std::cout << YELLOW << "WrongCat Destructor called" << RESET << std::endl;
}

WrongCat  &WrongCat::operator=(const WrongCat &src){
  std::cout << YELLOW << "WrongCat Assignament constructed called" << RESET << std::endl;
  if (this != &src)
    this->_type = src._type;
  return (*this);
}

void  WrongCat::makeSound() const{
  std::cout << YELLOW << "WrongMeow WrongMeow" << RESET << std::endl;
}