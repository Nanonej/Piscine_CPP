/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 10:05:57 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/02 20:08:56 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "AForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "Intern.class.hpp"

int		main() {
	srand(time(NULL));

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

	std::cout << std::endl << "-- EX02 --" << std::endl << std::endl;

	ShrubberyCreationForm heavenly_fauna_form("heaven");
	std::cout << heavenly_fauna_form;
	pleb.signForm(heavenly_fauna_form);
	std::cout << heavenly_fauna_form;
	boss.executeForm(heavenly_fauna_form);
	boss.signForm(heavenly_fauna_form);
	std::cout << heavenly_fauna_form;
	pleb.executeForm(heavenly_fauna_form);
	boss.executeForm(heavenly_fauna_form);

	RobotomyRequestForm robo_form("Sonic the Hedgehog");
	std::cout << robo_form;
	pleb.signForm(robo_form);
	std::cout << robo_form;
	boss.executeForm(robo_form);
	boss.signForm(robo_form);
	std::cout << robo_form;
	pleb.executeForm(robo_form);
	boss.executeForm(robo_form);

	PresidentialPardonForm pardon_form("John Egbert");
	std::cout << pardon_form;
	pleb.signForm(pardon_form);
	std::cout << pardon_form;
	boss.executeForm(pardon_form);
	boss.signForm(pardon_form);
	std::cout << pardon_form;
	pleb.executeForm(pardon_form);
	boss.executeForm(pardon_form);

	std::cout << std::endl << "-- EX03 --" << std::endl << std::endl;

	Intern intern;
	AForm * newPresidentialPardon = intern.makeForm("Presidential Pardon", "Needy Fred");
	AForm * newRobotomyRequest = intern.makeForm("Robotomy Request", "Needy Fred");
	AForm * newShrubberyCreation = intern.makeForm("Shrubbery Creation", "Needy Fred");
	AForm * newObscur = intern.makeForm("\"Permission to Summon Cthulu\"", "Needy Fred");
	(void)newObscur;

	std::cout << *newPresidentialPardon << *newRobotomyRequest << *newShrubberyCreation;

	delete newPresidentialPardon;
	delete newRobotomyRequest;
	delete newShrubberyCreation;

	return 0;
}
