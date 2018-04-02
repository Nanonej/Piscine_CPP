/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 19:48:53 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/02 20:02:50 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.class.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

Intern::Intern() {}

Intern::Intern(Intern const & src) {
	*this = src;
}

Intern::~Intern() {}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

Intern &	Intern::operator=(Intern const & rhs) {

	(void)rhs;
	return *this;
}

// ------------------------------ MEMBER FUNCTION ------------------------------

AForm *		Intern::makeForm(std::string formName, std::string formTarget) {

	if (formName.find("Presidential Pardon") != std::string::npos) {
		std::cout << "Intern creates PresidentialPardonForm" << std::endl;
		return new PresidentialPardonForm(formTarget);
	} if (formName.find("Robotomy Request") != std::string::npos) {
		std::cout << "Intern creates RobotomyRequestForm" << std::endl;
		return new RobotomyRequestForm(formTarget);
	} if (formName.find("Shrubbery Creation") != std::string::npos) {
		std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
		return new ShrubberyCreationForm(formTarget);
	}

	std::cout << "Intern don't know this form" << std::endl;
	return NULL;
}

// -----------------------------------------------------------------------------
