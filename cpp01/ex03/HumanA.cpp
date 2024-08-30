/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:19:35 by crtorres          #+#    #+#             */
/*   Updated: 2024/08/23 17:12:17 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const name, Weapon &weapon): _name(name), weapon(weapon){
    return;
}

void HumanA::attack(){
    std::cout << _name << " attacks with his " << weapon.getType() << std::endl;
}

HumanA::~HumanA(){
    std::cout << _name <<" was destroyed" << std::endl;
}
