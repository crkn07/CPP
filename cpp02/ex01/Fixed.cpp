/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:39:50 by crtorres          #+#    #+#             */
/*   Updated: 2024/07/10 13:47:16 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int intValue){
	std::cout << LBLUE "Int constructor called" RESET << std::endl;
	this->_fixedPointValue = intValue << this->_fractionalBits;
}

Fixed::Fixed(const float floatValue){
	std::cout << LGREEN "Float constructor called" RESET << std::endl;
	this->_fixedPointValue = roundf(floatValue * (1 << this->_fractionalBits));
}

Fixed &Fixed::operator=(const Fixed &src){
	std::cout << ROSE "Assignation operator called" RESET << std::endl;
	if (this != &src)
		this->_fixedPointValue = src.getRawBits();
	return (*this);
}

Fixed::~Fixed(){
	std::cout << RED "Destructor called" RESET << std::endl;
}

int Fixed::getRawBits(void) const{
	std::cout << YELLOW "getRawBits member function called" RESET << std::endl;
	return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw){
	std::cout << MAGENTA "setRawBits member function called" RESET << std::endl;
	this->_fixedPointValue = raw;
}

float	Fixed::toFloat(void) const{
	return ((float)this->_fixedPointValue / (1 << this->_fractionalBits));
}

int		Fixed::toInt( void ) const{
	return (this->_fixedPointValue >> this->_fractionalBits);
}

std::ostream &operator<<(std::ostream &output, const Fixed &src){
	output << src.toFloat();
	return (output);
}
