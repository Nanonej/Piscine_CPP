/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 12:27:15 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/28 17:31:34 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed {

public:

	Fixed();
	Fixed(int const i);
	Fixed(float const f);
	Fixed(Fixed const & src);
	~Fixed();

	Fixed &	operator=(Fixed const & rhs);
	bool	operator>(Fixed const & rhs);
	bool	operator<(Fixed const & rhs);
	bool	operator>=(Fixed const & rhs);
	bool	operator<=(Fixed const & rhs);
	bool	operator==(Fixed const & rhs);
	bool	operator!=(Fixed const & rhs);
	Fixed	operator+(Fixed const & rhs);
	Fixed	operator-(Fixed const & rhs);
	Fixed	operator*(Fixed const & rhs);
	Fixed	operator/(Fixed const & rhs);
	Fixed &	operator++();
	Fixed	operator++(int);
	Fixed &	operator--();
	Fixed	operator--(int);

	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat() const;
	int		toInt() const;

	static Fixed &			min(Fixed & lhs, Fixed & rhs);
	static Fixed const &	min(Fixed const & lhs, Fixed const & rhs);
	static Fixed &			max(Fixed & lhs, Fixed & rhs);
	static Fixed const &	max(Fixed const & lhs, Fixed const & rhs);

private:

	int					_val;
	static int const	_nFracBits = 8;

};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif
