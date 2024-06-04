/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/06/04 16:46:40 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << this->_name << " ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
	std::cout << this->_name << "constructor has been copied" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	if (this != &src){
		this->_name = src._name;
		this->_hitpoints = src._hitpoints;
		this->_energy_points = src._energy_points;
		this->_attack_damage = src._attack_damage;
	}
	std::cout << " ClapTrap Operator " << this->_name << " has been assigned" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor " << this->_name << " has been destroyed." << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energy_points > 0 && this->_hitpoints > 0){
		this->_energy_points--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is out of energy points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoints > 0){
		this->_hitpoints -= amount;
		std::cout << "ClapTrap " << this->_name << " has taken " << amount << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitpoints > 0 && this->_energy_points > 0 && amount <= this->_energy_points){
		this->_energy_points--;
		this->_hitpoints += amount;
		std::cout << "ClapTrap " << this->_name << " has been repaired for " << amount << " points!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
}