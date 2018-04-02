#ifndef A_GAME_ENTITY_H
# define A_GAME_ENTITY_H

#include <ncurses.h>

class AGameEntity {

public:

	int col;
	int row;
	int hp;
	int point;

	AGameEntity(void);
	AGameEntity(int row, int col);
	AGameEntity(const AGameEntity &cpy);
	AGameEntity &operator=(const AGameEntity &cpy);
	virtual ~AGameEntity(void);

	void getDisplay(void);
	int getSpeed(void);

	void setSpeed(int speed);

	virtual AGameEntity *clone() const = 0;
	virtual void border_colision() = 0;
	virtual void hit_entity(AGameEntity *entity);
	virtual void move(int frame) = 0;
	virtual void draw();

protected:

	char _display;
	int _speed;

};

#endif
