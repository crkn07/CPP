/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:19:35 by crtorres          #+#    #+#             */
/*   Updated: 2024/08/23 16:42:18 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(){
	Zombie *horde;
	int	num = 5;

	horde = zombieHorde(num, "Zombie");
	delete[] horde;
	return 0;
}
