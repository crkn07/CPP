/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:19:35 by crtorres          #+#    #+#             */
/*   Updated: 2024/08/23 17:16:14 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const name): _name(name){
    return;
}

void HumanB::attack(){
    std::cout << _name << " attacks with his " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
}

HumanB::~HumanB(){
    std::cout << _name <<" was destroyed" << std::endl;
    return;
}