/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 09:49:07 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/29 12:46:06 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>

class FragTrap {

public:

	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap();

	FragTrap &	operator=(FragTrap const & rhs);

	unsigned int	getHp();
	unsigned int	getEnergy();
	void			rangedAttack(std::string const & target);
	void			meleeAttack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	void			vaulthunter_dot_exe(std::string const & target);

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
