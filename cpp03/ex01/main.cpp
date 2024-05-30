/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/05/30 16:31:52 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap claptrap("FIGHTER1");
    ClapTrap claptrap2("FIGHTER2");

    ScavTrap scavtrap("FIGHTER3-scav");
    ScavTrap scavtrap2("FIGHTER4-scav");

    std::cout << "FIGHT!!!" << std::endl;
    claptrap.attack("FIGHTER2");
    claptrap2.takeDamage(5);
    claptrap2.beRepaired(3);
    scavtrap.attack("FIGHTER4-scav");
    scavtrap2.takeDamage(20);
    scavtrap2.beRepaired(10);
    claptrap2.attack("FIGHTER1");
    claptrap.takeDamage(5);
    claptrap.attack("FIGHTER2");
    claptrap2.takeDamage(5);
    claptrap2.beRepaired(2);
    claptrap2.attack("FIGHTER1");
    claptrap.beRepaired(1);
    scavtrap2.guardGate();
    
    return (0);
}