/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 12:29:19 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/04 13:00:15 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

template <typename T>
void	iter(T * array, size_t len, void (*fn)(T)) {
	for (size_t i = 0; i < len; i++) {
		fn(array[i]);
	}
}

template <typename T>
void	iter(T * array, size_t len, void (*fn)(T &)) {
	for (size_t i = 0; i < len; i++) {
		fn(array[i]);
	}
}

template <typename T>
void	iter(T * array, size_t len, void (*fn)(T const &)) {
	for (size_t i = 0; i < len; i++) {
		fn(array[i]);
	}
}

void output_str(std::string& v)	{ std::cout << v << std::endl; }
void output_i(int v)			{ std::cout << v << std::endl; }
void output_c(char v)			{ std::cout << v << std::endl; }

template <class T> void output_any(T const & v)	{ std::cout << v << std::endl; }

int		main() {

	std::string	str_a[]	= {"ONE", "TWO", "THREE"};
	int			i_a[]	= {1, 2, 3};
	char		c_a[]	= {'a', 'b', 'c'};

	std::cout << std::endl << "Specific:" << std::endl;
	::iter(str_a, 3, output_str);
	::iter(i_a, 3, output_i);
	::iter(c_a, 3, output_c);
	std::cout << std::endl << "Generic:" << std::endl;
	::iter(str_a, 3, output_any);
	::iter(i_a, 3, output_any);
	::iter(c_a, 3, output_any);

	return 0;
}
