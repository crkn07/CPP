/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:17:16 by cristiantor       #+#    #+#             */
/*   Updated: 2024/09/17 15:23:55 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
#include <iostream>

template <typename Template, typename Func>
void	iter(Template *array, size_t length, Func function){
	for (size_t i = 0; i < length; i++){
		function(array[i]);
	}
}

template <typename Template>
void	printarray(Template const &element){
	std::cout << element << std::endl;
}

#endif