/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 10:05:02 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/02 16:26:42 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

# include <string>
# include <ostream>
# include <iostream>
# include <exception>
# include "Form.class.hpp"

class Form;

class Bureaucrat {

public:

	Bureaucrat(std::string name, size_t grade);
	Bureaucrat(Bureaucrat const & src);
	virtual ~Bureaucrat();

	Bureaucrat &	operator=(Bureaucrat const & rhs);

	std::string const	getName() const;
	size_t				getGrade() const;
	void				setGrade(size_t grade);
	void				incrementGrade();
	void				decrementGrade();
	void				signForm(Form & form) const;

	class GradeTooHighException : public std::exception {

	public:

		GradeTooHighException();
		GradeTooHighException(GradeTooHighException const & src);
		virtual ~GradeTooHighException() throw();

		GradeTooHighException &	operator=(GradeTooHighException const & rhs);

		virtual const char * what() const throw();

	};

	class GradeTooLowException : public std::exception {

	public:

		GradeTooLowException();
		GradeTooLowException(GradeTooLowException const & src);
		virtual ~GradeTooLowException() throw();

		GradeTooLowException &	operator=(GradeTooLowException const & rhs);

		virtual const char * what() const throw();

	};

private:

	std::string const	_name;
	size_t				_grade;

	Bureaucrat();

};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
