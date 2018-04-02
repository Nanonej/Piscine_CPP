/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 10:05:57 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/02 13:07:15 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

int		main() {

	Bureaucrat john("John Hussle", 25);
	Bureaucrat eric("Eric Hussle", 123);
	std::cout << "Cloning work!" << std::endl;
	Bureaucrat eric2(eric);
	std::cout << john << eric << eric2 << std::endl;
	std::cout << "<< operator overload work!" << std::endl;
	eric2 = john;
	std::cout << eric2;
	std::cout << "= operator overload work!" << std::endl;
	john.incrementGrade();
	eric2.decrementGrade();
	std::cout << john << eric2;
	try {
		Bureaucrat god("God", 0);
	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat lost_guy("Lost Guy", 999);
	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat boss("Boss", 1);
		boss.incrementGrade();
	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat pleb("Plebian", 150);
		pleb.decrementGrade();
	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
