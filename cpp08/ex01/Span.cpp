/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:22:31 by cristiantor       #+#    #+#             */
/*   Updated: 2024/09/20 15:47:38 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _n(n) {}

Span::Span(const Span &src) : _n(src._n), _vec(src._vec) {}

Span &Span::operator=(const Span &src){
    if (this != &src){
        _n = src._n;
        _vec = src._vec;
    }
    return (*this);
}

Span::~Span() {}

void Span::addNumber(int number){
    if (_vec.size() < _n){
        _vec.push_back(number);
    }
    else{
        throw FullorNoVectorException();
    }
}

void Span::addNumberRange(std::vector<int> number){
    if (_vec.size() + number.size() <= _n){
        _vec.insert(_vec.end(), number.begin(), number.end());
    }
    else{
        throw FullorNoVectorException();
    }
}

int Span::shortestSpan(){
    if (_vec.size() < 2){
        throw NotEnoughNumbersException();
    }
    std::vector<int> sorted = _vec;
    std::sort(sorted.begin(), sorted.end());
    int shortest = sorted[1] - sorted[0];
    for (size_t i = 1; i < sorted.size(); i++){
        if (sorted[i] - sorted[i - 1] < shortest){
            shortest = sorted[i] - sorted[i - 1];
        }
    }
    return (shortest);
}

int Span::longestSpan(){
    if (_vec.size() < 2){
        throw NotEnoughNumbersException();
    }
    std::vector<int> sorted = _vec;
    std::sort(sorted.begin(), sorted.end());
    return (sorted[sorted.size() - 1] - sorted[0]);
}