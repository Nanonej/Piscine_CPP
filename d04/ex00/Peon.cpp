/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 14:03:26 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/30 14:28:23 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

Peon::Peon() : Victim() {}

Peon::Peon(std::string name) : Victim(name) {

	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & src) : Victim(src) {

	*this = src;

	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {

	std::cout << "Bleuark..." << std::endl;
}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

Peon &	Peon::operator=(Peon const & rhs) {

	this->_name = rhs.getName();

	return *this;
}

std::ostream &	operator<<(std::ostream & o, Peon const & rhs) {

	o << "I am " << rhs.getName() << " and I like otters !" << std::endl;

	return o;
}

// ------------------------------ MEMBER FUNCTION ------------------------------

void		Peon::getPolymorphed() const {

	std::cout << \
		this->_name << " has been turned into a pink pony !" << \
	std::endl;
}

// -----------------------------------------------------------------------------
