/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Asteroid.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 20:07:05 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/01 20:36:05 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASTEROID_HPP
# define ASTEROID_HPP

#include "AGameEntity.hpp"

class Asteroid : public AGameEntity {

public:

	Asteroid(int row, int col);
	Asteroid(Asteroid const & src);
	virtual ~Asteroid();

	Asteroid &	operator=(Asteroid const & rhs);

	AGameEntity * clone() const;
	void border_colision();
	void move(int frame);
	void draw();

private:

	Asteroid();

};

#endif
