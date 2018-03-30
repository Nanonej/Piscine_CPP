/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 16:54:35 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/30 18:38:32 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <string>
#include <iostream>

class Enemy {

public:

	Enemy(int hp, std::string const & type);
	Enemy(Enemy const & src);
	virtual ~Enemy();

	Enemy &	operator=(Enemy const & rhs);

	std::string		getType() const;
	int				getHP() const;
	virtual void	takeDamage(int damage);

protected:

	int			_hp;
	std::string	_type;

	Enemy();

};

#endif
