/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/05/30 15:13:04 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("FIGHTER1");
    ClapTrap claptrap2("FIGHTER2");

    std::cout << "FIGHT!!!" << std::endl;
    claptrap.attack("FIGHTER2");
    claptrap2.takeDamage(5);
    claptrap2.attack("FIGHTER1");
    claptrap.takeDamage(5);
    claptrap2.beRepaired(3);
    claptrap.attack("FIGHTER2");
    claptrap2.takeDamage(5);
    claptrap2.beRepaired(2);
    claptrap2.attack("FIGHTER1");
    claptrap.beRepaired(1);
    return (0);
}