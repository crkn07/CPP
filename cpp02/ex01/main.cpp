/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:39:50 by crtorres          #+#    #+#             */
/*   Updated: 2024/07/10 14:17:04 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(){
	Fixed a;
	Fixed b(a);
	Fixed c;

	a = Fixed(1234.4321f);
	c = b;

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	
	std::cout << BLUE << a.getRawBits() << RESET << std::endl;
	std::cout << ROSE << b.getRawBits() << RESET << std::endl;
	std::cout << c.getRawBits() << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toFloat() << " as float"<< std::endl;
	
	std::cout << BG_CYAN "More tests" RESET << std::endl;
	a.setRawBits(1234);
	b.setRawBits(5678);

	std::cout << BG_LGREEN "After setting raw bits:" RESET << std::endl;
	std::cout << "a: " << a.getRawBits() << std::endl;
	std::cout << "b: " << b.getRawBits() << std::endl;
	std::cout << "c: " << c.getRawBits() << std::endl;
	c = a;
	std::cout << BG_LGREEN "After assignment:" RESET << std::endl;
	std::cout << "a: " << a.getRawBits() << std::endl;
	std::cout << "b: " << b.getRawBits() << std::endl;
	std::cout << "c: " << c.getRawBits() << std::endl;

	return (0);
}