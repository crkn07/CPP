/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:19:35 by crtorres          #+#    #+#             */
/*   Updated: 2024/05/28 15:40:56 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(){
	Zombie *horde;
	int	num = 3;

	horde = zombieHorde(num, "Zombie");
	delete[] horde;
	return 0;
}
