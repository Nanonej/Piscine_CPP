/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 10:30:17 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/04 12:25:34 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

template <typename T>
void		swap(T & x, T & y) {
	T	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T const &	min(T const & x, T const & y) {
	return (x >= y  ? y : x);
}

template <typename T>
T const &	max(T const & x, T const & y) {
	return (x <= y  ? y : x);
}

int		main() {

	int a = 2;
	int b = 3;

	std::cout << "Subject tests:" << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::string	s1 = "test1";
	std::string	s2 = "test2";
	int			i1 = 1;
	int			i2 = 2;
	char		c1 = '1';
	char		c2 = '2';

	std::cout << std::endl << std::endl << "Custom tests:" << std::endl;

	std::cout << "Swap Different:" << std::endl;
	std::cout << std::endl << "Values:" << std::endl;
	std::cout << s1 << " - " << s2 << " - " << i1 << " - " << i2 << " - " << c1 << " - " << c2 << std::endl << std::endl;
	::swap(s1, s2);
	::swap(i1, i2);
	::swap(c1, c2);
	std::cout << "Swap:" << std::endl;
	std::cout << s1 << " - " << s2 << " - " << i1 << " - " << i2 << " - " << c1 << " - " << c2 << std::endl << std::endl << std::endl;

	std::cout << "Min Max Different:" << std::endl << std::endl;
	std::cout << "Min:" << std::endl;
	std::cout << ::min(s1, s2) << " - " << ::min(i1, i2) << " - " << ::min(c1, c2) << std::endl << std::endl;
	std::cout << "Max:" << std::endl;
	std::cout << ::max(s1, s2) << " - " << ::max(i1, i2) << " - " << ::max(c1, c2) << std::endl << std::endl;
	::swap(s1, s2);
	::swap(i1, i2);
	::swap(c1, c2);
	std::cout << "ReSwap:" << std::endl;
	std::cout << s1 << " - " << s2 << " - " << i1 << " - " << i2 << " - " << c1 << " - " << c2 << std::endl << std::endl;
	std::cout << "Min:" << std::endl;
	std::cout << ::min(s1, s2) << " - " << ::min(i1, i2) << " - " << ::min(c1, c2) << std::endl << std::endl;
	std::cout << "Max:" << std::endl;
	std::cout << ::max(s1, s2) << " - " << ::max(i1, i2) << " - " << ::max(c1, c2) << std::endl << std::endl << std::endl;

	std::cout << "Min Max Same:" << std::endl << std::endl;
	s1 = "same";
	s2 = "same";
	i1 = 1;
	i2 = 1;
	c1 = 'a';
	c2 = 'a';
	std::cout << "NewValues:" << std::endl;
	std::cout << s1 << " - " << s2 << " - " << i1 << " - " << i2 << " - " << c1 << " - " << c2 << std::endl << std::endl;
	std::string	const &	str_min = ::min(s1, s2);
	int const &			i_min = ::min(i1, i2);
	char const &		c_min = ::min(c1, c2);
	std::string	const &	str_max = ::max(s1, s2);
	int const &			i_max = ::max(i1, i2);
	char const &		c_max = ::max(c1, c2);
	std::cout << "Min:" << std::endl;
	std::cout << str_min << " - " << i_min << " - " << c_min << std::endl << std::endl;
	std::cout << "Max:" << std::endl;
	std::cout << str_max << " - " << i_max << " - " << c_max << std::endl << std::endl;

	return 0;
}
