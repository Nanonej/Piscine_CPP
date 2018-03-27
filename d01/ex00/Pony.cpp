/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 10:50:29 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/27 15:08:33 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name) : _name(name) {
	std::cout << "Yay! Welcome in the herd " << this->_name << "!" << std::endl;
}

Pony::~Pony() {
	std::cout << "Farewell " << this->_name << "!" << std::endl;
}
