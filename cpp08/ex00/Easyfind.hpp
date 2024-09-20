/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:15:50 by cristiantor       #+#    #+#             */
/*   Updated: 2024/09/17 15:05:23 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

class   NotFoundException : public std::exception{
    public:
        virtual const char *what() const throw(){
            return ("Element not found");
        }
};

template <typename Template>
int easyfind(Template &container, int value){
    typename Template::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end()){
        throw NotFoundException();
    }
    std::cout << "Element found in vec: " << *it << std::endl;
    return (*it);
}

#endif