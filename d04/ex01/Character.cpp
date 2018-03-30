/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 17:20:05 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/30 18:37:32 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

Character::Character() {}

Character::Character(std::string const & name) :	_name(name), _ap(40), \
													_weapon(NULL) {}

Character::Character(Character const & src) {
	*this = src;
}

Character::~Character() {}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

Character &	Character::operator=(Character const & rhs) {

	this->_name = rhs._name;
	this->_ap = rhs._ap;
	this->_weapon = rhs._weapon;

	return *this;
}

std::ostream &	operator<<(std::ostream & o, Character const & rhs) {

	if (!rhs.getWeapon()) {
		o << \
			rhs.getName() << " has " << rhs.getAp() << " AP and is unarmed" <<\
		 std::endl;
	} else {
		o << \
			rhs.getName() << " has " << rhs.getAp() << " AP and wields a " << \
			rhs.getWeapon()->getName() <<\
		 std::endl;
	}

	return o;
}

// ------------------------------ MEMBER FUNCTION ------------------------------



std::string	Character::getName() const {
	return this->_name;
}

int			Character::getAp() const {
	return this->_ap;
}

AWeapon*	Character::getWeapon() const {
	return this->_weapon;
}

void		Character::recoverAP() {
	this->_ap = (this->_ap < 30 ? this->_ap + 10 : 40);
}

void		Character::equip(AWeapon *weapon) {
	this->_weapon = weapon;
}

void		Character::attack(Enemy *enemy) {

	if (!this->_weapon || this->_ap < this->_weapon->getAPCost()) {
		return ;
	} else {
		this->_ap -= this->_weapon->getAPCost();
		enemy->takeDamage(this->_weapon->getDamage());

		std::cout << \
			this->_name << " attacks " << enemy->getType() << " with a " << \
			this->_weapon->getName() << \
		std::endl;
		this->_weapon->attack();

		if (enemy->getHP() <= 0) {
			delete enemy;
		}
	}
}

// -----------------------------------------------------------------------------
