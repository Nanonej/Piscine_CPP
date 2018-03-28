/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 12:48:23 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/28 16:02:29 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include "Fixed.class.hpp"

Fixed::Fixed() : _val(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const i) : _val(i << this->_nFracBits) {

	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const f) : _val(roundf(f * (1 << this->_nFracBits))) {

	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {

	std::cout << "Copy constructor called" << std::endl;

	*this = src;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=(Fixed const & rhs) {

	std::cout << "Assignation operator called" << std::endl;

	this->_val = rhs.getRawBits();

	return *this;
}

int		Fixed::getRawBits() const {

	return this->_val;
}

void	Fixed::setRawBits(int const raw) {

	std::cout << "setRawBits member function called" << std::endl;

	this->_val = raw;
}

float	Fixed::toFloat() const {

	float f = this->_val;

	return (f / (1 << this->_nFracBits));
}

int		Fixed::toInt() const {
	return (this->_val >> this->_nFracBits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}
