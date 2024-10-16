/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/10/17 12:34:38 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"
#include "AAnimal.hpp"

int main()
{
	std::cout << std::endl << "--------- DOG ---------" << std::endl;
	Dog	*originalDog = new Dog();
	Dog	copiedDog(*originalDog);
	const Dog *ptrDog = originalDog;
	ptrDog->makeSound();
	delete ptrDog;
	std::cout << std::endl << "--------- CAT ---------" << std::endl;
	Cat	*originalCat = new Cat();
	Cat	copiedCat(*originalCat);
	const Cat *ptrCat = originalCat;
	ptrCat->makeSound();
	delete ptrCat;
	return 0;
}