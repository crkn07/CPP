/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrapp.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/05/30 16:35:26 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    _hitpoints = 100, _energy_points = 50, _attack_damage = 20;
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hitpoints = 100, _energy_points = 50, _attack_damage = 20;
    std::cout << this->_name << " ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
    std::cout << this->_name << " ScavTrap constructor has been copied" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src){
    if (this != &src)
        ClapTrap::operator=(src);
    std::cout << "ScavTrap Operator " << this->_name << " has been assigned" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor " << this->_name << " has been destroyed." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->_energy_points > 0 && this->_hitpoints > 0)
    {
        this->_energy_points--;
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->_name << " is out of energy points or hitpoints." << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}