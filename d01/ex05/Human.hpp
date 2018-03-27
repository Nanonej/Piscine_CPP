/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 18:13:33 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/27 20:03:35 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <string>
#include "Human.hpp"
#include "Brain.hpp"

class Human {

public:

	Human();
	~Human();

	std::string	identify() const;
	Brain const	&getBrain() const;

private:

	Brain const	_hBrain;
};

#endif
