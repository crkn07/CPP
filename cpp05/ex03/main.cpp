/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/08/22 16:21:40 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(){
	try {
        // Crear Bureaucrats
        Bureaucrat lowLevel("LowLevel", 150);
        Bureaucrat midLevel("MidLevel", 75);
        Bureaucrat highLevel("HighLevel", 1);

        // Crear Formularios
        ShrubberyCreationForm shrubbery("Home");
        RobotomyRequestForm robotomy("Bender");
        PresidentialPardonForm pardon("Zaphod");

        // Probar firma y ejecución con diferentes niveles de Bureaucrat
        std::cout << GREEN << "Testing ShrubberyCreationForm" << RESET << std::endl;
        try{
            shrubbery.beSigned(lowLevel);
            lowLevel.executeForm(shrubbery);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        try{
            shrubbery.beSigned(midLevel);
			shrubbery.execute(midLevel);
            midLevel.executeForm(shrubbery);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        std::cout << GREEN << "Testing RobotomyRequestForm" << RESET << std::endl;
        try{
            robotomy.beSigned(midLevel);
            midLevel.executeForm(robotomy);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        try{
            robotomy.beSigned(highLevel);
            highLevel.executeForm(robotomy);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
		std::cout << GREEN << "Testing PresidentialPardonForm" << RESET << std::endl;
        try {
            pardon.beSigned(highLevel);
            highLevel.executeForm(pardon);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        // Probar Intern creando formularios
        Intern someIntern;
        Aform* rrf;
        rrf = someIntern.makeForm("Bender", "robotomy request form");
        if (rrf) {
            try {
                rrf->beSigned(highLevel);
                highLevel.executeForm(*rrf);
            } catch (std::exception &e) {
                std::cout << e.what() << std::endl;
            }
            delete rrf;
        }

    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}