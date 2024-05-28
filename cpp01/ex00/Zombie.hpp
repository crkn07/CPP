/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:44:04 by crtorres          #+#    #+#             */
/*   Updated: 2024/02/22 14:51:57 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie(void);
	~Zombie(void);
	Zombie(std::string name);

	void	announce(void);
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);


#endif