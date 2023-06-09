/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 08:13:18 by mkovoor           #+#    #+#             */
/*   Updated: 2023/07/05 12:28:19 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include<iostream>
#include<string>
#include<stdexcept>
#include"Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:

		const std::string  _name;
		bool _isSigned;
		const int _gradeToSign;
		const int _gradeToExec;
		Form();
	
	public:
		Form(std::string name, int signGrade, int execGrade);
		~Form();
		Form(const Form &copy);
		Form &operator=(const Form &rhs);

		std::string getName() const;
		bool getIsSigned();
		int getGradeToSign() const;
		int getGradeToExec() const;

		class GradeTooHighException: public std::exception
		{
			public:
				const char *what () const throw();
		};

		class GradeTooLowException: public std::exception
		{
			public:
				const char *what() const throw();
		};

		class FormAlreadySignedException: public std::exception
		{
			public:
				const char *what () const throw();
		};

		void beSigned(Bureaucrat *bureaucrat);
};

std::ostream &operator<<(std::ostream &os, Form *form);

#endif
