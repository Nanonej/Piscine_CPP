/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 13:16:39 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/30 15:14:37 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Victim.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

Victim::Victim() {}

Victim::Victim(std::string name) : _name(name) {

	std::cout << \
		"Some random victim called "<< name <<" just popped !" << \
	std::endl;
}

Victim::Victim(Victim const & src) {

	*this = src;

	std::cout << \
		"Some random victim called "<< this->_name <<" just popped !" << \
	std::endl;
}

Victim::~Victim() {

	std::cout << \
		"Victim " << this->_name << " just died for no apparent reason !" << \
	std::endl;
}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

Victim &	Victim::operator=(Victim const & rhs) {

	this->_name = rhs.getName();

	return *this;
}

std::ostream &	operator<<(std::ostream & o, Victim const & rhs) {

	o << "I am " << rhs.getName() << " and I like otters !" << std::endl;

	return o;
}

// ------------------------------ MEMBER FUNCTION ------------------------------

std::string	Victim::getName() const {
	return this->_name;
}

void		Victim::getPolymorphed() const {

	std::cout << \
		this->_name << " has been turned into a cute little sheep !" << \
	std::endl;
}

// -----------------------------------------------------------------------------
