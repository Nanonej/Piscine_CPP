/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 14:17:58 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/30 15:56:19 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int		main() {

	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << "-----------------------------------------------" << std::endl;

	std::cout << "Sorcerers:" << std::endl; // Sorcerers
	Sorcerer jimmy("Jimmy", "Wandmaker");
	std::cout << jimmy;
	Sorcerer joey("Joey", "Bootlegger");
	std::cout << joey;
	Sorcerer cpy(jimmy);
	std::cout << cpy;
	cpy = Sorcerer("Ripto", "Destroyer of Spyro");
	std::cout << cpy << std::endl;
	std::cout << std::endl << "Victims:" << std::endl; // Victims
	Victim victim1("Robert");
	std::cout << victim1;
	Victim victim2("Bobby");
	std::cout << victim2;
	Victim victim3(victim1);
	std::cout << victim3;
	victim3 = Victim("Spyro");
	std::cout << victim3;
	victim1.getPolymorphed();
	victim2.getPolymorphed();
	jimmy.polymorph(victim3);
	std::cout << std::endl << "Peons:" << std::endl; // Peons
	Peon peon1("Hector");
	std::cout << peon1;
	Peon peon2("Elliot");
	std::cout << peon2;
	Peon peon3(peon1);
	std::cout << peon3;
	peon3 = Peon("Scillia");
	std::cout << peon3;
	peon1.getPolymorphed();
	peon2.getPolymorphed();
	jimmy.polymorph(peon3);

	std::cout << std::endl << "Main End:" << std::endl;

	return 0;
}
