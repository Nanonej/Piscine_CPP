/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.class.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 13:13:55 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/04 14:00:33 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_TPP
# define ARRAY_CLASS_TPP

#include <cstddef>

template <typename T>
class Array {

public:

	Array();
	Array(unsigned int n);
	Array(Array const & src);
	virtual ~Array();

	Array &	operator=(Array const & rhs);
	T & operator[](std::ptrdiff_t index);

	unsigned int	size() const;

private:

	T *				_array;
	unsigned int	_size;

};

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

template <typename T> Array<T>::Array() : _array(new T[0]), _size(0) {}

template <typename T> Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n) {}

template <typename T> Array<T>::Array(Array<T> const & src) {
	*this = src;
}

template <typename T> Array<T>::~Array() {
	delete[] this->_array;
}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

template <typename T> Array<T> &	Array<T>::operator=(Array<T> const & rhs) {

	this->_array = rhs._array;
	this->_size = rhs._size;
	return *this;
}

template <typename T> T &			Array<T>::operator[](std::ptrdiff_t i) {
	return this->_array[i];
}

// ------------------------------ MEMBER FUNCTION ------------------------------

template <typename T> unsigned int	Array<T>::size() const {
	return this->_size;
}

// -----------------------------------------------------------------------------

#endif
