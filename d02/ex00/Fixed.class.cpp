/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 12:48:23 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/28 16:02:40 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed() : _val(0) {

	std::cout << "Default constructor called" << std::endl;
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

	std::cout << "getRawBits member function called" << std::endl;

	return this->_val;
}

void	Fixed::setRawBits(int const raw) {

	std::cout << "setRawBits member function called" << std::endl;

	this->_val = raw;
}
