/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 17:39:53 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/30 19:11:51 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <string>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {

public:

	SuperTrap();
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const & src);
	~SuperTrap();

	SuperTrap &	operator=(SuperTrap const & rhs);

	void			rangedAttack(std::string const & target);
	void			meleeAttack(std::string const & target);

private:

};

#endif
