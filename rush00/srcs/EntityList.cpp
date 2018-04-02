/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EntityList.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 10:58:11 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/01 20:22:12 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EntityList.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

EntityList::EntityList() : _count(0), _array_size(EntityList::_AllocSize) {

	this->_enemies = new AGameEntity * [this->_array_size];
}

EntityList::EntityList(EntityList const & src) {
	*this = src;
}

EntityList::~EntityList() {

	for (int i = 0; i < this->_count; i++) {
		delete this->_enemies[i];
	}
	delete this->_enemies;
}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

EntityList &	EntityList::operator=(EntityList const & rhs) {

	// Delete
	for (int i = 0; i < this->_count; i++) {
		delete this->_enemies[i];
	}
	delete this->_enemies;

	// Copy
	this->_count = rhs._count;
	this->_array_size = rhs._array_size;
	this->_enemies = new AGameEntity * [this->_array_size];
	for (int i = 0; i < this->_count; i++) {
		this->_enemies[i] = rhs._enemies[i]->clone();
	}

	return *this;
}

// ------------------------------ MEMBER FUNCTION ------------------------------

int 			EntityList::getCount() const {
	return this->_count;
}

AGameEntity *	EntityList::getUnit(int i) const {
	return ((i < 0 || i >= this->_count) ? NULL : this->_enemies[i]);
}

void			EntityList::deleteUnit(int i) {

	if (i < 0 || i >= this->_count)
		return;
	else {
		delete this->_enemies[i];
		this->_count--;
		this->_enemies[i] = this->_enemies[this->_count];
	}
}

int				EntityList::push(AGameEntity *newbie) {

	if (!newbie)
		return this->_count;

	for (int i = 0; i < this->_count; i++) { // Check if already exist
		if (this->_enemies[i] == newbie)
			return this->_count;
	}

	if (this->_count == this->_array_size) { // Check if array is full and realloc
		this->_array_size += EntityList::_AllocSize;
		AGameEntity **tmp = new AGameEntity * [this->_array_size];
		for (int i = 0;i < this->_count; i++) {
			tmp[i] = this->_enemies[i];
		}
		delete this->_enemies;
		this->_enemies = tmp;
	}
	this->_enemies[this->_count++] = newbie; // Add new entity to the array

	return this->_count;
}

void			EntityList::check_collisions(PlayerShip *p1) {

	for (int i = 0; i < this->_count; i++) {
		this->_enemies[i]->hit_entity(p1);
		for (int j = i + 1; j < this->_count; j++) {
			this->_enemies[i]->hit_entity(this->_enemies[j]);
		}
	}
}

int				EntityList::border_colision() {

	for (int i = 0; i < this->_count; i++) {
		this->_enemies[i]->border_colision();
		if (this->_enemies[i]->hp <= 0) {
			this->deleteUnit(i);
			continue;
		}
	}

	return this->_count;
}

void			EntityList::move(int frames) {

	for (int i = 0; i < this->_count; i++) {
		this->_enemies[i]->move(frames);
	}
}

void			EntityList::draw() {

	for (int i = 0; i < this->_count; i++) {
		this->_enemies[i]->draw();
	}
}

// -----------------------------------------------------------------------------
