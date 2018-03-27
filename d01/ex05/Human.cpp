/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:56:42 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/27 20:03:36 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Human::Human() {}

Human::~Human() {}

std::string	Human::identify() const {
	return this->getBrain().identify();
}

Brain const	&Human::getBrain() const {
	return this->_hBrain;
}
