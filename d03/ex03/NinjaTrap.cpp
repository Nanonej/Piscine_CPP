/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 17:00:57 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/29 17:27:35 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "NinjaTrap.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

NinjaTrap::NinjaTrap() :	ClapTrap() {

	std::cout << \
		"Hey everybody! Check out my package!" << \
	std::endl << std::endl;

	this->_hp = 60;
	this->_maxHp = 60;
	this->_energy = 120;
	this->_maxEnergy = 120;
	this->_melee = 60;
	this->_ranged = 5;
	this->_armor = 0;
	this->_name = "Ninjatrap";
}

NinjaTrap::NinjaTrap(std::string name) :	ClapTrap(name) {

	std::cout << name << ": I'm a robot ninja!" << std::endl << std::endl;

	this->_hp = 60;
	this->_maxHp = 60;
	this->_energy = 120;
	this->_maxEnergy = 120;
	this->_melee = 60;
	this->_ranged = 5;
	this->_armor = 0;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) {

	std::cout << src._name << ": I'm a robot ninja!" << std::endl << std::endl;

	*this = src;
}

NinjaTrap::~NinjaTrap() {

	std::cout << "*throw smoke bomb*" << std::endl << std::endl;
}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

NinjaTrap &	NinjaTrap::operator=(NinjaTrap const & rhs) {

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

void	NinjaTrap::rangedAttack(std::string const & target) {

	std::cout << \
		"FR4G-TP " << this->_name << " attacks " << target << \
		" at range, causing " << this->_ranged << " points of damage !" << \
	std::endl;
	std::cout << "Chk-chk, BOOM!" << std::endl << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const & target) {

	std::cout << \
		"FR4G-TP " << this->_name << " attacks " << target << \
		" at melee, causing " << this->_melee << " points of damage !" << \
	std::endl;
	std::cout << "Shwing!" << std::endl << std::endl;
}

void			NinjaTrap::ninjaShoebox(ClapTrap & claptrap) {

	if (this->_energy < 25) {
		std::cout << "Hmm, my shoebox is empty" << std::endl;
		std::cout << std::endl;
	} else {
		std::cout << \
			"Die shoebox !" << \
		std::endl << std::endl;

		this->_energy -= 25;
		claptrap.takeDamage(50);
	}
}

void			NinjaTrap::ninjaShoebox(FragTrap & fragtrap) {

	if (this->_energy < 25) {
		std::cout << "Hmm, my shoebox is empty" << std::endl;
		std::cout << std::endl;
	} else {
		std::cout << \
			"*back stab*" << \
		std::endl << std::endl;

		this->_energy -= 25;
		fragtrap.takeDamage(50);
	}
}

void			NinjaTrap::ninjaShoebox(ScavTrap & scavtrap) {

	if (this->_energy < 25) {
		std::cout << "Hmm, my shoebox is empty" << std::endl;
		std::cout << std::endl;
	} else {
		std::cout << \
			"You're proud of your arms aren't you ? *demembration sound*" << \
		std::endl << std::endl;

		this->_energy -= 25;
		scavtrap.takeDamage(50);
	}
}

void			NinjaTrap::ninjaShoebox(NinjaTrap & ninjatrap) {

	if (this->_energy < 25) {
		std::cout << "Hmm, my shoebox is empty" << std::endl;
		std::cout << std::endl;
	} else {
		std::cout << \
			"*katana fight*" << \
		std::endl << std::endl;

		this->_energy -= 25;
		ninjatrap.takeDamage(50);
	}
}

// -----------------------------------------------------------------------------
