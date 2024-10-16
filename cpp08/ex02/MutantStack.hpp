/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 08:59:00 by crtorres          #+#    #+#             */
/*   Updated: 2024/10/15 10:11:57 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>{
	public:
		typedef typename std::deque<T>::reverse_iterator iterator;
		typedef typename std::deque<T>::iterator reverse_iterator;
		MutantStack() : std::stack<T>()
		{
			std::cout << "MutantStack default constructor" << std::endl;	
		};
		MutantStack(const MutantStack &src) : std::stack<T>(src)
		{
			std::cout << "MutantStack copy constructor" << std::endl;
		};
		MutantStack &operator=(const MutantStack &src)
		{
			
			std::cout << "MutantStack assignation operator" << std::endl;
			if (this != &src)
				std::stack<T>::operator=(src);
			return (*this);
		};
		~MutantStack()
		{
			std::cout << "MutantStack destructor" << std::endl;
		};
		iterator begin()
		{
			return (this->c.rbegin());
		}
		iterator end()
		{
			return (this->c.rend());
		}
		iterator rbegin()
		{
			return (this->c.begin());
		}
		iterator rend()
		{
			return (this->c.end());
		}
		
};


#endif