/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/09/16 16:23:26 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate(void) {
    srand(time(NULL));
    int random = rand() % 3;
    switch (random)
    {
        case 0:
            std::cout << "A class generated" << std::endl;
            return new A;
        case 1:
            std::cout << "B class generated" << std::endl;
            return new B;
        case 2:
            std::cout << "C class generated" << std::endl;
            return new C;
    }
    return NULL;
}

void    identify(Base *p) {
    if (dynamic_cast<A *>(p))
        std::cout << "A class identified" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B class identified" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C class identified" << std::endl;
    else
        std::cout << "Unknown class" << std::endl;
}

void    identify(Base &p) {
    try {
        (void)dynamic_cast<A &>(p);
        std::cout << "A class identified" << std::endl;
    }
    catch (std::exception &e){}
    try {
        (void)dynamic_cast<B &>(p);
        std::cout << "B class identified" << std::endl;
    }
    catch (std::exception &e){}
    try {
        (void)dynamic_cast<C &>(p);
        std::cout << "C class identified" << std::endl;
    }
    catch (std::exception &e){}
}

int main() {
    Base *base = generate();
    std::cout << "Identifying with pointer" << std::endl;
    identify(base);
    std::cout << "Identifying with refence" << std::endl;
    identify(*base);

    delete base;
    return 0;
}