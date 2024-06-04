/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/06/04 15:50:59 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap claptrap("FIGHTER1");
    ClapTrap claptrap2("FIGHTER2");

    ScavTrap scavtrap("FIGHTER3-scav");
    ScavTrap scavtrap2("FIGHTER4-scav");

    FragTrap fragtrap("FIGHTER5-frag");
    FragTrap fragtrap2("FIGHTER6-frag");
    std::cout << "FIGHT!!!" << std::endl;
    claptrap.attack("FIGHTER2");
    claptrap2.takeDamage(5);
    claptrap2.beRepaired(3);
    scavtrap.attack("FIGHTER4-scav");
    scavtrap2.takeDamage(20);
    scavtrap2.beRepaired(10);
    fragtrap.attack("FIGHTER6-frag");
    fragtrap2.takeDamage(30);
    fragtrap2.beRepaired(20);
    scavtrap2.guardGate();
    fragtrap2.highFivesGuys();
    
    return (0);
}