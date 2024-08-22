/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aform.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:35:56 by crtorres          #+#    #+#             */
/*   Updated: 2024/08/21 17:18:02 by cristiantor      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Aform {
	private:
		const std::string _name;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExecute;
		void CheckGrade(int grade);
		void CheckSigned(bool signedStatus);

	public:
		Aform();
		Aform(const std::string name, int gradeToSign, int gradeToExecute);
		Aform(const Aform &src);
		Aform &operator=(const Aform &src);
		virtual ~Aform();

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
		  public:
			virtual const char* what() const throw();
		};

		class FormNotSignedException : public std::exception {
			public:
				const char* what() const throw();
		};
		std::string getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		void beSigned(Bureaucrat &bureaucrat);
		void execute(Bureaucrat const &executor) const;
};

std::ostream &operator<<(std::ostream &out, const Aform &form);

#endif