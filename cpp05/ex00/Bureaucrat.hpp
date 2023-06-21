/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 11:34:43 by mkovoor           #+#    #+#             */
/*   Updated: 2023/06/21 12:16:32 by mkovoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include<iostream>


class Bureaucrat
{
	private:

		const std::string _name;
		int	_grade;
		Bureaucrat()

	public:
		Bureaucrat(std::strng name);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();		
		Bureaucrat(Bureaucrat &copy);
		Bureaucrat &operator=(constBureaucrat &rhs);
		~Bureaucrat();
		
		getName();
		getGrade();
		incrementGrade(int i);
		decrementGrade(int i);
		class GradeTooHighException: public std::exception
		{
			public:
				char *what () const throw();
		}
		class GradeTooLowException: public std::exception
		{
			public:
				char *what() const throw();
		}
		
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const&rhs);
#endif