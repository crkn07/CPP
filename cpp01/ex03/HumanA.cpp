/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:19:35 by crtorres          #+#    #+#             */
/*   Updated: 2024/05/29 12:31:41 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const name, Weapon &weapon): name(name), weapon(weapon){
    this->name = name;
}

void HumanA::attack(){
    std::cout << name << "attacks with his " << weapon.getType() << std::endl;
}

HumanA::~HumanA(){
    std::cout << this->name <<" was destroyed" << std::endl;
}
