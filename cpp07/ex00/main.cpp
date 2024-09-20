/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:09:08 by cristiantor       #+#    #+#             */
/*   Updated: 2024/09/17 15:24:36 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

int	main(){
	int a = 2;
	int b = 3;

	std::cout << "a: " << a << " b: " << b << std::endl;
	swap(a, b);
	std::cout << "a: " << a << " b: " << b << std::endl;
	std::cout << "min: " << min(a, b) << std::endl;
	std::cout << "max: " << max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "c: " << c << " d: " << d << std::endl;
	swap(c, d);
	std::cout << "c: " << c << " d: " << d << std::endl;
	std::cout << "min: " << ::min(c, d) << std::endl;
	std::cout << "max: " << ::max(c, d) << std::endl;

	return (0);
}