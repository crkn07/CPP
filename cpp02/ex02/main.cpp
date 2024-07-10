/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:39:50 by crtorres          #+#    #+#             */
/*   Updated: 2024/07/10 16:10:22 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(){
	Fixed a(5.5f);
	Fixed b(2.2f);

	std::cout << BG_LGREEN << "COMPARATIONS" << RESET << std::endl;
	std::cout << "a is " << a.toFloat() << std::endl;
	std::cout << "b is " << b.toFloat() << std::endl;

	if (a > b) std::cout << "a is greater than b" << std::endl;
	if (a < b) std::cout << "a is less than b" << std::endl;
	if (a >= b) std::cout << "a is greater than or equal to b" << std::endl;
	if (a <= b) std::cout << "a is less than or equal to b" << std::endl;
	if (a == b) std::cout << "a is equal to b" << std::endl;
	if (a != b) std::cout << "a is not equal to b" << std::endl;

	Fixed sum = a + b;
	Fixed difference = a - b;

	std::cout << "Sum of a and b is " << sum.toFloat() << std::endl;
	std::cout << "Difference of a and b is " << difference.toFloat() << std::endl;

	std::cout << BG_LGREEN << "MAX AND MIN" << RESET << std::endl;
	Fixed c;
	Fixed const d( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << "c es " << c << std::endl;
	std::cout << "++c es " << ++c << std::endl;
	std::cout << BLUE << "c actualizado es " << c << RESET << std::endl;
	std::cout << "c++ es " << c++ << std::endl;
	std::cout << BLUE << "c actualizado es " << c << RESET << std::endl;
	
	std::cout << "d es " << d << std::endl;
	
	std::cout << Fixed::max( c, d ) << std::endl;
	std::cout << Fixed::min( c, d ) << std::endl;
	return (0);
}