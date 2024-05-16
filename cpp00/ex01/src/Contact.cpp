/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:28:05 by crtorres          #+#    #+#             */
/*   Updated: 2024/05/16 17:05:32 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Contact.hpp"

Contact::Contact(void){
	return ;
}

Contact::~Contact(void){
	return ;
}

void	Contact::Name(std::string name){
	person_name = name;
}

void	Contact::Last_Name(std::string last_name){
	l_name = last_name;
}

void	Contact::Alias_Name(std::string name_alias){
	alias = name_alias;
}

void	Contact::Number_Phone(std::string n_phone){
	number = n_phone;
}

void	Contact::Secret_Name(std::string secret_n){
	secret = secret_n;
}

std::string	Contact::Get_First_Name(){
	return person_name;
}

std::string	Contact::Get_Last_Name(){
	return l_name;
}

std::string	Contact::Get_Alias_Name(){
	return alias;
}

std::string	Contact::Get_Number_Phone(){
	return number;
}

std::string	Contact::Get_Secret_Name(){
	return secret;
}
