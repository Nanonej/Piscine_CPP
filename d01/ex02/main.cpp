/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:52:52 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/27 17:18:15 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

std::string	randomChump() {
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
	return (names[rand() % 21]);
}

int		main( void ) {

	Zombie		stalker = Zombie("Agrajag", "Stalker");
	ZombieEvent	zbuilding;

	zbuilding.setZombieType("Crawler");

	Zombie*		hord[] = {
		zbuilding.newZombie("Ben"),
		zbuilding.newZombie("Leo"),
		zbuilding.newZombie("Zoe"),
		zbuilding.newZombie("Xana")
	};

	std::cout << "Oh god ! This building is infested with zombies !" << std::endl;

	for (size_t i = 0; i < 4; i++) {
		hord[i]->announce();
	}

	std::cout << "I need to hurry and run away !" << std::endl;

	stalker.announce();

	std::cout << "Whoa ! I'm surrounded ! Maybe by this side ..." << std::endl;

	Zombie	*surprise = new Zombie(randomChump(), "Normal");
	surprise->announce();

	std::cout << "mother ..." << std::endl;

	for (size_t i = 0; i < 4; i++) {
		delete hord[i];
	}

	delete surprise;

	return 0;
}
