/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:29:21 by cristiantor       #+#    #+#             */
/*   Updated: 2024/09/17 15:23:35 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main(){
	int array[] = {1, 2, 3, 4, 5};
	char array2[] = {'a', 'b', 'c', 'd', 'e'};
	float array3[] = {1.1, 2.2, 3.3, 4.4, 5.5};

	iter(array, 5, printarray<int>);
	iter(array2, 5, printarray<char>);
	iter(array3, 5, printarray<float>);

	return (0);
}