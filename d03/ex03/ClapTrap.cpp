/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 15:56:53 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/29 16:17:50 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

ClapTrap::ClapTrap() :	_hp(100), _maxHp(100), _energy(100), _maxEnergy(100), \
						_lvl(1), _name("ClapTrap"), _melee(30), _ranged(20), \
						_armor(5) {

std::cout << this->_name << " initialization." << std::endl << std::endl;
}

ClapTrap::ClapTrap(std::string name) :	_hp(100), _maxHp(100), _energy(100), \
										_maxEnergy(100), _lvl(1), _name(name), \
										_melee(30), _ranged(20), _armor(5) {

std::cout << this->_name << " initialization." << std::endl << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {

std::cout << src._name << " initialization." << std::endl << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap() {

std::cout << this->_name << " destruction." << std::endl << std::endl;
}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs) {

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

unsigned int	ClapTrap::getHp() {
	return this->_hp;
}

unsigned int	ClapTrap::getEnergy() {
	return this->_energy;
}

void	ClapTrap::rangedAttack(std::string const & target) {

	std::cout << \
		"FR4G-TP " << this->_name << " attacks " << target << \
		" at range, causing " << this->_ranged << " points of damage !" << \
	std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target) {

	std::cout << \
		"FR4G-TP " << this->_name << " attacks " << target << \
		" at melee, causing " << this->_melee << " points of damage !" << \
	std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	amount = ((int)amount > this->_armor ? amount - this->_armor : 0 );

	std::cout << \
		"FR4G-TP " << this->_name << " take " << amount << \
		" points of damage !" << \
	std::endl;
	std::cout << "No fair! I wasn't ready !" << std::endl << std::endl;

	this->_hp = ( this->_hp > amount ? this->_hp - amount : 0 );
}

void	ClapTrap::beRepaired(unsigned int amount) {

	std::cout << \
		"FR4G-TP " << this->_name << " is being repaired and gain " << \
		amount << " hit points !" << \
	std::endl;
	std::cout << "Hit me, baby!" << std::endl << std::endl;

	if ((this->_maxHp - this->_hp) <= amount)
		this->_hp = this->_maxHp;
	else
		this->_hp += amount;
}

// -----------------------------------------------------------------------------
