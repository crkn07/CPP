/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/09/13 08:07:46 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main() {
    Data myStruct;
    myStruct.name = 'H';
    myStruct.n = 42;
    myStruct.value = 42.0f;

    uintptr_t value = Serialize::serialize(&myStruct);
    std::cout << "The value of myStruct is " << value << std::endl;

    Data* anotherStruct = reinterpret_cast<Data*>(value);
    std::cout << "The address of myStruct is: " << &myStruct << std::endl;
    std::cout << "The address of anotherStruct is: " << anotherStruct << std::endl;
    std::cout << "Result: " << (memcmp(anotherStruct, &myStruct, sizeof(*anotherStruct)) == 0
            ? "Addresses are identical"
            : "Addresses are different") << std::endl;
    return 0;
}