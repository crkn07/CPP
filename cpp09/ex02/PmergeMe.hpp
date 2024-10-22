/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 08:59:00 by crtorres          #+#    #+#             */
/*   Updated: 2024/10/22 12:40:10 by crtorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <exception>
# include <deque>
# include <vector>
# include <cmath>

class	PmergeMe
{
	private:
		std::vector<int> m_vec;
		std::deque<int> m_deque;
	public:
		std::vector<int>& getVec();
		std::deque<int>& getDeque();
		void printVec();
		void sortelements();
		void insertelements(std::vector<int>::iterator pos, int elements, std::vector<int>& container);
		
		class negativeValue : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		PmergeMe(std::vector<int>InputElem);
		PmergeMe(PmergeMe const &src);
		PmergeMe &operator=(PmergeMe const &src);
		~PmergeMe();
};

#endif