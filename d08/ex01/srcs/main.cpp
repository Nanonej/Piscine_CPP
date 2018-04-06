/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 10:37:54 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/06 11:37:28 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Span.class.hpp"

int		main() {

	srand(time(NULL));
	std::vector<int> random_numbers(10000, 0);
	std::vector<int>::iterator end = random_numbers.end();
	std::vector<int>::iterator start;
	for (start = random_numbers.begin(); start != end; start++) { *start = rand(); }
	start = random_numbers.begin();
	Span sp = Span(10001);

	std::cout << std::endl << "--- Test span exception ---" << std::endl << std::endl;
	std::cout << "Empty array:" << std::endl;
	try {
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	} catch(std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	} catch(std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "One entry:" << std::endl;
	sp.addNumber(random_numbers[0]);
	try {
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	} catch(std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "Longest span: " << sp.longestSpan() << std::endl << std::endl;
	} catch(std::exception & e) {
		std::cerr << e.what() << std::endl << std::endl;
	}

	std::cout << std::endl << "--- Test span array ---" << std::endl << std::endl;
	std::cout << "Three first entry: " << random_numbers[0] << ' ' << random_numbers[1] << ' ' << random_numbers[2] << std::endl;
	sp.addNumber(*(start + 1));
	sp.addNumber(*(start + 2));
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl << std::endl;


	std::cout << std::endl << "--- Test huge array ---" << std::endl << std::endl;
	sp.addRange(start + 3, start + 5000);
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	sp.addRange(start + 5000, start + 10000);
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	sp.addNumber(*start);
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;

	std::cout << std::endl << "--- Test full array exception ---" << std::endl << std::endl;
	try {
		sp.addNumber(42);
	} catch(std::exception & e) {
		std::cerr << e.what() << std::endl << std::endl;
	}

	return 0;
}
