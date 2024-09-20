/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/09/13 07:52:23 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serialize::Serialize() {
    std::cout << YELLOW << "Serialize constructor called" << RESET << std::endl;
    return ;
}

Serialize::Serialize(const Serialize &src) {
    (void)src;
    std::cout << ROSE << "Serialize copy constructor called" << RESET << std::endl;
    return ;
}

Serialize &Serialize::operator=(const Serialize &b) {
    (void)b;
    std::cout << CYAN << "Serialize assignation operator called" << RESET << std::endl;
    return *this;
}

Serialize::~Serialize() {
    std::cout << RED << "Serialize destructor called" << RESET << std::endl;
    return ;
}

uintptr_t Serialize::serialize(Data *raw) {
    uintptr_t raw_data = reinterpret_cast<uintptr_t>(raw);
    std::cout << "Data address: " << raw_data << std::endl;
    return raw_data;
}

Data *Serialize::deserialize(uintptr_t raw) {
    Data *data = reinterpret_cast<Data *>(raw);
    std::cout << "Data address: " << data << std::endl;
    return data;
}
