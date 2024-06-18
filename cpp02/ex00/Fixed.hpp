/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:39:50 by crtorres          #+#    #+#             */
/*   Updated: 2024/06/18 15:46:44 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class  Fixed{
	private:
		int _fixedPointValue;
		static const int _fractionalBits = 8;
	
	public:
		Fixed();
		Fixed(const Fixed &src);
		Fixed &operator=(const Fixed &src);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);
};
#endif