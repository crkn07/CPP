/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:27:50 by crtorres          #+#    #+#             */
/*   Updated: 2024/05/09 16:35:25 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PhoneBook.hpp"

PhoneBook::PhoneBook(void){
	return ;
}

PhoneBook::~PhoneBook(void){
	return ;
}

Contact	PhoneBook::Get_Contact(int i){
	return this->list[i];
}

void	PhoneBook::Reset_Object(Contact contact){
	contact.Name("");
	contact.Last_Name("");
	contact.Alias_Name("");
	contact.Number_Phone("");
	contact.Secret_Name("");
	return ;
}

void	PhoneBook::New_Contact(int i){
	std::string	str;

	PhoneBook::list[i] = Contact();
	std::cin.clear();
	std::cin.ignore(10000,'\n');
	std::cout << "Add new contact\n" << std::endl;
	PhoneBook::list[i].Name(str);
	while(PhoneBook::list[i].Get_First_Name().empty()){
		std::cout << "FIRST NAME" << std::endl;
		std::getline(std::cin, str);
		PhoneBook::list[i].Name(str);
		if (std::cin.eof())
			exit (EXIT_FAILURE);
	}
	while(PhoneBook::list[i].Get_Last_Name().empty()){
		std::cout << "LAST NAME" << std::endl;
		std::getline(std::cin, str);
		PhoneBook::list[i].Last_Name(str);
		if (std::cin.eof())
			exit (EXIT_FAILURE);
	}
	while(PhoneBook::list[i].Get_Alias_Name().empty()){
		std::cout << "NICKNAME" << std::endl;
		std::getline(std::cin, str);
		PhoneBook::list[i].Alias_Name(str);
		if (std::cin.eof())
			exit(EXIT_FAILURE);
	}
	while(PhoneBook::list[i].Get_Number_Phone().empty()){
		std::cout << "PHONE NUMBER" << std::endl;
		std::getline(std::cin, str);
		PhoneBook::list[i].Number_Phone(str);
		if (std::cin.eof())
			exit (EXIT_FAILURE);
	}
	while(PhoneBook::list[i].Get_Secret_Name().empty()){
		std::cout << "DARKEST SECRET" << std::endl;
		std::getline(std::cin, str);
		PhoneBook::list[i].Secret_Name(str);
		if (std::cin.eof())
			exit(EXIT_FAILURE);
	}
	std::cout << "Contact added successfully" << std::endl;
}

int	PhoneBook::Search_Info(Contact list[8]){
	std::string	n;
	int 	num;
	std::cout << "Enter a number to open contact's information: ";
	std::cin >> n;
	if (std::cin.eof())
		exit(EXIT_FAILURE);
	num = atoi(n.c_str());
	if (num <= 0 || num >= 9 || list[num - 1].Get_First_Name().length() == 0){
		std::cout << "Invalid number, please check it" << std::endl;
		return (1);
	}
	std::cout << "Name: " << list[num - 1].Get_First_Name() << std::endl;
	std::cout << "Last name: " << list[num - 1].Get_Last_Name() << std::endl;
	std::cout << "Nickname: " << list[num - 1].Get_Alias_Name() << std::endl;
	std::cout << "Phone number: " << list[num - 1].Get_Number_Phone() << std::endl;
	std::cout << "darkest secret: " << list[num - 1].Get_Secret_Name() << std::endl;
	return 1;
}

std::string	formatColumn(std::string str){
	if (str.size() > 10)
		str = str.substr(0, 9) + ".";
	return str;
}

int	PhoneBook::Search(int elements){
	 std::cout << "|" << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
    std::cout << "|" << std::setw(10) << "----------" << "|";
    std::cout << std::setw(10) << "----------" << "|";
    std::cout << std::setw(10) << "----------" << "|";
    std::cout << std::setw(10) << "----------" << "|" << std::endl;
	std::cin.clear();
	std::cin.ignore(10000,'\n');
	if (elements > 8)
		elements = 8;
	for (int i = 1; i <= elements; i++){
		std::cout << "|" << std::setw(10) << i << "|";
		std::cout << std::setw(10) << formatColumn(list[i - 1].Get_First_Name()) << "|";
		std::cout << std::setw(10) << formatColumn(list[i - 1].Get_Last_Name()) << "|";
		std::cout << std::setw(10) << formatColumn(list[i - 1].Get_Alias_Name()) << "|" << std::endl;
		std::cout << "|" << std::setw(10) << "----------" << "|";
        std::cout << std::setw(10) << "----------" << "|";
        std::cout << std::setw(10) << "----------" << "|";
        std::cout << std::setw(10) << "----------" << "|" << std::endl;
	}
	if (Search_Info(list))
		return 1;
	return 0;
}