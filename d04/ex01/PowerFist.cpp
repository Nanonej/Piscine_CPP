/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 16:04:00 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/30 18:32:08 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::PowerFist(PowerFist const & src) : AWeapon(src) {
	*this = src;
}

PowerFist::~PowerFist() {}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

PowerFist &	PowerFist::operator=(PowerFist const & rhs) {

	this->_name = rhs.getName();
	this->_apCost = rhs.getAPCost();
	this->_damage = rhs.getDamage();

	return *this;
}

// ------------------------------ MEMBER FUNCTION ------------------------------

void	PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

// -----------------------------------------------------------------------------
