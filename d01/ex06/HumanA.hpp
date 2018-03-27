/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 21:20:43 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/27 21:57:02 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"

class HumanA {

public:

	HumanA(std::string name, Weapon & weapon);
	~HumanA();

	void	attack();

private:

	std::string	_name;
	Weapon &	_weapon;

};

#endif
