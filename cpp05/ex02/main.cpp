/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/08/22 16:20:02 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
   unsigned int grade = 145;

	try {
		Bureaucrat montenegro("Montenegro", grade);
		std::cout << montenegro << std::endl;
		std::cout << std::endl;

		ShrubberyCreationForm arvoreform("Formulario Arvore");
		montenegro.signForm(arvoreform);
		std::cout << arvoreform << std::endl;
		montenegro.signForm(arvoreform);
		montenegro.executeForm(arvoreform);
		std::cout << std::endl;

		RobotomyRequestForm robotform("Formulario Robot");
		std::cout << robotform << std::endl;
		montenegro.signForm(robotform);
		std::cout << robotform << std::endl;
		montenegro.executeForm(robotform);
		std::cout << std::endl;

		PresidentialPardonForm pardonform("Formulario Perdon");
		std::cout << pardonform << std::endl;
		montenegro.signForm(pardonform);
		std::cout << pardonform << std::endl;
		montenegro.executeForm(pardonform);
	}
    catch (Bureaucrat::GradeTooHighException &exception) {
		std::cerr << "[BUREAUCRAT]: GradeTooHighException: " << exception.what()
			<< std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &exception) {
		std::cerr << "[BUREAUCRAT]: GradeTooLowException: " << exception.what()
			<< std::endl;
	}
	catch (std::exception &exception){
        std::cout << exception.what() << std::endl;
    }
    try 
    {
        std::cout << "Example 2: form is signed" << std::endl;
        Bureaucrat b("BigBoss", 134);
        ShrubberyCreationForm form("best");
        form.beSigned(b);
        b.signForm(form);
        b.executeForm(form);
        form.execute(b);
        std::cout << std::endl;


        std::cout << "Example 3: everything should work here" << std::endl;
        Bureaucrat c("Igor", 1);
        PresidentialPardonForm hurdle("robots");
        hurdle.beSigned(c);
        hurdle.execute(c);
        c.signForm(hurdle);
        c.executeForm(hurdle); 
        std::cout << std::endl;
    } 
    catch (std::exception& err)
    {
        std::cout << err.what() << std::endl;
    }
    return (0);
}