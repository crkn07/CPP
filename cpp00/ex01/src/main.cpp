/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:50:35 by crtorres          #+#    #+#             */
/*   Updated: 2024/05/09 14:47:11 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PhoneBook.hpp"

int	main(){
	PhoneBook	phonebook;
	std::string	star = "PhoneBook init";
	std::string	str;
	int i = 0;
	int elements = 0;

	phonebook = PhoneBook();
	std::cout << "initializing..." << std::endl;
	sleep(1);
	std::cout << "initialized!" << std::endl;
	while (1){
		std::cout << "select an option: ";
		std::cout << "ADD | SEARCH | EXIT" << std::endl;
		std::cin >> str;
		if (std::cin.eof())
			return 1;
		if (!strcmp(str.c_str(), "ADD")){
			if (i == 8)
				i = 0;
			if (elements < 9)
				elements++;
			phonebook.New_Contact(i);
			i++;
		}
		else if (!strcmp(str.c_str(), "SEARCH")){
			phonebook.Search(elements);
		}
		else if (!strcmp(str.c_str(), "EXIT")){
			std::cout << "BYE!" <<std::endl;
			break;
		}
		else
			std::cout << "Invalid input" << std::endl;
	}
	return 0;
}