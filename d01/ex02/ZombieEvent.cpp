/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:46:19 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/27 15:50:36 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {}
ZombieEvent::~ZombieEvent() {}

void	ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name) {
	return (new Zombie(name, this->_type));
}
