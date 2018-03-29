/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 11:47:15 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/29 17:31:07 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main() {

	FragTrap	fragtrap;
	FragTrap	acmetrap = FragTrap("AcmeTrap");
	FragTrap	clonetrap = FragTrap(fragtrap);

	acmetrap = fragtrap;

	fragtrap.rangedAttack("Zombie");
	fragtrap.meleeAttack("Zombie");
	std::cout << "Fragtrap HP: " << fragtrap.getHp() << std::endl;
	fragtrap.takeDamage(150);
	std::cout << "Fragtrap HP: " << fragtrap.getHp() << std::endl;
	fragtrap.beRepaired(150);
	std::cout << "Fragtrap HP: " << fragtrap.getHp() << std::endl << std::endl;
	std::cout << "Fragtrap Energy: " << fragtrap.getEnergy() << std::endl;
	fragtrap.vaulthunter_dot_exe("Zombie");
	std::cout << "Fragtrap Energy: " << fragtrap.getEnergy() << std::endl;
	fragtrap.takeDamage(15);
	std::cout << "Fragtrap HP: " << fragtrap.getHp() << std::endl << std::endl;

	ScavTrap	scavtrap;
	ScavTrap	cerbtrap = ScavTrap("Cerbtrap");
	ScavTrap	clone2trap = ScavTrap(scavtrap);

	cerbtrap = scavtrap;

	scavtrap.rangedAttack("Zombie");
	scavtrap.meleeAttack("Zombie");
	scavtrap.challengeNewcomer();

	NinjaTrap	ninjatrap;

	ninjatrap.ninjaShoebox(fragtrap);
	ninjatrap.ninjaShoebox(scavtrap);
	ninjatrap.ninjaShoebox(ninjatrap);

	return 0;
}
