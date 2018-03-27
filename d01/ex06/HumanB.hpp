/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 21:20:43 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/27 22:16:22 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class HumanB {

public:

	HumanB(std::string name);
	~HumanB();

	void	attack();
	void	setWeapon(Weapon & weapon);

private:

	std::string	_name;
	Weapon	*_weapon;

};

#endif
