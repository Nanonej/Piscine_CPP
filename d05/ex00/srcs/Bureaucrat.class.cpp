/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 10:06:39 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/02 12:54:20 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

Bureaucrat::Bureaucrat() : _name("John Smith"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, size_t grade) : _name(name) {

	if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	} else if (grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	} else {
		this->_grade = grade;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name("John Smith") {
	*this = src;
}

Bureaucrat::~Bureaucrat() {}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & rhs) {

	this->_grade = rhs._grade;
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs) {

	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;

	return o;
}

// ------------------------------ MEMBER FUNCTION ------------------------------

std::string const	Bureaucrat::getName() const {
	return this->_name;
}

size_t				Bureaucrat::getGrade() const {
	return this->_grade;
}

void				Bureaucrat::setGrade(size_t grade) {

	if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	} else if (grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	} else {
		this->_grade = grade;
	}
}

void				Bureaucrat::incrementGrade() {

	if (this->_grade - 1 < 1) {
		throw Bureaucrat::GradeTooHighException();
	} else {
		this->_grade--;
	}
}

void				Bureaucrat::decrementGrade() {

	if (this->_grade + 1 > 150) {
		throw Bureaucrat::GradeTooLowException();
	} else {
		this->_grade++;
	}
}

// ------------------------------- NESTED CLASS --------------------------------

Bureaucrat::GradeTooHighException::GradeTooHighException() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(Bureaucrat::GradeTooHighException const & src) {
	*this = src;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException &	Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const & rhs) {

	(void)rhs;
	return *this;
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return "Maximum grade is 1";
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException const & src) {
	*this = src;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException &	Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const & rhs) {

	(void)rhs;
	return *this;
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return "Minimum grade is 150";
}

// -----------------------------------------------------------------------------
