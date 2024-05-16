/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 15:17:51 by crtorres          #+#    #+#             */
/*   Updated: 2024/05/16 16:43:50 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook{
	private:
	Contact	list[8];
	
	public:
	PhoneBook();
	~PhoneBook();

	Contact	Get_Contact(int i);
	void	SetEmptiness(Contact contact);
	void	Reset_Object(Contact contact);
	void	New_Contact(int i);
	int		Search_Info(Contact list[8]);
	int		Search(int elements);
	std::string	 formatColumn(std::string str);
};

#endif