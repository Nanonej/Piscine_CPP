#include "AGameEntity.hpp"

int	global_score = 0;

AGameEntity::AGameEntity(void) : col(NULL), row(NULL), hp(1), _display(NULL), _speed(1) {}

AGameEntity::AGameEntity(int row, int col) : col(col), row(row), _display(NULL), _speed(1) {}

AGameEntity::~AGameEntity(void) {
	return ;
}

AGameEntity::AGameEntity(const AGameEntity& cpy) {
	*this = cpy;
	return ;
}

AGameEntity& AGameEntity::operator=(const AGameEntity &cpy) {

	this->_display = cpy._display;
	this->col = cpy.col;
	this->row = cpy.row;
	return *this;
}

// GETTERS
int AGameEntity::getSpeed(void) { return _speed; }

// SETTERS
void AGameEntity::setSpeed(int speed) { _speed = speed; }

// OTHERS
void AGameEntity::hit_entity(AGameEntity *entity) {

	if (this->col == entity->col && this->row == entity->row) {
			this->hp = (this->hp - 1 > 0 ? this->hp : 0);
			entity->hp = (entity->hp - 1 > 0 ? entity->hp - 1 : 0);
			global_score += this->point + entity->point;
	}
}

void AGameEntity::draw() {
	mvaddch(this->row, this->col, this->_display);
}
