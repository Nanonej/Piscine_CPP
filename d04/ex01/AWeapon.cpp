/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 16:04:00 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/30 17:08:10 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

AWeapon::AWeapon() {}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : \
	_name(name), _apCost(apcost), _damage(damage) {}

AWeapon::AWeapon(AWeapon const & src) {
	*this = src;
}

AWeapon::~AWeapon() {}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

AWeapon &	AWeapon::operator=(AWeapon const & rhs) {

	this->_name = rhs.getName();
	this->_apCost = rhs.getAPCost();
	this->_damage = rhs.getDamage();

	return *this;
}

// ------------------------------ MEMBER FUNCTION ------------------------------

std::string		AWeapon::getName() const {
	return this->_name;
}

int 			AWeapon::getAPCost() const {
	return this->_apCost;
}

int 			AWeapon::getDamage() const {
	return this->_damage;
}

// -----------------------------------------------------------------------------
