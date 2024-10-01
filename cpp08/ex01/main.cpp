/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:51:37 by cristiantor       #+#    #+#             */
/*   Updated: 2024/09/20 16:12:30 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(){
	try{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(9);
		sp.addNumber(15);
		sp.addNumber(2);
		sp.addNumber(3);
		std::cout << "sp Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "sp longest span: " << sp.longestSpan() << std::endl;

		Span sp1(10);
    	    sp1.addNumber(10);
    	    sp1.addNumber(20);
    	    sp1.addNumber(21);
    	    sp1.addNumber(70);
    	    std::cout << "sp1 Shortest span: " << sp1.shortestSpan() << "\n";
    	    std::cout << "sp1 Longest span: " << sp1.longestSpan() << "\n\n";

		Span sp2 = Span(100);
		sp2.addNumberRange(std::vector<int>(100, 1));
		sp2.printVector();
		std::cout << "sp2 Shortest span: " << sp2.shortestSpan() << std::endl;
		std::cout << "sp2 longest span: " << sp2.longestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}