/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/09/13 07:50:26 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

#include <iostream>
#include <string>
#include <sstream>

//*===SETTINGS COLORS===*//
//*===Color font code===*//
# define BLACK   "\x1B[30m"
# define RED     "\x1b[31m"
# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define BLUE    "\x1b[34m"
# define MAGENTA "\x1b[35m"
# define CYAN    "\x1b[36m"
# define WHITE   "\x1B[37m"
# define ORANGE  "\x1B[38;2;255;128;0m"
# define ROSE    "\x1B[38;2;255;151;203m"
# define LBLUE   "\x1B[38;2;53;149;240m"
# define LGREEN  "\x1B[38;2;17;245;120m"
# define GRAY    "\x1B[38;2;176;174;174m"
# define PURPLE  "\x1B[38;2;129;38;192m"
# define RESET   "\x1b[0m"

struct Data
{
	int     n;
	float   value;
	std::string name;
};

class Serialize {
	private:
		Serialize();
		Serialize(const Serialize &src);
		Serialize &operator=(const Serialize &b);
		~Serialize();
	public:
		static uintptr_t serialize(Data *raw);
		static Data *deserialize(uintptr_t raw);
};

#endif