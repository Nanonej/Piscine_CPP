/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.cpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 16:58:51 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/02 19:14:46 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.class.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src) {
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {

	this->_target = rhs._target;
	return *this;
}

// ------------------------------ MEMBER FUNCTION ------------------------------

void	PresidentialPardonForm::execute(Bureaucrat const & bureaucrat) const {

	AForm::execute(bureaucrat);
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

// -----------------------------------------------------------------------------
