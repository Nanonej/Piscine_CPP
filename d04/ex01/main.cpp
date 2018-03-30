/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 18:24:03 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/30 18:50:30 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

void	weapon_info(AWeapon const & w) {
	std::cout << w.getName() << " | Ap Cost: " << w.getAPCost() << " | Damage: " << w.getDamage() << std::endl;
}

int		main() {

	std::cout << std::endl << "Custom Main Start:" << std::endl;
	std::cout << "PlasmaRifle:" << std::endl; // PlasmaRifle
	PlasmaRifle prfl1;
	PlasmaRifle prfl2(prfl1);
	PlasmaRifle prfl3 = prfl2;
	weapon_info(prfl1);
	weapon_info(prfl2);
	weapon_info(prfl3);
	std::cout << std::endl;

	std::cout << "PowerFist:" << std::endl; // PowerFist
	PowerFist pfst1;
	PowerFist pfst2(pfst1);
	PowerFist pfst3 = pfst2;
	weapon_info(pfst1);
	weapon_info(pfst2);
	weapon_info(pfst3);
	std::cout << "Custom Main End." << std::endl << std::endl;

	std::cout << std::endl << "Subject Main Start:" << std::endl;
	Character* zaz = new Character("zaz");
	std::cout << *zaz;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	std::cout << "Subject Main End." << std::endl << std::endl;

	return 0;
}
