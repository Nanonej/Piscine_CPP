/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 10:21:28 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/05 17:30:11 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_HPP
# define SPAN_CLASS_HPP

#include <vector>

class Span {

public:

	Span(unsigned int n);
	Span(Span const & src);
	virtual ~Span();

	Span &	operator=(Span const & rhs);

	void	addNumber(int x);
	int		shortestSpan();
	int		longestSpan();
	void	addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);

	class ArrayIsFull : public std::exception {

	public:

		ArrayIsFull();
		ArrayIsFull(ArrayIsFull const & src);
		virtual ~ArrayIsFull() throw();

		ArrayIsFull &	operator=(ArrayIsFull const & rhs);

		virtual const char * what() const throw();

	};

	class NotEnoughEntry : public std::exception {

	public:

		NotEnoughEntry();
		NotEnoughEntry(NotEnoughEntry const & src);
		virtual ~NotEnoughEntry() throw();

		NotEnoughEntry &	operator=(NotEnoughEntry const & rhs);

		virtual const char * what() const throw();

	};

private:

	unsigned int		_size;
	unsigned int		_count;
	std::vector<int> *	_array;

	Span();

};

#endif
