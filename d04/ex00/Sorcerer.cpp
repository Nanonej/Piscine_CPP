/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:13:17 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/30 14:29:02 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Sorcerer.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

Sorcerer::Sorcerer() {}

Sorcerer::Sorcerer(std::string name, std::string title) :	_name(name), \
															_title(title) {

	std::cout << name << ", " << title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src) {

	*this = src;

	std::cout << \
		this->_name << ", " << this->_title << ", is born !" << \
	std::endl;
}

Sorcerer::~Sorcerer() {

	std::cout << \
		this->_name << ", " << this->_title << ", is dead." << \
		" Consequences will never be the same !" << \
	std::endl;
}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

Sorcerer &		Sorcerer::operator=(Sorcerer const & rhs) {

	this->_name = rhs.getName();
	this->_title = rhs.getTitle();

	return *this;
}

std::ostream &	operator<<(std::ostream & o, Sorcerer const & rhs) {

	o << \
		"I am " << rhs.getName() << ", " << rhs.getTitle() << \
		", and I like ponies !" << std::endl;

	return o;
}


// ------------------------------ MEMBER FUNCTION ------------------------------

std::string	Sorcerer::getName() const {
	return this->_name;
}

std::string	Sorcerer::getTitle() const {
	return this->_title;
}

void		Sorcerer::polymorph(Victim const & victim) const {
	victim.getPolymorphed();
}

// -----------------------------------------------------------------------------
