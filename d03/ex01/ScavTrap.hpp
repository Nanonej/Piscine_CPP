/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 13:15:56 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/29 14:38:01 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include "FragTrap.hpp"

class ScavTrap {

public:

	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap();

	ScavTrap &	operator=(ScavTrap const & rhs);

	unsigned int	getHp();
	unsigned int	getEnergy();
	void			rangedAttack(std::string const & target);
	void			meleeAttack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	void			challengeNewcomer();

private:

	unsigned int	_hp;
	unsigned int	_maxHp;
	unsigned int	_energy;
	unsigned int	_maxEnergy;
	unsigned int	_lvl;
	std::string		_name;
	int				_melee;
	int				_ranged;
	int				_armor;

};

#endif
