/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/08/23 16:53:17 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(){
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	std::cout << "Address in memory of the string: " << &str << std::endl;
	std::cout << "Address in memory of the stringPTR: " << stringPTR << std::endl;
	std::cout << "Address in memory of the stringREF: " << &stringREF << std::endl;
	std::cout << "value of the string: " << str << std::endl;
	std::cout << "value of StringPTR: " << *stringPTR << std::endl;
	std::cout << "value of StringREF: " << stringREF << std::endl;
}