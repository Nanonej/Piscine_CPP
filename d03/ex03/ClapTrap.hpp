/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 14:51:19 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/29 15:56:29 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap {

public:

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	~ClapTrap();

	ClapTrap &	operator=(ClapTrap const & rhs);

	unsigned int	getHp();
	unsigned int	getEnergy();
	void			rangedAttack(std::string const & target);
	void			meleeAttack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

protected:

	unsigned int	_hp;
	unsigned int	_maxHp;
	unsigned int	_energy;
	unsigned int	_maxEnergy;
	unsigned int	_lvl;
	std::string		_name;
	int				_melee;
	int				_ranged;
	int				_armor;

private:

};

#endif
