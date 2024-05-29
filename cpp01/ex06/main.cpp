/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/05/29 16:38:41 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int    main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./harl [debug/info/warning/error]" << std::endl;
        return (1);
    }
    Harl harl;
    std::string input = argv[1];
    std::cout << std::endl;
    harl.complain(input);
    return (0);
}