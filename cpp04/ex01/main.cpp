/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/06/18 14:39:25 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "-------------------" << std::endl;
	std::cout << "---- ANIMALS ------" << std::endl;
	std::cout << "-------------------" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	i->makeSound();
	j->makeSound();
	delete j;
	delete i;
	std::cout << "-------------------------" << std::endl;
	std::cout << "---- WRONG ANIMALS ------" << std::endl;
	std::cout << "-------------------------" << std::endl;
	const WrongAnimal* k = new WrongCat();
	k->makeSound();
	delete k;
	std::cout << "-------------------" << std::endl;
	std::cout << "---- BRAIN --------" << std::endl;
	std::cout << "-------------------" << std::endl;
	Brain brain;
	Brain brain2 = brain;
	Brain brain3;
	brain3 = brain2;

	return 0;
}