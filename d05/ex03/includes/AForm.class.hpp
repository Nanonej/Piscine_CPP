/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 13:10:28 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/02 18:30:54 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.class.hpp"

class Bureaucrat;

class AForm {

public:

	AForm(std::string name, size_t reqGradetoSign, size_t reqGradetoExec);
	AForm(AForm const & src);
	virtual ~AForm();

	AForm &	operator=(AForm const & rhs);

	std::string		getName() const;
	bool			getIsSigned() const;
	size_t			getReqGradeToSign() const;
	size_t			getReqGradeToExec() const;
	void			beSigned(Bureaucrat const & bureaucrat);
	virtual void	execute(Bureaucrat const & bureaucrat) const = 0;

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

	class FormNotSigned : public std::exception {

	public:

		FormNotSigned();
		FormNotSigned(FormNotSigned const & src);
		virtual ~FormNotSigned() throw();

		FormNotSigned &	operator=(FormNotSigned const & rhs);

		virtual const char * what() const throw();

	};

private:

	std::string const	_name;
	bool				_isSigned;
	size_t const		_reqGradeToSign;
	size_t const		_reqGradeToExec;

	AForm();

};

std::ostream &	operator<<(std::ostream & o, AForm const & rhs);

#endif
