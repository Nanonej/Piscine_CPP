/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 10:05:31 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/29 16:45:59 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "FragTrap.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

FragTrap::FragTrap() : ClapTrap() {

	std::cout << \
		"Claptrap: Booting sequence complete. Hello! I am your new steward" << \
		" bot. Designation: CL4P-TP, Hyperion Robot, Class C. Please " << \
		"adjust factory settings to meet your needs before deployment." << \
	std::endl;
	std::cout << std::endl;
	std::cout << \
		"Jack: Finally! Can you hear me? What do you remember?" << \
	std::endl;
	std::cout << std::endl;
	std::cout << \
		"Claptrap: Yes. Remember what? Are... are you my father?" << \
	std::endl;
	std::cout << std::endl;
	std::cout << "Jack: Ah, no... uh, you ..." << std::endl;
	std::cout << std::endl;
	std::cout << "Claptrap: ... Are you god? Am I dead?" << std::endl;
	std::cout << std::endl;
	std::cout << "Jack: Nonono, you're not dead, you're ..." << std::endl;
	std::cout << std::endl;
	std::cout << "Claptrap: I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
	std::cout << std::endl;
	std::cout << \
		"Jack: You. Are. Not. Dead! Now shut the hell up! Your new " << \
		"designation is FR4G-TP. Fragtrap. You are a merciless killing " << \
		"machine. Got it?" << \
	std::endl;
	std::cout << std::endl;
	std::cout << \
		"Fragtrap: O-KAY! Thanks for giving me a second chance, God. " << \
		"I really appreciate it." << \
	std::endl;
	std::cout << std::endl;
	std::cout << \
		"Jack: What? No, noo, you are so STUPID! Whatever. You're welcome." << \
	std::endl;
	std::cout << std::endl;

	this->_name = "Fragtrap";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {

	std::cout << "Jack: " << name << " -- start bootup sequence." << std::endl;
	std::cout << std::endl;
	std::cout << \
		name << ": Directive one: Protect humanity! Directive two: Obey " << \
		"Jack at all costs. Directive three: Dance!" << \
	std::endl;
	std::cout << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) {

	std::cout << "Jack: " << src._name << " -- start bootup sequence." << std::endl;
	std::cout << std::endl;
	std::cout << \
		src._name << ": Directive one: Protect humanity! Directive two: " << \
		"Obey Jack at all costs. Directive three: Dance!" << \
	std::endl;
	std::cout << std::endl;

	*this = src;
}

FragTrap::~FragTrap() {

	std::cout << \
		"Argh arghargh death gurgle gurglegurgle urgh... death." << \
	std::endl;
	std::cout << std::endl;
}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

FragTrap &	FragTrap::operator=(FragTrap const & rhs) {

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

void	FragTrap::rangedAttack(std::string const & target) {

	std::cout << \
		"FR4G-TP " << this->_name << " attacks " << target << \
		" at range, causing " << this->_ranged << " points of damage !" << \
	std::endl;
	std::cout << "You're listening to 'Short-Range Damage Radio.'" << std::endl;
	std::cout << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target) {

	std::cout << \
		"FR4G-TP " << this->_name << " attacks " << target << \
		" at melee, causing " << this->_melee << " points of damage !" << \
	std::endl;
	std::cout << "Ready for the PUNCHline?!" << std::endl;
	std::cout << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target) {

	if (this->_energy < 25) {
		std::cout << "Dangit, I'm out!" << std::endl;
		std::cout << std::endl;
	} else {
		this->_energy -= 25;

		std::string	sAttacks[5] = {
			"Push this button, flip this dongle, voila! Help me!",
			"F to the R to the 4 to the G to the WHAAT!",
			"Defragmenting!",
			"Recompiling my combat code!",
			"Things are about to get awesome!"
		};

		srand(time(NULL));
		std::string msgAttack = sAttacks[rand() % 5];

		std::cout << \
			"FR4G-TP " << this->_name << " attacks " << target << \
			" by activating VaultHunter.EXE, causing " << this->_ranged << \
			" points of damage !" << \
		std::endl;
		std::cout << msgAttack << std::endl;
		std::cout << std::endl;
	}
}

// -----------------------------------------------------------------------------
