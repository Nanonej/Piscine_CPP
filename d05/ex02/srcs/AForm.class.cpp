/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 13:10:26 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/02 18:46:04 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.class.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

AForm::AForm() :	_name("N/A"), _isSigned(false), \
					_reqGradeToSign(1), _reqGradeToExec(1) {}

AForm::AForm(std::string name, size_t reqGradetoSign, size_t reqGradetoExec) : \
	_name(name), _isSigned(false), _reqGradeToSign(reqGradetoSign), \
	_reqGradeToExec(reqGradetoExec) {

	if (reqGradetoSign > 150 || reqGradetoExec > 150) {
		throw(AForm::GradeTooLowException());
	} else if (reqGradetoSign < 1 || reqGradetoExec < 1) {
		throw(AForm::GradeTooHighException());
	}
}


AForm::AForm(AForm const & src) :	_name("N/A"), \
									_reqGradeToSign(1), _reqGradeToExec(1) {
	*this = src;
}

AForm::~AForm() {}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

AForm &	AForm::operator=(AForm const & rhs) {

	this->_isSigned = rhs.getIsSigned();
	return *this;
}

std::ostream &	operator<<(std::ostream & o, AForm const & rhs) {

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

std::string	AForm::getName() const {
	return this->_name;
}

bool		AForm::getIsSigned() const {
	return this->_isSigned;
}

size_t		AForm::getReqGradeToSign() const {
	return this->_reqGradeToSign;
}

size_t		AForm::getReqGradeToExec() const {
	return this->_reqGradeToExec;
}

void		AForm::beSigned(Bureaucrat const & bureaucrat) {

	if (bureaucrat.getGrade() > this->_reqGradeToSign) {
		throw AForm::GradeTooLowException();
	} else {
		this->_isSigned = true;
	}
}

void		AForm::execute( Bureaucrat const & executor ) const {

	if (this->_isSigned == false) {
		throw AForm::FormNotSigned();
	} else if (executor.getGrade() > this->_reqGradeToExec) {
		throw AForm::GradeTooLowException();
	}
}

// ------------------------------- NESTED CLASS --------------------------------

AForm::GradeTooHighException::GradeTooHighException() {}

AForm::GradeTooHighException::GradeTooHighException(AForm::GradeTooHighException const & src) {
	*this = src;
}

AForm::GradeTooHighException::~GradeTooHighException() throw() {}

AForm::GradeTooHighException &	AForm::GradeTooHighException::operator=(AForm::GradeTooHighException const & rhs) {

	(void)rhs;
	return *this;
}

const char * AForm::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

AForm::GradeTooLowException::GradeTooLowException() {}

AForm::GradeTooLowException::GradeTooLowException(AForm::GradeTooLowException const & src) {
	*this = src;
}

AForm::GradeTooLowException::~GradeTooLowException() throw() {}

AForm::GradeTooLowException &	AForm::GradeTooLowException::operator=(AForm::GradeTooLowException const & rhs) {

	(void)rhs;
	return *this;
}

const char * AForm::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

AForm::FormNotSigned::FormNotSigned() {}

AForm::FormNotSigned::FormNotSigned(AForm::FormNotSigned const & src) {
	*this = src;
}

AForm::FormNotSigned::~FormNotSigned() throw() {}

AForm::FormNotSigned &	AForm::FormNotSigned::operator=(AForm::FormNotSigned const & rhs) {

	(void)rhs;
	return *this;
}

const char * AForm::FormNotSigned::what() const throw() {
	return "Form is not signed";
}

// -----------------------------------------------------------------------------
