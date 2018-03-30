/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 16:57:05 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/30 18:33:28 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & src) : Enemy(src) {

	*this = src;

	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

RadScorpion &	RadScorpion::operator=(RadScorpion const & rhs) {

	this->_hp = rhs._hp;
	this->_type = rhs._type;

	return *this;
}

// -----------------------------------------------------------------------------
