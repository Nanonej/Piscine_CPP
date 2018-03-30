/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 16:00:10 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/30 18:38:42 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <string>
#include <iostream>

class AWeapon {

public:

	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const & src);
	virtual ~AWeapon();

	AWeapon &	operator=(AWeapon const & rhs);

	std::string		getName() const;
	int 			getAPCost() const;
	int 			getDamage() const;
	virtual void	attack() const = 0;

protected:

	std::string	_name;
	int			_apCost;
	int			_damage;

	AWeapon();

};

#endif
