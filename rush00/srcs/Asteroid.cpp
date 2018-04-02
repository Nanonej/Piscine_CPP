/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Asteroid.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 20:09:50 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/01 20:39:27 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Asteroid.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

Asteroid::Asteroid() {}

Asteroid::Asteroid(int row, int col) : AGameEntity(row, col) {

	this->hp = 1;
	this->point = 1;
	this->_display = 'o';
}

Asteroid::~Asteroid() {}

Asteroid::Asteroid(const Asteroid& cpy) {

	*this = cpy;
}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

Asteroid& Asteroid::operator=(const Asteroid& cpy) {

	(void)cpy;
	return *this;
}

// ------------------------------ MEMBER FUNCTION ------------------------------

AGameEntity * Asteroid::clone() const {
	return (new Asteroid(*this));
}

void Asteroid::border_colision() {

	if (this->col < 2 || this->col > COLS - 3 || \
		this->row < 3 || this->row > LINES - 4) {

		this->hp = 0;
	}
}

void Asteroid::move(int frame) {

	if(frame % 3 == 0)
		this->col--;
}

void Asteroid::draw() {

	attron(COLOR_PAIR(2));
	AGameEntity::draw();
	attroff(COLOR_PAIR(2));
}

// -----------------------------------------------------------------------------
