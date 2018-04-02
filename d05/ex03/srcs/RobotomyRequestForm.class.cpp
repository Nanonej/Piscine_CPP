/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 16:58:51 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/02 19:12:10 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.class.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src) {
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {

	this->_target = rhs._target;
	return *this;
}

// ------------------------------ MEMBER FUNCTION ------------------------------

void	RobotomyRequestForm::execute(Bureaucrat const & bureaucrat) const {

	AForm::execute(bureaucrat);
	std::cout << "*drilling noises*" << std::endl;
	if (rand() % 100 < 50) {
		std::cout << this->_target << " as been robotomized." << std::endl;
	} else {
		std::cout << "failure " << this->_target << " is dead..." << std::endl;
	}
}

// -----------------------------------------------------------------------------
