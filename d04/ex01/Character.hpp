/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 17:15:34 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/30 18:26:51 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {

public:

	Character(std::string const & name);
	Character(Character const & src);
	~Character();

	Character &	operator=(Character const & rhs);

	std::string	getName() const;
	int			getAp() const;
	AWeapon*	getWeapon() const;
	void		recoverAP();
	void		equip(AWeapon *weapon);
	void		attack(Enemy *enemy);

private:

	std::string	_name;
	int			_ap;
	AWeapon		*_weapon;

	Character();

};

std::ostream &	operator<<(std::ostream & o, Character const & rhs);

#endif
