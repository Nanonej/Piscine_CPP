/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 21:24:16 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/27 22:16:25 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	this->_weapon = NULL;
}

HumanB::~HumanB() {}

void	HumanB::attack() {
	std::cout << \
		this->_name << " attacks with his " << this->_weapon->getType() << \
	std::endl;
}

void	HumanB::setWeapon(Weapon & weapon) {
	this->_weapon = &weapon;
}
