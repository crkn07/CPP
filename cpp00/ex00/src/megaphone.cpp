/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:42:47 by crtorres          #+#    #+#             */
/*   Updated: 2024/05/16 16:36:52 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

size_t	ft_strlen(const char *str)
{
	size_t	a;

	a = 0;
	if (!str)
	{
		return (0);
	}
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++){
			for (int j = 0; j < int(ft_strlen(argv[i])); j++)
				std::cout << char(std::toupper(argv[i][j]));
			if (i + 1 != argc)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}
