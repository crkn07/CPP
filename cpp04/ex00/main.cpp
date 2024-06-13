/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/06/13 19:30:02 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
meta->makeSound();
i->makeSound(); //will output the cat sound!
j->makeSound();

delete meta;
delete j;
delete i;

const	WrongAnimal* nova = new WrongAnimal();
const	WrongAnimal* k = new WrongCat();
const	WrongCat* l = new WrongCat();
std::cout << k->getType() << " " << std::endl;
std::cout << l->getType() << " " << std::endl;
nova->makeSound();
k->makeSound();
std::cout << "NOTE: output of WrongAnimal makeSound() member function"
	<< std::endl;
l->makeSound();
std::cout << "NOTE: didn't call the WrongCat destructor" << std::endl;
delete nova;
delete k;
delete l;
return 0;
}