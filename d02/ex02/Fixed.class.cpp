/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 12:48:23 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/28 17:25:55 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include "Fixed.class.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

Fixed::Fixed() : _val(0) {}

Fixed::Fixed(int const i) : _val(i << this->_nFracBits) {}

Fixed::Fixed(float const f) : _val(roundf(f * (1 << this->_nFracBits))) {}

Fixed::Fixed(Fixed const & src) {

	*this = src;
}

Fixed::~Fixed() {}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

Fixed &	Fixed::operator=(Fixed const & rhs) {

	this->_val = rhs.getRawBits();

	return *this;
}

bool	Fixed::operator>(Fixed const & rhs) {
	return (this->_val > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const & rhs) {
	return (this->_val < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const & rhs) {
	return (this->_val >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const & rhs) {
	return (this->_val <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const & rhs) {
	return (this->_val == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const & rhs) {
	return (this->_val != rhs.getRawBits());
}

Fixed	Fixed::operator+(Fixed const & rhs) {
	return Fixed(this->_val + rhs.getRawBits());
}

Fixed	Fixed::operator-(Fixed const & rhs) {
	return Fixed(this->_val - rhs.getRawBits());
}

Fixed	Fixed::operator*(Fixed const & rhs) {
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const & rhs) {
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed &	Fixed::operator++() {

	this->_val++;

	return *this;
}

Fixed	Fixed::operator++(int) {

	Fixed tmp(*this);
	this->_val++;

	return tmp;
}

Fixed &	Fixed::operator--() {

	this->_val--;

	return *this;
}

Fixed	Fixed::operator--(int) {

	Fixed tmp(*this);
	this->_val--;

	return tmp;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}


// ------------------------------ MEMBER FUNCTION ------------------------------

int		Fixed::getRawBits() const {

	return this->_val;
}

void	Fixed::setRawBits(int const raw) {

	this->_val = raw;
}

float	Fixed::toFloat() const {

	float f = this->_val;

	return (f / (1 << this->_nFracBits));
}

int		Fixed::toInt() const {
	return (this->_val >> this->_nFracBits);
}

// ---------------------------- NON MEMBER FUNCTION ----------------------------

Fixed &			Fixed::min(Fixed & lhs, Fixed & rhs) {
	if (lhs.getRawBits() <= rhs.getRawBits())
		return lhs;
	return rhs;
}

Fixed const &	Fixed::min(Fixed const & lhs, Fixed const & rhs) {
	if (lhs.getRawBits() <= rhs.getRawBits())
		return lhs;
	return rhs;
}

Fixed &			Fixed::max(Fixed & lhs, Fixed & rhs) {
	if (lhs.getRawBits() >= rhs.getRawBits())
		return lhs;
	return rhs;
}

Fixed const &	Fixed::max(Fixed const & lhs, Fixed const & rhs) {
	if (lhs.getRawBits() >= rhs.getRawBits())
		return lhs;
	return rhs;
}

// -----------------------------------------------------------------------------
