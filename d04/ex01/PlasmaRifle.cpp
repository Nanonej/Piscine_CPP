/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 16:04:00 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/30 17:08:04 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) : AWeapon(src) {
	*this = src;
}

PlasmaRifle::~PlasmaRifle() {}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

PlasmaRifle &	PlasmaRifle::operator=(PlasmaRifle const & rhs) {

	this->_name = rhs.getName();
	this->_apCost = rhs.getAPCost();
	this->_damage = rhs.getDamage();

	return *this;
}

// ------------------------------ MEMBER FUNCTION ------------------------------

void	PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

// -----------------------------------------------------------------------------
