/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 10:35:32 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/06 11:31:55 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "Span.class.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

Span::Span() {}

Span::Span(unsigned int n) : _size(n), _count(0) {

	this->_array = new std::vector<int>(n, 0);
	// this->_array->reserve(n);
}

Span::Span(Span const & src) {
	*this = src;
}

Span::~Span() {
	delete this->_array;
}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

Span &	Span::operator=(Span const & rhs) {

	this->_size = rhs._size;
	this->_count = rhs._count;
	this->_array = rhs._array;
	return *this;
}

// ------------------------------ MEMBER FUNCTION ------------------------------

void	Span::addNumber(int x) {
	if (this->_count >= this->_array->size()) {
		throw ArrayIsFull();
	}
	(*this->_array)[this->_count++] = x;
}

int        Span::shortestSpan() {

	if (this->_count <= 1) {
		throw NotEnoughEntry();
	}

	int    diff = this->longestSpan();
	for (size_t i = 0; i < this->_count; i++) {
		for (size_t j = i + 1; j < this->_count; j++) {
			if (abs((*this->_array)[i] - (*this->_array)[j]) < diff)
				diff = abs((*this->_array)[i] - (*this->_array)[j]);
		}
	}
	return diff;
}

int		Span::longestSpan() {

	if (this->_count <= 1) {
		throw NotEnoughEntry();
	}

	int min = *std::min_element(this->_array->begin(), this->_array->end());
	int max = *std::max_element(this->_array->begin(), this->_array->end());

	return max - min;
}

void	Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end) {
	while (start++ != end) {
		this->addNumber(*start);
	}
}

// ------------------------------- NESTED CLASS --------------------------------

Span::ArrayIsFull::ArrayIsFull() {}
Span::ArrayIsFull::ArrayIsFull(Span::ArrayIsFull const & src) {	*this = src; }
Span::ArrayIsFull::~ArrayIsFull() throw() {}
Span::ArrayIsFull &	Span::ArrayIsFull::operator=(Span::ArrayIsFull const &) { return *this; }
const char * Span::ArrayIsFull::what() const throw() { return "Array is full"; }

Span::NotEnoughEntry::NotEnoughEntry() {}
Span::NotEnoughEntry::NotEnoughEntry(Span::NotEnoughEntry const & src) {	*this = src; }
Span::NotEnoughEntry::~NotEnoughEntry() throw() {}
Span::NotEnoughEntry &	Span::NotEnoughEntry::operator=(Span::NotEnoughEntry const &) { return *this; }
const char * Span::NotEnoughEntry::what() const throw() { return "Not enough entry"; }

// -----------------------------------------------------------------------------
