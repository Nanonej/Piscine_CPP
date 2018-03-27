/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 14:58:20 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/27 15:07:23 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap() {
	Pony	buddy = Pony("Buddy");

	std::cout << "Take a ride with Buddy" << std::endl;
}

void	ponyOnTheStack() {
	Pony	*moskito = new Pony("Moskito");

	std::cout << "Take a ride with Moskito" << std::endl;

	delete moskito;
}

int		main() {

	ponyOnTheHeap();
	ponyOnTheStack();

	return 0;
}
