/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 17:26:15 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/27 17:38:45 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _nZombie(N) {
	this->_hord = new Zombie[N];
}

ZombieHorde::~ZombieHorde() {
	delete[] _hord;
}

void	ZombieHorde::announce() {
	for (size_t i = 0; i < this->_nZombie; i++) {
		this->_hord[i].announce();
	}
}
