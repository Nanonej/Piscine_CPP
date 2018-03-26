/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 13:28:03 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/26 17:45:39 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		main(void) {

	std::string	cmd;
	Phonebook	contact[8];

	std::cout << "Welcome in your phonebook." << std::endl;
	std::cout << "Available commands are: \"ADD\", \"SEARCH\" and \"EXIT\"." << std::endl;

	while (42) {

		std::cout << "$> ";
		std::getline(std::cin, cmd);

		if (!cmd.compare("EXIT")) {
			exit(0);
		} else if (!cmd.compare("ADD")) {

			for (size_t i = 0; i <= 7; i++) {
				if (!contact[i].used) {
					contact[i].setData();
					break;
				}
				if (i == 7) {
					std::cout << "Your phonebook is full ¯\\_(ツ)_/¯" << std::endl;
				}
			}

		} else if (!cmd.compare("SEARCH")) {

			for (size_t i = 0; i <= 7; i++) {
				if (contact[i].used) {
					contact[i].printSum(i);
				}
			}

			std::cout << "index: ";
			std::getline(std::cin, cmd);

			if (atoi(cmd.c_str()) < 0 || atoi(cmd.c_str()) > 7) {
				std::cout << "¯\\_(ツ)_/¯" << std::endl;
			} else {
				contact[atoi(cmd.c_str())].printData();
			}
		}
	}

	return 0;
}
