/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:30:31 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/27 17:50:00 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie() {
	std::string	names[21] = {
		"Kyle",
		"Bob",
		"Greg",
		"Ana",
		"Eva",
		"Bruce"
		"Fab",
		"Anto",
		"Math",
		"Adri",
		"Julia",
		"Mike",
		"Lola",
		"Julie",
		"Monica",
		"Alex",
		"Nico",
		"Sarah",
		"Hugo",
		"Tom",
		"Seb"
	};

	srand(time(NULL));
	this->_name = names[rand() % 21];
	this->_type = "Normal";
}

Zombie::~Zombie() {}

void	Zombie::announce() {
	std::cout << "<" << this->_name << " (" << this->_type << \
		")> Braiiiiiiinnnssss..." << \
	std::endl;
}
