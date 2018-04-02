/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 10:05:57 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/02 16:33:53 by aridolfi         ###   ########.fr       */
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
	Bureaucrat boss("Boss", 1);
	try {
		boss.incrementGrade();
	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	Bureaucrat pleb("Plebian", 150);
	try {
		pleb.decrementGrade();
	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << boss << pleb;

	std::cout << std::endl << "--- ex01 ---" << std::endl << std::endl;

	try {
		Form heavenly_call("Heavenly Call", 50, 0);
	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form grunt("Blank", 999, 50);
	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	Form ticket("IOU", 50, 50);
	std::cout << ticket;
	pleb.signForm(ticket);
	std::cout << ticket;
	boss.signForm(ticket);
	std::cout << ticket;

	return 0;
}
