#ifndef ENEMY_SHIP_H
# define ENEMY_SHIP_H

#include "AGameEntity.hpp"

class EnemyShip : public AGameEntity {

public:

	EnemyShip();
	EnemyShip(int row, int col);
	EnemyShip(const EnemyShip &cpy);
	EnemyShip &operator=(const EnemyShip &cpy);
	virtual ~EnemyShip();

	AGameEntity * clone() const;
	void border_colision();
	void move(int frame);
	void draw();

private:
	void spawn(int frames);

};

#endif
