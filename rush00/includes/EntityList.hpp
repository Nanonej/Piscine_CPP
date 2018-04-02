/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EntityList.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 10:46:37 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/01 20:22:02 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTITYLIST_HPP
# define ENTITYLIST_HPP

#include "AGameEntity.hpp"
#include "PlayerShip.hpp"

class EntityList {

public:

	EntityList();
	EntityList(EntityList const & src);
	virtual ~EntityList();

	EntityList &	operator=(EntityList const & rhs);

	int			getCount() const;
	AGameEntity	*getUnit(int i) const;
	void		deleteUnit(int i);
	int			push(AGameEntity *newbie);
	void		check_collisions(PlayerShip *p1);
	int			border_colision();
	void 		move(int frames);
	void		draw();

private:

		int					_count;
		int					_array_size;
		AGameEntity 		**_enemies;

		static int const	_AllocSize = 32;

};

#endif
