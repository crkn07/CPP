/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:34:13 by crtorres          #+#    #+#             */
/*   Updated: 2024/02/13 18:50:28 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <stdlib.h>
#include <iomanip>

class Contact
{
	private:
		std::string	person_name;
		std::string	l_name;
		std::string	alias;
		std::string	number;
		std::string	secret;
	public:
		Contact(void);
		~Contact(void);
	
	void	Name(std::string);
	void	Last_Name(std::string);
	void	Alias_Name(std::string);
	void	Number_Phone(std::string);
	void	Secret_Name(std::string);
	
	std::string	Get_First_Name(void);
	std::string	Get_Last_Name(void);
	std::string	Get_Alias_Name(void);
	std::string	Get_Number_Phone(void);
	std::string	Get_Secret_Name(void);
};


#endif