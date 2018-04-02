#include "Bullet.hpp"

Bullet::Bullet() {
}

Bullet::Bullet(int row, int col) : AGameEntity(row, col + 1) {

	this->hp = 1;
	this->point = 0;
	this->_display = '-';
}

Bullet::~Bullet(void) {

	return ;
}

Bullet::Bullet(const Bullet &cpy) {

	*this = cpy;
	return ;
}

Bullet& Bullet::operator=(const Bullet &cpy) {

	(void)cpy;
	return *this;
}

AGameEntity *	Bullet::clone() const {
	return (new Bullet(*this));
}

void 			Bullet::border_colision() {

	if (this->col < 2 || this->col > COLS - 3 || this->row < 3 || this->row > LINES - 4) {
		this->hp = 0;
	}
}

void			Bullet::move(int frame) {

	// if (!(frame % 2))
	(void)frame;
	this->col++;
}

void			Bullet::spawn(int frames) {
	(void)frames;
}
