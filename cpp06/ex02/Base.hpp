/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:41:39 by cristiantor       #+#    #+#             */
/*   Updated: 2024/09/13 10:45:50 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>

class Base {
    public:
        virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif