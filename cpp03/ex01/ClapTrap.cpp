/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/06/04 12:33:04 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << RED << "Default constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << GREEN << this->_name << " ClapTrap constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
	std::cout << LBLUE << this->_name << "constructor has been copied" << RESET << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	this->_name = src._name;
	this->_hitpoints = src._hitpoints;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	std::cout << " ClapTrap Operator " << this->_name << " has been assigned" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << YELLOW << "ClapTrap destructor " << this->_name << " has been destroyed." << RESET << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energy_points > 0 && this->_hitpoints > 0){
		this->_energy_points--;
		std::cout << CYAN << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << RESET << std::endl;
	}
	else
		std::cout << RED << "ClapTrap " << this->_name << " is out of energy points!" << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoints > 0){
		this->_hitpoints -= amount;
		std::cout << LGREEN << "ClapTrap " << this->_name << " has taken " << amount << " points of damage!" << RESET << std::endl;
	}
	else
		std::cout << RED << "ClapTrap " << this->_name << " is already dead!" << RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitpoints > 0 && this->_energy_points > 0 && amount <= this->_energy_points){
		this->_energy_points--;
		this->_hitpoints += amount;
		std::cout << MAGENTA << "ClapTrap " << this->_name << " has been repaired for " << amount << " points!" << RESET << std::endl;
	}
	else
		std::cout << ROSE << "ClapTrap " << this->_name << " is already dead!" << RESET << std::endl;
}