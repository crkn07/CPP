/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:50:35 by crtorres          #+#    #+#             */
/*   Updated: 2024/10/16 12:36:42 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PhoneBook.hpp"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
}

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
		if (!ft_strcmp(str.c_str(), "ADD")){
			if (i == 8)
				i = 0;
			if (elements < 9)
				elements++;
			phonebook.New_Contact(i);
			i++;
		}
		else if (!ft_strcmp(str.c_str(), "SEARCH")){
			phonebook.Search(elements);
		}
		else if (!ft_strcmp(str.c_str(), "EXIT")){
			std::cout << "BYE!" <<std::endl;
			break;
		}
		else
			std::cout << "Invalid input" << std::endl;
	}
	return 0;
}