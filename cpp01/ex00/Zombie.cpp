/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:47:42 by crtorres          #+#    #+#             */
/*   Updated: 2024/05/16 19:46:30 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	announce();
	return ;
}

Zombie::~Zombie()
{
	std::cout << this->name << " was slayed" << std::endl;
	return;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraaiiiiiiinnnzzzZ..." << std::endl;
}