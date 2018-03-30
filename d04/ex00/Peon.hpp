/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 14:00:45 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/30 14:25:57 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim {

public:

	Peon(std::string name);
	Peon(Peon const & src);
	~Peon();

	Peon &	operator=(Peon const & rhs);

	virtual void	getPolymorphed() const;

private:

	Peon();

};

std::ostream &	operator<<(std::ostream & o, Peon const & rhs);

#endif
