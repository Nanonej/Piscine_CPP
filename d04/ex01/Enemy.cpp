/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 16:57:05 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/30 17:25:55 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

Enemy::Enemy() {}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type) {}

Enemy::Enemy(Enemy const & src) {
	*this = src;
}

Enemy::~Enemy() {}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

Enemy &	Enemy::operator=(Enemy const & rhs) {

	this->_hp = rhs._hp;
	this->_type = rhs._type;

	return *this;
}

// ------------------------------ MEMBER FUNCTION ------------------------------

std::string	Enemy::getType() const {
	return this->_type;
}

int			Enemy::getHP() const {
	return this->_hp;
}

void		Enemy::takeDamage(int damage) {
	this->_hp = (damage < this->_hp ? this->_hp - damage : 0);
}

// -----------------------------------------------------------------------------
