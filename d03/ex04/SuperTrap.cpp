/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 17:41:57 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/30 19:13:24 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "SuperTrap.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

SuperTrap::SuperTrap() : FragTrap(), NinjaTrap() {

	std::cout << \
		"It's a bird ! It's a plane ! No it's Supertrap !" << \
	std::endl << std::endl;

	this->_hp = FragTrap::_hp;
	this->_maxHp = FragTrap::_maxHp;
	this->_energy = NinjaTrap::_energy;
	this->_maxEnergy = NinjaTrap::_maxEnergy;
	this->_lvl = 1;
	this->_melee = NinjaTrap::_melee;
	this->_ranged = FragTrap::_ranged;
	this->_armor = FragTrap::_armor;
	this->_name = "Supertrap";
}

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name) {

	std::cout << \
		"It's a bird ! It's a plane ! No it's Supertrap !" << \
	std::endl << std::endl;

	this->_hp = FragTrap::_hp;
	this->_maxHp = FragTrap::_maxHp;
	this->_energy = NinjaTrap::_energy;
	this->_maxEnergy = NinjaTrap::_maxEnergy;
	this->_lvl = 1;
	this->_melee = NinjaTrap::_melee;
	this->_ranged = FragTrap::_ranged;
	this->_armor = FragTrap::_armor;
	this->_name = name;
}

SuperTrap::SuperTrap(SuperTrap const & src) : FragTrap(src), NinjaTrap(src) {

	std::cout << src._name << " ready to serve!" << std::endl << std::endl;

	*this = src;
}

SuperTrap::~SuperTrap() {

	std::cout << "Oh well. I'm dead." << std::endl << std::endl;
}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

SuperTrap &	SuperTrap::operator=(SuperTrap const & rhs) {

	this->_hp = rhs._hp;
	this->_maxHp = rhs._maxHp;
	this->_energy = rhs._energy;
	this->_maxEnergy = rhs._maxEnergy;
	this->_lvl = rhs._lvl;
	this->_name = rhs._name;
	this->_melee = rhs._melee;
	this->_ranged = rhs._ranged;
	this->_armor = rhs._armor;

	return *this;
}

// ------------------------------ MEMBER FUNCTION ------------------------------

void	SuperTrap::rangedAttack(std::string const & target) {
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target) {
	NinjaTrap::meleeAttack(target);
}

// -----------------------------------------------------------------------------
