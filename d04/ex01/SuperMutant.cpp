/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 16:57:05 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/30 17:10:41 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & src) : Enemy(src) {

	*this = src;

	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh ..." << std::endl;
}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

SuperMutant &	SuperMutant::operator=(SuperMutant const & rhs) {

	this->_hp = rhs._hp;
	this->_type = rhs._type;

	return *this;
}

// ------------------------------ MEMBER FUNCTION ------------------------------

void		SuperMutant::takeDamage(int damage) {

	damage -= 3;

	this->_hp = (damage < this->_hp ? damage : 0);
}

// -----------------------------------------------------------------------------
