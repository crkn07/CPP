/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:16:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/06/18 12:48:27 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &copy){
	std::cout << LBLUE << "Brain copy constructor called" << RESET << std::endl;
	*this = copy;
}

Brain	&Brain::operator=(const Brain &copy){
	std::cout << LBLUE << "Brain Copy Assignament constructed called" << RESET << std::endl;
	if (this != &copy)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	return (*this);
}

Brain::~Brain(){
	std::cout << "Brain Destructor called" << std::endl;
}
