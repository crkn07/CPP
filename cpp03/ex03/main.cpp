/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/06/04 16:40:12 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamond("Cristian");
	diamond.attack("target1");
	diamond.takeDamage(20);
	diamond.beRepaired(10);
	diamond.highFivesGuys();
	diamond.guardGate();
	diamond.whoAmI();
	ClapTrap clap("Clap1");
	FragTrap frag("Frag1");
	ScavTrap scav("Scav1");
	diamond.attack("target2");
	clap.attack("target3");
	frag.attack("target4");
	scav.attack("target5");
	
	return (0);
}