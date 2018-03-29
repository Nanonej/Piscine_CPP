/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 13:25:48 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/29 14:40:56 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ScavTrap.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

ScavTrap::ScavTrap() :	_hp(100), _maxHp(100), _energy(50), _maxEnergy(50), \
						_lvl(1), _name("Scavtrap"), _melee(20), _ranged(15), \
						_armor(3) {

	std::cout << "Recompiling my combat code!" << std::endl << std::endl;
}

ScavTrap::ScavTrap(std::string name) :	_hp(100), _maxHp(100), _energy(50), \
										_maxEnergy(50), _lvl(1), _name(name), \
										_melee(20), _ranged(15), _armor(3) {

	std::cout << name << " ready to serve!" << std::endl << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) {

	std::cout << src._name << " ready to serve!" << std::endl << std::endl;

	*this = src;
}

ScavTrap::~ScavTrap() {

	std::cout << "Oh well. I'm dead." << std::endl << std::endl;
}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs) {

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

unsigned int	ScavTrap::getHp() {
	return this->_hp;
}

unsigned int	ScavTrap::getEnergy() {
	return this->_energy;
}

void	ScavTrap::rangedAttack(std::string const & target) {

	std::cout << \
		"FR4G-TP " << this->_name << " attacks " << target << \
		" at range, causing " << this->_ranged << " points of damage !" << \
	std::endl;
	std::cout << "Chk-chk, BOOM!" << std::endl;
	std::cout << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target) {

	std::cout << \
		"FR4G-TP " << this->_name << " attacks " << target << \
		" at melee, causing " << this->_melee << " points of damage !" << \
	std::endl;
	std::cout << "Shwing!" << std::endl;
	std::cout << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount) {

	amount = ((int)amount > this->_armor ? amount - this->_armor : 0 );

	std::cout << \
		"FR4G-TP " << this->_name << " take " << amount << \
		" points of damage !" << \
	std::endl;
	std::cout << "No fair! I wasn't ready !" << std::endl;
	std::cout << std::endl;

	this->_hp = ( this->_hp > amount ? this->_hp - amount : 0 );
}

void	ScavTrap::beRepaired(unsigned int amount) {

	std::cout << \
		"FR4G-TP " << this->_name << " is being repaired and gain " << \
		amount << " hit points !" << \
	std::endl;
	std::cout << "Hit me, baby!" << std::endl;
	std::cout << std::endl;

	if ((this->_maxHp - this->_hp) <= amount)
		this->_hp = this->_maxHp;
	else
		this->_hp += amount;
}

void	ScavTrap::challengeNewcomer() {

	if (this->_energy < 25) {
		std::cout << "Dangit, I'm out!" << std::endl;
		std::cout << std::endl;
	} else {
		this->_energy -= 25;

		std::string	sAttacks[4] = {
			"Care to have a friendly duel?",
			"Dance battle!",
			"Wanna race ?",
			"You want to know who can kill the most ?"
		};

		srand(time(NULL));
		std::string msgAttack = sAttacks[rand() % 4];

		std::cout << msgAttack << std::endl << std::endl;
	}
}

// -----------------------------------------------------------------------------
