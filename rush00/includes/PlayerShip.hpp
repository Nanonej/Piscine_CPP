#ifndef PLAYER_SHIP_H
# define PLAYER_SHIP_H

#include "AGameEntity.hpp"

class PlayerShip : public AGameEntity {

public:

	PlayerShip(void);
	PlayerShip(char display, int col, int row);
	PlayerShip(const PlayerShip &cpy);
	PlayerShip &operator=(const PlayerShip &cpy);
	virtual ~PlayerShip(void);

	void	border_colision();
	void	move(int ch);

private:

	AGameEntity *	clone() const;

};

#endif
