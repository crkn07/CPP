/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:39:50 by crtorres          #+#    #+#             */
/*   Updated: 2024/06/26 15:13:21 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(){
	Fixed a;
	Fixed b(a);
	Fixed c;

	a = 3;
	c = b;

	std::cout << BLUE << a.getRawBits() << RESET << std::endl;
	std::cout << ROSE << b.getRawBits() << RESET << std::endl;
	std::cout << c.getRawBits() << std::endl;

	/* std::cout << "More tests" << std::endl;
	a.setRawBits(1234);
	b.setRawBits(5678);

	std::cout << "After setting raw bits:" << std::endl;
	std::cout << "a: " << a.getRawBits() << std::endl;
	std::cout << "b: " << b.getRawBits() << std::endl;
	std::cout << "c: " << c.getRawBits() << std::endl;

	c = a;
	std::cout << "After assignment:" << std::endl;
	std::cout << "a: " << a.getRawBits() << std::endl;
	std::cout << "b: " << b.getRawBits() << std::endl;
	std::cout << "c: " << c.getRawBits() << std::endl;*/

	return (0);
}