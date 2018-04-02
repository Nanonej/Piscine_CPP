#include "EnemyShip.hpp"

EnemyShip::EnemyShip() {
	return ;
}

EnemyShip::EnemyShip(int row, int col) : AGameEntity(row, col) {

	this->hp = 1;
	this->point = 50;
	this->_display = '<';
}

EnemyShip::~EnemyShip(void) {}

EnemyShip::EnemyShip(const EnemyShip& cpy) {

	*this = cpy;
	return ;
}

EnemyShip& EnemyShip::operator=(const EnemyShip& cpy) {

	(void)cpy;
	return *this;
}
AGameEntity * EnemyShip::clone() const {
	return (new EnemyShip(*this));
}

void EnemyShip::border_colision() {

	if (this->col < 2 || this->col > COLS - 3 || this->row < 3 || this->row > LINES - 4) {
		this->hp = 0;
	}
}

void EnemyShip::move(int frame) {

	if(frame % 5 == 0)
		this->col--;
}

void EnemyShip::draw() {

	attron(COLOR_PAIR(1));
	AGameEntity::draw();
	attroff(COLOR_PAIR(1));
}
