/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:05:32 by cristiantor       #+#    #+#             */
/*   Updated: 2024/09/17 15:22:58 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
	try{
		Array<int> array(5);
		Array<int> array2(5);
		Array<int> array3(5);

		for (size_t i = 0; i < array.size(); i++){
			array[i] = i;
			array2[i] = i + 1;
			array3[i] = i + 2;
		}

		for (size_t i = 0; i < array.size(); i++){
			std::cout << array[i] << " ";
		}
		std::cout << std::endl;

		for (size_t i = 0; i < array2.size(); i++){
			std::cout << array2[i] << " ";
		}
		std::cout << std::endl;

		for (size_t i = 0; i < array3.size(); i++){
			std::cout << array3[i] << " ";
		}
		std::cout << std::endl;

		array2 = array;
		for (size_t i = 0; i < array2.size(); i++){
			std::cout << array2[i] << " ";
		}
		std::cout << std::endl;

		array2[0] = 42;
		for (size_t i = 0; i < array2.size(); i++){
			std::cout << array2[i] << " ";
		}
		std::cout << std::endl;

		array2[5] = 42;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}