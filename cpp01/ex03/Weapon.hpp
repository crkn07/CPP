/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:19:35 by crtorres          #+#    #+#             */
/*   Updated: 2024/05/28 16:17:32 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
    
    private:
    std::string type;

    public:
        Weapon(std::string type);
        Weapon();
        ~Weapon();
        const std::string &getType();
        void setType(std::string type);
};

#endif
