/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:22:35 by cristiantor       #+#    #+#             */
/*   Updated: 2024/09/20 16:15:39 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <algorithm>
# include <iterator>
# include <exception>

class Span{
	private:
		unsigned int _n;
		std::vector<int> _vec;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &src);
		Span &operator=(const Span &src);
		~Span();
		void addNumber(int number);
		void addNumberRange(std::vector<int> number);
		int shortestSpan();
		int longestSpan();
		void printVector();
		class   FullorNoVectorException : public std::exception{
			public:
				const char *what() const throw();
		};
		class   NotEnoughNumbersException : public std::exception{
			public:
				virtual const char *what() const throw(){
					return ("Not enough numbers to calculate Span");
				}
		};
};

#endif