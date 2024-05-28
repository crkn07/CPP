/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:58:49 by crtorres          #+#    #+#             */
/*   Updated: 2024/02/22 17:59:41 by crtorres         ###   ########.fr       */
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
	~Zombie();
	Zombie(std::string name);

	void	announce(void);
	void	setName(std::string name);
};

Zombie *zombieHorde(int N, std::string name);
void	randomChump(std::string name);

#endif