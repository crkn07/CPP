/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:00:36 by crtorres          #+#    #+#             */
/*   Updated: 2024/05/28 15:18:44 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
	return ;
}

Zombie::Zombie(std::string name){
	this->name = name;
	return ;
}

Zombie::~Zombie(void){
	std::cout << this->name << " was slayed" << std::endl;
	return ;
}

void	Zombie::setName(std::string name){
	this->name = name;
	return ;
}

void	Zombie::announce(void){
	std::cout << this->name << ": BraaiiiiiiinnnzzzZ..." << std::endl;
}