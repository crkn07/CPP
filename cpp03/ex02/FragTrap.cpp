/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/06/04 15:54:01 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_hitpoints = 100, _energy_points = 100, _attack_damage = 30;
	std::cout << RED << "Default constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitpoints = 100, _energy_points = 100, _attack_damage = 30;
	std::cout << ORANGE << this->_name << " FragTrap constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	_hitpoints = 100, _energy_points = 100, _attack_damage = 30;
	*this = src;
	std::cout << LBLUE << this->_name << "constructor has been copied" << RESET << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << LGREEN << "FragTrap destructor " << this->_name << " has been destroyed." << RESET << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src){
	if (this != &src){
		ClapTrap::operator=(src);	
	}
	std::cout << " FragTrap Operator " << this->_name << " has been assigned" << std::endl;
	return (*this);
}

void FragTrap::highFivesGuys(void){
	if (this->_hitpoints == 0)
		std::cout << RED << "FragTrap " << this->_name << " is dead! Cannot give hive five! " << RESET << std::endl;
	else
	std::cout << CYAN << "FragTrap " << this->_name << " high fives guys!" << RESET << std::endl;
}