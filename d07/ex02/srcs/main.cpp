/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 13:38:31 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/04 14:38:17 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "Array.class.tpp"

template <class T> void iter(Array<T>& array, size_t len, void (*fn)(T &)) {
	for (size_t i = 0; i < len; i++) { fn( array[i] ); }
}

void output_f(float & v) { std::cout << v << std::endl; }
void output_str(std::string & v) { std::cout << v << std::endl; }
void output_i(int & v) { std::cout << v << std::endl; }
void output_c(char & v) { std::cout << v << std::endl; }

template <class T> void output_any(T & v)	{ std::cout << v << std::endl; }

int main( void ) {

	Array<float>		empty_a;
	Array<std::string>	str_a(3);
	Array<int>			i_a(3);
	Array<char>			c_a(3);

	str_a[0] = "ONE";
	str_a[1] = "TWO";
	str_a[2] = "THREE";
	for (size_t i = 0; i < 3; i++) {
		i_a[i] = 1 + i;
		c_a[i] = 'a' + i;
	}

	std::cout << std::endl << "Specific:" << std::endl;
	::iter(empty_a, empty_a.size(), &output_f);
	::iter(str_a, str_a.size(), &output_str);
	::iter(i_a, i_a.size(), &output_i);
	::iter(c_a, c_a.size(), &output_c);
	std::cout << std::endl << "Generic:" << std::endl;
	::iter(empty_a, empty_a.size(), &output_any);
	::iter(str_a, str_a.size(), &output_any);
	::iter(i_a, i_a.size(), &output_any);
	::iter(c_a, c_a.size(), &output_any);

	try {
		std::cout << empty_a[0] << std::endl;
	} catch( std::exception & e ) { std::cerr << "std::exception caught! (" << e.what() << ")" << std::endl; }
	try {
		std::cout << str_a[-1] << std::endl;
	} catch( std::exception & e ) { std::cerr << "std::exception caught! (" << e.what() << ")" << std::endl; }
	try {
		std::cout << i_a[3] << std::endl;
	} catch( std::exception & e ) { std::cerr << "std::exception caught! (" << e.what() << ")" << std::endl; }
	return 0;
}
