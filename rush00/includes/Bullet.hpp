#ifndef BULLET_H
# define BULLET_H

#include "AGameEntity.hpp"

class Bullet : public AGameEntity {

public:

	Bullet();
	Bullet(int row, int col);
	Bullet(const Bullet &cpy);
	virtual ~Bullet();

	Bullet &operator=(const Bullet &cpy);

	AGameEntity *clone() const;
	void border_colision();
	void move(int frame);

private:

	void spawn(int frames);

};
#endif
