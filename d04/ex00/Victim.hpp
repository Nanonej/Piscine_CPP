/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 11:27:27 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/30 15:14:00 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <string>
#include <iostream>

class Victim {

public:

	Victim(std::string name);
	Victim(Victim const & src);
	~Victim();

	Victim &	operator=(Victim const & rhs);

	std::string		getName() const;
	virtual void	getPolymorphed() const;

protected:

	std::string	_name;

	Victim();

};

std::ostream &	operator<<(std::ostream & o, Victim const & rhs);

#endif
