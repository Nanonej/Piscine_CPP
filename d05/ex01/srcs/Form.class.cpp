/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 13:10:26 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/02 16:40:15 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.class.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

Form::Form() :	_name("N/A"), _isSigned(false), \
				_reqGradeToSign(1), _reqGradeToExec(1) {}

Form::Form(std::string name, size_t reqGradetoSign, size_t reqGradetoExec) : \
	_name(name), _isSigned(false), _reqGradeToSign(reqGradetoSign), \
	_reqGradeToExec(reqGradetoExec) {

	if (reqGradetoSign > 150 || reqGradetoExec > 150) {
		throw(Form::GradeTooLowException());
	} else if (reqGradetoSign < 1 || reqGradetoExec < 1) {
		throw(Form::GradeTooHighException());
	}
}


Form::Form(Form const & src) :	_name("N/A"), \
								_reqGradeToSign(1), _reqGradeToExec(1) {
	*this = src;
}

Form::~Form() {}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

Form &	Form::operator=(Form const & rhs) {

	this->_isSigned = rhs.getIsSigned();
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Form const & rhs) {

	o << \
		"The form " << rhs.getName() << \
		(rhs.getIsSigned() ? " is" : " is not") << \
		" signed and require grade " << rhs.getReqGradeToSign() << \
		" to be signed and grade " << rhs.getReqGradeToExec() << \
		" to be executed." << \
	std::endl;

	return o;
}

// ------------------------------ MEMBER FUNCTION ------------------------------

std::string	Form::getName() const {
	return this->_name;
}

bool		Form::getIsSigned() const {
	return this->_isSigned;
}

size_t		Form::getReqGradeToSign() const {
	return this->_reqGradeToSign;
}

size_t		Form::getReqGradeToExec() const {
	return this->_reqGradeToExec;
}

void		Form::beSigned(Bureaucrat const & bureaucrat) {

	if (bureaucrat.getGrade() > this->_reqGradeToSign) {
		throw Form::GradeTooLowException();
	} else {
		this->_isSigned = true;
	}
}

// ------------------------------- NESTED CLASS --------------------------------

Form::GradeTooHighException::GradeTooHighException() {}

Form::GradeTooHighException::GradeTooHighException(Form::GradeTooHighException const & src) {
	*this = src;
}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooHighException &	Form::GradeTooHighException::operator=(Form::GradeTooHighException const & rhs) {

	(void)rhs;
	return *this;
}

const char * Form::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

Form::GradeTooLowException::GradeTooLowException() {}

Form::GradeTooLowException::GradeTooLowException(Form::GradeTooLowException const & src) {
	*this = src;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooLowException &	Form::GradeTooLowException::operator=(Form::GradeTooLowException const & rhs) {

	(void)rhs;
	return *this;
}

const char * Form::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

// -----------------------------------------------------------------------------
