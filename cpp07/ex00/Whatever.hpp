/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:51:00 by cristiantor       #+#    #+#             */
/*   Updated: 2024/09/17 15:24:21 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
#include <iostream>
#include <string>

template <typename Template>

void	swap(Template &a, Template &b){
	Template tmp = a;
	a = b;
	b = tmp;
}

template <typename Template>
Template	min(Template a, Template b){
	return (a < b ? a : b);
}

template <typename Template>
Template	max(Template a, Template b){
	return (a > b ? a : b);
}

#endif