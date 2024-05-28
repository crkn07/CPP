/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:19:35 by crtorres          #+#    #+#             */
/*   Updated: 2024/05/28 16:38:38 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon:: Weapon(std::string type){
    this->type = type;
}

void Weapon::setType(std::string type){
    this->type = type;
}

std::string const &Weapon::getType(){
    return this->type;
}

Weapon::~Weapon(){
    std::cout << "Weapon "<< type <<" was destroyed" << std::endl;
    return;
}
