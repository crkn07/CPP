/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:05:32 by cristiantor       #+#    #+#             */
/*   Updated: 2024/09/17 15:06:57 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int main(){
    try{    
        std::vector<int>arr(4);
        arr[0] = 1;
        arr[1] = 22;
        arr[2] = 33;
        arr[3] = 44;
        easyfind(arr, 22);
    }
    catch(const std::exception &e){
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << "-------------------------" << std::endl;
    try{    
        std::vector<int>arr(5);
        arr[0] = 1;
        arr[1] = 22;
        arr[2] = 33;
        arr[3] = 44;
        arr[4] = 55;
        easyfind(arr, 122);
    }
    catch(const std::exception &e){
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return (0);
}