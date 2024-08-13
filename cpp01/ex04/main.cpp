/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:19:35 by crtorres          #+#    #+#             */
/*   Updated: 2024/08/13 18:07:08 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	clear_and_replace(std::string *string1, std::string *string2, std::string *content){
	std::string::size_type i = ((*content).find(*string1));
	while (i != std::string::npos){
		(*content).erase(i, (*string1).length());
		(*content).insert(i, *string2);
		i = ((*content).find(*string1));
	}
}

int	main(int argc, char **argv){
	if (argc !=4){
		std::cout << "Usage: ./replace [filename] [string to replace] [string to replace with]" << std::endl;
		return 1;
	}
	std::string string1(argv[2]);
	std::string string2(argv[3]);

	if (std::string(argv[1]).length() == 0 || string1.length() == 0 || string2.length() == 0){
		std::cout << "Error: Empty string" << std::endl;
		return 1;
	}
	std::ifstream infile(argv[1]);
	std::string	content((std::istreambuf_iterator<char>(infile)), std::istreambuf_iterator<char>());
	clear_and_replace(&string1, &string2, &content);
	std::ofstream outfile((std::string(argv[1]) + ".replace").c_str());
	outfile << content;
	infile.close();
	outfile.close();
	return 0;
}