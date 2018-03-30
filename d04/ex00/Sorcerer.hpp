/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 10:04:15 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/30 14:00:10 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer {

public:

	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const & src);
	~Sorcerer();

	Sorcerer &	operator=(Sorcerer const & rhs);

	std::string	getName() const;
	std::string	getTitle() const;
	void		polymorph(Victim const & victim) const;

private:

	std::string	_name;
	std::string	_title;

	Sorcerer();

};

std::ostream &	operator<<(std::ostream & o, Sorcerer const & rhs);

#endif
