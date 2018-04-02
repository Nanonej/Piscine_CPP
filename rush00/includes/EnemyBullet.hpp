#ifndef ENEMY_BULLET_H
# define ENEMY_BULLET_H

#include "AGameEntity.hpp"
#include "Bullet.hpp"

class EnemyBullet : public AGameEntity {

public:

	EnemyBullet();
	EnemyBullet(int row, int col);
	EnemyBullet(const EnemyBullet &cpy);
	virtual ~EnemyBullet();

	EnemyBullet &operator=(const EnemyBullet &cpy);

	AGameEntity *clone() const;
	void border_colision();
	void move(int frame);

private:

	void spawn(int frames);

};
#endif
