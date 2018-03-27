/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:10:39 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/27 20:03:34 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "Brain.hpp"

Brain::Brain() {}

Brain::~Brain() {}

std::string	Brain::identify() const {
	std::stringstream stream;
	stream << std::hex << this;

	return (stream.str());
}
