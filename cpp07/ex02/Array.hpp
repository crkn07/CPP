/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:37:43 by cristiantor       #+#    #+#             */
/*   Updated: 2024/09/17 15:23:17 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>
# include <string>

template <typename Template>
class   Array{
	private:
		Template    *_array;
		size_t      _size;
	public:
		Array() : _array(NULL), _size(0) {}
		Array(unsigned int n) : _array(new Template[n]), _size(n) {}
		Array(Array const &src) : _array(NULL), _size(0) { *this = src; }
		~Array() { delete [] _array; }

		Array &operator=(Array const &src){
			if (this != &src){
				delete [] _array;
				_array = new Template[src.size()];
				for (size_t i = 0; i < src.size(); i++){
					_array[i] = src._array[i];
				}
				_size = src.size();
			}
			return (*this);
		}

		Template &operator[](size_t index){
			if (index >= _size){
				throw std::exception();
			}
			return (_array[index]);
		}

		size_t  size() const { return (_size); }
};


#endif